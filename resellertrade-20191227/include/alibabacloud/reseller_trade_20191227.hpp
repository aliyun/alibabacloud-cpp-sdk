// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RESELLERTRADE20191227_H_
#define ALIBABACLOUD_RESELLERTRADE20191227_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ResellerTrade20191227 {
class CreateCouponTemplateRequestCurrency : public Darabonba::Model {
public:
  shared_ptr<string> currencyCode{};
  shared_ptr<long> defaultFractionDigits{};
  shared_ptr<long> numericCode{};

  CreateCouponTemplateRequestCurrency() {}

  explicit CreateCouponTemplateRequestCurrency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currencyCode) {
      res["CurrencyCode"] = boost::any(*currencyCode);
    }
    if (defaultFractionDigits) {
      res["DefaultFractionDigits"] = boost::any(*defaultFractionDigits);
    }
    if (numericCode) {
      res["NumericCode"] = boost::any(*numericCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrencyCode") != m.end() && !m["CurrencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["CurrencyCode"]));
    }
    if (m.find("DefaultFractionDigits") != m.end() && !m["DefaultFractionDigits"].empty()) {
      defaultFractionDigits = make_shared<long>(boost::any_cast<long>(m["DefaultFractionDigits"]));
    }
    if (m.find("NumericCode") != m.end() && !m["NumericCode"].empty()) {
      numericCode = make_shared<long>(boost::any_cast<long>(m["NumericCode"]));
    }
  }


  virtual ~CreateCouponTemplateRequestCurrency() = default;
};
class CreateCouponTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> activitySite{};
  shared_ptr<long> bid{};
  shared_ptr<double> certainMoney{};
  shared_ptr<string> clientType{};
  shared_ptr<string> commodityType{};
  shared_ptr<string> controlType{};
  shared_ptr<double> couponAmount{};
  shared_ptr<string> couponEndTime{};
  shared_ptr<string> couponFixedType{};
  shared_ptr<string> couponStartTime{};
  shared_ptr<string> couponType{};
  shared_ptr<CreateCouponTemplateRequestCurrency> currency{};
  shared_ptr<string> description{};
  shared_ptr<double> discountRate{};
  shared_ptr<string> endTime{};
  shared_ptr<map<string, string>> extendsMap{};
  shared_ptr<string> fromApp{};
  shared_ptr<vector<string>> itemCodeSet{};
  shared_ptr<string> market{};
  shared_ptr<long> marketType{};
  shared_ptr<double> maxRelease{};
  shared_ptr<string> messageId{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> orderTypeSet{};
  shared_ptr<long> perLimitNum{};
  shared_ptr<long> promotionId{};
  shared_ptr<string> reason{};
  shared_ptr<long> relativeSecond{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> selectionIdSet{};
  shared_ptr<long> sellerId{};
  shared_ptr<string> site{};
  shared_ptr<long> spId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};
  shared_ptr<string> universalType{};
  shared_ptr<double> upperLimit{};
  shared_ptr<long> usageCount{};
  shared_ptr<string> useScene{};
  shared_ptr<string> userPkAmount{};
  shared_ptr<string> validityType{};

  CreateCouponTemplateRequest() {}

  explicit CreateCouponTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activitySite) {
      res["ActivitySite"] = boost::any(*activitySite);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (certainMoney) {
      res["CertainMoney"] = boost::any(*certainMoney);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (commodityType) {
      res["CommodityType"] = boost::any(*commodityType);
    }
    if (controlType) {
      res["ControlType"] = boost::any(*controlType);
    }
    if (couponAmount) {
      res["CouponAmount"] = boost::any(*couponAmount);
    }
    if (couponEndTime) {
      res["CouponEndTime"] = boost::any(*couponEndTime);
    }
    if (couponFixedType) {
      res["CouponFixedType"] = boost::any(*couponFixedType);
    }
    if (couponStartTime) {
      res["CouponStartTime"] = boost::any(*couponStartTime);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (currency) {
      res["Currency"] = currency ? boost::any(currency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (discountRate) {
      res["DiscountRate"] = boost::any(*discountRate);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extendsMap) {
      res["ExtendsMap"] = boost::any(*extendsMap);
    }
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
    }
    if (itemCodeSet) {
      res["ItemCodeSet"] = boost::any(*itemCodeSet);
    }
    if (market) {
      res["Market"] = boost::any(*market);
    }
    if (marketType) {
      res["MarketType"] = boost::any(*marketType);
    }
    if (maxRelease) {
      res["MaxRelease"] = boost::any(*maxRelease);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (orderTypeSet) {
      res["OrderTypeSet"] = boost::any(*orderTypeSet);
    }
    if (perLimitNum) {
      res["PerLimitNum"] = boost::any(*perLimitNum);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (relativeSecond) {
      res["RelativeSecond"] = boost::any(*relativeSecond);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (selectionIdSet) {
      res["SelectionIdSet"] = boost::any(*selectionIdSet);
    }
    if (sellerId) {
      res["SellerId"] = boost::any(*sellerId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (spId) {
      res["SpId"] = boost::any(*spId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (universalType) {
      res["UniversalType"] = boost::any(*universalType);
    }
    if (upperLimit) {
      res["UpperLimit"] = boost::any(*upperLimit);
    }
    if (usageCount) {
      res["UsageCount"] = boost::any(*usageCount);
    }
    if (useScene) {
      res["UseScene"] = boost::any(*useScene);
    }
    if (userPkAmount) {
      res["UserPkAmount"] = boost::any(*userPkAmount);
    }
    if (validityType) {
      res["ValidityType"] = boost::any(*validityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivitySite") != m.end() && !m["ActivitySite"].empty()) {
      activitySite = make_shared<long>(boost::any_cast<long>(m["ActivitySite"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
    if (m.find("CertainMoney") != m.end() && !m["CertainMoney"].empty()) {
      certainMoney = make_shared<double>(boost::any_cast<double>(m["CertainMoney"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("CommodityType") != m.end() && !m["CommodityType"].empty()) {
      commodityType = make_shared<string>(boost::any_cast<string>(m["CommodityType"]));
    }
    if (m.find("ControlType") != m.end() && !m["ControlType"].empty()) {
      controlType = make_shared<string>(boost::any_cast<string>(m["ControlType"]));
    }
    if (m.find("CouponAmount") != m.end() && !m["CouponAmount"].empty()) {
      couponAmount = make_shared<double>(boost::any_cast<double>(m["CouponAmount"]));
    }
    if (m.find("CouponEndTime") != m.end() && !m["CouponEndTime"].empty()) {
      couponEndTime = make_shared<string>(boost::any_cast<string>(m["CouponEndTime"]));
    }
    if (m.find("CouponFixedType") != m.end() && !m["CouponFixedType"].empty()) {
      couponFixedType = make_shared<string>(boost::any_cast<string>(m["CouponFixedType"]));
    }
    if (m.find("CouponStartTime") != m.end() && !m["CouponStartTime"].empty()) {
      couponStartTime = make_shared<string>(boost::any_cast<string>(m["CouponStartTime"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      if (typeid(map<string, boost::any>) == m["Currency"].type()) {
        CreateCouponTemplateRequestCurrency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Currency"]));
        currency = make_shared<CreateCouponTemplateRequestCurrency>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DiscountRate") != m.end() && !m["DiscountRate"].empty()) {
      discountRate = make_shared<double>(boost::any_cast<double>(m["DiscountRate"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExtendsMap") != m.end() && !m["ExtendsMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendsMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendsMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
    }
    if (m.find("ItemCodeSet") != m.end() && !m["ItemCodeSet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemCodeSet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemCodeSet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemCodeSet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Market") != m.end() && !m["Market"].empty()) {
      market = make_shared<string>(boost::any_cast<string>(m["Market"]));
    }
    if (m.find("MarketType") != m.end() && !m["MarketType"].empty()) {
      marketType = make_shared<long>(boost::any_cast<long>(m["MarketType"]));
    }
    if (m.find("MaxRelease") != m.end() && !m["MaxRelease"].empty()) {
      maxRelease = make_shared<double>(boost::any_cast<double>(m["MaxRelease"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("OrderTypeSet") != m.end() && !m["OrderTypeSet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderTypeSet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderTypeSet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderTypeSet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PerLimitNum") != m.end() && !m["PerLimitNum"].empty()) {
      perLimitNum = make_shared<long>(boost::any_cast<long>(m["PerLimitNum"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<long>(boost::any_cast<long>(m["PromotionId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RelativeSecond") != m.end() && !m["RelativeSecond"].empty()) {
      relativeSecond = make_shared<long>(boost::any_cast<long>(m["RelativeSecond"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SelectionIdSet") != m.end() && !m["SelectionIdSet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SelectionIdSet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SelectionIdSet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      selectionIdSet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SellerId") != m.end() && !m["SellerId"].empty()) {
      sellerId = make_shared<long>(boost::any_cast<long>(m["SellerId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("SpId") != m.end() && !m["SpId"].empty()) {
      spId = make_shared<long>(boost::any_cast<long>(m["SpId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UniversalType") != m.end() && !m["UniversalType"].empty()) {
      universalType = make_shared<string>(boost::any_cast<string>(m["UniversalType"]));
    }
    if (m.find("UpperLimit") != m.end() && !m["UpperLimit"].empty()) {
      upperLimit = make_shared<double>(boost::any_cast<double>(m["UpperLimit"]));
    }
    if (m.find("UsageCount") != m.end() && !m["UsageCount"].empty()) {
      usageCount = make_shared<long>(boost::any_cast<long>(m["UsageCount"]));
    }
    if (m.find("UseScene") != m.end() && !m["UseScene"].empty()) {
      useScene = make_shared<string>(boost::any_cast<string>(m["UseScene"]));
    }
    if (m.find("UserPkAmount") != m.end() && !m["UserPkAmount"].empty()) {
      userPkAmount = make_shared<string>(boost::any_cast<string>(m["UserPkAmount"]));
    }
    if (m.find("ValidityType") != m.end() && !m["ValidityType"].empty()) {
      validityType = make_shared<string>(boost::any_cast<string>(m["ValidityType"]));
    }
  }


  virtual ~CreateCouponTemplateRequest() = default;
};
class CreateCouponTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<long> data{};
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
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
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
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
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
class DiscardCouponListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> couponList{};

  DiscardCouponListRequest() {}

  explicit DiscardCouponListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponList) {
      res["CouponList"] = boost::any(*couponList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponList") != m.end() && !m["CouponList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CouponList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CouponList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      couponList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DiscardCouponListRequest() = default;
};
class DiscardCouponListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DiscardCouponListResponseBody() {}

  explicit DiscardCouponListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
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
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~DiscardCouponListResponseBody() = default;
};
class DiscardCouponListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DiscardCouponListResponseBody> body{};

  DiscardCouponListResponse() {}

  explicit DiscardCouponListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DiscardCouponListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DiscardCouponListResponseBody>(model1);
      }
    }
  }


  virtual ~DiscardCouponListResponse() = default;
};
class GetCouponPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> fromApp{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sellerId{};
  shared_ptr<long> templateId{};
  shared_ptr<vector<long>> uids{};

  GetCouponPageRequest() {}

  explicit GetCouponPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
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
    if (sellerId) {
      res["SellerId"] = boost::any(*sellerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (uids) {
      res["Uids"] = boost::any(*uids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
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
    if (m.find("SellerId") != m.end() && !m["SellerId"].empty()) {
      sellerId = make_shared<long>(boost::any_cast<long>(m["SellerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("Uids") != m.end() && !m["Uids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Uids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Uids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      uids = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetCouponPageRequest() = default;
};
class GetCouponPageResponseBodyDataCurrency : public Darabonba::Model {
public:
  shared_ptr<string> currencyCode{};

  GetCouponPageResponseBodyDataCurrency() {}

  explicit GetCouponPageResponseBodyDataCurrency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currencyCode) {
      res["CurrencyCode"] = boost::any(*currencyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrencyCode") != m.end() && !m["CurrencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["CurrencyCode"]));
    }
  }


  virtual ~GetCouponPageResponseBodyDataCurrency() = default;
};
class GetCouponPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<double> certainMoney{};
  shared_ptr<long> couponId{};
  shared_ptr<string> couponType{};
  shared_ptr<GetCouponPageResponseBodyDataCurrency> currency{};
  shared_ptr<string> description{};
  shared_ptr<double> discountRate{};
  shared_ptr<string> endTime{};
  shared_ptr<double> frozenAmount{};
  shared_ptr<long> frozenCount{};
  shared_ptr<long> promotionId{};
  shared_ptr<long> sellerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> templateId{};
  shared_ptr<string> universalType{};
  shared_ptr<double> upperLimit{};
  shared_ptr<long> usageCount{};
  shared_ptr<double> usedAmount{};
  shared_ptr<long> usedCount{};
  shared_ptr<long> userId{};

  GetCouponPageResponseBodyData() {}

  explicit GetCouponPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (certainMoney) {
      res["CertainMoney"] = boost::any(*certainMoney);
    }
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (currency) {
      res["Currency"] = currency ? boost::any(currency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (discountRate) {
      res["DiscountRate"] = boost::any(*discountRate);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (frozenAmount) {
      res["FrozenAmount"] = boost::any(*frozenAmount);
    }
    if (frozenCount) {
      res["FrozenCount"] = boost::any(*frozenCount);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (sellerId) {
      res["SellerId"] = boost::any(*sellerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (universalType) {
      res["UniversalType"] = boost::any(*universalType);
    }
    if (upperLimit) {
      res["UpperLimit"] = boost::any(*upperLimit);
    }
    if (usageCount) {
      res["UsageCount"] = boost::any(*usageCount);
    }
    if (usedAmount) {
      res["UsedAmount"] = boost::any(*usedAmount);
    }
    if (usedCount) {
      res["UsedCount"] = boost::any(*usedCount);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("CertainMoney") != m.end() && !m["CertainMoney"].empty()) {
      certainMoney = make_shared<double>(boost::any_cast<double>(m["CertainMoney"]));
    }
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      if (typeid(map<string, boost::any>) == m["Currency"].type()) {
        GetCouponPageResponseBodyDataCurrency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Currency"]));
        currency = make_shared<GetCouponPageResponseBodyDataCurrency>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DiscountRate") != m.end() && !m["DiscountRate"].empty()) {
      discountRate = make_shared<double>(boost::any_cast<double>(m["DiscountRate"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FrozenAmount") != m.end() && !m["FrozenAmount"].empty()) {
      frozenAmount = make_shared<double>(boost::any_cast<double>(m["FrozenAmount"]));
    }
    if (m.find("FrozenCount") != m.end() && !m["FrozenCount"].empty()) {
      frozenCount = make_shared<long>(boost::any_cast<long>(m["FrozenCount"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<long>(boost::any_cast<long>(m["PromotionId"]));
    }
    if (m.find("SellerId") != m.end() && !m["SellerId"].empty()) {
      sellerId = make_shared<long>(boost::any_cast<long>(m["SellerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("UniversalType") != m.end() && !m["UniversalType"].empty()) {
      universalType = make_shared<string>(boost::any_cast<string>(m["UniversalType"]));
    }
    if (m.find("UpperLimit") != m.end() && !m["UpperLimit"].empty()) {
      upperLimit = make_shared<double>(boost::any_cast<double>(m["UpperLimit"]));
    }
    if (m.find("UsageCount") != m.end() && !m["UsageCount"].empty()) {
      usageCount = make_shared<long>(boost::any_cast<long>(m["UsageCount"]));
    }
    if (m.find("UsedAmount") != m.end() && !m["UsedAmount"].empty()) {
      usedAmount = make_shared<double>(boost::any_cast<double>(m["UsedAmount"]));
    }
    if (m.find("UsedCount") != m.end() && !m["UsedCount"].empty()) {
      usedCount = make_shared<long>(boost::any_cast<long>(m["UsedCount"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~GetCouponPageResponseBodyData() = default;
};
class GetCouponPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<long> count{};
  shared_ptr<vector<GetCouponPageResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  GetCouponPageResponseBody() {}

  explicit GetCouponPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
    }
    if (count) {
      res["Count"] = boost::any(*count);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetCouponPageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCouponPageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetCouponPageResponseBodyData>>(expect1);
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


  virtual ~GetCouponPageResponseBody() = default;
};
class GetCouponPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCouponPageResponseBody> body{};

  GetCouponPageResponse() {}

  explicit GetCouponPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCouponPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCouponPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetCouponPageResponse() = default;
};
class GetCustomerListRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  GetCustomerListRequest() {}

  explicit GetCustomerListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetCustomerListRequest() = default;
};
class GetCustomerListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> totalSize{};
  shared_ptr<vector<string>> uidList{};

  GetCustomerListResponseBodyData() {}

  explicit GetCustomerListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    if (uidList) {
      res["UidList"] = boost::any(*uidList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
    if (m.find("UidList") != m.end() && !m["UidList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      uidList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetCustomerListResponseBodyData() = default;
};
class GetCustomerListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCustomerListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCustomerListResponseBody() {}

  explicit GetCustomerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomerListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCustomerListResponseBodyData>(model1);
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


  virtual ~GetCustomerListResponseBody() = default;
};
class GetCustomerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCustomerListResponseBody> body{};

  GetCustomerListResponse() {}

  explicit GetCustomerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCustomerListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCustomerListResponseBody>(model1);
      }
    }
  }


  virtual ~GetCustomerListResponse() = default;
};
class GetRelationRequest : public Darabonba::Model {
public:
  shared_ptr<long> relationTime{};
  shared_ptr<long> uid{};

  GetRelationRequest() {}

  explicit GetRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationTime) {
      res["RelationTime"] = boost::any(*relationTime);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelationTime") != m.end() && !m["RelationTime"].empty()) {
      relationTime = make_shared<long>(boost::any_cast<long>(m["RelationTime"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~GetRelationRequest() = default;
};
class GetRelationResponseBodyDataResellerProductModeDO : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<long> isService{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};

  GetRelationResponseBodyDataResellerProductModeDO() {}

  explicit GetRelationResponseBodyDataResellerProductModeDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (isService) {
      res["IsService"] = boost::any(*isService);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("IsService") != m.end() && !m["IsService"].empty()) {
      isService = make_shared<long>(boost::any_cast<long>(m["IsService"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~GetRelationResponseBodyDataResellerProductModeDO() = default;
};
class GetRelationResponseBodyDataResellerProductRuleDO : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<bool> commodityRoute{};
  shared_ptr<bool> multiOrder{};
  shared_ptr<string> payMode{};

  GetRelationResponseBodyDataResellerProductRuleDO() {}

  explicit GetRelationResponseBodyDataResellerProductRuleDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (commodityRoute) {
      res["CommodityRoute"] = boost::any(*commodityRoute);
    }
    if (multiOrder) {
      res["MultiOrder"] = boost::any(*multiOrder);
    }
    if (payMode) {
      res["PayMode"] = boost::any(*payMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("CommodityRoute") != m.end() && !m["CommodityRoute"].empty()) {
      commodityRoute = make_shared<bool>(boost::any_cast<bool>(m["CommodityRoute"]));
    }
    if (m.find("MultiOrder") != m.end() && !m["MultiOrder"].empty()) {
      multiOrder = make_shared<bool>(boost::any_cast<bool>(m["MultiOrder"]));
    }
    if (m.find("PayMode") != m.end() && !m["PayMode"].empty()) {
      payMode = make_shared<string>(boost::any_cast<string>(m["PayMode"]));
    }
  }


  virtual ~GetRelationResponseBodyDataResellerProductRuleDO() = default;
};
class GetRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> canLoginOfficial{};
  shared_ptr<string> class_{};
  shared_ptr<long> endTime{};
  shared_ptr<GetRelationResponseBodyDataResellerProductModeDO> resellerProductModeDO{};
  shared_ptr<GetRelationResponseBodyDataResellerProductRuleDO> resellerProductRuleDO{};
  shared_ptr<long> resellerUid{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<bool> topReseller{};
  shared_ptr<long> uid{};
  shared_ptr<string> userType{};

  GetRelationResponseBodyData() {}

  explicit GetRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canLoginOfficial) {
      res["CanLoginOfficial"] = boost::any(*canLoginOfficial);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resellerProductModeDO) {
      res["ResellerProductModeDO"] = resellerProductModeDO ? boost::any(resellerProductModeDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resellerProductRuleDO) {
      res["ResellerProductRuleDO"] = resellerProductRuleDO ? boost::any(resellerProductRuleDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resellerUid) {
      res["ResellerUid"] = boost::any(*resellerUid);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (topReseller) {
      res["TopReseller"] = boost::any(*topReseller);
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
    if (m.find("CanLoginOfficial") != m.end() && !m["CanLoginOfficial"].empty()) {
      canLoginOfficial = make_shared<bool>(boost::any_cast<bool>(m["CanLoginOfficial"]));
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ResellerProductModeDO") != m.end() && !m["ResellerProductModeDO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResellerProductModeDO"].type()) {
        GetRelationResponseBodyDataResellerProductModeDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResellerProductModeDO"]));
        resellerProductModeDO = make_shared<GetRelationResponseBodyDataResellerProductModeDO>(model1);
      }
    }
    if (m.find("ResellerProductRuleDO") != m.end() && !m["ResellerProductRuleDO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResellerProductRuleDO"].type()) {
        GetRelationResponseBodyDataResellerProductRuleDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResellerProductRuleDO"]));
        resellerProductRuleDO = make_shared<GetRelationResponseBodyDataResellerProductRuleDO>(model1);
      }
    }
    if (m.find("ResellerUid") != m.end() && !m["ResellerUid"].empty()) {
      resellerUid = make_shared<long>(boost::any_cast<long>(m["ResellerUid"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TopReseller") != m.end() && !m["TopReseller"].empty()) {
      topReseller = make_shared<bool>(boost::any_cast<bool>(m["TopReseller"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetRelationResponseBodyData() = default;
};
class GetRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<string> code{};
  shared_ptr<GetRelationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRelationResponseBody() {}

  explicit GetRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
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
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRelationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRelationResponseBodyData>(model1);
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


  virtual ~GetRelationResponseBody() = default;
};
class GetRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRelationResponseBody> body{};

  GetRelationResponse() {}

  explicit GetRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRelationResponseBody>(model1);
      }
    }
  }


  virtual ~GetRelationResponse() = default;
};
class GetResellerPayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<long> uid{};

  GetResellerPayOrderRequest() {}

  explicit GetResellerPayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~GetResellerPayOrderRequest() = default;
};
class GetResellerPayOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> payAmount{};

  GetResellerPayOrderResponseBodyData() {}

  explicit GetResellerPayOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["BuyerId"] = boost::any(*buyerId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (payAmount) {
      res["PayAmount"] = boost::any(*payAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyerId") != m.end() && !m["BuyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["BuyerId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("PayAmount") != m.end() && !m["PayAmount"].empty()) {
      payAmount = make_shared<string>(boost::any_cast<string>(m["PayAmount"]));
    }
  }


  virtual ~GetResellerPayOrderResponseBodyData() = default;
};
class GetResellerPayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetResellerPayOrderResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetResellerPayOrderResponseBody() {}

  explicit GetResellerPayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResellerPayOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResellerPayOrderResponseBodyData>(model1);
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


  virtual ~GetResellerPayOrderResponseBody() = default;
};
class GetResellerPayOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResellerPayOrderResponseBody> body{};

  GetResellerPayOrderResponse() {}

  explicit GetResellerPayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResellerPayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResellerPayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~GetResellerPayOrderResponse() = default;
};
class LabelPartnerUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> userPK{};
  shared_ptr<string> userTag{};

  LabelPartnerUserRequest() {}

  explicit LabelPartnerUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPK) {
      res["UserPK"] = boost::any(*userPK);
    }
    if (userTag) {
      res["UserTag"] = boost::any(*userTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPK") != m.end() && !m["UserPK"].empty()) {
      userPK = make_shared<long>(boost::any_cast<long>(m["UserPK"]));
    }
    if (m.find("UserTag") != m.end() && !m["UserTag"].empty()) {
      userTag = make_shared<string>(boost::any_cast<string>(m["UserTag"]));
    }
  }


  virtual ~LabelPartnerUserRequest() = default;
};
class LabelPartnerUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> userPK{};
  shared_ptr<string> userTag{};

  LabelPartnerUserResponseBodyData() {}

  explicit LabelPartnerUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPK) {
      res["UserPK"] = boost::any(*userPK);
    }
    if (userTag) {
      res["UserTag"] = boost::any(*userTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPK") != m.end() && !m["UserPK"].empty()) {
      userPK = make_shared<long>(boost::any_cast<long>(m["UserPK"]));
    }
    if (m.find("UserTag") != m.end() && !m["UserTag"].empty()) {
      userTag = make_shared<string>(boost::any_cast<string>(m["UserTag"]));
    }
  }


  virtual ~LabelPartnerUserResponseBodyData() = default;
};
class LabelPartnerUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<LabelPartnerUserResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LabelPartnerUserResponseBody() {}

  explicit LabelPartnerUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LabelPartnerUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<LabelPartnerUserResponseBodyData>(model1);
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


  virtual ~LabelPartnerUserResponseBody() = default;
};
class LabelPartnerUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LabelPartnerUserResponseBody> body{};

  LabelPartnerUserResponse() {}

  explicit LabelPartnerUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LabelPartnerUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LabelPartnerUserResponseBody>(model1);
      }
    }
  }


  virtual ~LabelPartnerUserResponse() = default;
};
class MigrateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionCode{};
  shared_ptr<string> content{};

  MigrateResourceRequest() {}

  explicit MigrateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~MigrateResourceRequest() = default;
};
class MigrateResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> procEnvir{};

  MigrateResourceResponseBodyData() {}

  explicit MigrateResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (procEnvir) {
      res["ProcEnvir"] = boost::any(*procEnvir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ProcEnvir") != m.end() && !m["ProcEnvir"].empty()) {
      procEnvir = make_shared<string>(boost::any_cast<string>(m["ProcEnvir"]));
    }
  }


  virtual ~MigrateResourceResponseBodyData() = default;
};
class MigrateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<MigrateResourceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MigrateResourceResponseBody() {}

  explicit MigrateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MigrateResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MigrateResourceResponseBodyData>(model1);
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


  virtual ~MigrateResourceResponseBody() = default;
};
class MigrateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MigrateResourceResponseBody> body{};

  MigrateResourceResponse() {}

  explicit MigrateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MigrateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MigrateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~MigrateResourceResponse() = default;
};
class OfflineActivityRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> activityList{};
  shared_ptr<string> bizId{};
  shared_ptr<string> token{};

  OfflineActivityRequest() {}

  explicit OfflineActivityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityList) {
      res["ActivityList"] = boost::any(*activityList);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityList") != m.end() && !m["ActivityList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ActivityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActivityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      activityList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~OfflineActivityRequest() = default;
};
class OfflineActivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<vector<long>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OfflineActivityResponseBody() {}

  explicit OfflineActivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
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
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
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


  virtual ~OfflineActivityResponseBody() = default;
};
class OfflineActivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineActivityResponseBody> body{};

  OfflineActivityResponse() {}

  explicit OfflineActivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OfflineActivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineActivityResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineActivityResponse() = default;
};
class PayResultCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> payStatus{};
  shared_ptr<string> payTime{};
  shared_ptr<long> uid{};

  PayResultCallbackRequest() {}

  explicit PayResultCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (payStatus) {
      res["PayStatus"] = boost::any(*payStatus);
    }
    if (payTime) {
      res["PayTime"] = boost::any(*payTime);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PayStatus") != m.end() && !m["PayStatus"].empty()) {
      payStatus = make_shared<string>(boost::any_cast<string>(m["PayStatus"]));
    }
    if (m.find("PayTime") != m.end() && !m["PayTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["PayTime"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~PayResultCallbackRequest() = default;
};
class PayResultCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PayResultCallbackResponseBody() {}

  explicit PayResultCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PayResultCallbackResponseBody() = default;
};
class PayResultCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PayResultCallbackResponseBody> body{};

  PayResultCallbackResponse() {}

  explicit PayResultCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PayResultCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PayResultCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~PayResultCallbackResponse() = default;
};
class PublicActivityRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> activityList{};
  shared_ptr<string> bizId{};
  shared_ptr<string> snapType{};
  shared_ptr<string> token{};

  PublicActivityRequest() {}

  explicit PublicActivityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityList) {
      res["ActivityList"] = boost::any(*activityList);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (snapType) {
      res["SnapType"] = boost::any(*snapType);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityList") != m.end() && !m["ActivityList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ActivityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActivityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      activityList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("SnapType") != m.end() && !m["SnapType"].empty()) {
      snapType = make_shared<string>(boost::any_cast<string>(m["SnapType"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~PublicActivityRequest() = default;
};
class PublicActivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<vector<long>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PublicActivityResponseBody() {}

  explicit PublicActivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
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
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
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


  virtual ~PublicActivityResponseBody() = default;
};
class PublicActivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublicActivityResponseBody> body{};

  PublicActivityResponse() {}

  explicit PublicActivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublicActivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublicActivityResponseBody>(model1);
      }
    }
  }


  virtual ~PublicActivityResponse() = default;
};
class QueryActivityRequest : public Darabonba::Model {
public:
  shared_ptr<long> activityId{};
  shared_ptr<string> bizId{};
  shared_ptr<string> snapType{};

  QueryActivityRequest() {}

  explicit QueryActivityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (snapType) {
      res["SnapType"] = boost::any(*snapType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<long>(boost::any_cast<long>(m["ActivityId"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("SnapType") != m.end() && !m["SnapType"].empty()) {
      snapType = make_shared<string>(boost::any_cast<string>(m["SnapType"]));
    }
  }


  virtual ~QueryActivityRequest() = default;
};
class QueryActivityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activityId{};
  shared_ptr<string> activityName{};
  shared_ptr<vector<long>> blackList{};
  shared_ptr<vector<string>> commodityCodeList{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<map<string, string>> extMap{};
  shared_ptr<string> promotionDescription{};
  shared_ptr<double> promotionValue{};
  shared_ptr<vector<string>> regionList{};
  shared_ptr<vector<long>> sellerIdList{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<vector<long>> testAccountList{};
  shared_ptr<vector<long>> whiteList{};

  QueryActivityResponseBodyData() {}

  explicit QueryActivityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (activityName) {
      res["ActivityName"] = boost::any(*activityName);
    }
    if (blackList) {
      res["BlackList"] = boost::any(*blackList);
    }
    if (commodityCodeList) {
      res["CommodityCodeList"] = boost::any(*commodityCodeList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extMap) {
      res["ExtMap"] = boost::any(*extMap);
    }
    if (promotionDescription) {
      res["PromotionDescription"] = boost::any(*promotionDescription);
    }
    if (promotionValue) {
      res["PromotionValue"] = boost::any(*promotionValue);
    }
    if (regionList) {
      res["RegionList"] = boost::any(*regionList);
    }
    if (sellerIdList) {
      res["SellerIdList"] = boost::any(*sellerIdList);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (testAccountList) {
      res["TestAccountList"] = boost::any(*testAccountList);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<long>(boost::any_cast<long>(m["ActivityId"]));
    }
    if (m.find("ActivityName") != m.end() && !m["ActivityName"].empty()) {
      activityName = make_shared<string>(boost::any_cast<string>(m["ActivityName"]));
    }
    if (m.find("BlackList") != m.end() && !m["BlackList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BlackList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      blackList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CommodityCodeList") != m.end() && !m["CommodityCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CommodityCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CommodityCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commodityCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExtMap") != m.end() && !m["ExtMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PromotionDescription") != m.end() && !m["PromotionDescription"].empty()) {
      promotionDescription = make_shared<string>(boost::any_cast<string>(m["PromotionDescription"]));
    }
    if (m.find("PromotionValue") != m.end() && !m["PromotionValue"].empty()) {
      promotionValue = make_shared<double>(boost::any_cast<double>(m["PromotionValue"]));
    }
    if (m.find("RegionList") != m.end() && !m["RegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SellerIdList") != m.end() && !m["SellerIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SellerIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SellerIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      sellerIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TestAccountList") != m.end() && !m["TestAccountList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TestAccountList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TestAccountList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      testAccountList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      whiteList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~QueryActivityResponseBodyData() = default;
};
class QueryActivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<QueryActivityResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryActivityResponseBody() {}

  explicit QueryActivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
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
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryActivityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryActivityResponseBodyData>(model1);
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


  virtual ~QueryActivityResponseBody() = default;
};
class QueryActivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryActivityResponseBody> body{};

  QueryActivityResponse() {}

  explicit QueryActivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryActivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryActivityResponseBody>(model1);
      }
    }
  }


  virtual ~QueryActivityResponse() = default;
};
class QueryEcoRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> relationTime{};
  shared_ptr<long> uid{};

  QueryEcoRelationRequest() {}

  explicit QueryEcoRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationTime) {
      res["RelationTime"] = boost::any(*relationTime);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelationTime") != m.end() && !m["RelationTime"].empty()) {
      relationTime = make_shared<string>(boost::any_cast<string>(m["RelationTime"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~QueryEcoRelationRequest() = default;
};
class QueryEcoRelationResponseBodyDataResellerProductModeDO : public Darabonba::Model {
public:
  shared_ptr<long> isService{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};

  QueryEcoRelationResponseBodyDataResellerProductModeDO() {}

  explicit QueryEcoRelationResponseBodyDataResellerProductModeDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isService) {
      res["IsService"] = boost::any(*isService);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsService") != m.end() && !m["IsService"].empty()) {
      isService = make_shared<long>(boost::any_cast<long>(m["IsService"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~QueryEcoRelationResponseBodyDataResellerProductModeDO() = default;
};
class QueryEcoRelationResponseBodyDataResellerProductRuleDO : public Darabonba::Model {
public:
  shared_ptr<bool> commodityRoute{};
  shared_ptr<bool> multiOrder{};
  shared_ptr<string> payMode{};

  QueryEcoRelationResponseBodyDataResellerProductRuleDO() {}

  explicit QueryEcoRelationResponseBodyDataResellerProductRuleDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityRoute) {
      res["CommodityRoute"] = boost::any(*commodityRoute);
    }
    if (multiOrder) {
      res["MultiOrder"] = boost::any(*multiOrder);
    }
    if (payMode) {
      res["PayMode"] = boost::any(*payMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityRoute") != m.end() && !m["CommodityRoute"].empty()) {
      commodityRoute = make_shared<bool>(boost::any_cast<bool>(m["CommodityRoute"]));
    }
    if (m.find("MultiOrder") != m.end() && !m["MultiOrder"].empty()) {
      multiOrder = make_shared<bool>(boost::any_cast<bool>(m["MultiOrder"]));
    }
    if (m.find("PayMode") != m.end() && !m["PayMode"].empty()) {
      payMode = make_shared<string>(boost::any_cast<string>(m["PayMode"]));
    }
  }


  virtual ~QueryEcoRelationResponseBodyDataResellerProductRuleDO() = default;
};
class QueryEcoRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> canLoginOfficial{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isTopReseller{};
  shared_ptr<QueryEcoRelationResponseBodyDataResellerProductModeDO> resellerProductModeDO{};
  shared_ptr<QueryEcoRelationResponseBodyDataResellerProductRuleDO> resellerProductRuleDO{};
  shared_ptr<long> resellerUid{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> uid{};
  shared_ptr<string> userType{};

  QueryEcoRelationResponseBodyData() {}

  explicit QueryEcoRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canLoginOfficial) {
      res["CanLoginOfficial"] = boost::any(*canLoginOfficial);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isTopReseller) {
      res["IsTopReseller"] = boost::any(*isTopReseller);
    }
    if (resellerProductModeDO) {
      res["ResellerProductModeDO"] = resellerProductModeDO ? boost::any(resellerProductModeDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resellerProductRuleDO) {
      res["ResellerProductRuleDO"] = resellerProductRuleDO ? boost::any(resellerProductRuleDO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resellerUid) {
      res["ResellerUid"] = boost::any(*resellerUid);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("CanLoginOfficial") != m.end() && !m["CanLoginOfficial"].empty()) {
      canLoginOfficial = make_shared<bool>(boost::any_cast<bool>(m["CanLoginOfficial"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsTopReseller") != m.end() && !m["IsTopReseller"].empty()) {
      isTopReseller = make_shared<bool>(boost::any_cast<bool>(m["IsTopReseller"]));
    }
    if (m.find("ResellerProductModeDO") != m.end() && !m["ResellerProductModeDO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResellerProductModeDO"].type()) {
        QueryEcoRelationResponseBodyDataResellerProductModeDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResellerProductModeDO"]));
        resellerProductModeDO = make_shared<QueryEcoRelationResponseBodyDataResellerProductModeDO>(model1);
      }
    }
    if (m.find("ResellerProductRuleDO") != m.end() && !m["ResellerProductRuleDO"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResellerProductRuleDO"].type()) {
        QueryEcoRelationResponseBodyDataResellerProductRuleDO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResellerProductRuleDO"]));
        resellerProductRuleDO = make_shared<QueryEcoRelationResponseBodyDataResellerProductRuleDO>(model1);
      }
    }
    if (m.find("ResellerUid") != m.end() && !m["ResellerUid"].empty()) {
      resellerUid = make_shared<long>(boost::any_cast<long>(m["ResellerUid"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~QueryEcoRelationResponseBodyData() = default;
};
class QueryEcoRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<QueryEcoRelationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEcoRelationResponseBody() {}

  explicit QueryEcoRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
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
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryEcoRelationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEcoRelationResponseBodyData>(model1);
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


  virtual ~QueryEcoRelationResponseBody() = default;
};
class QueryEcoRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEcoRelationResponseBody> body{};

  QueryEcoRelationResponse() {}

  explicit QueryEcoRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEcoRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEcoRelationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEcoRelationResponse() = default;
};
class SaveActivityRequestFusionPromotionParamListModuleInfoParamList : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<string> itemCode{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleKey{};
  shared_ptr<string> moduleName{};
  shared_ptr<vector<string>> moduleValueList{};
  shared_ptr<long> pricePlanId{};

  SaveActivityRequestFusionPromotionParamListModuleInfoParamList() {}

  explicit SaveActivityRequestFusionPromotionParamListModuleInfoParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["componentCode"] = boost::any(*componentCode);
    }
    if (itemCode) {
      res["itemCode"] = boost::any(*itemCode);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleKey) {
      res["moduleKey"] = boost::any(*moduleKey);
    }
    if (moduleName) {
      res["moduleName"] = boost::any(*moduleName);
    }
    if (moduleValueList) {
      res["moduleValueList"] = boost::any(*moduleValueList);
    }
    if (pricePlanId) {
      res["pricePlanId"] = boost::any(*pricePlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentCode") != m.end() && !m["componentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["componentCode"]));
    }
    if (m.find("itemCode") != m.end() && !m["itemCode"].empty()) {
      itemCode = make_shared<string>(boost::any_cast<string>(m["itemCode"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["moduleId"]));
    }
    if (m.find("moduleKey") != m.end() && !m["moduleKey"].empty()) {
      moduleKey = make_shared<string>(boost::any_cast<string>(m["moduleKey"]));
    }
    if (m.find("moduleName") != m.end() && !m["moduleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["moduleName"]));
    }
    if (m.find("moduleValueList") != m.end() && !m["moduleValueList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["moduleValueList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["moduleValueList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      moduleValueList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pricePlanId") != m.end() && !m["pricePlanId"].empty()) {
      pricePlanId = make_shared<long>(boost::any_cast<long>(m["pricePlanId"]));
    }
  }


  virtual ~SaveActivityRequestFusionPromotionParamListModuleInfoParamList() = default;
};
class SaveActivityRequestFusionPromotionParamList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> commodityCodeList{};
  shared_ptr<double> promotionValue{};
  shared_ptr<vector<string>> restrictedRegionList{};
  shared_ptr<vector<SaveActivityRequestFusionPromotionParamListModuleInfoParamList>> moduleInfoParamList{};

  SaveActivityRequestFusionPromotionParamList() {}

  explicit SaveActivityRequestFusionPromotionParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCodeList) {
      res["CommodityCodeList"] = boost::any(*commodityCodeList);
    }
    if (promotionValue) {
      res["PromotionValue"] = boost::any(*promotionValue);
    }
    if (restrictedRegionList) {
      res["RestrictedRegionList"] = boost::any(*restrictedRegionList);
    }
    if (moduleInfoParamList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleInfoParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["moduleInfoParamList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCodeList") != m.end() && !m["CommodityCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CommodityCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CommodityCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commodityCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PromotionValue") != m.end() && !m["PromotionValue"].empty()) {
      promotionValue = make_shared<double>(boost::any_cast<double>(m["PromotionValue"]));
    }
    if (m.find("RestrictedRegionList") != m.end() && !m["RestrictedRegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RestrictedRegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RestrictedRegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      restrictedRegionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("moduleInfoParamList") != m.end() && !m["moduleInfoParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["moduleInfoParamList"].type()) {
        vector<SaveActivityRequestFusionPromotionParamListModuleInfoParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["moduleInfoParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveActivityRequestFusionPromotionParamListModuleInfoParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleInfoParamList = make_shared<vector<SaveActivityRequestFusionPromotionParamListModuleInfoParamList>>(expect1);
      }
    }
  }


  virtual ~SaveActivityRequestFusionPromotionParamList() = default;
};
class SaveActivityRequest : public Darabonba::Model {
public:
  shared_ptr<string> activityName{};
  shared_ptr<string> bizId{};
  shared_ptr<vector<long>> blackUidList{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<map<string, boost::any>> extendMap{};
  shared_ptr<vector<SaveActivityRequestFusionPromotionParamList>> fusionPromotionParamList{};
  shared_ptr<string> publishTag{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<long>> testAccountUidList{};
  shared_ptr<string> token{};
  shared_ptr<vector<long>> whiteUidList{};

  SaveActivityRequest() {}

  explicit SaveActivityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityName) {
      res["ActivityName"] = boost::any(*activityName);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (blackUidList) {
      res["BlackUidList"] = boost::any(*blackUidList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extendMap) {
      res["ExtendMap"] = boost::any(*extendMap);
    }
    if (fusionPromotionParamList) {
      vector<boost::any> temp1;
      for(auto item1:*fusionPromotionParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FusionPromotionParamList"] = boost::any(temp1);
    }
    if (publishTag) {
      res["PublishTag"] = boost::any(*publishTag);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (testAccountUidList) {
      res["TestAccountUidList"] = boost::any(*testAccountUidList);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (whiteUidList) {
      res["WhiteUidList"] = boost::any(*whiteUidList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityName") != m.end() && !m["ActivityName"].empty()) {
      activityName = make_shared<string>(boost::any_cast<string>(m["ActivityName"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BlackUidList") != m.end() && !m["BlackUidList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BlackUidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackUidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      blackUidList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExtendMap") != m.end() && !m["ExtendMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FusionPromotionParamList") != m.end() && !m["FusionPromotionParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["FusionPromotionParamList"].type()) {
        vector<SaveActivityRequestFusionPromotionParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FusionPromotionParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveActivityRequestFusionPromotionParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fusionPromotionParamList = make_shared<vector<SaveActivityRequestFusionPromotionParamList>>(expect1);
      }
    }
    if (m.find("PublishTag") != m.end() && !m["PublishTag"].empty()) {
      publishTag = make_shared<string>(boost::any_cast<string>(m["PublishTag"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TestAccountUidList") != m.end() && !m["TestAccountUidList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TestAccountUidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TestAccountUidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      testAccountUidList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("WhiteUidList") != m.end() && !m["WhiteUidList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteUidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteUidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      whiteUidList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~SaveActivityRequest() = default;
};
class SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<string> itemCode{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleKey{};
  shared_ptr<string> moduleName{};
  shared_ptr<vector<string>> moduleValueList{};
  shared_ptr<long> pricePlanId{};

  SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList() {}

  explicit SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["componentCode"] = boost::any(*componentCode);
    }
    if (itemCode) {
      res["itemCode"] = boost::any(*itemCode);
    }
    if (moduleId) {
      res["moduleId"] = boost::any(*moduleId);
    }
    if (moduleKey) {
      res["moduleKey"] = boost::any(*moduleKey);
    }
    if (moduleName) {
      res["moduleName"] = boost::any(*moduleName);
    }
    if (moduleValueList) {
      res["moduleValueList"] = boost::any(*moduleValueList);
    }
    if (pricePlanId) {
      res["pricePlanId"] = boost::any(*pricePlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentCode") != m.end() && !m["componentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["componentCode"]));
    }
    if (m.find("itemCode") != m.end() && !m["itemCode"].empty()) {
      itemCode = make_shared<string>(boost::any_cast<string>(m["itemCode"]));
    }
    if (m.find("moduleId") != m.end() && !m["moduleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["moduleId"]));
    }
    if (m.find("moduleKey") != m.end() && !m["moduleKey"].empty()) {
      moduleKey = make_shared<string>(boost::any_cast<string>(m["moduleKey"]));
    }
    if (m.find("moduleName") != m.end() && !m["moduleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["moduleName"]));
    }
    if (m.find("moduleValueList") != m.end() && !m["moduleValueList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["moduleValueList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["moduleValueList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      moduleValueList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pricePlanId") != m.end() && !m["pricePlanId"].empty()) {
      pricePlanId = make_shared<long>(boost::any_cast<long>(m["pricePlanId"]));
    }
  }


  virtual ~SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList() = default;
};
class SaveActivityShrinkRequestFusionPromotionParamList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> commodityCodeList{};
  shared_ptr<double> promotionValue{};
  shared_ptr<vector<string>> restrictedRegionList{};
  shared_ptr<vector<SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList>> moduleInfoParamList{};

  SaveActivityShrinkRequestFusionPromotionParamList() {}

  explicit SaveActivityShrinkRequestFusionPromotionParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCodeList) {
      res["CommodityCodeList"] = boost::any(*commodityCodeList);
    }
    if (promotionValue) {
      res["PromotionValue"] = boost::any(*promotionValue);
    }
    if (restrictedRegionList) {
      res["RestrictedRegionList"] = boost::any(*restrictedRegionList);
    }
    if (moduleInfoParamList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleInfoParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["moduleInfoParamList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCodeList") != m.end() && !m["CommodityCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CommodityCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CommodityCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commodityCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PromotionValue") != m.end() && !m["PromotionValue"].empty()) {
      promotionValue = make_shared<double>(boost::any_cast<double>(m["PromotionValue"]));
    }
    if (m.find("RestrictedRegionList") != m.end() && !m["RestrictedRegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RestrictedRegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RestrictedRegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      restrictedRegionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("moduleInfoParamList") != m.end() && !m["moduleInfoParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["moduleInfoParamList"].type()) {
        vector<SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["moduleInfoParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleInfoParamList = make_shared<vector<SaveActivityShrinkRequestFusionPromotionParamListModuleInfoParamList>>(expect1);
      }
    }
  }


  virtual ~SaveActivityShrinkRequestFusionPromotionParamList() = default;
};
class SaveActivityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> activityName{};
  shared_ptr<string> bizId{};
  shared_ptr<vector<long>> blackUidList{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<string> extendMapShrink{};
  shared_ptr<vector<SaveActivityShrinkRequestFusionPromotionParamList>> fusionPromotionParamList{};
  shared_ptr<string> publishTag{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<long>> testAccountUidList{};
  shared_ptr<string> token{};
  shared_ptr<vector<long>> whiteUidList{};

  SaveActivityShrinkRequest() {}

  explicit SaveActivityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityName) {
      res["ActivityName"] = boost::any(*activityName);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (blackUidList) {
      res["BlackUidList"] = boost::any(*blackUidList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extendMapShrink) {
      res["ExtendMap"] = boost::any(*extendMapShrink);
    }
    if (fusionPromotionParamList) {
      vector<boost::any> temp1;
      for(auto item1:*fusionPromotionParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FusionPromotionParamList"] = boost::any(temp1);
    }
    if (publishTag) {
      res["PublishTag"] = boost::any(*publishTag);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (testAccountUidList) {
      res["TestAccountUidList"] = boost::any(*testAccountUidList);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (whiteUidList) {
      res["WhiteUidList"] = boost::any(*whiteUidList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityName") != m.end() && !m["ActivityName"].empty()) {
      activityName = make_shared<string>(boost::any_cast<string>(m["ActivityName"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BlackUidList") != m.end() && !m["BlackUidList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BlackUidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackUidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      blackUidList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExtendMap") != m.end() && !m["ExtendMap"].empty()) {
      extendMapShrink = make_shared<string>(boost::any_cast<string>(m["ExtendMap"]));
    }
    if (m.find("FusionPromotionParamList") != m.end() && !m["FusionPromotionParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["FusionPromotionParamList"].type()) {
        vector<SaveActivityShrinkRequestFusionPromotionParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FusionPromotionParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveActivityShrinkRequestFusionPromotionParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fusionPromotionParamList = make_shared<vector<SaveActivityShrinkRequestFusionPromotionParamList>>(expect1);
      }
    }
    if (m.find("PublishTag") != m.end() && !m["PublishTag"].empty()) {
      publishTag = make_shared<string>(boost::any_cast<string>(m["PublishTag"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TestAccountUidList") != m.end() && !m["TestAccountUidList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TestAccountUidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TestAccountUidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      testAccountUidList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("WhiteUidList") != m.end() && !m["WhiteUidList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteUidList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteUidList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      whiteUidList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~SaveActivityShrinkRequest() = default;
};
class SaveActivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<vector<long>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveActivityResponseBody() {}

  explicit SaveActivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
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
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
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


  virtual ~SaveActivityResponseBody() = default;
};
class SaveActivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveActivityResponseBody> body{};

  SaveActivityResponse() {}

  explicit SaveActivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveActivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveActivityResponseBody>(model1);
      }
    }
  }


  virtual ~SaveActivityResponse() = default;
};
class SendCouponRequestUserAmountModelList : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<long> uid{};
  shared_ptr<long> userId{};
  shared_ptr<long> youhuiId{};

  SendCouponRequestUserAmountModelList() {}

  explicit SendCouponRequestUserAmountModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (youhuiId) {
      res["YouhuiId"] = boost::any(*youhuiId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("YouhuiId") != m.end() && !m["YouhuiId"].empty()) {
      youhuiId = make_shared<long>(boost::any_cast<long>(m["YouhuiId"]));
    }
  }


  virtual ~SendCouponRequestUserAmountModelList() = default;
};
class SendCouponRequest : public Darabonba::Model {
public:
  shared_ptr<long> bid{};
  shared_ptr<string> fromApp{};
  shared_ptr<string> operator_{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sellerId{};
  shared_ptr<long> templateId{};
  shared_ptr<vector<SendCouponRequestUserAmountModelList>> userAmountModelList{};

  SendCouponRequest() {}

  explicit SendCouponRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sellerId) {
      res["SellerId"] = boost::any(*sellerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (userAmountModelList) {
      vector<boost::any> temp1;
      for(auto item1:*userAmountModelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserAmountModelList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SellerId") != m.end() && !m["SellerId"].empty()) {
      sellerId = make_shared<long>(boost::any_cast<long>(m["SellerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("UserAmountModelList") != m.end() && !m["UserAmountModelList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserAmountModelList"].type()) {
        vector<SendCouponRequestUserAmountModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserAmountModelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendCouponRequestUserAmountModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userAmountModelList = make_shared<vector<SendCouponRequestUserAmountModelList>>(expect1);
      }
    }
  }


  virtual ~SendCouponRequest() = default;
};
class SendCouponResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<long> uid{};
  shared_ptr<long> userId{};
  shared_ptr<long> youhuiId{};

  SendCouponResponseBodyData() {}

  explicit SendCouponResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (youhuiId) {
      res["YouhuiId"] = boost::any(*youhuiId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("YouhuiId") != m.end() && !m["YouhuiId"].empty()) {
      youhuiId = make_shared<long>(boost::any_cast<long>(m["YouhuiId"]));
    }
  }


  virtual ~SendCouponResponseBodyData() = default;
};
class SendCouponResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> contextMap{};
  shared_ptr<long> count{};
  shared_ptr<vector<SendCouponResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  SendCouponResponseBody() {}

  explicit SendCouponResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contextMap) {
      res["ContextMap"] = boost::any(*contextMap);
    }
    if (count) {
      res["Count"] = boost::any(*count);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ContextMap") != m.end() && !m["ContextMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContextMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SendCouponResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendCouponResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SendCouponResponseBodyData>>(expect1);
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


  virtual ~SendCouponResponseBody() = default;
};
class SendCouponResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCouponResponseBody> body{};

  SendCouponResponse() {}

  explicit SendCouponResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCouponResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCouponResponseBody>(model1);
      }
    }
  }


  virtual ~SendCouponResponse() = default;
};
class TransferResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionCode{};
  shared_ptr<string> content{};

  TransferResourceRequest() {}

  explicit TransferResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~TransferResourceRequest() = default;
};
class TransferResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> procEnv{};

  TransferResourceResponseBodyData() {}

  explicit TransferResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (procEnv) {
      res["ProcEnv"] = boost::any(*procEnv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ProcEnv") != m.end() && !m["ProcEnv"].empty()) {
      procEnv = make_shared<string>(boost::any_cast<string>(m["ProcEnv"]));
    }
  }


  virtual ~TransferResourceResponseBodyData() = default;
};
class TransferResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<TransferResourceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TransferResourceResponseBody() {}

  explicit TransferResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransferResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TransferResourceResponseBodyData>(model1);
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


  virtual ~TransferResourceResponseBody() = default;
};
class TransferResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferResourceResponseBody> body{};

  TransferResourceResponse() {}

  explicit TransferResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransferResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferResourceResponseBody>(model1);
      }
    }
  }


  virtual ~TransferResourceResponse() = default;
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
  CreateCouponTemplateResponse createCouponTemplateWithOptions(shared_ptr<CreateCouponTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCouponTemplateResponse createCouponTemplate(shared_ptr<CreateCouponTemplateRequest> request);
  DiscardCouponListResponse discardCouponListWithOptions(shared_ptr<DiscardCouponListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DiscardCouponListResponse discardCouponList(shared_ptr<DiscardCouponListRequest> request);
  GetCouponPageResponse getCouponPageWithOptions(shared_ptr<GetCouponPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCouponPageResponse getCouponPage(shared_ptr<GetCouponPageRequest> request);
  GetCustomerListResponse getCustomerListWithOptions(shared_ptr<GetCustomerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCustomerListResponse getCustomerList(shared_ptr<GetCustomerListRequest> request);
  GetRelationResponse getRelationWithOptions(shared_ptr<GetRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRelationResponse getRelation(shared_ptr<GetRelationRequest> request);
  GetResellerPayOrderResponse getResellerPayOrderWithOptions(shared_ptr<GetResellerPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResellerPayOrderResponse getResellerPayOrder(shared_ptr<GetResellerPayOrderRequest> request);
  LabelPartnerUserResponse labelPartnerUserWithOptions(shared_ptr<LabelPartnerUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LabelPartnerUserResponse labelPartnerUser(shared_ptr<LabelPartnerUserRequest> request);
  MigrateResourceResponse migrateResourceWithOptions(shared_ptr<MigrateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MigrateResourceResponse migrateResource(shared_ptr<MigrateResourceRequest> request);
  OfflineActivityResponse offlineActivityWithOptions(shared_ptr<OfflineActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineActivityResponse offlineActivity(shared_ptr<OfflineActivityRequest> request);
  PayResultCallbackResponse payResultCallbackWithOptions(shared_ptr<PayResultCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PayResultCallbackResponse payResultCallback(shared_ptr<PayResultCallbackRequest> request);
  PublicActivityResponse publicActivityWithOptions(shared_ptr<PublicActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublicActivityResponse publicActivity(shared_ptr<PublicActivityRequest> request);
  QueryActivityResponse queryActivityWithOptions(shared_ptr<QueryActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryActivityResponse queryActivity(shared_ptr<QueryActivityRequest> request);
  QueryEcoRelationResponse queryEcoRelationWithOptions(shared_ptr<QueryEcoRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEcoRelationResponse queryEcoRelation(shared_ptr<QueryEcoRelationRequest> request);
  SaveActivityResponse saveActivityWithOptions(shared_ptr<SaveActivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveActivityResponse saveActivity(shared_ptr<SaveActivityRequest> request);
  SendCouponResponse sendCouponWithOptions(shared_ptr<SendCouponRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCouponResponse sendCoupon(shared_ptr<SendCouponRequest> request);
  TransferResourceResponse transferResourceWithOptions(shared_ptr<TransferResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferResourceResponse transferResource(shared_ptr<TransferResourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ResellerTrade20191227

#endif
