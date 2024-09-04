// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AGENCY20221216_H_
#define ALIBABACLOUD_AGENCY20221216_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Agency20221216 {
class CancelSubscriptionBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> subscribeType{};

  CancelSubscriptionBillRequest() {}

  explicit CancelSubscriptionBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscribeType) {
      res["SubscribeType"] = boost::any(*subscribeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscribeType") != m.end() && !m["SubscribeType"].empty()) {
      subscribeType = make_shared<string>(boost::any_cast<string>(m["SubscribeType"]));
    }
  }


  virtual ~CancelSubscriptionBillRequest() = default;
};
class CancelSubscriptionBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelSubscriptionBillResponseBody() {}

  explicit CancelSubscriptionBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~CancelSubscriptionBillResponseBody() = default;
};
class CancelSubscriptionBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelSubscriptionBillResponseBody> body{};

  CancelSubscriptionBillResponse() {}

  explicit CancelSubscriptionBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelSubscriptionBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelSubscriptionBillResponseBody>(model1);
      }
    }
  }


  virtual ~CancelSubscriptionBillResponse() = default;
};
class CreateCouponTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> applicableProducts{};
  shared_ptr<string> costBearer{};
  shared_ptr<string> couponDescription{};
  shared_ptr<string> expireddate{};
  shared_ptr<string> limitPerPerson{};
  shared_ptr<vector<string>> productType{};
  shared_ptr<string> purchaseType{};
  shared_ptr<string> reasonForApplication{};
  shared_ptr<string> templateName{};
  shared_ptr<string> vailddate{};
  shared_ptr<string> vaildperioddays{};
  shared_ptr<string> validUntil{};
  shared_ptr<string> value{};

  CreateCouponTemplateRequest() {}

  explicit CreateCouponTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (applicableProducts) {
      res["ApplicableProducts"] = boost::any(*applicableProducts);
    }
    if (costBearer) {
      res["CostBearer"] = boost::any(*costBearer);
    }
    if (couponDescription) {
      res["CouponDescription"] = boost::any(*couponDescription);
    }
    if (expireddate) {
      res["Expireddate"] = boost::any(*expireddate);
    }
    if (limitPerPerson) {
      res["LimitPerPerson"] = boost::any(*limitPerPerson);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (purchaseType) {
      res["PurchaseType"] = boost::any(*purchaseType);
    }
    if (reasonForApplication) {
      res["ReasonForApplication"] = boost::any(*reasonForApplication);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (vailddate) {
      res["Vailddate"] = boost::any(*vailddate);
    }
    if (vaildperioddays) {
      res["Vaildperioddays"] = boost::any(*vaildperioddays);
    }
    if (validUntil) {
      res["ValidUntil"] = boost::any(*validUntil);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ApplicableProducts") != m.end() && !m["ApplicableProducts"].empty()) {
      applicableProducts = make_shared<string>(boost::any_cast<string>(m["ApplicableProducts"]));
    }
    if (m.find("CostBearer") != m.end() && !m["CostBearer"].empty()) {
      costBearer = make_shared<string>(boost::any_cast<string>(m["CostBearer"]));
    }
    if (m.find("CouponDescription") != m.end() && !m["CouponDescription"].empty()) {
      couponDescription = make_shared<string>(boost::any_cast<string>(m["CouponDescription"]));
    }
    if (m.find("Expireddate") != m.end() && !m["Expireddate"].empty()) {
      expireddate = make_shared<string>(boost::any_cast<string>(m["Expireddate"]));
    }
    if (m.find("LimitPerPerson") != m.end() && !m["LimitPerPerson"].empty()) {
      limitPerPerson = make_shared<string>(boost::any_cast<string>(m["LimitPerPerson"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProductType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProductType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PurchaseType") != m.end() && !m["PurchaseType"].empty()) {
      purchaseType = make_shared<string>(boost::any_cast<string>(m["PurchaseType"]));
    }
    if (m.find("ReasonForApplication") != m.end() && !m["ReasonForApplication"].empty()) {
      reasonForApplication = make_shared<string>(boost::any_cast<string>(m["ReasonForApplication"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Vailddate") != m.end() && !m["Vailddate"].empty()) {
      vailddate = make_shared<string>(boost::any_cast<string>(m["Vailddate"]));
    }
    if (m.find("Vaildperioddays") != m.end() && !m["Vaildperioddays"].empty()) {
      vaildperioddays = make_shared<string>(boost::any_cast<string>(m["Vaildperioddays"]));
    }
    if (m.find("ValidUntil") != m.end() && !m["ValidUntil"].empty()) {
      validUntil = make_shared<string>(boost::any_cast<string>(m["ValidUntil"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateCouponTemplateRequest() = default;
};
class CreateCouponTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> applicableProducts{};
  shared_ptr<string> costBearer{};
  shared_ptr<string> couponDescription{};
  shared_ptr<string> expireddate{};
  shared_ptr<string> limitPerPerson{};
  shared_ptr<string> productTypeShrink{};
  shared_ptr<string> purchaseType{};
  shared_ptr<string> reasonForApplication{};
  shared_ptr<string> templateName{};
  shared_ptr<string> vailddate{};
  shared_ptr<string> vaildperioddays{};
  shared_ptr<string> validUntil{};
  shared_ptr<string> value{};

  CreateCouponTemplateShrinkRequest() {}

  explicit CreateCouponTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (applicableProducts) {
      res["ApplicableProducts"] = boost::any(*applicableProducts);
    }
    if (costBearer) {
      res["CostBearer"] = boost::any(*costBearer);
    }
    if (couponDescription) {
      res["CouponDescription"] = boost::any(*couponDescription);
    }
    if (expireddate) {
      res["Expireddate"] = boost::any(*expireddate);
    }
    if (limitPerPerson) {
      res["LimitPerPerson"] = boost::any(*limitPerPerson);
    }
    if (productTypeShrink) {
      res["ProductType"] = boost::any(*productTypeShrink);
    }
    if (purchaseType) {
      res["PurchaseType"] = boost::any(*purchaseType);
    }
    if (reasonForApplication) {
      res["ReasonForApplication"] = boost::any(*reasonForApplication);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (vailddate) {
      res["Vailddate"] = boost::any(*vailddate);
    }
    if (vaildperioddays) {
      res["Vaildperioddays"] = boost::any(*vaildperioddays);
    }
    if (validUntil) {
      res["ValidUntil"] = boost::any(*validUntil);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ApplicableProducts") != m.end() && !m["ApplicableProducts"].empty()) {
      applicableProducts = make_shared<string>(boost::any_cast<string>(m["ApplicableProducts"]));
    }
    if (m.find("CostBearer") != m.end() && !m["CostBearer"].empty()) {
      costBearer = make_shared<string>(boost::any_cast<string>(m["CostBearer"]));
    }
    if (m.find("CouponDescription") != m.end() && !m["CouponDescription"].empty()) {
      couponDescription = make_shared<string>(boost::any_cast<string>(m["CouponDescription"]));
    }
    if (m.find("Expireddate") != m.end() && !m["Expireddate"].empty()) {
      expireddate = make_shared<string>(boost::any_cast<string>(m["Expireddate"]));
    }
    if (m.find("LimitPerPerson") != m.end() && !m["LimitPerPerson"].empty()) {
      limitPerPerson = make_shared<string>(boost::any_cast<string>(m["LimitPerPerson"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productTypeShrink = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("PurchaseType") != m.end() && !m["PurchaseType"].empty()) {
      purchaseType = make_shared<string>(boost::any_cast<string>(m["PurchaseType"]));
    }
    if (m.find("ReasonForApplication") != m.end() && !m["ReasonForApplication"].empty()) {
      reasonForApplication = make_shared<string>(boost::any_cast<string>(m["ReasonForApplication"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Vailddate") != m.end() && !m["Vailddate"].empty()) {
      vailddate = make_shared<string>(boost::any_cast<string>(m["Vailddate"]));
    }
    if (m.find("Vaildperioddays") != m.end() && !m["Vaildperioddays"].empty()) {
      vaildperioddays = make_shared<string>(boost::any_cast<string>(m["Vaildperioddays"]));
    }
    if (m.find("ValidUntil") != m.end() && !m["ValidUntil"].empty()) {
      validUntil = make_shared<string>(boost::any_cast<string>(m["ValidUntil"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateCouponTemplateShrinkRequest() = default;
};
class CreateCouponTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> applicableProducts{};
  shared_ptr<string> costBearer{};
  shared_ptr<long> couponTemplateID{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireddate{};
  shared_ptr<vector<string>> productType{};
  shared_ptr<string> status{};
  shared_ptr<string> templateName{};
  shared_ptr<string> vailddate{};
  shared_ptr<string> vaildperioddays{};
  shared_ptr<string> validUntil{};
  shared_ptr<string> value{};

  CreateCouponTemplateResponseBodyData() {}

  explicit CreateCouponTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicableProducts) {
      res["ApplicableProducts"] = boost::any(*applicableProducts);
    }
    if (costBearer) {
      res["CostBearer"] = boost::any(*costBearer);
    }
    if (couponTemplateID) {
      res["CouponTemplateID"] = boost::any(*couponTemplateID);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireddate) {
      res["Expireddate"] = boost::any(*expireddate);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (vailddate) {
      res["Vailddate"] = boost::any(*vailddate);
    }
    if (vaildperioddays) {
      res["Vaildperioddays"] = boost::any(*vaildperioddays);
    }
    if (validUntil) {
      res["ValidUntil"] = boost::any(*validUntil);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicableProducts") != m.end() && !m["ApplicableProducts"].empty()) {
      applicableProducts = make_shared<string>(boost::any_cast<string>(m["ApplicableProducts"]));
    }
    if (m.find("CostBearer") != m.end() && !m["CostBearer"].empty()) {
      costBearer = make_shared<string>(boost::any_cast<string>(m["CostBearer"]));
    }
    if (m.find("CouponTemplateID") != m.end() && !m["CouponTemplateID"].empty()) {
      couponTemplateID = make_shared<long>(boost::any_cast<long>(m["CouponTemplateID"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Expireddate") != m.end() && !m["Expireddate"].empty()) {
      expireddate = make_shared<string>(boost::any_cast<string>(m["Expireddate"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProductType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProductType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Vailddate") != m.end() && !m["Vailddate"].empty()) {
      vailddate = make_shared<string>(boost::any_cast<string>(m["Vailddate"]));
    }
    if (m.find("Vaildperioddays") != m.end() && !m["Vaildperioddays"].empty()) {
      vaildperioddays = make_shared<string>(boost::any_cast<string>(m["Vaildperioddays"]));
    }
    if (m.find("ValidUntil") != m.end() && !m["ValidUntil"].empty()) {
      validUntil = make_shared<string>(boost::any_cast<string>(m["ValidUntil"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateCouponTemplateResponseBodyData() = default;
};
class CreateCouponTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateCouponTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCouponTemplateResponseBody() {}

  explicit CreateCouponTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCouponTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateCouponTemplateResponseBodyData>(model1);
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


  virtual ~CreateCouponTemplateResponseBody() = default;
};
class CreateCouponTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCouponTemplateResponseBody> body{};

  CreateCouponTemplateResponse() {}

  explicit CreateCouponTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCouponTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCouponTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCouponTemplateResponse() = default;
};
class CreateCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<string> customerName{};
  shared_ptr<string> customerSource{};
  shared_ptr<string> customerSubTrade{};
  shared_ptr<string> customerTrade{};
  shared_ptr<string> nation{};

  CreateCustomerRequest() {}

  explicit CreateCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerName) {
      res["CustomerName"] = boost::any(*customerName);
    }
    if (customerSource) {
      res["CustomerSource"] = boost::any(*customerSource);
    }
    if (customerSubTrade) {
      res["CustomerSubTrade"] = boost::any(*customerSubTrade);
    }
    if (customerTrade) {
      res["CustomerTrade"] = boost::any(*customerTrade);
    }
    if (nation) {
      res["Nation"] = boost::any(*nation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerName") != m.end() && !m["CustomerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["CustomerName"]));
    }
    if (m.find("CustomerSource") != m.end() && !m["CustomerSource"].empty()) {
      customerSource = make_shared<string>(boost::any_cast<string>(m["CustomerSource"]));
    }
    if (m.find("CustomerSubTrade") != m.end() && !m["CustomerSubTrade"].empty()) {
      customerSubTrade = make_shared<string>(boost::any_cast<string>(m["CustomerSubTrade"]));
    }
    if (m.find("CustomerTrade") != m.end() && !m["CustomerTrade"].empty()) {
      customerTrade = make_shared<string>(boost::any_cast<string>(m["CustomerTrade"]));
    }
    if (m.find("Nation") != m.end() && !m["Nation"].empty()) {
      nation = make_shared<string>(boost::any_cast<string>(m["Nation"]));
    }
  }


  virtual ~CreateCustomerRequest() = default;
};
class CreateCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCustomerResponseBody() {}

  explicit CreateCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~CreateCustomerResponseBody() = default;
};
class CreateCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCustomerResponseBody> body{};

  CreateCustomerResponse() {}

  explicit CreateCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomerResponse() = default;
};
class CustomerQuotaRecordListRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<long> endUserPk{};
  shared_ptr<string> language{};
  shared_ptr<string> operationType{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startDate{};

  CustomerQuotaRecordListRequest() {}

  explicit CustomerQuotaRecordListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (endUserPk) {
      res["EndUserPk"] = boost::any(*endUserPk);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("EndUserPk") != m.end() && !m["EndUserPk"].empty()) {
      endUserPk = make_shared<long>(boost::any_cast<long>(m["EndUserPk"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~CustomerQuotaRecordListRequest() = default;
};
class CustomerQuotaRecordListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> operationSubmitType{};
  shared_ptr<string> operationTime{};
  shared_ptr<string> operationTypeCode{};
  shared_ptr<string> operationTypeDesc{};
  shared_ptr<string> operationUid{};
  shared_ptr<string> updateAfterAmount{};
  shared_ptr<string> updateAmount{};
  shared_ptr<string> updateBeforeAmount{};

  CustomerQuotaRecordListResponseBodyData() {}

  explicit CustomerQuotaRecordListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationSubmitType) {
      res["OperationSubmitType"] = boost::any(*operationSubmitType);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (operationTypeCode) {
      res["OperationTypeCode"] = boost::any(*operationTypeCode);
    }
    if (operationTypeDesc) {
      res["OperationTypeDesc"] = boost::any(*operationTypeDesc);
    }
    if (operationUid) {
      res["OperationUid"] = boost::any(*operationUid);
    }
    if (updateAfterAmount) {
      res["UpdateAfterAmount"] = boost::any(*updateAfterAmount);
    }
    if (updateAmount) {
      res["UpdateAmount"] = boost::any(*updateAmount);
    }
    if (updateBeforeAmount) {
      res["UpdateBeforeAmount"] = boost::any(*updateBeforeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationSubmitType") != m.end() && !m["OperationSubmitType"].empty()) {
      operationSubmitType = make_shared<string>(boost::any_cast<string>(m["OperationSubmitType"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<string>(boost::any_cast<string>(m["OperationTime"]));
    }
    if (m.find("OperationTypeCode") != m.end() && !m["OperationTypeCode"].empty()) {
      operationTypeCode = make_shared<string>(boost::any_cast<string>(m["OperationTypeCode"]));
    }
    if (m.find("OperationTypeDesc") != m.end() && !m["OperationTypeDesc"].empty()) {
      operationTypeDesc = make_shared<string>(boost::any_cast<string>(m["OperationTypeDesc"]));
    }
    if (m.find("OperationUid") != m.end() && !m["OperationUid"].empty()) {
      operationUid = make_shared<string>(boost::any_cast<string>(m["OperationUid"]));
    }
    if (m.find("UpdateAfterAmount") != m.end() && !m["UpdateAfterAmount"].empty()) {
      updateAfterAmount = make_shared<string>(boost::any_cast<string>(m["UpdateAfterAmount"]));
    }
    if (m.find("UpdateAmount") != m.end() && !m["UpdateAmount"].empty()) {
      updateAmount = make_shared<string>(boost::any_cast<string>(m["UpdateAmount"]));
    }
    if (m.find("UpdateBeforeAmount") != m.end() && !m["UpdateBeforeAmount"].empty()) {
      updateBeforeAmount = make_shared<string>(boost::any_cast<string>(m["UpdateBeforeAmount"]));
    }
  }


  virtual ~CustomerQuotaRecordListResponseBodyData() = default;
};
class CustomerQuotaRecordListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<CustomerQuotaRecordListResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  CustomerQuotaRecordListResponseBody() {}

  explicit CustomerQuotaRecordListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<CustomerQuotaRecordListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CustomerQuotaRecordListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<CustomerQuotaRecordListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~CustomerQuotaRecordListResponseBody() = default;
};
class CustomerQuotaRecordListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CustomerQuotaRecordListResponseBody> body{};

  CustomerQuotaRecordListResponse() {}

  explicit CustomerQuotaRecordListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CustomerQuotaRecordListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CustomerQuotaRecordListResponseBody>(model1);
      }
    }
  }


  virtual ~CustomerQuotaRecordListResponse() = default;
};
class DeductOutstandingBalanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deductAmount{};
  shared_ptr<long> uid{};

  DeductOutstandingBalanceRequest() {}

  explicit DeductOutstandingBalanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deductAmount) {
      res["DeductAmount"] = boost::any(*deductAmount);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeductAmount") != m.end() && !m["DeductAmount"].empty()) {
      deductAmount = make_shared<string>(boost::any_cast<string>(m["DeductAmount"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~DeductOutstandingBalanceRequest() = default;
};
class DeductOutstandingBalanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeductOutstandingBalanceResponseBody() {}

  explicit DeductOutstandingBalanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~DeductOutstandingBalanceResponseBody() = default;
};
class DeductOutstandingBalanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeductOutstandingBalanceResponseBody> body{};

  DeductOutstandingBalanceResponse() {}

  explicit DeductOutstandingBalanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeductOutstandingBalanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeductOutstandingBalanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeductOutstandingBalanceResponse() = default;
};
class EditEndUserStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> creditStatus{};
  shared_ptr<long> uid{};

  EditEndUserStatusRequest() {}

  explicit EditEndUserStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creditStatus) {
      res["CreditStatus"] = boost::any(*creditStatus);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreditStatus") != m.end() && !m["CreditStatus"].empty()) {
      creditStatus = make_shared<string>(boost::any_cast<string>(m["CreditStatus"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~EditEndUserStatusRequest() = default;
};
class EditEndUserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  EditEndUserStatusResponseBody() {}

  explicit EditEndUserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EditEndUserStatusResponseBody() = default;
};
class EditEndUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditEndUserStatusResponseBody> body{};

  EditEndUserStatusResponse() {}

  explicit EditEndUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditEndUserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditEndUserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~EditEndUserStatusResponse() = default;
};
class EditNewBuyStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> newBuyStatus{};
  shared_ptr<long> uid{};

  EditNewBuyStatusRequest() {}

  explicit EditNewBuyStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newBuyStatus) {
      res["NewBuyStatus"] = boost::any(*newBuyStatus);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewBuyStatus") != m.end() && !m["NewBuyStatus"].empty()) {
      newBuyStatus = make_shared<string>(boost::any_cast<string>(m["NewBuyStatus"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~EditNewBuyStatusRequest() = default;
};
class EditNewBuyStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  EditNewBuyStatusResponseBody() {}

  explicit EditNewBuyStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EditNewBuyStatusResponseBody() = default;
};
class EditNewBuyStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditNewBuyStatusResponseBody> body{};

  EditNewBuyStatusResponse() {}

  explicit EditNewBuyStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditNewBuyStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditNewBuyStatusResponseBody>(model1);
      }
    }
  }


  virtual ~EditNewBuyStatusResponse() = default;
};
class EditZeroCreditShutdownRequest : public Darabonba::Model {
public:
  shared_ptr<string> shutdownPolicy{};
  shared_ptr<long> uid{};

  EditZeroCreditShutdownRequest() {}

  explicit EditZeroCreditShutdownRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shutdownPolicy) {
      res["ShutdownPolicy"] = boost::any(*shutdownPolicy);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShutdownPolicy") != m.end() && !m["ShutdownPolicy"].empty()) {
      shutdownPolicy = make_shared<string>(boost::any_cast<string>(m["ShutdownPolicy"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~EditZeroCreditShutdownRequest() = default;
};
class EditZeroCreditShutdownResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  EditZeroCreditShutdownResponseBody() {}

  explicit EditZeroCreditShutdownResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EditZeroCreditShutdownResponseBody() = default;
};
class EditZeroCreditShutdownResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditZeroCreditShutdownResponseBody> body{};

  EditZeroCreditShutdownResponse() {}

  explicit EditZeroCreditShutdownResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditZeroCreditShutdownResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditZeroCreditShutdownResponseBody>(model1);
      }
    }
  }


  virtual ~EditZeroCreditShutdownResponse() = default;
};
class ExportCustomerQuotaRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<long> endUserPk{};
  shared_ptr<string> language{};
  shared_ptr<string> operationType{};
  shared_ptr<string> startDate{};

  ExportCustomerQuotaRecordRequest() {}

  explicit ExportCustomerQuotaRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (endUserPk) {
      res["EndUserPk"] = boost::any(*endUserPk);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("EndUserPk") != m.end() && !m["EndUserPk"].empty()) {
      endUserPk = make_shared<long>(boost::any_cast<long>(m["EndUserPk"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportCustomerQuotaRecordRequest() = default;
};
class ExportCustomerQuotaRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<long> id{};

  ExportCustomerQuotaRecordResponseBodyData() {}

  explicit ExportCustomerQuotaRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["Cost"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ExportCustomerQuotaRecordResponseBodyData() = default;
};
class ExportCustomerQuotaRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ExportCustomerQuotaRecordResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  ExportCustomerQuotaRecordResponseBody() {}

  explicit ExportCustomerQuotaRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExportCustomerQuotaRecordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExportCustomerQuotaRecordResponseBodyData>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportCustomerQuotaRecordResponseBody() = default;
};
class ExportCustomerQuotaRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportCustomerQuotaRecordResponseBody> body{};

  ExportCustomerQuotaRecordResponse() {}

  explicit ExportCustomerQuotaRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportCustomerQuotaRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportCustomerQuotaRecordResponseBody>(model1);
      }
    }
  }


  virtual ~ExportCustomerQuotaRecordResponse() = default;
};
class GetAccountInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> uid{};
  shared_ptr<string> userType{};

  GetAccountInfoRequest() {}

  explicit GetAccountInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetAccountInfoRequest() = default;
};
class GetAccountInfoResponseBodyAccountInfoListAccountInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountNickname{};
  shared_ptr<string> aliyunId{};
  shared_ptr<string> associationSuccessTime{};
  shared_ptr<long> cid{};
  shared_ptr<string> customerBd{};
  shared_ptr<string> delayAmount{};
  shared_ptr<string> delayStatus{};
  shared_ptr<string> email{};
  shared_ptr<string> mobile{};
  shared_ptr<string> newBuyStatus{};
  shared_ptr<string> remark{};
  shared_ptr<long> subAccountType{};
  shared_ptr<long> uid{};

  GetAccountInfoResponseBodyAccountInfoListAccountInfo() {}

  explicit GetAccountInfoResponseBodyAccountInfoListAccountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNickname) {
      res["AccountNickname"] = boost::any(*accountNickname);
    }
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (associationSuccessTime) {
      res["AssociationSuccessTime"] = boost::any(*associationSuccessTime);
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (customerBd) {
      res["CustomerBd"] = boost::any(*customerBd);
    }
    if (delayAmount) {
      res["DelayAmount"] = boost::any(*delayAmount);
    }
    if (delayStatus) {
      res["DelayStatus"] = boost::any(*delayStatus);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (newBuyStatus) {
      res["NewBuyStatus"] = boost::any(*newBuyStatus);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (subAccountType) {
      res["SubAccountType"] = boost::any(*subAccountType);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNickname") != m.end() && !m["AccountNickname"].empty()) {
      accountNickname = make_shared<string>(boost::any_cast<string>(m["AccountNickname"]));
    }
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("AssociationSuccessTime") != m.end() && !m["AssociationSuccessTime"].empty()) {
      associationSuccessTime = make_shared<string>(boost::any_cast<string>(m["AssociationSuccessTime"]));
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<long>(boost::any_cast<long>(m["Cid"]));
    }
    if (m.find("CustomerBd") != m.end() && !m["CustomerBd"].empty()) {
      customerBd = make_shared<string>(boost::any_cast<string>(m["CustomerBd"]));
    }
    if (m.find("DelayAmount") != m.end() && !m["DelayAmount"].empty()) {
      delayAmount = make_shared<string>(boost::any_cast<string>(m["DelayAmount"]));
    }
    if (m.find("DelayStatus") != m.end() && !m["DelayStatus"].empty()) {
      delayStatus = make_shared<string>(boost::any_cast<string>(m["DelayStatus"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("NewBuyStatus") != m.end() && !m["NewBuyStatus"].empty()) {
      newBuyStatus = make_shared<string>(boost::any_cast<string>(m["NewBuyStatus"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SubAccountType") != m.end() && !m["SubAccountType"].empty()) {
      subAccountType = make_shared<long>(boost::any_cast<long>(m["SubAccountType"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~GetAccountInfoResponseBodyAccountInfoListAccountInfo() = default;
};
class GetAccountInfoResponseBodyAccountInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetAccountInfoResponseBodyAccountInfoListAccountInfo>> accountInfo{};

  GetAccountInfoResponseBodyAccountInfoList() {}

  explicit GetAccountInfoResponseBodyAccountInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfo) {
      vector<boost::any> temp1;
      for(auto item1:*accountInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountInfo") != m.end() && !m["AccountInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountInfo"].type()) {
        vector<GetAccountInfoResponseBodyAccountInfoListAccountInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccountInfoResponseBodyAccountInfoListAccountInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountInfo = make_shared<vector<GetAccountInfoResponseBodyAccountInfoListAccountInfo>>(expect1);
      }
    }
  }


  virtual ~GetAccountInfoResponseBodyAccountInfoList() = default;
};
class GetAccountInfoResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  GetAccountInfoResponseBodyPageInfo() {}

  explicit GetAccountInfoResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetAccountInfoResponseBodyPageInfo() = default;
};
class GetAccountInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountInfoResponseBodyAccountInfoList> accountInfoList{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetAccountInfoResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAccountInfoResponseBody() {}

  explicit GetAccountInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfoList) {
      res["AccountInfoList"] = accountInfoList ? boost::any(accountInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccountInfoList") != m.end() && !m["AccountInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountInfoList"].type()) {
        GetAccountInfoResponseBodyAccountInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountInfoList"]));
        accountInfoList = make_shared<GetAccountInfoResponseBodyAccountInfoList>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetAccountInfoResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetAccountInfoResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAccountInfoResponseBody() = default;
};
class GetAccountInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountInfoResponseBody> body{};

  GetAccountInfoResponse() {}

  explicit GetAccountInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountInfoResponse() = default;
};
class GetCoupondeductProductCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  GetCoupondeductProductCodeRequest() {}

  explicit GetCoupondeductProductCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetCoupondeductProductCodeRequest() = default;
};
class GetCoupondeductProductCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<boost::any> productType{};

  GetCoupondeductProductCodeResponseBodyData() {}

  explicit GetCoupondeductProductCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<boost::any>(boost::any_cast<boost::any>(m["ProductType"]));
    }
  }


  virtual ~GetCoupondeductProductCodeResponseBodyData() = default;
};
class GetCoupondeductProductCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetCoupondeductProductCodeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCoupondeductProductCodeResponseBody() {}

  explicit GetCoupondeductProductCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetCoupondeductProductCodeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCoupondeductProductCodeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetCoupondeductProductCodeResponseBodyData>>(expect1);
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


  virtual ~GetCoupondeductProductCodeResponseBody() = default;
};
class GetCoupondeductProductCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCoupondeductProductCodeResponseBody> body{};

  GetCoupondeductProductCodeResponse() {}

  explicit GetCoupondeductProductCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCoupondeductProductCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCoupondeductProductCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetCoupondeductProductCodeResponse() = default;
};
class GetCreditInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> uid{};

  GetCreditInfoRequest() {}

  explicit GetCreditInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~GetCreditInfoRequest() = default;
};
class GetCreditInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> alarmThreshold{};
  shared_ptr<string> availableCredit{};
  shared_ptr<string> consumedUndeductedValue{};
  shared_ptr<string> creditLine{};
  shared_ptr<string> outstandingBalance{};
  shared_ptr<string> zeroCreditShutdownPolicy{};
  shared_ptr<string> newBuyStatus{};

  GetCreditInfoResponseBodyData() {}

  explicit GetCreditInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (alarmThreshold) {
      res["AlarmThreshold"] = boost::any(*alarmThreshold);
    }
    if (availableCredit) {
      res["AvailableCredit"] = boost::any(*availableCredit);
    }
    if (consumedUndeductedValue) {
      res["ConsumedUndeductedValue"] = boost::any(*consumedUndeductedValue);
    }
    if (creditLine) {
      res["CreditLine"] = boost::any(*creditLine);
    }
    if (outstandingBalance) {
      res["OutstandingBalance"] = boost::any(*outstandingBalance);
    }
    if (zeroCreditShutdownPolicy) {
      res["ZeroCreditShutdownPolicy"] = boost::any(*zeroCreditShutdownPolicy);
    }
    if (newBuyStatus) {
      res["newBuyStatus"] = boost::any(*newBuyStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("AlarmThreshold") != m.end() && !m["AlarmThreshold"].empty()) {
      alarmThreshold = make_shared<string>(boost::any_cast<string>(m["AlarmThreshold"]));
    }
    if (m.find("AvailableCredit") != m.end() && !m["AvailableCredit"].empty()) {
      availableCredit = make_shared<string>(boost::any_cast<string>(m["AvailableCredit"]));
    }
    if (m.find("ConsumedUndeductedValue") != m.end() && !m["ConsumedUndeductedValue"].empty()) {
      consumedUndeductedValue = make_shared<string>(boost::any_cast<string>(m["ConsumedUndeductedValue"]));
    }
    if (m.find("CreditLine") != m.end() && !m["CreditLine"].empty()) {
      creditLine = make_shared<string>(boost::any_cast<string>(m["CreditLine"]));
    }
    if (m.find("OutstandingBalance") != m.end() && !m["OutstandingBalance"].empty()) {
      outstandingBalance = make_shared<string>(boost::any_cast<string>(m["OutstandingBalance"]));
    }
    if (m.find("ZeroCreditShutdownPolicy") != m.end() && !m["ZeroCreditShutdownPolicy"].empty()) {
      zeroCreditShutdownPolicy = make_shared<string>(boost::any_cast<string>(m["ZeroCreditShutdownPolicy"]));
    }
    if (m.find("newBuyStatus") != m.end() && !m["newBuyStatus"].empty()) {
      newBuyStatus = make_shared<string>(boost::any_cast<string>(m["newBuyStatus"]));
    }
  }


  virtual ~GetCreditInfoResponseBodyData() = default;
};
class GetCreditInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCreditInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCreditInfoResponseBody() {}

  explicit GetCreditInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCreditInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCreditInfoResponseBodyData>(model1);
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


  virtual ~GetCreditInfoResponseBody() = default;
};
class GetCreditInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCreditInfoResponseBody> body{};

  GetCreditInfoResponse() {}

  explicit GetCreditInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCreditInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCreditInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetCreditInfoResponse() = default;
};
class GetCustomerOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<string> customerAccount{};
  shared_ptr<string> customerManager{};
  shared_ptr<long> customerUid{};
  shared_ptr<string> endDate{};
  shared_ptr<long> orderId{};
  shared_ptr<long> orderSource{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> startDate{};
  shared_ptr<long> timeType{};

  GetCustomerOrdersRequest() {}

  explicit GetCustomerOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerAccount) {
      res["CustomerAccount"] = boost::any(*customerAccount);
    }
    if (customerManager) {
      res["CustomerManager"] = boost::any(*customerManager);
    }
    if (customerUid) {
      res["CustomerUid"] = boost::any(*customerUid);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderSource) {
      res["OrderSource"] = boost::any(*orderSource);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (timeType) {
      res["TimeType"] = boost::any(*timeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerAccount") != m.end() && !m["CustomerAccount"].empty()) {
      customerAccount = make_shared<string>(boost::any_cast<string>(m["CustomerAccount"]));
    }
    if (m.find("CustomerManager") != m.end() && !m["CustomerManager"].empty()) {
      customerManager = make_shared<string>(boost::any_cast<string>(m["CustomerManager"]));
    }
    if (m.find("CustomerUid") != m.end() && !m["CustomerUid"].empty()) {
      customerUid = make_shared<long>(boost::any_cast<long>(m["CustomerUid"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderSource") != m.end() && !m["OrderSource"].empty()) {
      orderSource = make_shared<long>(boost::any_cast<long>(m["OrderSource"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TimeType") != m.end() && !m["TimeType"].empty()) {
      timeType = make_shared<long>(boost::any_cast<long>(m["TimeType"]));
    }
  }


  virtual ~GetCustomerOrdersRequest() = default;
};
class GetCustomerOrdersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> customerAccount{};
  shared_ptr<string> customerManager{};
  shared_ptr<long> customerNo{};
  shared_ptr<long> orderId{};
  shared_ptr<string> orderSource{};
  shared_ptr<long> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<double> originalCost{};
  shared_ptr<string> paymentMethod{};
  shared_ptr<string> paymentTime{};
  shared_ptr<double> pretaxCost{};
  shared_ptr<string> productDetail{};
  shared_ptr<string> productType{};
  shared_ptr<string> timeToOrder{};

  GetCustomerOrdersResponseBodyData() {}

  explicit GetCustomerOrdersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerAccount) {
      res["CustomerAccount"] = boost::any(*customerAccount);
    }
    if (customerManager) {
      res["CustomerManager"] = boost::any(*customerManager);
    }
    if (customerNo) {
      res["CustomerNo"] = boost::any(*customerNo);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderSource) {
      res["OrderSource"] = boost::any(*orderSource);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (originalCost) {
      res["OriginalCost"] = boost::any(*originalCost);
    }
    if (paymentMethod) {
      res["PaymentMethod"] = boost::any(*paymentMethod);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (pretaxCost) {
      res["PretaxCost"] = boost::any(*pretaxCost);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (timeToOrder) {
      res["TimeToOrder"] = boost::any(*timeToOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerAccount") != m.end() && !m["CustomerAccount"].empty()) {
      customerAccount = make_shared<string>(boost::any_cast<string>(m["CustomerAccount"]));
    }
    if (m.find("CustomerManager") != m.end() && !m["CustomerManager"].empty()) {
      customerManager = make_shared<string>(boost::any_cast<string>(m["CustomerManager"]));
    }
    if (m.find("CustomerNo") != m.end() && !m["CustomerNo"].empty()) {
      customerNo = make_shared<long>(boost::any_cast<long>(m["CustomerNo"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderSource") != m.end() && !m["OrderSource"].empty()) {
      orderSource = make_shared<string>(boost::any_cast<string>(m["OrderSource"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<long>(boost::any_cast<long>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OriginalCost") != m.end() && !m["OriginalCost"].empty()) {
      originalCost = make_shared<double>(boost::any_cast<double>(m["OriginalCost"]));
    }
    if (m.find("PaymentMethod") != m.end() && !m["PaymentMethod"].empty()) {
      paymentMethod = make_shared<string>(boost::any_cast<string>(m["PaymentMethod"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("PretaxCost") != m.end() && !m["PretaxCost"].empty()) {
      pretaxCost = make_shared<double>(boost::any_cast<double>(m["PretaxCost"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("TimeToOrder") != m.end() && !m["TimeToOrder"].empty()) {
      timeToOrder = make_shared<string>(boost::any_cast<string>(m["TimeToOrder"]));
    }
  }


  virtual ~GetCustomerOrdersResponseBodyData() = default;
};
class GetCustomerOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetCustomerOrdersResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> msg{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  GetCustomerOrdersResponseBody() {}

  explicit GetCustomerOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetCustomerOrdersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCustomerOrdersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetCustomerOrdersResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetCustomerOrdersResponseBody() = default;
};
class GetCustomerOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCustomerOrdersResponseBody> body{};

  GetCustomerOrdersResponse() {}

  explicit GetCustomerOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomerOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomerOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomerOrdersResponse() = default;
};
class GetDailyBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billOwner{};
  shared_ptr<string> billType{};
  shared_ptr<string> date{};

  GetDailyBillRequest() {}

  explicit GetDailyBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billOwner) {
      res["BillOwner"] = boost::any(*billOwner);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillOwner") != m.end() && !m["BillOwner"].empty()) {
      billOwner = make_shared<string>(boost::any_cast<string>(m["BillOwner"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
  }


  virtual ~GetDailyBillRequest() = default;
};
class GetDailyBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billLinkCSV{};
  shared_ptr<string> billLinkXLSX{};
  shared_ptr<string> billOwner{};
  shared_ptr<string> billType{};
  shared_ptr<string> spendingTime{};

  GetDailyBillResponseBodyData() {}

  explicit GetDailyBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billLinkCSV) {
      res["BillLinkCSV"] = boost::any(*billLinkCSV);
    }
    if (billLinkXLSX) {
      res["BillLinkXLSX"] = boost::any(*billLinkXLSX);
    }
    if (billOwner) {
      res["BillOwner"] = boost::any(*billOwner);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (spendingTime) {
      res["SpendingTime"] = boost::any(*spendingTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillLinkCSV") != m.end() && !m["BillLinkCSV"].empty()) {
      billLinkCSV = make_shared<string>(boost::any_cast<string>(m["BillLinkCSV"]));
    }
    if (m.find("BillLinkXLSX") != m.end() && !m["BillLinkXLSX"].empty()) {
      billLinkXLSX = make_shared<string>(boost::any_cast<string>(m["BillLinkXLSX"]));
    }
    if (m.find("BillOwner") != m.end() && !m["BillOwner"].empty()) {
      billOwner = make_shared<string>(boost::any_cast<string>(m["BillOwner"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("SpendingTime") != m.end() && !m["SpendingTime"].empty()) {
      spendingTime = make_shared<string>(boost::any_cast<string>(m["SpendingTime"]));
    }
  }


  virtual ~GetDailyBillResponseBodyData() = default;
};
class GetDailyBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDailyBillResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDailyBillResponseBody() {}

  explicit GetDailyBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDailyBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDailyBillResponseBodyData>(model1);
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


  virtual ~GetDailyBillResponseBody() = default;
};
class GetDailyBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDailyBillResponseBody> body{};

  GetDailyBillResponse() {}

  explicit GetDailyBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDailyBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDailyBillResponseBody>(model1);
      }
    }
  }


  virtual ~GetDailyBillResponse() = default;
};
class GetInviteStatusRequestInviteStatusList : public Darabonba::Model {
public:
  shared_ptr<long> inviteId{};

  GetInviteStatusRequestInviteStatusList() {}

  explicit GetInviteStatusRequestInviteStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inviteId) {
      res["InviteId"] = boost::any(*inviteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InviteId") != m.end() && !m["InviteId"].empty()) {
      inviteId = make_shared<long>(boost::any_cast<long>(m["InviteId"]));
    }
  }


  virtual ~GetInviteStatusRequestInviteStatusList() = default;
};
class GetInviteStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetInviteStatusRequestInviteStatusList>> inviteStatusList{};

  GetInviteStatusRequest() {}

  explicit GetInviteStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inviteStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*inviteStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InviteStatusList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InviteStatusList") != m.end() && !m["InviteStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["InviteStatusList"].type()) {
        vector<GetInviteStatusRequestInviteStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InviteStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInviteStatusRequestInviteStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inviteStatusList = make_shared<vector<GetInviteStatusRequestInviteStatusList>>(expect1);
      }
    }
  }


  virtual ~GetInviteStatusRequest() = default;
};
class GetInviteStatusResponseBodyDataInviteStatusInviteStatusList : public Darabonba::Model {
public:
  shared_ptr<string> associationSuccessTime{};
  shared_ptr<long> cid{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> parentId{};
  shared_ptr<long> status{};
  shared_ptr<string> subAccountType{};
  shared_ptr<long> uid{};

  GetInviteStatusResponseBodyDataInviteStatusInviteStatusList() {}

  explicit GetInviteStatusResponseBodyDataInviteStatusInviteStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationSuccessTime) {
      res["AssociationSuccessTime"] = boost::any(*associationSuccessTime);
    }
    if (cid) {
      res["Cid"] = boost::any(*cid);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subAccountType) {
      res["SubAccountType"] = boost::any(*subAccountType);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationSuccessTime") != m.end() && !m["AssociationSuccessTime"].empty()) {
      associationSuccessTime = make_shared<string>(boost::any_cast<string>(m["AssociationSuccessTime"]));
    }
    if (m.find("Cid") != m.end() && !m["Cid"].empty()) {
      cid = make_shared<long>(boost::any_cast<long>(m["Cid"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubAccountType") != m.end() && !m["SubAccountType"].empty()) {
      subAccountType = make_shared<string>(boost::any_cast<string>(m["SubAccountType"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~GetInviteStatusResponseBodyDataInviteStatusInviteStatusList() = default;
};
class GetInviteStatusResponseBodyDataInviteStatus : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetInviteStatusResponseBodyDataInviteStatusInviteStatusList> inviteStatusList{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  GetInviteStatusResponseBodyDataInviteStatus() {}

  explicit GetInviteStatusResponseBodyDataInviteStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (inviteStatusList) {
      res["InviteStatusList"] = inviteStatusList ? boost::any(inviteStatusList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("InviteStatusList") != m.end() && !m["InviteStatusList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InviteStatusList"].type()) {
        GetInviteStatusResponseBodyDataInviteStatusInviteStatusList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InviteStatusList"]));
        inviteStatusList = make_shared<GetInviteStatusResponseBodyDataInviteStatusInviteStatusList>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInviteStatusResponseBodyDataInviteStatus() = default;
};
class GetInviteStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetInviteStatusResponseBodyDataInviteStatus>> inviteStatus{};

  GetInviteStatusResponseBodyData() {}

  explicit GetInviteStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inviteStatus) {
      vector<boost::any> temp1;
      for(auto item1:*inviteStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InviteStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InviteStatus") != m.end() && !m["InviteStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["InviteStatus"].type()) {
        vector<GetInviteStatusResponseBodyDataInviteStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InviteStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInviteStatusResponseBodyDataInviteStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inviteStatus = make_shared<vector<GetInviteStatusResponseBodyDataInviteStatus>>(expect1);
      }
    }
  }


  virtual ~GetInviteStatusResponseBodyData() = default;
};
class GetInviteStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetInviteStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInviteStatusResponseBody() {}

  explicit GetInviteStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInviteStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetInviteStatusResponseBodyData>(model1);
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


  virtual ~GetInviteStatusResponseBody() = default;
};
class GetInviteStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInviteStatusResponseBody> body{};

  GetInviteStatusResponse() {}

  explicit GetInviteStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInviteStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInviteStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetInviteStatusResponse() = default;
};
class GetMonthlyBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billOwner{};
  shared_ptr<string> billType{};
  shared_ptr<string> month{};

  GetMonthlyBillRequest() {}

  explicit GetMonthlyBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billOwner) {
      res["BillOwner"] = boost::any(*billOwner);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillOwner") != m.end() && !m["BillOwner"].empty()) {
      billOwner = make_shared<string>(boost::any_cast<string>(m["BillOwner"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["Month"]));
    }
  }


  virtual ~GetMonthlyBillRequest() = default;
};
class GetMonthlyBillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> billLinkCSV{};
  shared_ptr<string> billLinkXLSX{};
  shared_ptr<string> billOwner{};
  shared_ptr<string> billType{};
  shared_ptr<string> invoiceLink{};
  shared_ptr<bool> refundInvoiceFlag{};
  shared_ptr<string> refundInvoiceLink{};
  shared_ptr<string> spendingTime{};

  GetMonthlyBillResponseBodyData() {}

  explicit GetMonthlyBillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billLinkCSV) {
      res["BillLinkCSV"] = boost::any(*billLinkCSV);
    }
    if (billLinkXLSX) {
      res["BillLinkXLSX"] = boost::any(*billLinkXLSX);
    }
    if (billOwner) {
      res["BillOwner"] = boost::any(*billOwner);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (invoiceLink) {
      res["InvoiceLink"] = boost::any(*invoiceLink);
    }
    if (refundInvoiceFlag) {
      res["RefundInvoiceFlag"] = boost::any(*refundInvoiceFlag);
    }
    if (refundInvoiceLink) {
      res["RefundInvoiceLink"] = boost::any(*refundInvoiceLink);
    }
    if (spendingTime) {
      res["SpendingTime"] = boost::any(*spendingTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillLinkCSV") != m.end() && !m["BillLinkCSV"].empty()) {
      billLinkCSV = make_shared<string>(boost::any_cast<string>(m["BillLinkCSV"]));
    }
    if (m.find("BillLinkXLSX") != m.end() && !m["BillLinkXLSX"].empty()) {
      billLinkXLSX = make_shared<string>(boost::any_cast<string>(m["BillLinkXLSX"]));
    }
    if (m.find("BillOwner") != m.end() && !m["BillOwner"].empty()) {
      billOwner = make_shared<string>(boost::any_cast<string>(m["BillOwner"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("InvoiceLink") != m.end() && !m["InvoiceLink"].empty()) {
      invoiceLink = make_shared<string>(boost::any_cast<string>(m["InvoiceLink"]));
    }
    if (m.find("RefundInvoiceFlag") != m.end() && !m["RefundInvoiceFlag"].empty()) {
      refundInvoiceFlag = make_shared<bool>(boost::any_cast<bool>(m["RefundInvoiceFlag"]));
    }
    if (m.find("RefundInvoiceLink") != m.end() && !m["RefundInvoiceLink"].empty()) {
      refundInvoiceLink = make_shared<string>(boost::any_cast<string>(m["RefundInvoiceLink"]));
    }
    if (m.find("SpendingTime") != m.end() && !m["SpendingTime"].empty()) {
      spendingTime = make_shared<string>(boost::any_cast<string>(m["SpendingTime"]));
    }
  }


  virtual ~GetMonthlyBillResponseBodyData() = default;
};
class GetMonthlyBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMonthlyBillResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMonthlyBillResponseBody() {}

  explicit GetMonthlyBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMonthlyBillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMonthlyBillResponseBodyData>(model1);
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


  virtual ~GetMonthlyBillResponseBody() = default;
};
class GetMonthlyBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMonthlyBillResponseBody> body{};

  GetMonthlyBillResponse() {}

  explicit GetMonthlyBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMonthlyBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMonthlyBillResponseBody>(model1);
      }
    }
  }


  virtual ~GetMonthlyBillResponse() = default;
};
class GetUnassociatedCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  GetUnassociatedCustomerRequest() {}

  explicit GetUnassociatedCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetUnassociatedCustomerRequest() = default;
};
class GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountNickname{};
  shared_ptr<string> email{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> inviteId{};
  shared_ptr<long> status{};

  GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo() {}

  explicit GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNickname) {
      res["AccountNickname"] = boost::any(*accountNickname);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (inviteId) {
      res["InviteId"] = boost::any(*inviteId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNickname") != m.end() && !m["AccountNickname"].empty()) {
      accountNickname = make_shared<string>(boost::any_cast<string>(m["AccountNickname"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("InviteId") != m.end() && !m["InviteId"].empty()) {
      inviteId = make_shared<long>(boost::any_cast<long>(m["InviteId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo() = default;
};
class GetUnassociatedCustomerResponseBodyInviteInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo>> inviteInfo{};

  GetUnassociatedCustomerResponseBodyInviteInfoList() {}

  explicit GetUnassociatedCustomerResponseBodyInviteInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inviteInfo) {
      vector<boost::any> temp1;
      for(auto item1:*inviteInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InviteInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InviteInfo") != m.end() && !m["InviteInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["InviteInfo"].type()) {
        vector<GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InviteInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inviteInfo = make_shared<vector<GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo>>(expect1);
      }
    }
  }


  virtual ~GetUnassociatedCustomerResponseBodyInviteInfoList() = default;
};
class GetUnassociatedCustomerResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  GetUnassociatedCustomerResponseBodyPageInfo() {}

  explicit GetUnassociatedCustomerResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetUnassociatedCustomerResponseBodyPageInfo() = default;
};
class GetUnassociatedCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetUnassociatedCustomerResponseBodyInviteInfoList> inviteInfoList{};
  shared_ptr<string> message{};
  shared_ptr<GetUnassociatedCustomerResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUnassociatedCustomerResponseBody() {}

  explicit GetUnassociatedCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (inviteInfoList) {
      res["InviteInfoList"] = inviteInfoList ? boost::any(inviteInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("InviteInfoList") != m.end() && !m["InviteInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InviteInfoList"].type()) {
        GetUnassociatedCustomerResponseBodyInviteInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InviteInfoList"]));
        inviteInfoList = make_shared<GetUnassociatedCustomerResponseBodyInviteInfoList>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        GetUnassociatedCustomerResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<GetUnassociatedCustomerResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUnassociatedCustomerResponseBody() = default;
};
class GetUnassociatedCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUnassociatedCustomerResponseBody> body{};

  GetUnassociatedCustomerResponse() {}

  explicit GetUnassociatedCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUnassociatedCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUnassociatedCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~GetUnassociatedCustomerResponse() = default;
};
class InviteSubAccountRequestAccountInfoList : public Darabonba::Model {
public:
  shared_ptr<string> accountNickname{};
  shared_ptr<string> creditLine{};
  shared_ptr<string> customerBd{};
  shared_ptr<string> customerId{};
  shared_ptr<string> emailAddress{};
  shared_ptr<string> newBuyStatus{};
  shared_ptr<string> remark{};
  shared_ptr<string> subAccountType{};
  shared_ptr<string> zeroCreditShutdownPolicy{};

  InviteSubAccountRequestAccountInfoList() {}

  explicit InviteSubAccountRequestAccountInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNickname) {
      res["AccountNickname"] = boost::any(*accountNickname);
    }
    if (creditLine) {
      res["CreditLine"] = boost::any(*creditLine);
    }
    if (customerBd) {
      res["CustomerBd"] = boost::any(*customerBd);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
    }
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    if (newBuyStatus) {
      res["NewBuyStatus"] = boost::any(*newBuyStatus);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (subAccountType) {
      res["SubAccountType"] = boost::any(*subAccountType);
    }
    if (zeroCreditShutdownPolicy) {
      res["ZeroCreditShutdownPolicy"] = boost::any(*zeroCreditShutdownPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNickname") != m.end() && !m["AccountNickname"].empty()) {
      accountNickname = make_shared<string>(boost::any_cast<string>(m["AccountNickname"]));
    }
    if (m.find("CreditLine") != m.end() && !m["CreditLine"].empty()) {
      creditLine = make_shared<string>(boost::any_cast<string>(m["CreditLine"]));
    }
    if (m.find("CustomerBd") != m.end() && !m["CustomerBd"].empty()) {
      customerBd = make_shared<string>(boost::any_cast<string>(m["CustomerBd"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<string>(boost::any_cast<string>(m["CustomerId"]));
    }
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
    if (m.find("NewBuyStatus") != m.end() && !m["NewBuyStatus"].empty()) {
      newBuyStatus = make_shared<string>(boost::any_cast<string>(m["NewBuyStatus"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SubAccountType") != m.end() && !m["SubAccountType"].empty()) {
      subAccountType = make_shared<string>(boost::any_cast<string>(m["SubAccountType"]));
    }
    if (m.find("ZeroCreditShutdownPolicy") != m.end() && !m["ZeroCreditShutdownPolicy"].empty()) {
      zeroCreditShutdownPolicy = make_shared<string>(boost::any_cast<string>(m["ZeroCreditShutdownPolicy"]));
    }
  }


  virtual ~InviteSubAccountRequestAccountInfoList() = default;
};
class InviteSubAccountRequest : public Darabonba::Model {
public:
  shared_ptr<vector<InviteSubAccountRequestAccountInfoList>> accountInfoList{};

  InviteSubAccountRequest() {}

  explicit InviteSubAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*accountInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountInfoList") != m.end() && !m["AccountInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountInfoList"].type()) {
        vector<InviteSubAccountRequestAccountInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InviteSubAccountRequestAccountInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountInfoList = make_shared<vector<InviteSubAccountRequestAccountInfoList>>(expect1);
      }
    }
  }


  virtual ~InviteSubAccountRequest() = default;
};
class InviteSubAccountResponseBodyResultsResultResult : public Darabonba::Model {
public:
  shared_ptr<long> days{};
  shared_ptr<long> inviteId{};
  shared_ptr<string> regUrl{};

  InviteSubAccountResponseBodyResultsResultResult() {}

  explicit InviteSubAccountResponseBodyResultsResultResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (days) {
      res["Days"] = boost::any(*days);
    }
    if (inviteId) {
      res["InviteId"] = boost::any(*inviteId);
    }
    if (regUrl) {
      res["RegUrl"] = boost::any(*regUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Days") != m.end() && !m["Days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["Days"]));
    }
    if (m.find("InviteId") != m.end() && !m["InviteId"].empty()) {
      inviteId = make_shared<long>(boost::any_cast<long>(m["InviteId"]));
    }
    if (m.find("RegUrl") != m.end() && !m["RegUrl"].empty()) {
      regUrl = make_shared<string>(boost::any_cast<string>(m["RegUrl"]));
    }
  }


  virtual ~InviteSubAccountResponseBodyResultsResultResult() = default;
};
class InviteSubAccountResponseBodyResultsResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<InviteSubAccountResponseBodyResultsResultResult> result{};
  shared_ptr<bool> success{};

  InviteSubAccountResponseBodyResultsResult() {}

  explicit InviteSubAccountResponseBodyResultsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        InviteSubAccountResponseBodyResultsResultResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<InviteSubAccountResponseBodyResultsResultResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InviteSubAccountResponseBodyResultsResult() = default;
};
class InviteSubAccountResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<vector<InviteSubAccountResponseBodyResultsResult>> result{};

  InviteSubAccountResponseBodyResults() {}

  explicit InviteSubAccountResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<InviteSubAccountResponseBodyResultsResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InviteSubAccountResponseBodyResultsResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<InviteSubAccountResponseBodyResultsResult>>(expect1);
      }
    }
  }


  virtual ~InviteSubAccountResponseBodyResults() = default;
};
class InviteSubAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InviteSubAccountResponseBodyResults> results{};
  shared_ptr<bool> success{};

  InviteSubAccountResponseBody() {}

  explicit InviteSubAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      res["Results"] = results ? boost::any(results->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(map<string, boost::any>) == m["Results"].type()) {
        InviteSubAccountResponseBodyResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Results"]));
        results = make_shared<InviteSubAccountResponseBodyResults>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InviteSubAccountResponseBody() = default;
};
class InviteSubAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InviteSubAccountResponseBody> body{};

  InviteSubAccountResponse() {}

  explicit InviteSubAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InviteSubAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InviteSubAccountResponseBody>(model1);
      }
    }
  }


  virtual ~InviteSubAccountResponse() = default;
};
class IssueCouponForCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> couponTemplateId{};
  shared_ptr<string> uidlist{};

  IssueCouponForCustomerRequest() {}

  explicit IssueCouponForCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (couponTemplateId) {
      res["CouponTemplateId"] = boost::any(*couponTemplateId);
    }
    if (uidlist) {
      res["Uidlist"] = boost::any(*uidlist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("CouponTemplateId") != m.end() && !m["CouponTemplateId"].empty()) {
      couponTemplateId = make_shared<long>(boost::any_cast<long>(m["CouponTemplateId"]));
    }
    if (m.find("Uidlist") != m.end() && !m["Uidlist"].empty()) {
      uidlist = make_shared<string>(boost::any_cast<string>(m["Uidlist"]));
    }
  }


  virtual ~IssueCouponForCustomerRequest() = default;
};
class IssueCouponForCustomerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> couponTemplateId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> uidlist{};

  IssueCouponForCustomerResponseBodyData() {}

  explicit IssueCouponForCustomerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponTemplateId) {
      res["CouponTemplateId"] = boost::any(*couponTemplateId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (uidlist) {
      res["Uidlist"] = boost::any(*uidlist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponTemplateId") != m.end() && !m["CouponTemplateId"].empty()) {
      couponTemplateId = make_shared<long>(boost::any_cast<long>(m["CouponTemplateId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Uidlist") != m.end() && !m["Uidlist"].empty()) {
      uidlist = make_shared<string>(boost::any_cast<string>(m["Uidlist"]));
    }
  }


  virtual ~IssueCouponForCustomerResponseBodyData() = default;
};
class IssueCouponForCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<IssueCouponForCustomerResponseBodyData> data{};

  IssueCouponForCustomerResponseBody() {}

  explicit IssueCouponForCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        IssueCouponForCustomerResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<IssueCouponForCustomerResponseBodyData>(model1);
      }
    }
  }


  virtual ~IssueCouponForCustomerResponseBody() = default;
};
class IssueCouponForCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IssueCouponForCustomerResponseBody> body{};

  IssueCouponForCustomerResponse() {}

  explicit IssueCouponForCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IssueCouponForCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IssueCouponForCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~IssueCouponForCustomerResponse() = default;
};
class ListCountriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCountriesResponseBody() {}

  explicit ListCountriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
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


  virtual ~ListCountriesResponseBody() = default;
};
class ListCountriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCountriesResponseBody> body{};

  ListCountriesResponse() {}

  explicit ListCountriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCountriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCountriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCountriesResponse() = default;
};
class ListCouponUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<long> couponTemplateId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<long> uid{};

  ListCouponUsageRequest() {}

  explicit ListCouponUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (couponTemplateId) {
      res["CouponTemplateId"] = boost::any(*couponTemplateId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("CouponTemplateId") != m.end() && !m["CouponTemplateId"].empty()) {
      couponTemplateId = make_shared<long>(boost::any_cast<long>(m["CouponTemplateId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~ListCouponUsageRequest() = default;
};
class ListCouponUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<double> amount{};
  shared_ptr<double> balance{};
  shared_ptr<string> couponId{};
  shared_ptr<long> couponTemplateId{};
  shared_ptr<string> effDate{};
  shared_ptr<string> publishDate{};
  shared_ptr<string> status{};
  shared_ptr<long> uid{};

  ListCouponUsageResponseBodyData() {}

  explicit ListCouponUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponTemplateId) {
      res["CouponTemplateId"] = boost::any(*couponTemplateId);
    }
    if (effDate) {
      res["EffDate"] = boost::any(*effDate);
    }
    if (publishDate) {
      res["PublishDate"] = boost::any(*publishDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<double>(boost::any_cast<double>(m["Balance"]));
    }
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("CouponTemplateId") != m.end() && !m["CouponTemplateId"].empty()) {
      couponTemplateId = make_shared<long>(boost::any_cast<long>(m["CouponTemplateId"]));
    }
    if (m.find("EffDate") != m.end() && !m["EffDate"].empty()) {
      effDate = make_shared<string>(boost::any_cast<string>(m["EffDate"]));
    }
    if (m.find("PublishDate") != m.end() && !m["PublishDate"].empty()) {
      publishDate = make_shared<string>(boost::any_cast<string>(m["PublishDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~ListCouponUsageResponseBodyData() = default;
};
class ListCouponUsageResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListCouponUsageResponseBodyPageInfo() {}

  explicit ListCouponUsageResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListCouponUsageResponseBodyPageInfo() = default;
};
class ListCouponUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListCouponUsageResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<ListCouponUsageResponseBodyPageInfo> pageInfo{};
  shared_ptr<string> requestId{};

  ListCouponUsageResponseBody() {}

  explicit ListCouponUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageInfo) {
      res["PageInfo"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCouponUsageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCouponUsageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCouponUsageResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageInfo") != m.end() && !m["PageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageInfo"].type()) {
        ListCouponUsageResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageInfo"]));
        pageInfo = make_shared<ListCouponUsageResponseBodyPageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCouponUsageResponseBody() = default;
};
class ListCouponUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCouponUsageResponseBody> body{};

  ListCouponUsageResponse() {}

  explicit ListCouponUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCouponUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCouponUsageResponseBody>(model1);
      }
    }
  }


  virtual ~ListCouponUsageResponse() = default;
};
class QuotaListExportPagedRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> language{};
  shared_ptr<long> pageSize{};

  QuotaListExportPagedRequest() {}

  explicit QuotaListExportPagedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QuotaListExportPagedRequest() = default;
};
class QuotaListExportPagedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> message{};
  shared_ptr<string> status{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> url{};

  QuotaListExportPagedResponseBodyData() {}

  explicit QuotaListExportPagedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QuotaListExportPagedResponseBodyData() = default;
};
class QuotaListExportPagedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QuotaListExportPagedResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  QuotaListExportPagedResponseBody() {}

  explicit QuotaListExportPagedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QuotaListExportPagedResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuotaListExportPagedResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QuotaListExportPagedResponseBodyData>>(expect1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QuotaListExportPagedResponseBody() = default;
};
class QuotaListExportPagedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuotaListExportPagedResponseBody> body{};

  QuotaListExportPagedResponse() {}

  explicit QuotaListExportPagedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuotaListExportPagedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuotaListExportPagedResponseBody>(model1);
      }
    }
  }


  virtual ~QuotaListExportPagedResponse() = default;
};
class ResendEmailRequest : public Darabonba::Model {
public:
  shared_ptr<long> inviteId{};

  ResendEmailRequest() {}

  explicit ResendEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inviteId) {
      res["InviteId"] = boost::any(*inviteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InviteId") != m.end() && !m["InviteId"].empty()) {
      inviteId = make_shared<long>(boost::any_cast<long>(m["InviteId"]));
    }
  }


  virtual ~ResendEmailRequest() = default;
};
class ResendEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResendEmailResponseBody() {}

  explicit ResendEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~ResendEmailResponseBody() = default;
};
class ResendEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResendEmailResponseBody> body{};

  ResendEmailResponse() {}

  explicit ResendEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResendEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResendEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ResendEmailResponse() = default;
};
class SetAccountInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNickname{};
  shared_ptr<string> customerBd{};
  shared_ptr<string> remark{};
  shared_ptr<long> uid{};

  SetAccountInfoRequest() {}

  explicit SetAccountInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNickname) {
      res["AccountNickname"] = boost::any(*accountNickname);
    }
    if (customerBd) {
      res["CustomerBd"] = boost::any(*customerBd);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNickname") != m.end() && !m["AccountNickname"].empty()) {
      accountNickname = make_shared<string>(boost::any_cast<string>(m["AccountNickname"]));
    }
    if (m.find("CustomerBd") != m.end() && !m["CustomerBd"].empty()) {
      customerBd = make_shared<string>(boost::any_cast<string>(m["CustomerBd"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~SetAccountInfoRequest() = default;
};
class SetAccountInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetAccountInfoResponseBody() {}

  explicit SetAccountInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~SetAccountInfoResponseBody() = default;
};
class SetAccountInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAccountInfoResponseBody> body{};

  SetAccountInfoResponse() {}

  explicit SetAccountInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetAccountInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAccountInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetAccountInfoResponse() = default;
};
class SetCreditLineRequest : public Darabonba::Model {
public:
  shared_ptr<string> creditLine{};
  shared_ptr<long> uid{};

  SetCreditLineRequest() {}

  explicit SetCreditLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creditLine) {
      res["CreditLine"] = boost::any(*creditLine);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreditLine") != m.end() && !m["CreditLine"].empty()) {
      creditLine = make_shared<string>(boost::any_cast<string>(m["CreditLine"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~SetCreditLineRequest() = default;
};
class SetCreditLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetCreditLineResponseBody() {}

  explicit SetCreditLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~SetCreditLineResponseBody() = default;
};
class SetCreditLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetCreditLineResponseBody> body{};

  SetCreditLineResponse() {}

  explicit SetCreditLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetCreditLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetCreditLineResponseBody>(model1);
      }
    }
  }


  virtual ~SetCreditLineResponse() = default;
};
class SetWarningThresholdRequest : public Darabonba::Model {
public:
  shared_ptr<long> uid{};
  shared_ptr<string> warningValue{};

  SetWarningThresholdRequest() {}

  explicit SetWarningThresholdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (warningValue) {
      res["WarningValue"] = boost::any(*warningValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("WarningValue") != m.end() && !m["WarningValue"].empty()) {
      warningValue = make_shared<string>(boost::any_cast<string>(m["WarningValue"]));
    }
  }


  virtual ~SetWarningThresholdRequest() = default;
};
class SetWarningThresholdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetWarningThresholdResponseBody() {}

  explicit SetWarningThresholdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~SetWarningThresholdResponseBody() = default;
};
class SetWarningThresholdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetWarningThresholdResponseBody> body{};

  SetWarningThresholdResponse() {}

  explicit SetWarningThresholdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetWarningThresholdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetWarningThresholdResponseBody>(model1);
      }
    }
  }


  virtual ~SetWarningThresholdResponse() = default;
};
class SubscriptionBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> beginBillingCycle{};
  shared_ptr<string> billFormat{};
  shared_ptr<long> bucketOwnerId{};
  shared_ptr<string> subscribeBucket{};
  shared_ptr<long> subscribeSegmentSize{};
  shared_ptr<string> subscribeType{};

  SubscriptionBillRequest() {}

  explicit SubscriptionBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginBillingCycle) {
      res["BeginBillingCycle"] = boost::any(*beginBillingCycle);
    }
    if (billFormat) {
      res["BillFormat"] = boost::any(*billFormat);
    }
    if (bucketOwnerId) {
      res["BucketOwnerId"] = boost::any(*bucketOwnerId);
    }
    if (subscribeBucket) {
      res["SubscribeBucket"] = boost::any(*subscribeBucket);
    }
    if (subscribeSegmentSize) {
      res["SubscribeSegmentSize"] = boost::any(*subscribeSegmentSize);
    }
    if (subscribeType) {
      res["SubscribeType"] = boost::any(*subscribeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginBillingCycle") != m.end() && !m["BeginBillingCycle"].empty()) {
      beginBillingCycle = make_shared<string>(boost::any_cast<string>(m["BeginBillingCycle"]));
    }
    if (m.find("BillFormat") != m.end() && !m["BillFormat"].empty()) {
      billFormat = make_shared<string>(boost::any_cast<string>(m["BillFormat"]));
    }
    if (m.find("BucketOwnerId") != m.end() && !m["BucketOwnerId"].empty()) {
      bucketOwnerId = make_shared<long>(boost::any_cast<long>(m["BucketOwnerId"]));
    }
    if (m.find("SubscribeBucket") != m.end() && !m["SubscribeBucket"].empty()) {
      subscribeBucket = make_shared<string>(boost::any_cast<string>(m["SubscribeBucket"]));
    }
    if (m.find("SubscribeSegmentSize") != m.end() && !m["SubscribeSegmentSize"].empty()) {
      subscribeSegmentSize = make_shared<long>(boost::any_cast<long>(m["SubscribeSegmentSize"]));
    }
    if (m.find("SubscribeType") != m.end() && !m["SubscribeType"].empty()) {
      subscribeType = make_shared<string>(boost::any_cast<string>(m["SubscribeType"]));
    }
  }


  virtual ~SubscriptionBillRequest() = default;
};
class SubscriptionBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubscriptionBillResponseBody() {}

  explicit SubscriptionBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~SubscriptionBillResponseBody() = default;
};
class SubscriptionBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubscriptionBillResponseBody> body{};

  SubscriptionBillResponse() {}

  explicit SubscriptionBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubscriptionBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubscriptionBillResponseBody>(model1);
      }
    }
  }


  virtual ~SubscriptionBillResponse() = default;
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
  CancelSubscriptionBillResponse cancelSubscriptionBillWithOptions(shared_ptr<CancelSubscriptionBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelSubscriptionBillResponse cancelSubscriptionBill(shared_ptr<CancelSubscriptionBillRequest> request);
  CreateCouponTemplateResponse createCouponTemplateWithOptions(shared_ptr<CreateCouponTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCouponTemplateResponse createCouponTemplate(shared_ptr<CreateCouponTemplateRequest> request);
  CreateCustomerResponse createCustomerWithOptions(shared_ptr<CreateCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomerResponse createCustomer(shared_ptr<CreateCustomerRequest> request);
  CustomerQuotaRecordListResponse customerQuotaRecordListWithOptions(shared_ptr<CustomerQuotaRecordListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CustomerQuotaRecordListResponse customerQuotaRecordList(shared_ptr<CustomerQuotaRecordListRequest> request);
  DeductOutstandingBalanceResponse deductOutstandingBalanceWithOptions(shared_ptr<DeductOutstandingBalanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeductOutstandingBalanceResponse deductOutstandingBalance(shared_ptr<DeductOutstandingBalanceRequest> request);
  EditEndUserStatusResponse editEndUserStatusWithOptions(shared_ptr<EditEndUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditEndUserStatusResponse editEndUserStatus(shared_ptr<EditEndUserStatusRequest> request);
  EditNewBuyStatusResponse editNewBuyStatusWithOptions(shared_ptr<EditNewBuyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditNewBuyStatusResponse editNewBuyStatus(shared_ptr<EditNewBuyStatusRequest> request);
  EditZeroCreditShutdownResponse editZeroCreditShutdownWithOptions(shared_ptr<EditZeroCreditShutdownRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditZeroCreditShutdownResponse editZeroCreditShutdown(shared_ptr<EditZeroCreditShutdownRequest> request);
  ExportCustomerQuotaRecordResponse exportCustomerQuotaRecordWithOptions(shared_ptr<ExportCustomerQuotaRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportCustomerQuotaRecordResponse exportCustomerQuotaRecord(shared_ptr<ExportCustomerQuotaRecordRequest> request);
  GetAccountInfoResponse getAccountInfoWithOptions(shared_ptr<GetAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountInfoResponse getAccountInfo(shared_ptr<GetAccountInfoRequest> request);
  GetCoupondeductProductCodeResponse getCoupondeductProductCodeWithOptions(shared_ptr<GetCoupondeductProductCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCoupondeductProductCodeResponse getCoupondeductProductCode(shared_ptr<GetCoupondeductProductCodeRequest> request);
  GetCreditInfoResponse getCreditInfoWithOptions(shared_ptr<GetCreditInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCreditInfoResponse getCreditInfo(shared_ptr<GetCreditInfoRequest> request);
  GetCustomerOrdersResponse getCustomerOrdersWithOptions(shared_ptr<GetCustomerOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomerOrdersResponse getCustomerOrders(shared_ptr<GetCustomerOrdersRequest> request);
  GetDailyBillResponse getDailyBillWithOptions(shared_ptr<GetDailyBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDailyBillResponse getDailyBill(shared_ptr<GetDailyBillRequest> request);
  GetInviteStatusResponse getInviteStatusWithOptions(shared_ptr<GetInviteStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInviteStatusResponse getInviteStatus(shared_ptr<GetInviteStatusRequest> request);
  GetMonthlyBillResponse getMonthlyBillWithOptions(shared_ptr<GetMonthlyBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMonthlyBillResponse getMonthlyBill(shared_ptr<GetMonthlyBillRequest> request);
  GetUnassociatedCustomerResponse getUnassociatedCustomerWithOptions(shared_ptr<GetUnassociatedCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUnassociatedCustomerResponse getUnassociatedCustomer(shared_ptr<GetUnassociatedCustomerRequest> request);
  InviteSubAccountResponse inviteSubAccountWithOptions(shared_ptr<InviteSubAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InviteSubAccountResponse inviteSubAccount(shared_ptr<InviteSubAccountRequest> request);
  IssueCouponForCustomerResponse issueCouponForCustomerWithOptions(shared_ptr<IssueCouponForCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IssueCouponForCustomerResponse issueCouponForCustomer(shared_ptr<IssueCouponForCustomerRequest> request);
  ListCountriesResponse listCountriesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCountriesResponse listCountries();
  ListCouponUsageResponse listCouponUsageWithOptions(shared_ptr<ListCouponUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCouponUsageResponse listCouponUsage(shared_ptr<ListCouponUsageRequest> request);
  QuotaListExportPagedResponse quotaListExportPagedWithOptions(shared_ptr<QuotaListExportPagedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuotaListExportPagedResponse quotaListExportPaged(shared_ptr<QuotaListExportPagedRequest> request);
  ResendEmailResponse resendEmailWithOptions(shared_ptr<ResendEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendEmailResponse resendEmail(shared_ptr<ResendEmailRequest> request);
  SetAccountInfoResponse setAccountInfoWithOptions(shared_ptr<SetAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAccountInfoResponse setAccountInfo(shared_ptr<SetAccountInfoRequest> request);
  SetCreditLineResponse setCreditLineWithOptions(shared_ptr<SetCreditLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetCreditLineResponse setCreditLine(shared_ptr<SetCreditLineRequest> request);
  SetWarningThresholdResponse setWarningThresholdWithOptions(shared_ptr<SetWarningThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetWarningThresholdResponse setWarningThreshold(shared_ptr<SetWarningThresholdRequest> request);
  SubscriptionBillResponse subscriptionBillWithOptions(shared_ptr<SubscriptionBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubscriptionBillResponse subscriptionBill(shared_ptr<SubscriptionBillRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Agency20221216

#endif
