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
class CommodityValueResultOrder : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> tradeAmount{};
  shared_ptr<string> discountAmount{};
  shared_ptr<string> originalAmount{};

  CommodityValueResultOrder() {}

  explicit CommodityValueResultOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
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
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<string>(boost::any_cast<string>(m["TradeAmount"]));
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<string>(boost::any_cast<string>(m["DiscountAmount"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<string>(boost::any_cast<string>(m["OriginalAmount"]));
    }
  }


  virtual ~CommodityValueResultOrder() = default;
};
class CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> name{};
  shared_ptr<string> code{};
  shared_ptr<string> value{};
  shared_ptr<string> unit{};

  CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs() {}

  explicit CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs() = default;
};
class CommodityValueResultSubOrdersSubOrderModuleInstance : public Darabonba::Model {
public:
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleCode{};
  shared_ptr<double> totalProductFee{};
  shared_ptr<double> discountFee{};
  shared_ptr<double> payFee{};
  shared_ptr<string> priceUnit{};
  shared_ptr<bool> isPricingModule{};
  shared_ptr<bool> needOrderPay{};
  shared_ptr<string> priceType{};
  shared_ptr<vector<CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs>> moduleAttrs{};

  CommodityValueResultSubOrdersSubOrderModuleInstance() {}

  explicit CommodityValueResultSubOrdersSubOrderModuleInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (totalProductFee) {
      res["TotalProductFee"] = boost::any(*totalProductFee);
    }
    if (discountFee) {
      res["DiscountFee"] = boost::any(*discountFee);
    }
    if (payFee) {
      res["PayFee"] = boost::any(*payFee);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (isPricingModule) {
      res["IsPricingModule"] = boost::any(*isPricingModule);
    }
    if (needOrderPay) {
      res["NeedOrderPay"] = boost::any(*needOrderPay);
    }
    if (priceType) {
      res["PriceType"] = boost::any(*priceType);
    }
    if (moduleAttrs) {
      vector<boost::any> temp1;
      for(auto item1:*moduleAttrs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleAttrs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("TotalProductFee") != m.end() && !m["TotalProductFee"].empty()) {
      totalProductFee = make_shared<double>(boost::any_cast<double>(m["TotalProductFee"]));
    }
    if (m.find("DiscountFee") != m.end() && !m["DiscountFee"].empty()) {
      discountFee = make_shared<double>(boost::any_cast<double>(m["DiscountFee"]));
    }
    if (m.find("PayFee") != m.end() && !m["PayFee"].empty()) {
      payFee = make_shared<double>(boost::any_cast<double>(m["PayFee"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("IsPricingModule") != m.end() && !m["IsPricingModule"].empty()) {
      isPricingModule = make_shared<bool>(boost::any_cast<bool>(m["IsPricingModule"]));
    }
    if (m.find("NeedOrderPay") != m.end() && !m["NeedOrderPay"].empty()) {
      needOrderPay = make_shared<bool>(boost::any_cast<bool>(m["NeedOrderPay"]));
    }
    if (m.find("PriceType") != m.end() && !m["PriceType"].empty()) {
      priceType = make_shared<string>(boost::any_cast<string>(m["PriceType"]));
    }
    if (m.find("ModuleAttrs") != m.end() && !m["ModuleAttrs"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleAttrs"].type()) {
        vector<CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleAttrs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleAttrs = make_shared<vector<CommodityValueResultSubOrdersSubOrderModuleInstanceModuleAttrs>>(expect1);
      }
    }
  }


  virtual ~CommodityValueResultSubOrdersSubOrderModuleInstance() = default;
};
class CommodityValueResultSubOrdersSubOrder : public Darabonba::Model {
public:
  shared_ptr<vector<CommodityValueResultSubOrdersSubOrderModuleInstance>> moduleInstance{};

  CommodityValueResultSubOrdersSubOrder() {}

  explicit CommodityValueResultSubOrdersSubOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleInstance) {
      vector<boost::any> temp1;
      for(auto item1:*moduleInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleInstance") != m.end() && !m["ModuleInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleInstance"].type()) {
        vector<CommodityValueResultSubOrdersSubOrderModuleInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CommodityValueResultSubOrdersSubOrderModuleInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleInstance = make_shared<vector<CommodityValueResultSubOrdersSubOrderModuleInstance>>(expect1);
      }
    }
  }


  virtual ~CommodityValueResultSubOrdersSubOrder() = default;
};
class CommodityValueResultSubOrders : public Darabonba::Model {
public:
  shared_ptr<vector<CommodityValueResultSubOrdersSubOrder>> subOrder{};

  CommodityValueResultSubOrders() {}

  explicit CommodityValueResultSubOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subOrder) {
      vector<boost::any> temp1;
      for(auto item1:*subOrder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubOrder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubOrder") != m.end() && !m["SubOrder"].empty()) {
      if (typeid(vector<boost::any>) == m["SubOrder"].type()) {
        vector<CommodityValueResultSubOrdersSubOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubOrder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CommodityValueResultSubOrdersSubOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subOrder = make_shared<vector<CommodityValueResultSubOrdersSubOrder>>(expect1);
      }
    }
  }


  virtual ~CommodityValueResultSubOrders() = default;
};
class CommodityValueResultCoupons : public Darabonba::Model {
public:
  shared_ptr<double> canPromFee{};
  shared_ptr<string> couponDesc{};
  shared_ptr<string> couponName{};
  shared_ptr<string> couponOptionNo{};
  shared_ptr<bool> selected{};

  CommodityValueResultCoupons() {}

  explicit CommodityValueResultCoupons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canPromFee) {
      res["CanPromFee"] = boost::any(*canPromFee);
    }
    if (couponDesc) {
      res["CouponDesc"] = boost::any(*couponDesc);
    }
    if (couponName) {
      res["CouponName"] = boost::any(*couponName);
    }
    if (couponOptionNo) {
      res["CouponOptionNo"] = boost::any(*couponOptionNo);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanPromFee") != m.end() && !m["CanPromFee"].empty()) {
      canPromFee = make_shared<double>(boost::any_cast<double>(m["CanPromFee"]));
    }
    if (m.find("CouponDesc") != m.end() && !m["CouponDesc"].empty()) {
      couponDesc = make_shared<string>(boost::any_cast<string>(m["CouponDesc"]));
    }
    if (m.find("CouponName") != m.end() && !m["CouponName"].empty()) {
      couponName = make_shared<string>(boost::any_cast<string>(m["CouponName"]));
    }
    if (m.find("CouponOptionNo") != m.end() && !m["CouponOptionNo"].empty()) {
      couponOptionNo = make_shared<string>(boost::any_cast<string>(m["CouponOptionNo"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~CommodityValueResultCoupons() = default;
};
class CommodityValueResult : public Darabonba::Model {
public:
  shared_ptr<CommodityValueResultOrder> order{};
  shared_ptr<string> inquiryType{};
  shared_ptr<CommodityValueResultSubOrders> subOrders{};
  shared_ptr<vector<CommodityValueResultCoupons>> coupons{};

  CommodityValueResult() {}

  explicit CommodityValueResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = order ? boost::any(order->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inquiryType) {
      res["InquiryType"] = boost::any(*inquiryType);
    }
    if (subOrders) {
      res["SubOrders"] = subOrders ? boost::any(subOrders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (coupons) {
      vector<boost::any> temp1;
      for(auto item1:*coupons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Coupons"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(map<string, boost::any>) == m["Order"].type()) {
        CommodityValueResultOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Order"]));
        order = make_shared<CommodityValueResultOrder>(model1);
      }
    }
    if (m.find("InquiryType") != m.end() && !m["InquiryType"].empty()) {
      inquiryType = make_shared<string>(boost::any_cast<string>(m["InquiryType"]));
    }
    if (m.find("SubOrders") != m.end() && !m["SubOrders"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubOrders"].type()) {
        CommodityValueResultSubOrders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubOrders"]));
        subOrders = make_shared<CommodityValueResultSubOrders>(model1);
      }
    }
    if (m.find("Coupons") != m.end() && !m["Coupons"].empty()) {
      if (typeid(vector<boost::any>) == m["Coupons"].type()) {
        vector<CommodityValueResultCoupons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Coupons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CommodityValueResultCoupons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coupons = make_shared<vector<CommodityValueResultCoupons>>(expect1);
      }
    }
  }


  virtual ~CommodityValueResult() = default;
};
class CommodityValue : public Darabonba::Model {
public:
  shared_ptr<CommodityValueResult> result{};

  CommodityValue() {}

  explicit CommodityValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CommodityValueResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CommodityValueResult>(model1);
      }
    }
  }


  virtual ~CommodityValue() = default;
};
class CancelServiceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> needDelete{};
  shared_ptr<string> serviceId{};

  CancelServiceUsageRequest() {}

  explicit CancelServiceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (needDelete) {
      res["NeedDelete"] = boost::any(*needDelete);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("NeedDelete") != m.end() && !m["NeedDelete"].empty()) {
      needDelete = make_shared<bool>(boost::any_cast<bool>(m["NeedDelete"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~CancelServiceUsageRequest() = default;
};
class CancelServiceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelServiceUsageResponseBody() {}

  explicit CancelServiceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelServiceUsageResponseBody() = default;
};
class CancelServiceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelServiceUsageResponseBody> body{};

  CancelServiceUsageResponse() {}

  explicit CancelServiceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelServiceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelServiceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~CancelServiceUsageResponse() = default;
};
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
class CheckServiceDeployableRequest : public Darabonba::Model {
public:
  shared_ptr<string> postPaidAmount{};
  shared_ptr<string> prePaidAmount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> trialType{};

  CheckServiceDeployableRequest() {}

  explicit CheckServiceDeployableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (postPaidAmount) {
      res["PostPaidAmount"] = boost::any(*postPaidAmount);
    }
    if (prePaidAmount) {
      res["PrePaidAmount"] = boost::any(*prePaidAmount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PostPaidAmount") != m.end() && !m["PostPaidAmount"].empty()) {
      postPaidAmount = make_shared<string>(boost::any_cast<string>(m["PostPaidAmount"]));
    }
    if (m.find("PrePaidAmount") != m.end() && !m["PrePaidAmount"].empty()) {
      prePaidAmount = make_shared<string>(boost::any_cast<string>(m["PrePaidAmount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~CheckServiceDeployableRequest() = default;
};
class CheckServiceDeployableResponseBodyCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CheckServiceDeployableResponseBodyCheckResults() {}

  explicit CheckServiceDeployableResponseBodyCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CheckServiceDeployableResponseBodyCheckResults() = default;
};
class CheckServiceDeployableResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CheckServiceDeployableResponseBodyCheckResults>> checkResults{};
  shared_ptr<string> requestId{};

  CheckServiceDeployableResponseBody() {}

  explicit CheckServiceDeployableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkResults) {
      vector<boost::any> temp1;
      for(auto item1:*checkResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckResults"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckResults") != m.end() && !m["CheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckResults"].type()) {
        vector<CheckServiceDeployableResponseBodyCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckServiceDeployableResponseBodyCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkResults = make_shared<vector<CheckServiceDeployableResponseBodyCheckResults>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckServiceDeployableResponseBody() = default;
};
class CheckServiceDeployableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckServiceDeployableResponseBody> body{};

  CheckServiceDeployableResponse() {}

  explicit CheckServiceDeployableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceDeployableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceDeployableResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceDeployableResponse() = default;
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
  shared_ptr<string> couponId{};
  shared_ptr<long> payPeriod{};
  shared_ptr<string> payPeriodUnit{};
  shared_ptr<string> quotationId{};

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
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (payPeriod) {
      res["PayPeriod"] = boost::any(*payPeriod);
    }
    if (payPeriodUnit) {
      res["PayPeriodUnit"] = boost::any(*payPeriodUnit);
    }
    if (quotationId) {
      res["QuotationId"] = boost::any(*quotationId);
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
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("PayPeriod") != m.end() && !m["PayPeriod"].empty()) {
      payPeriod = make_shared<long>(boost::any_cast<long>(m["PayPeriod"]));
    }
    if (m.find("PayPeriodUnit") != m.end() && !m["PayPeriodUnit"].empty()) {
      payPeriodUnit = make_shared<string>(boost::any_cast<string>(m["PayPeriodUnit"]));
    }
    if (m.find("QuotationId") != m.end() && !m["QuotationId"].empty()) {
      quotationId = make_shared<string>(boost::any_cast<string>(m["QuotationId"]));
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
  shared_ptr<string> serviceInstanceId{};
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
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
  shared_ptr<string> couponId{};
  shared_ptr<long> payPeriod{};
  shared_ptr<string> payPeriodUnit{};
  shared_ptr<string> quotationId{};

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
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (payPeriod) {
      res["PayPeriod"] = boost::any(*payPeriod);
    }
    if (payPeriodUnit) {
      res["PayPeriodUnit"] = boost::any(*payPeriodUnit);
    }
    if (quotationId) {
      res["QuotationId"] = boost::any(*quotationId);
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
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("PayPeriod") != m.end() && !m["PayPeriod"].empty()) {
      payPeriod = make_shared<long>(boost::any_cast<long>(m["PayPeriod"]));
    }
    if (m.find("PayPeriodUnit") != m.end() && !m["PayPeriodUnit"].empty()) {
      payPeriodUnit = make_shared<string>(boost::any_cast<string>(m["PayPeriodUnit"]));
    }
    if (m.find("QuotationId") != m.end() && !m["QuotationId"].empty()) {
      quotationId = make_shared<string>(boost::any_cast<string>(m["QuotationId"]));
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
  shared_ptr<string> serviceInstanceId{};
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
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
class CreateServiceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> serviceId{};
  shared_ptr<map<string, string>> userInformation{};

  CreateServiceUsageRequest() {}

  explicit CreateServiceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userInformation) {
      res["UserInformation"] = boost::any(*userInformation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserInformation") != m.end() && !m["UserInformation"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["UserInformation"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userInformation = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~CreateServiceUsageRequest() = default;
};
class CreateServiceUsageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> userInformationShrink{};

  CreateServiceUsageShrinkRequest() {}

  explicit CreateServiceUsageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userInformationShrink) {
      res["UserInformation"] = boost::any(*userInformationShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserInformation") != m.end() && !m["UserInformation"].empty()) {
      userInformationShrink = make_shared<string>(boost::any_cast<string>(m["UserInformation"]));
    }
  }


  virtual ~CreateServiceUsageShrinkRequest() = default;
};
class CreateServiceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceUsageResponseBody() {}

  explicit CreateServiceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceUsageResponseBody() = default;
};
class CreateServiceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceUsageResponseBody> body{};

  CreateServiceUsageResponse() {}

  explicit CreateServiceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceUsageResponse() = default;
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
class DeployServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  DeployServiceInstanceRequest() {}

  explicit DeployServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployServiceInstanceRequest() = default;
};
class DeployServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployServiceInstanceResponseBody() {}

  explicit DeployServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployServiceInstanceResponseBody() = default;
};
class DeployServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployServiceInstanceResponseBody> body{};

  DeployServiceInstanceResponse() {}

  explicit DeployServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeployServiceInstanceResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
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
class GenerateServicePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> operationTypes{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GenerateServicePolicyRequest() {}

  explicit GenerateServicePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationTypes) {
      res["OperationTypes"] = boost::any(*operationTypes);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
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
    if (m.find("OperationTypes") != m.end() && !m["OperationTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperationTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperationTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operationTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~GenerateServicePolicyRequest() = default;
};
class GenerateServicePolicyResponseBodyMissingPolicy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> action{};
  shared_ptr<string> resource{};
  shared_ptr<string> serviceName{};

  GenerateServicePolicyResponseBodyMissingPolicy() {}

  explicit GenerateServicePolicyResponseBodyMissingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Action"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Action"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      action = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GenerateServicePolicyResponseBodyMissingPolicy() = default;
};
class GenerateServicePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateServicePolicyResponseBodyMissingPolicy>> missingPolicy{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};

  GenerateServicePolicyResponseBody() {}

  explicit GenerateServicePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (missingPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*missingPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MissingPolicy"] = boost::any(temp1);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MissingPolicy") != m.end() && !m["MissingPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["MissingPolicy"].type()) {
        vector<GenerateServicePolicyResponseBodyMissingPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MissingPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateServicePolicyResponseBodyMissingPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        missingPolicy = make_shared<vector<GenerateServicePolicyResponseBodyMissingPolicy>>(expect1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateServicePolicyResponseBody() = default;
};
class GenerateServicePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateServicePolicyResponseBody> body{};

  GenerateServicePolicyResponse() {}

  explicit GenerateServicePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateServicePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateServicePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateServicePolicyResponse() = default;
};
class GetServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<vector<string>> showDetails{};

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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (showDetails) {
      res["ShowDetails"] = boost::any(*showDetails);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("ShowDetails") != m.end() && !m["ShowDetails"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ShowDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ShowDetails"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      showDetails = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceRequest() = default;
};
class GetServiceResponseBodyCommodityCssMetadataComponentsMappings : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> mappings{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyCommodityCssMetadataComponentsMappings() {}

  explicit GetServiceResponseBodyCommodityCssMetadataComponentsMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mappings) {
      res["Mappings"] = boost::any(*mappings);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mappings") != m.end() && !m["Mappings"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Mappings"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      mappings = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityCssMetadataComponentsMappings() = default;
};
class GetServiceResponseBodyCommodityCssMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceResponseBodyCommodityCssMetadataComponentsMappings>> componentsMappings{};

  GetServiceResponseBodyCommodityCssMetadata() {}

  explicit GetServiceResponseBodyCommodityCssMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentsMappings) {
      vector<boost::any> temp1;
      for(auto item1:*componentsMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentsMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentsMappings") != m.end() && !m["ComponentsMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentsMappings"].type()) {
        vector<GetServiceResponseBodyCommodityCssMetadataComponentsMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentsMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityCssMetadataComponentsMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentsMappings = make_shared<vector<GetServiceResponseBodyCommodityCssMetadataComponentsMappings>>(expect1);
      }
    }
  }


  virtual ~GetServiceResponseBodyCommodityCssMetadata() = default;
};
class GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings : public Darabonba::Model {
public:
  shared_ptr<string> specificationCode{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings() {}

  explicit GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specificationCode) {
      res["SpecificationCode"] = boost::any(*specificationCode);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecificationCode") != m.end() && !m["SpecificationCode"].empty()) {
      specificationCode = make_shared<string>(boost::any_cast<string>(m["SpecificationCode"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings() = default;
};
class GetServiceResponseBodyCommodityMarketplaceMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>> specificationMappings{};

  GetServiceResponseBodyCommodityMarketplaceMetadata() {}

  explicit GetServiceResponseBodyCommodityMarketplaceMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specificationMappings) {
      vector<boost::any> temp1;
      for(auto item1:*specificationMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpecificationMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecificationMappings") != m.end() && !m["SpecificationMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["SpecificationMappings"].type()) {
        vector<GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpecificationMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specificationMappings = make_shared<vector<GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>>(expect1);
      }
    }
  }


  virtual ~GetServiceResponseBodyCommodityMarketplaceMetadata() = default;
};
class GetServiceResponseBodyCommoditySpecifications : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> times{};

  GetServiceResponseBodyCommoditySpecifications() {}

  explicit GetServiceResponseBodyCommoditySpecifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (times) {
      res["Times"] = boost::any(*times);
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
    if (m.find("Times") != m.end() && !m["Times"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Times"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Times"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      times = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceResponseBodyCommoditySpecifications() = default;
};
class GetServiceResponseBodyCommodity : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<GetServiceResponseBodyCommodityCssMetadata> cssMetadata{};
  shared_ptr<string> deployPage{};
  shared_ptr<GetServiceResponseBodyCommodityMarketplaceMetadata> marketplaceMetadata{};
  shared_ptr<map<string, vector<string>>> orderTime{};
  shared_ptr<string> saasBoostMetadata{};
  shared_ptr<vector<GetServiceResponseBodyCommoditySpecifications>> specifications{};
  shared_ptr<string> type{};

  GetServiceResponseBodyCommodity() {}

  explicit GetServiceResponseBodyCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (cssMetadata) {
      res["CssMetadata"] = cssMetadata ? boost::any(cssMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployPage) {
      res["DeployPage"] = boost::any(*deployPage);
    }
    if (marketplaceMetadata) {
      res["MarketplaceMetadata"] = marketplaceMetadata ? boost::any(marketplaceMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderTime) {
      res["OrderTime"] = boost::any(*orderTime);
    }
    if (saasBoostMetadata) {
      res["SaasBoostMetadata"] = boost::any(*saasBoostMetadata);
    }
    if (specifications) {
      vector<boost::any> temp1;
      for(auto item1:*specifications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Specifications"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CssMetadata") != m.end() && !m["CssMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["CssMetadata"].type()) {
        GetServiceResponseBodyCommodityCssMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CssMetadata"]));
        cssMetadata = make_shared<GetServiceResponseBodyCommodityCssMetadata>(model1);
      }
    }
    if (m.find("DeployPage") != m.end() && !m["DeployPage"].empty()) {
      deployPage = make_shared<string>(boost::any_cast<string>(m["DeployPage"]));
    }
    if (m.find("MarketplaceMetadata") != m.end() && !m["MarketplaceMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["MarketplaceMetadata"].type()) {
        GetServiceResponseBodyCommodityMarketplaceMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MarketplaceMetadata"]));
        marketplaceMetadata = make_shared<GetServiceResponseBodyCommodityMarketplaceMetadata>(model1);
      }
    }
    if (m.find("OrderTime") != m.end() && !m["OrderTime"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["OrderTime"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      orderTime = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("SaasBoostMetadata") != m.end() && !m["SaasBoostMetadata"].empty()) {
      saasBoostMetadata = make_shared<string>(boost::any_cast<string>(m["SaasBoostMetadata"]));
    }
    if (m.find("Specifications") != m.end() && !m["Specifications"].empty()) {
      if (typeid(vector<boost::any>) == m["Specifications"].type()) {
        vector<GetServiceResponseBodyCommoditySpecifications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Specifications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommoditySpecifications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specifications = make_shared<vector<GetServiceResponseBodyCommoditySpecifications>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodity() = default;
};
class GetServiceResponseBodyComplianceMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<string>> compliancePacks{};

  GetServiceResponseBodyComplianceMetadata() {}

  explicit GetServiceResponseBodyComplianceMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacks) {
      res["CompliancePacks"] = boost::any(*compliancePacks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacks") != m.end() && !m["CompliancePacks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CompliancePacks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CompliancePacks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      compliancePacks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceResponseBodyComplianceMetadata() = default;
};
class GetServiceResponseBodyInstanceRoleInfos : public Darabonba::Model {
public:
  shared_ptr<string> policyDocument{};
  shared_ptr<vector<string>> principals{};
  shared_ptr<string> roleName{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyInstanceRoleInfos() {}

  explicit GetServiceResponseBodyInstanceRoleInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (principals) {
      res["Principals"] = boost::any(*principals);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("Principals") != m.end() && !m["Principals"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Principals"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Principals"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      principals = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyInstanceRoleInfos() = default;
};
class GetServiceResponseBodyServiceDocumentInfos : public Darabonba::Model {
public:
  shared_ptr<string> documentUrl{};
  shared_ptr<string> locale{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyServiceDocumentInfos() {}

  explicit GetServiceResponseBodyServiceDocumentInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentUrl) {
      res["DocumentUrl"] = boost::any(*documentUrl);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentUrl") != m.end() && !m["DocumentUrl"].empty()) {
      documentUrl = make_shared<string>(boost::any_cast<string>(m["DocumentUrl"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceDocumentInfos() = default;
};
class GetServiceResponseBodyServiceInfosAgreements : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  GetServiceResponseBodyServiceInfosAgreements() {}

  explicit GetServiceResponseBodyServiceInfosAgreements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceInfosAgreements() = default;
};
class GetServiceResponseBodyServiceInfosSoftwares : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  GetServiceResponseBodyServiceInfosSoftwares() {}

  explicit GetServiceResponseBodyServiceInfosSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceInfosSoftwares() = default;
};
class GetServiceResponseBodyServiceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceResponseBodyServiceInfosAgreements>> agreements{};
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};
  shared_ptr<vector<GetServiceResponseBodyServiceInfosSoftwares>> softwares{};

  GetServiceResponseBodyServiceInfos() {}

  explicit GetServiceResponseBodyServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreements) {
      vector<boost::any> temp1;
      for(auto item1:*agreements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Agreements"] = boost::any(temp1);
    }
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
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agreements") != m.end() && !m["Agreements"].empty()) {
      if (typeid(vector<boost::any>) == m["Agreements"].type()) {
        vector<GetServiceResponseBodyServiceInfosAgreements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Agreements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceInfosAgreements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agreements = make_shared<vector<GetServiceResponseBodyServiceInfosAgreements>>(expect1);
      }
    }
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
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<GetServiceResponseBodyServiceInfosSoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceInfosSoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<GetServiceResponseBodyServiceInfosSoftwares>>(expect1);
      }
    }
  }


  virtual ~GetServiceResponseBodyServiceInfos() = default;
};
class GetServiceResponseBodySupportContacts : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  GetServiceResponseBodySupportContacts() {}

  explicit GetServiceResponseBodySupportContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetServiceResponseBodySupportContacts() = default;
};
class GetServiceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetServiceResponseBodyTags() {}

  explicit GetServiceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceResponseBodyTags() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> categories{};
  shared_ptr<GetServiceResponseBodyCommodity> commodity{};
  shared_ptr<GetServiceResponseBodyComplianceMetadata> complianceMetadata{};
  shared_ptr<string> deployFrom{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<long> duration{};
  shared_ptr<vector<GetServiceResponseBodyInstanceRoleInfos>> instanceRoleInfos{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> logMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> permission{};
  shared_ptr<string> policyNames{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetServiceResponseBodyServiceDocumentInfos>> serviceDocumentInfos{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<GetServiceResponseBodyServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierDesc{};
  shared_ptr<string> supplierLogo{};
  shared_ptr<string> supplierName{};
  shared_ptr<long> supplierUid{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<GetServiceResponseBodySupportContacts>> supportContacts{};
  shared_ptr<vector<GetServiceResponseBodyTags>> tags{};
  shared_ptr<string> tenantType{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> trialType{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complianceMetadata) {
      res["ComplianceMetadata"] = complianceMetadata ? boost::any(complianceMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployFrom) {
      res["DeployFrom"] = boost::any(*deployFrom);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceRoleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*instanceRoleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceRoleInfos"] = boost::any(temp1);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (logMetadata) {
      res["LogMetadata"] = boost::any(*logMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceDocumentInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceDocumentInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceDocumentInfos"] = boost::any(temp1);
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
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierDesc) {
      res["SupplierDesc"] = boost::any(*supplierDesc);
    }
    if (supplierLogo) {
      res["SupplierLogo"] = boost::any(*supplierLogo);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUid) {
      res["SupplierUid"] = boost::any(*supplierUid);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (supportContacts) {
      vector<boost::any> temp1;
      for(auto item1:*supportContacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportContacts"] = boost::any(temp1);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
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
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categories = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        GetServiceResponseBodyCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<GetServiceResponseBodyCommodity>(model1);
      }
    }
    if (m.find("ComplianceMetadata") != m.end() && !m["ComplianceMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceMetadata"].type()) {
        GetServiceResponseBodyComplianceMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceMetadata"]));
        complianceMetadata = make_shared<GetServiceResponseBodyComplianceMetadata>(model1);
      }
    }
    if (m.find("DeployFrom") != m.end() && !m["DeployFrom"].empty()) {
      deployFrom = make_shared<string>(boost::any_cast<string>(m["DeployFrom"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceRoleInfos") != m.end() && !m["InstanceRoleInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceRoleInfos"].type()) {
        vector<GetServiceResponseBodyInstanceRoleInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceRoleInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyInstanceRoleInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceRoleInfos = make_shared<vector<GetServiceResponseBodyInstanceRoleInfos>>(expect1);
      }
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("LogMetadata") != m.end() && !m["LogMetadata"].empty()) {
      logMetadata = make_shared<string>(boost::any_cast<string>(m["LogMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceDocumentInfos") != m.end() && !m["ServiceDocumentInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceDocumentInfos"].type()) {
        vector<GetServiceResponseBodyServiceDocumentInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceDocumentInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceDocumentInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceDocumentInfos = make_shared<vector<GetServiceResponseBodyServiceDocumentInfos>>(expect1);
      }
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
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
    if (m.find("ServiceProductUrl") != m.end() && !m["ServiceProductUrl"].empty()) {
      serviceProductUrl = make_shared<string>(boost::any_cast<string>(m["ServiceProductUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierDesc") != m.end() && !m["SupplierDesc"].empty()) {
      supplierDesc = make_shared<string>(boost::any_cast<string>(m["SupplierDesc"]));
    }
    if (m.find("SupplierLogo") != m.end() && !m["SupplierLogo"].empty()) {
      supplierLogo = make_shared<string>(boost::any_cast<string>(m["SupplierLogo"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUid") != m.end() && !m["SupplierUid"].empty()) {
      supplierUid = make_shared<long>(boost::any_cast<long>(m["SupplierUid"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("SupportContacts") != m.end() && !m["SupportContacts"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportContacts"].type()) {
        vector<GetServiceResponseBodySupportContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportContacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodySupportContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportContacts = make_shared<vector<GetServiceResponseBodySupportContacts>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetServiceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetServiceResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetServiceResponseBody() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceResponseBody> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
};
class GetServiceEstimateCostRequestCommodity : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<long> payPeriod{};
  shared_ptr<string> payPeriodUnit{};
  shared_ptr<string> quotationId{};

  GetServiceEstimateCostRequestCommodity() {}

  explicit GetServiceEstimateCostRequestCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (payPeriod) {
      res["PayPeriod"] = boost::any(*payPeriod);
    }
    if (payPeriodUnit) {
      res["PayPeriodUnit"] = boost::any(*payPeriodUnit);
    }
    if (quotationId) {
      res["QuotationId"] = boost::any(*quotationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("PayPeriod") != m.end() && !m["PayPeriod"].empty()) {
      payPeriod = make_shared<long>(boost::any_cast<long>(m["PayPeriod"]));
    }
    if (m.find("PayPeriodUnit") != m.end() && !m["PayPeriodUnit"].empty()) {
      payPeriodUnit = make_shared<string>(boost::any_cast<string>(m["PayPeriodUnit"]));
    }
    if (m.find("QuotationId") != m.end() && !m["QuotationId"].empty()) {
      quotationId = make_shared<string>(boost::any_cast<string>(m["QuotationId"]));
    }
  }


  virtual ~GetServiceEstimateCostRequestCommodity() = default;
};
class GetServiceEstimateCostRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<GetServiceEstimateCostRequestCommodity> commodity{};
  shared_ptr<string> operationName{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GetServiceEstimateCostRequest() {}

  explicit GetServiceEstimateCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
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
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        GetServiceEstimateCostRequestCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<GetServiceEstimateCostRequestCommodity>(model1);
      }
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


  virtual ~GetServiceEstimateCostRequest() = default;
};
class GetServiceEstimateCostShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityShrink{};
  shared_ptr<string> operationName{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GetServiceEstimateCostShrinkRequest() {}

  explicit GetServiceEstimateCostShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityShrink) {
      res["Commodity"] = boost::any(*commodityShrink);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
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
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      commodityShrink = make_shared<string>(boost::any_cast<string>(m["Commodity"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
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


  virtual ~GetServiceEstimateCostShrinkRequest() = default;
};
class GetServiceEstimateCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, CommodityValue>> commodity{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resources{};

  GetServiceEstimateCostResponseBody() {}

  explicit GetServiceEstimateCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodity) {
      map<string, boost::any> temp1;
      for(auto item1:*commodity){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Commodity"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        map<string, CommodityValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Commodity"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            CommodityValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        commodity = make_shared<map<string, CommodityValue>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Resources"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resources = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetServiceEstimateCostResponseBody() = default;
};
class GetServiceEstimateCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceEstimateCostResponseBody> body{};

  GetServiceEstimateCostResponse() {}

  explicit GetServiceEstimateCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceEstimateCostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceEstimateCostResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceEstimateCostResponse() = default;
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
class GetServiceInstanceResponseBodyServiceUpgradableServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  GetServiceInstanceResponseBodyServiceUpgradableServiceInfos() {}

  explicit GetServiceInstanceResponseBodyServiceUpgradableServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyServiceUpgradableServiceInfos() = default;
};
class GetServiceInstanceResponseBodyService : public Darabonba::Model {
public:
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> serviceDocUrl{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyServiceServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<GetServiceInstanceResponseBodyServiceUpgradableServiceInfos>> upgradableServiceInfos{};
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
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
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
    if (upgradableServiceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*upgradableServiceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpgradableServiceInfos"] = boost::any(temp1);
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
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
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
    if (m.find("UpgradableServiceInfos") != m.end() && !m["UpgradableServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["UpgradableServiceInfos"].type()) {
        vector<GetServiceInstanceResponseBodyServiceUpgradableServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpgradableServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyServiceUpgradableServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upgradableServiceInfos = make_shared<vector<GetServiceInstanceResponseBodyServiceUpgradableServiceInfos>>(expect1);
      }
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
  shared_ptr<bool> supportTrialToPrivate{};
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
    if (supportTrialToPrivate) {
      res["SupportTrialToPrivate"] = boost::any(*supportTrialToPrivate);
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
    if (m.find("SupportTrialToPrivate") != m.end() && !m["SupportTrialToPrivate"].empty()) {
      supportTrialToPrivate = make_shared<bool>(boost::any_cast<bool>(m["SupportTrialToPrivate"]));
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
class GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod : public Darabonba::Model {
public:
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> resourceArn{};

  GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod() {}

  explicit GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
  }


  virtual ~GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod() = default;
};
class GetServiceInstanceSubscriptionEstimateCostRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> orderType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod>> resourcePeriod{};
  shared_ptr<string> serviceInstanceId{};

  GetServiceInstanceSubscriptionEstimateCostRequest() {}

  explicit GetServiceInstanceSubscriptionEstimateCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourcePeriod) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePeriod){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePeriod"] = boost::any(temp1);
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
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourcePeriod") != m.end() && !m["ResourcePeriod"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePeriod"].type()) {
        vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePeriod"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePeriod = make_shared<vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod>>(expect1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~GetServiceInstanceSubscriptionEstimateCostRequest() = default;
};
class GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos : public Darabonba::Model {
public:
  shared_ptr<double> discountAmount{};
  shared_ptr<double> originalAmount{};
  shared_ptr<string> resource{};
  shared_ptr<double> tradeAmount{};

  GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos() {}

  explicit GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos() = default;
};
class GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> ruleDescId{};

  GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules() {}

  explicit GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleDescId) {
      res["RuleDescId"] = boost::any(*ruleDescId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleDescId") != m.end() && !m["RuleDescId"].empty()) {
      ruleDescId = make_shared<long>(boost::any_cast<long>(m["RuleDescId"]));
    }
  }


  virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules() = default;
};
class GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos>> detailInfos{};
  shared_ptr<double> discountAmount{};
  shared_ptr<double> originalAmount{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> resourceArn{};
  shared_ptr<vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules>> rules{};
  shared_ptr<double> tradeAmount{};

  GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices() {}

  explicit GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (detailInfos) {
      vector<boost::any> temp1;
      for(auto item1:*detailInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailInfos"] = boost::any(temp1);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DetailInfos") != m.end() && !m["DetailInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailInfos"].type()) {
        vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailInfos = make_shared<vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos>>(expect1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules>>(expect1);
      }
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices() = default;
};
class GetServiceInstanceSubscriptionEstimateCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices>> resourcePrices{};

  GetServiceInstanceSubscriptionEstimateCostResponseBody() {}

  explicit GetServiceInstanceSubscriptionEstimateCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourcePrices) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePrices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePrices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourcePrices") != m.end() && !m["ResourcePrices"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePrices"].type()) {
        vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePrices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePrices = make_shared<vector<GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices>>(expect1);
      }
    }
  }


  virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBody() = default;
};
class GetServiceInstanceSubscriptionEstimateCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceInstanceSubscriptionEstimateCostResponseBody> body{};

  GetServiceInstanceSubscriptionEstimateCostResponse() {}

  explicit GetServiceInstanceSubscriptionEstimateCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceInstanceSubscriptionEstimateCostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceInstanceSubscriptionEstimateCostResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceInstanceSubscriptionEstimateCostResponse() = default;
};
class GetServiceProvisionsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GetServiceProvisionsRequest() {}

  explicit GetServiceProvisionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~GetServiceProvisionsRequest() = default;
};
class GetServiceProvisionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GetServiceProvisionsShrinkRequest() {}

  explicit GetServiceProvisionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
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
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~GetServiceProvisionsShrinkRequest() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> enableURL{};
  shared_ptr<string> status{};

  GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (enableURL) {
      res["EnableURL"] = boost::any(*enableURL);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("EnableURL") != m.end() && !m["EnableURL"].empty()) {
      enableURL = make_shared<string>(boost::any_cast<string>(m["EnableURL"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> apiProductId{};
  shared_ptr<string> apiType{};
  shared_ptr<map<string, boost::any>> parameters{};

  GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (apiProductId) {
      res["ApiProductId"] = boost::any(*apiProductId);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("ApiProductId") != m.end() && !m["ApiProductId"].empty()) {
      apiProductId = make_shared<string>(boost::any_cast<string>(m["ApiProductId"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles : public Darabonba::Model {
public:
  shared_ptr<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation> apiForCreation{};
  shared_ptr<bool> created{};
  shared_ptr<string> function{};
  shared_ptr<string> roleName{};

  GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiForCreation) {
      res["ApiForCreation"] = apiForCreation ? boost::any(apiForCreation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (function) {
      res["Function"] = boost::any(*function);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiForCreation") != m.end() && !m["ApiForCreation"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiForCreation"].type()) {
        GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiForCreation"]));
        apiForCreation = make_shared<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation>(model1);
      }
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<bool>(boost::any_cast<bool>(m["Created"]));
    }
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["Function"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision : public Darabonba::Model {
public:
  shared_ptr<string> authorizationURL{};
  shared_ptr<vector<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles>> roles{};

  GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationURL) {
      res["AuthorizationURL"] = boost::any(*authorizationURL);
    }
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Roles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationURL") != m.end() && !m["AuthorizationURL"].empty()) {
      authorizationURL = make_shared<string>(boost::any_cast<string>(m["AuthorizationURL"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles>>(expect1);
      }
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisions : public Darabonba::Model {
public:
  shared_ptr<bool> autoEnableService{};
  shared_ptr<vector<GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions>> commodityProvisions{};
  shared_ptr<string> enableURL{};
  shared_ptr<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision> roleProvision{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  GetServiceProvisionsResponseBodyServiceProvisions() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoEnableService) {
      res["AutoEnableService"] = boost::any(*autoEnableService);
    }
    if (commodityProvisions) {
      vector<boost::any> temp1;
      for(auto item1:*commodityProvisions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommodityProvisions"] = boost::any(temp1);
    }
    if (enableURL) {
      res["EnableURL"] = boost::any(*enableURL);
    }
    if (roleProvision) {
      res["RoleProvision"] = roleProvision ? boost::any(roleProvision->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
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
    if (m.find("AutoEnableService") != m.end() && !m["AutoEnableService"].empty()) {
      autoEnableService = make_shared<bool>(boost::any_cast<bool>(m["AutoEnableService"]));
    }
    if (m.find("CommodityProvisions") != m.end() && !m["CommodityProvisions"].empty()) {
      if (typeid(vector<boost::any>) == m["CommodityProvisions"].type()) {
        vector<GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommodityProvisions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commodityProvisions = make_shared<vector<GetServiceProvisionsResponseBodyServiceProvisionsCommodityProvisions>>(expect1);
      }
    }
    if (m.find("EnableURL") != m.end() && !m["EnableURL"].empty()) {
      enableURL = make_shared<string>(boost::any_cast<string>(m["EnableURL"]));
    }
    if (m.find("RoleProvision") != m.end() && !m["RoleProvision"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleProvision"].type()) {
        GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleProvision"]));
        roleProvision = make_shared<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision>(model1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisions() = default;
};
class GetServiceProvisionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetServiceProvisionsResponseBodyServiceProvisions>> serviceProvisions{};

  GetServiceProvisionsResponseBody() {}

  explicit GetServiceProvisionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceProvisions) {
      vector<boost::any> temp1;
      for(auto item1:*serviceProvisions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceProvisions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceProvisions") != m.end() && !m["ServiceProvisions"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceProvisions"].type()) {
        vector<GetServiceProvisionsResponseBodyServiceProvisions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceProvisions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceProvisionsResponseBodyServiceProvisions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceProvisions = make_shared<vector<GetServiceProvisionsResponseBodyServiceProvisions>>(expect1);
      }
    }
  }


  virtual ~GetServiceProvisionsResponseBody() = default;
};
class GetServiceProvisionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceProvisionsResponseBody> body{};

  GetServiceProvisionsResponse() {}

  explicit GetServiceProvisionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceProvisionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceProvisionsResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceProvisionsResponse() = default;
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
class GetUserInformationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetUserInformationRequest() {}

  explicit GetUserInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetUserInformationRequest() = default;
};
class GetUserInformationResponseBodyDeliverySettings : public Darabonba::Model {
public:
  shared_ptr<bool> actiontrailDeliveryToOssEnabled{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<bool> ossEnabled{};
  shared_ptr<long> ossExpirationDays{};
  shared_ptr<string> ossPath{};

  GetUserInformationResponseBodyDeliverySettings() {}

  explicit GetUserInformationResponseBodyDeliverySettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actiontrailDeliveryToOssEnabled) {
      res["ActiontrailDeliveryToOssEnabled"] = boost::any(*actiontrailDeliveryToOssEnabled);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossEnabled) {
      res["OssEnabled"] = boost::any(*ossEnabled);
    }
    if (ossExpirationDays) {
      res["OssExpirationDays"] = boost::any(*ossExpirationDays);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiontrailDeliveryToOssEnabled") != m.end() && !m["ActiontrailDeliveryToOssEnabled"].empty()) {
      actiontrailDeliveryToOssEnabled = make_shared<bool>(boost::any_cast<bool>(m["ActiontrailDeliveryToOssEnabled"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssEnabled") != m.end() && !m["OssEnabled"].empty()) {
      ossEnabled = make_shared<bool>(boost::any_cast<bool>(m["OssEnabled"]));
    }
    if (m.find("OssExpirationDays") != m.end() && !m["OssExpirationDays"].empty()) {
      ossExpirationDays = make_shared<long>(boost::any_cast<long>(m["OssExpirationDays"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
  }


  virtual ~GetUserInformationResponseBodyDeliverySettings() = default;
};
class GetUserInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserInformationResponseBodyDeliverySettings> deliverySettings{};
  shared_ptr<string> requestId{};

  GetUserInformationResponseBody() {}

  explicit GetUserInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverySettings) {
      res["DeliverySettings"] = deliverySettings ? boost::any(deliverySettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliverySettings") != m.end() && !m["DeliverySettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliverySettings"].type()) {
        GetUserInformationResponseBodyDeliverySettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliverySettings"]));
        deliverySettings = make_shared<GetUserInformationResponseBodyDeliverySettings>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserInformationResponseBody() = default;
};
class GetUserInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserInformationResponseBody> body{};

  GetUserInformationResponse() {}

  explicit GetUserInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserInformationResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserInformationResponse() = default;
};
class ListPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

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
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPoliciesResponseBodyPolicies() = default;
};
class ListPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPoliciesResponseBodyPolicies>> policies{};
  shared_ptr<string> requestId{};

  ListPoliciesResponseBody() {}

  explicit ListPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPoliciesResponseBody() = default;
};
class ListPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesResponseBody> body{};

  ListPoliciesResponse() {}

  explicit ListPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesResponse() = default;
};
class ListServiceCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> requestId{};

  ListServiceCategoriesResponseBody() {}

  explicit ListServiceCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListServiceCategoriesResponseBody() = default;
};
class ListServiceCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceCategoriesResponseBody> body{};

  ListServiceCategoriesResponse() {}

  explicit ListServiceCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceCategoriesResponse() = default;
};
class ListServiceInstanceBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> billingDate{};
  shared_ptr<string> granularity{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> serviceInstanceId{};

  ListServiceInstanceBillRequest() {}

  explicit ListServiceInstanceBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~ListServiceInstanceBillRequest() = default;
};
class ListServiceInstanceBillResponseBodyItem : public Darabonba::Model {
public:
  shared_ptr<string> billingCycle{};
  shared_ptr<string> billingDate{};
  shared_ptr<string> billingItem{};
  shared_ptr<string> billingItemCode{};
  shared_ptr<string> currency{};
  shared_ptr<string> deductedByResourcePackage{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> invoiceDiscount{};
  shared_ptr<string> listPrice{};
  shared_ptr<string> listPriceUnit{};
  shared_ptr<string> pretaxAmount{};
  shared_ptr<string> pretaxGrossAmount{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productDetail{};
  shared_ptr<string> productName{};
  shared_ptr<string> splitBillingCycle{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> usage{};
  shared_ptr<string> usageUnit{};

  ListServiceInstanceBillResponseBodyItem() {}

  explicit ListServiceInstanceBillResponseBodyItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (billingDate) {
      res["BillingDate"] = boost::any(*billingDate);
    }
    if (billingItem) {
      res["BillingItem"] = boost::any(*billingItem);
    }
    if (billingItemCode) {
      res["BillingItemCode"] = boost::any(*billingItemCode);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (deductedByResourcePackage) {
      res["DeductedByResourcePackage"] = boost::any(*deductedByResourcePackage);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (invoiceDiscount) {
      res["InvoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (listPrice) {
      res["ListPrice"] = boost::any(*listPrice);
    }
    if (listPriceUnit) {
      res["ListPriceUnit"] = boost::any(*listPriceUnit);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productDetail) {
      res["ProductDetail"] = boost::any(*productDetail);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (splitBillingCycle) {
      res["SplitBillingCycle"] = boost::any(*splitBillingCycle);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    if (usageUnit) {
      res["UsageUnit"] = boost::any(*usageUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
    }
    if (m.find("BillingDate") != m.end() && !m["BillingDate"].empty()) {
      billingDate = make_shared<string>(boost::any_cast<string>(m["BillingDate"]));
    }
    if (m.find("BillingItem") != m.end() && !m["BillingItem"].empty()) {
      billingItem = make_shared<string>(boost::any_cast<string>(m["BillingItem"]));
    }
    if (m.find("BillingItemCode") != m.end() && !m["BillingItemCode"].empty()) {
      billingItemCode = make_shared<string>(boost::any_cast<string>(m["BillingItemCode"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DeductedByResourcePackage") != m.end() && !m["DeductedByResourcePackage"].empty()) {
      deductedByResourcePackage = make_shared<string>(boost::any_cast<string>(m["DeductedByResourcePackage"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InvoiceDiscount") != m.end() && !m["InvoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<string>(boost::any_cast<string>(m["InvoiceDiscount"]));
    }
    if (m.find("ListPrice") != m.end() && !m["ListPrice"].empty()) {
      listPrice = make_shared<string>(boost::any_cast<string>(m["ListPrice"]));
    }
    if (m.find("ListPriceUnit") != m.end() && !m["ListPriceUnit"].empty()) {
      listPriceUnit = make_shared<string>(boost::any_cast<string>(m["ListPriceUnit"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<string>(boost::any_cast<string>(m["PretaxAmount"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["PretaxGrossAmount"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductDetail") != m.end() && !m["ProductDetail"].empty()) {
      productDetail = make_shared<string>(boost::any_cast<string>(m["ProductDetail"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("SplitBillingCycle") != m.end() && !m["SplitBillingCycle"].empty()) {
      splitBillingCycle = make_shared<string>(boost::any_cast<string>(m["SplitBillingCycle"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
    if (m.find("UsageUnit") != m.end() && !m["UsageUnit"].empty()) {
      usageUnit = make_shared<string>(boost::any_cast<string>(m["UsageUnit"]));
    }
  }


  virtual ~ListServiceInstanceBillResponseBodyItem() = default;
};
class ListServiceInstanceBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceInstanceBillResponseBodyItem>> item{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListServiceInstanceBillResponseBody() {}

  explicit ListServiceInstanceBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<ListServiceInstanceBillResponseBodyItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceBillResponseBodyItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<ListServiceInstanceBillResponseBodyItem>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceInstanceBillResponseBody() = default;
};
class ListServiceInstanceBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstanceBillResponseBody> body{};

  ListServiceInstanceBillResponse() {}

  explicit ListServiceInstanceBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceInstanceBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstanceBillResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstanceBillResponse() = default;
};
class ListServiceInstanceLogsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceInstanceLogsRequestFilter() {}

  explicit ListServiceInstanceLogsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstanceLogsRequestFilter() = default;
};
class ListServiceInstanceLogsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceInstanceLogsRequestFilter>> filter{};
  shared_ptr<string> logSource{};
  shared_ptr<string> logstore{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> sortOrder{};

  ListServiceInstanceLogsRequest() {}

  explicit ListServiceInstanceLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceInstanceLogsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceLogsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceInstanceLogsRequestFilter>>(expect1);
      }
    }
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
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListServiceInstanceLogsRequest() = default;
};
class ListServiceInstanceLogsResponseBodyServiceInstancesLogs : public Darabonba::Model {
public:
  shared_ptr<string> compliancePackType{};
  shared_ptr<string> complianceRuleName{};
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
    if (compliancePackType) {
      res["CompliancePackType"] = boost::any(*compliancePackType);
    }
    if (complianceRuleName) {
      res["ComplianceRuleName"] = boost::any(*complianceRuleName);
    }
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
    if (m.find("CompliancePackType") != m.end() && !m["CompliancePackType"].empty()) {
      compliancePackType = make_shared<string>(boost::any_cast<string>(m["CompliancePackType"]));
    }
    if (m.find("ComplianceRuleName") != m.end() && !m["ComplianceRuleName"].empty()) {
      complianceRuleName = make_shared<string>(boost::any_cast<string>(m["ComplianceRuleName"]));
    }
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
class ListServiceInstanceResourcesRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> values{};

  ListServiceInstanceResourcesRequestFilters() {}

  explicit ListServiceInstanceResourcesRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListServiceInstanceResourcesRequestFilters() = default;
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
  shared_ptr<vector<ListServiceInstanceResourcesRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
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
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
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
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListServiceInstanceResourcesRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceResourcesRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListServiceInstanceResourcesRequestFilters>>(expect1);
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
class ListServiceInstanceUpgradeHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  ListServiceInstanceUpgradeHistoryRequest() {}

  explicit ListServiceInstanceUpgradeHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~ListServiceInstanceUpgradeHistoryRequest() = default;
};
class ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> fromVersion{};
  shared_ptr<string> results{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> toVersion{};
  shared_ptr<string> type{};
  shared_ptr<string> upgradeHistoryId{};

  ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory() {}

  explicit ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fromVersion) {
      res["FromVersion"] = boost::any(*fromVersion);
    }
    if (results) {
      res["Results"] = boost::any(*results);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (toVersion) {
      res["ToVersion"] = boost::any(*toVersion);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (upgradeHistoryId) {
      res["UpgradeHistoryId"] = boost::any(*upgradeHistoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FromVersion") != m.end() && !m["FromVersion"].empty()) {
      fromVersion = make_shared<string>(boost::any_cast<string>(m["FromVersion"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      results = make_shared<string>(boost::any_cast<string>(m["Results"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ToVersion") != m.end() && !m["ToVersion"].empty()) {
      toVersion = make_shared<string>(boost::any_cast<string>(m["ToVersion"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpgradeHistoryId") != m.end() && !m["UpgradeHistoryId"].empty()) {
      upgradeHistoryId = make_shared<string>(boost::any_cast<string>(m["UpgradeHistoryId"]));
    }
  }


  virtual ~ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory() = default;
};
class ListServiceInstanceUpgradeHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory>> upgradeHistory{};

  ListServiceInstanceUpgradeHistoryResponseBody() {}

  explicit ListServiceInstanceUpgradeHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (upgradeHistory) {
      vector<boost::any> temp1;
      for(auto item1:*upgradeHistory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpgradeHistory"] = boost::any(temp1);
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
    if (m.find("UpgradeHistory") != m.end() && !m["UpgradeHistory"].empty()) {
      if (typeid(vector<boost::any>) == m["UpgradeHistory"].type()) {
        vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpgradeHistory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upgradeHistory = make_shared<vector<ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory>>(expect1);
      }
    }
  }


  virtual ~ListServiceInstanceUpgradeHistoryResponseBody() = default;
};
class ListServiceInstanceUpgradeHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstanceUpgradeHistoryResponseBody> body{};

  ListServiceInstanceUpgradeHistoryResponse() {}

  explicit ListServiceInstanceUpgradeHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceInstanceUpgradeHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstanceUpgradeHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstanceUpgradeHistoryResponse() = default;
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
  shared_ptr<bool> supportTrialToPrivate{};
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
    if (supportTrialToPrivate) {
      res["SupportTrialToPrivate"] = boost::any(*supportTrialToPrivate);
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
    if (m.find("SupportTrialToPrivate") != m.end() && !m["SupportTrialToPrivate"].empty()) {
      supportTrialToPrivate = make_shared<bool>(boost::any_cast<bool>(m["SupportTrialToPrivate"]));
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
class ListServiceUsagesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceUsagesRequestFilter() {}

  explicit ListServiceUsagesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceUsagesRequestFilter() = default;
};
class ListServiceUsagesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceUsagesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListServiceUsagesRequest() {}

  explicit ListServiceUsagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceUsagesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceUsagesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceUsagesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListServiceUsagesRequest() = default;
};
class ListServiceUsagesResponseBodyServiceUsages : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createTime{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userAliUid{};
  shared_ptr<map<string, string>> userInformation{};

  ListServiceUsagesResponseBodyServiceUsages() {}

  explicit ListServiceUsagesResponseBodyServiceUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userAliUid) {
      res["UserAliUid"] = boost::any(*userAliUid);
    }
    if (userInformation) {
      res["UserInformation"] = boost::any(*userInformation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserAliUid") != m.end() && !m["UserAliUid"].empty()) {
      userAliUid = make_shared<long>(boost::any_cast<long>(m["UserAliUid"]));
    }
    if (m.find("UserInformation") != m.end() && !m["UserInformation"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["UserInformation"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userInformation = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListServiceUsagesResponseBodyServiceUsages() = default;
};
class ListServiceUsagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceUsagesResponseBodyServiceUsages>> serviceUsages{};
  shared_ptr<long> totalCount{};

  ListServiceUsagesResponseBody() {}

  explicit ListServiceUsagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceUsages) {
      vector<boost::any> temp1;
      for(auto item1:*serviceUsages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceUsages"] = boost::any(temp1);
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
    if (m.find("ServiceUsages") != m.end() && !m["ServiceUsages"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceUsages"].type()) {
        vector<ListServiceUsagesResponseBodyServiceUsages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceUsages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceUsagesResponseBodyServiceUsages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceUsages = make_shared<vector<ListServiceUsagesResponseBodyServiceUsages>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceUsagesResponseBody() = default;
};
class ListServiceUsagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceUsagesResponseBody> body{};

  ListServiceUsagesResponse() {}

  explicit ListServiceUsagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceUsagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceUsagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceUsagesResponse() = default;
};
class ListServicesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServicesRequestFilter() {}

  explicit ListServicesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServicesRequestFilter() = default;
};
class ListServicesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServicesRequestTag() {}

  explicit ListServicesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServicesRequestTag() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServicesRequestFilter>> filter{};
  shared_ptr<string> fuzzyKeyword{};
  shared_ptr<bool> inUsed{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderByType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceAccessType{};
  shared_ptr<vector<ListServicesRequestTag>> tag{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (fuzzyKeyword) {
      res["FuzzyKeyword"] = boost::any(*fuzzyKeyword);
    }
    if (inUsed) {
      res["InUsed"] = boost::any(*inUsed);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderByType) {
      res["OrderByType"] = boost::any(*orderByType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceAccessType) {
      res["ServiceAccessType"] = boost::any(*serviceAccessType);
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
    if (m.find("FuzzyKeyword") != m.end() && !m["FuzzyKeyword"].empty()) {
      fuzzyKeyword = make_shared<string>(boost::any_cast<string>(m["FuzzyKeyword"]));
    }
    if (m.find("InUsed") != m.end() && !m["InUsed"].empty()) {
      inUsed = make_shared<bool>(boost::any_cast<bool>(m["InUsed"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderByType") != m.end() && !m["OrderByType"].empty()) {
      orderByType = make_shared<string>(boost::any_cast<string>(m["OrderByType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceAccessType") != m.end() && !m["ServiceAccessType"].empty()) {
      serviceAccessType = make_shared<string>(boost::any_cast<string>(m["ServiceAccessType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServicesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServicesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyServicesCommodity : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> deployPage{};

  ListServicesResponseBodyServicesCommodity() {}

  explicit ListServicesResponseBodyServicesCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (deployPage) {
      res["DeployPage"] = boost::any(*deployPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("DeployPage") != m.end() && !m["DeployPage"].empty()) {
      deployPage = make_shared<string>(boost::any_cast<string>(m["DeployPage"]));
    }
  }


  virtual ~ListServicesResponseBodyServicesCommodity() = default;
};
class ListServicesResponseBodyServicesServiceInfosSoftwares : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  ListServicesResponseBodyServicesServiceInfosSoftwares() {}

  explicit ListServicesResponseBodyServicesServiceInfosSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListServicesResponseBodyServicesServiceInfosSoftwares() = default;
};
class ListServicesResponseBodyServicesServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};
  shared_ptr<vector<ListServicesResponseBodyServicesServiceInfosSoftwares>> softwares{};

  ListServicesResponseBodyServicesServiceInfos() {}

  explicit ListServicesResponseBodyServicesServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
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
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<ListServicesResponseBodyServicesServiceInfosSoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesServiceInfosSoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<ListServicesResponseBodyServicesServiceInfosSoftwares>>(expect1);
      }
    }
  }


  virtual ~ListServicesResponseBodyServicesServiceInfos() = default;
};
class ListServicesResponseBodyServicesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServicesResponseBodyServicesTags() {}

  explicit ListServicesResponseBodyServicesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServicesResponseBodyServicesTags() = default;
};
class ListServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> categories{};
  shared_ptr<ListServicesResponseBodyServicesCommodity> commodity{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> deployFrom{};
  shared_ptr<string> deployType{};
  shared_ptr<string> publishTime{};
  shared_ptr<long> score{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<ListServicesResponseBodyServicesServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierNameEng{};
  shared_ptr<long> supplierUid{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<ListServicesResponseBodyServicesTags>> tags{};
  shared_ptr<string> tenantType{};
  shared_ptr<string> trialDuration{};
  shared_ptr<string> trialType{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};
  shared_ptr<string> virtualInternetService{};

  ListServicesResponseBodyServices() {}

  explicit ListServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (deployFrom) {
      res["DeployFrom"] = boost::any(*deployFrom);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (score) {
      res["Score"] = boost::any(*score);
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
    if (supplierNameEng) {
      res["SupplierNameEng"] = boost::any(*supplierNameEng);
    }
    if (supplierUid) {
      res["SupplierUid"] = boost::any(*supplierUid);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (virtualInternetService) {
      res["VirtualInternetService"] = boost::any(*virtualInternetService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categories = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        ListServicesResponseBodyServicesCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<ListServicesResponseBodyServicesCommodity>(model1);
      }
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("DeployFrom") != m.end() && !m["DeployFrom"].empty()) {
      deployFrom = make_shared<string>(boost::any_cast<string>(m["DeployFrom"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
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
    if (m.find("SupplierNameEng") != m.end() && !m["SupplierNameEng"].empty()) {
      supplierNameEng = make_shared<string>(boost::any_cast<string>(m["SupplierNameEng"]));
    }
    if (m.find("SupplierUid") != m.end() && !m["SupplierUid"].empty()) {
      supplierUid = make_shared<long>(boost::any_cast<long>(m["SupplierUid"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServicesResponseBodyServicesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServicesResponseBodyServicesTags>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<string>(boost::any_cast<string>(m["TrialDuration"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
    if (m.find("VirtualInternetService") != m.end() && !m["VirtualInternetService"].empty()) {
      virtualInternetService = make_shared<string>(boost::any_cast<string>(m["VirtualInternetService"]));
    }
  }


  virtual ~ListServicesResponseBodyServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServicesResponseBodyServices>> services{};
  shared_ptr<long> totalCount{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keys{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = boost::any(*keys);
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
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
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
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

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
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
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
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> values{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (values) {
      res["Values"] = boost::any(*values);
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


  virtual ~ListTagValuesResponseBody() = default;
};
class ListTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class RenewServiceInstanceResourcesRequestResourcePeriod : public Darabonba::Model {
public:
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> resourceArn{};

  RenewServiceInstanceResourcesRequestResourcePeriod() {}

  explicit RenewServiceInstanceResourcesRequestResourcePeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
  }


  virtual ~RenewServiceInstanceResourcesRequestResourcePeriod() = default;
};
class RenewServiceInstanceResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<RenewServiceInstanceResourcesRequestResourcePeriod>> resourcePeriod{};
  shared_ptr<string> serviceInstanceId{};

  RenewServiceInstanceResourcesRequest() {}

  explicit RenewServiceInstanceResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourcePeriod) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePeriod){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePeriod"] = boost::any(temp1);
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
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourcePeriod") != m.end() && !m["ResourcePeriod"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePeriod"].type()) {
        vector<RenewServiceInstanceResourcesRequestResourcePeriod> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePeriod"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenewServiceInstanceResourcesRequestResourcePeriod model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePeriod = make_shared<vector<RenewServiceInstanceResourcesRequestResourcePeriod>>(expect1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~RenewServiceInstanceResourcesRequest() = default;
};
class RenewServiceInstanceResourcesResponseBodyFailureDetails : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> resourceArn{};

  RenewServiceInstanceResourcesResponseBodyFailureDetails() {}

  explicit RenewServiceInstanceResourcesResponseBodyFailureDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
  }


  virtual ~RenewServiceInstanceResourcesResponseBodyFailureDetails() = default;
};
class RenewServiceInstanceResourcesResponseBodyRenewalResult : public Darabonba::Model {
public:
  shared_ptr<long> failed{};
  shared_ptr<long> succeeded{};
  shared_ptr<long> totalCount{};

  RenewServiceInstanceResourcesResponseBodyRenewalResult() {}

  explicit RenewServiceInstanceResourcesResponseBodyRenewalResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failed) {
      res["Failed"] = boost::any(*failed);
    }
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Failed") != m.end() && !m["Failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["Failed"]));
    }
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<long>(boost::any_cast<long>(m["Succeeded"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~RenewServiceInstanceResourcesResponseBodyRenewalResult() = default;
};
class RenewServiceInstanceResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RenewServiceInstanceResourcesResponseBodyFailureDetails>> failureDetails{};
  shared_ptr<RenewServiceInstanceResourcesResponseBodyRenewalResult> renewalResult{};
  shared_ptr<string> requestId{};

  RenewServiceInstanceResourcesResponseBody() {}

  explicit RenewServiceInstanceResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failureDetails) {
      vector<boost::any> temp1;
      for(auto item1:*failureDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailureDetails"] = boost::any(temp1);
    }
    if (renewalResult) {
      res["RenewalResult"] = renewalResult ? boost::any(renewalResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailureDetails") != m.end() && !m["FailureDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["FailureDetails"].type()) {
        vector<RenewServiceInstanceResourcesResponseBodyFailureDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailureDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenewServiceInstanceResourcesResponseBodyFailureDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failureDetails = make_shared<vector<RenewServiceInstanceResourcesResponseBodyFailureDetails>>(expect1);
      }
    }
    if (m.find("RenewalResult") != m.end() && !m["RenewalResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["RenewalResult"].type()) {
        RenewServiceInstanceResourcesResponseBodyRenewalResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RenewalResult"]));
        renewalResult = make_shared<RenewServiceInstanceResourcesResponseBodyRenewalResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewServiceInstanceResourcesResponseBody() = default;
};
class RenewServiceInstanceResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewServiceInstanceResourcesResponseBody> body{};

  RenewServiceInstanceResourcesResponse() {}

  explicit RenewServiceInstanceResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewServiceInstanceResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewServiceInstanceResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~RenewServiceInstanceResourcesResponse() = default;
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
class RollbackServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  RollbackServiceInstanceRequest() {}

  explicit RollbackServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RollbackServiceInstanceRequest() = default;
};
class RollbackServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RollbackServiceInstanceResponseBody() {}

  explicit RollbackServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RollbackServiceInstanceResponseBody() = default;
};
class RollbackServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RollbackServiceInstanceResponseBody> body{};

  RollbackServiceInstanceResponse() {}

  explicit RollbackServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RollbackServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RollbackServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RollbackServiceInstanceResponse() = default;
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
class UnTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UnTagResourcesRequest() {}

  explicit UnTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnTagResourcesRequest() = default;
};
class UnTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnTagResourcesResponseBody() {}

  explicit UnTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnTagResourcesResponseBody() = default;
};
class UnTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnTagResourcesResponseBody> body{};

  UnTagResourcesResponse() {}

  explicit UnTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UnTagResourcesResponse() = default;
};
class UpdateServiceInstanceAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableOperation{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  UpdateServiceInstanceAttributesRequest() {}

  explicit UpdateServiceInstanceAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableOperation) {
      res["EnableOperation"] = boost::any(*enableOperation);
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
    if (m.find("EnableOperation") != m.end() && !m["EnableOperation"].empty()) {
      enableOperation = make_shared<bool>(boost::any_cast<bool>(m["EnableOperation"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~UpdateServiceInstanceAttributesRequest() = default;
};
class UpdateServiceInstanceAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceInstanceAttributesResponseBody() {}

  explicit UpdateServiceInstanceAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceInstanceAttributesResponseBody() = default;
};
class UpdateServiceInstanceAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceInstanceAttributesResponseBody> body{};

  UpdateServiceInstanceAttributesResponse() {}

  explicit UpdateServiceInstanceAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceInstanceAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceInstanceAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceInstanceAttributesResponse() = default;
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
class UpdateServiceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> serviceId{};
  shared_ptr<map<string, string>> userInformation{};

  UpdateServiceUsageRequest() {}

  explicit UpdateServiceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userInformation) {
      res["UserInformation"] = boost::any(*userInformation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserInformation") != m.end() && !m["UserInformation"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["UserInformation"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userInformation = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~UpdateServiceUsageRequest() = default;
};
class UpdateServiceUsageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> userInformationShrink{};

  UpdateServiceUsageShrinkRequest() {}

  explicit UpdateServiceUsageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userInformationShrink) {
      res["UserInformation"] = boost::any(*userInformationShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserInformation") != m.end() && !m["UserInformation"].empty()) {
      userInformationShrink = make_shared<string>(boost::any_cast<string>(m["UserInformation"]));
    }
  }


  virtual ~UpdateServiceUsageShrinkRequest() = default;
};
class UpdateServiceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceUsageResponseBody() {}

  explicit UpdateServiceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceUsageResponseBody() = default;
};
class UpdateServiceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceUsageResponseBody> body{};

  UpdateServiceUsageResponse() {}

  explicit UpdateServiceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceUsageResponse() = default;
};
class UpdateUserInformationRequestDeliverySettings : public Darabonba::Model {
public:
  shared_ptr<bool> actiontrailDeliveryToOssEnabled{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<bool> ossEnabled{};
  shared_ptr<long> ossExpirationDays{};
  shared_ptr<string> ossPath{};

  UpdateUserInformationRequestDeliverySettings() {}

  explicit UpdateUserInformationRequestDeliverySettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actiontrailDeliveryToOssEnabled) {
      res["ActiontrailDeliveryToOssEnabled"] = boost::any(*actiontrailDeliveryToOssEnabled);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossEnabled) {
      res["OssEnabled"] = boost::any(*ossEnabled);
    }
    if (ossExpirationDays) {
      res["OssExpirationDays"] = boost::any(*ossExpirationDays);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiontrailDeliveryToOssEnabled") != m.end() && !m["ActiontrailDeliveryToOssEnabled"].empty()) {
      actiontrailDeliveryToOssEnabled = make_shared<bool>(boost::any_cast<bool>(m["ActiontrailDeliveryToOssEnabled"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssEnabled") != m.end() && !m["OssEnabled"].empty()) {
      ossEnabled = make_shared<bool>(boost::any_cast<bool>(m["OssEnabled"]));
    }
    if (m.find("OssExpirationDays") != m.end() && !m["OssExpirationDays"].empty()) {
      ossExpirationDays = make_shared<long>(boost::any_cast<long>(m["OssExpirationDays"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
  }


  virtual ~UpdateUserInformationRequestDeliverySettings() = default;
};
class UpdateUserInformationRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateUserInformationRequestDeliverySettings> deliverySettings{};
  shared_ptr<string> regionId{};

  UpdateUserInformationRequest() {}

  explicit UpdateUserInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliverySettings) {
      res["DeliverySettings"] = deliverySettings ? boost::any(deliverySettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliverySettings") != m.end() && !m["DeliverySettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeliverySettings"].type()) {
        UpdateUserInformationRequestDeliverySettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeliverySettings"]));
        deliverySettings = make_shared<UpdateUserInformationRequestDeliverySettings>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateUserInformationRequest() = default;
};
class UpdateUserInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserInformationResponseBody() {}

  explicit UpdateUserInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserInformationResponseBody() = default;
};
class UpdateUserInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserInformationResponseBody> body{};

  UpdateUserInformationResponse() {}

  explicit UpdateUserInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserInformationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserInformationResponse() = default;
};
class UpgradeServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dryRun{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};

  UpgradeServiceInstanceRequest() {}

  explicit UpgradeServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~UpgradeServiceInstanceRequest() = default;
};
class UpgradeServiceInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dryRun{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};

  UpgradeServiceInstanceShrinkRequest() {}

  explicit UpgradeServiceInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~UpgradeServiceInstanceShrinkRequest() = default;
};
class UpgradeServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> upgradeRequiredParameters{};

  UpgradeServiceInstanceResponseBody() {}

  explicit UpgradeServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (upgradeRequiredParameters) {
      res["UpgradeRequiredParameters"] = boost::any(*upgradeRequiredParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpgradeRequiredParameters") != m.end() && !m["UpgradeRequiredParameters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UpgradeRequiredParameters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UpgradeRequiredParameters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      upgradeRequiredParameters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpgradeServiceInstanceResponseBody() = default;
};
class UpgradeServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeServiceInstanceResponseBody> body{};

  UpgradeServiceInstanceResponse() {}

  explicit UpgradeServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeServiceInstanceResponse() = default;
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
  CancelServiceUsageResponse cancelServiceUsageWithOptions(shared_ptr<CancelServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelServiceUsageResponse cancelServiceUsage(shared_ptr<CancelServiceUsageRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CheckServiceDeployableResponse checkServiceDeployableWithOptions(shared_ptr<CheckServiceDeployableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceDeployableResponse checkServiceDeployable(shared_ptr<CheckServiceDeployableRequest> request);
  ContinueDeployServiceInstanceResponse continueDeployServiceInstanceWithOptions(shared_ptr<ContinueDeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinueDeployServiceInstanceResponse continueDeployServiceInstance(shared_ptr<ContinueDeployServiceInstanceRequest> request);
  CreateServiceInstanceResponse createServiceInstanceWithOptions(shared_ptr<CreateServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceInstanceResponse createServiceInstance(shared_ptr<CreateServiceInstanceRequest> request);
  CreateServiceUsageResponse createServiceUsageWithOptions(shared_ptr<CreateServiceUsageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceUsageResponse createServiceUsage(shared_ptr<CreateServiceUsageRequest> request);
  DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(shared_ptr<DeleteServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceInstancesResponse deleteServiceInstances(shared_ptr<DeleteServiceInstancesRequest> request);
  DeployServiceInstanceResponse deployServiceInstanceWithOptions(shared_ptr<DeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployServiceInstanceResponse deployServiceInstance(shared_ptr<DeployServiceInstanceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  GenerateServicePolicyResponse generateServicePolicyWithOptions(shared_ptr<GenerateServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateServicePolicyResponse generateServicePolicy(shared_ptr<GenerateServicePolicyRequest> request);
  GetServiceResponse getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<GetServiceRequest> request);
  GetServiceEstimateCostResponse getServiceEstimateCostWithOptions(shared_ptr<GetServiceEstimateCostRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceEstimateCostResponse getServiceEstimateCost(shared_ptr<GetServiceEstimateCostRequest> request);
  GetServiceInstanceResponse getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceInstanceResponse getServiceInstance(shared_ptr<GetServiceInstanceRequest> request);
  GetServiceInstanceSubscriptionEstimateCostResponse getServiceInstanceSubscriptionEstimateCostWithOptions(shared_ptr<GetServiceInstanceSubscriptionEstimateCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceInstanceSubscriptionEstimateCostResponse getServiceInstanceSubscriptionEstimateCost(shared_ptr<GetServiceInstanceSubscriptionEstimateCostRequest> request);
  GetServiceProvisionsResponse getServiceProvisionsWithOptions(shared_ptr<GetServiceProvisionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceProvisionsResponse getServiceProvisions(shared_ptr<GetServiceProvisionsRequest> request);
  GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraintsWithOptions(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraints(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request);
  GetUserInformationResponse getUserInformationWithOptions(shared_ptr<GetUserInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserInformationResponse getUserInformation(shared_ptr<GetUserInformationRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  ListServiceCategoriesResponse listServiceCategoriesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceCategoriesResponse listServiceCategories();
  ListServiceInstanceBillResponse listServiceInstanceBillWithOptions(shared_ptr<ListServiceInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstanceBillResponse listServiceInstanceBill(shared_ptr<ListServiceInstanceBillRequest> request);
  ListServiceInstanceLogsResponse listServiceInstanceLogsWithOptions(shared_ptr<ListServiceInstanceLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstanceLogsResponse listServiceInstanceLogs(shared_ptr<ListServiceInstanceLogsRequest> request);
  ListServiceInstanceResourcesResponse listServiceInstanceResourcesWithOptions(shared_ptr<ListServiceInstanceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstanceResourcesResponse listServiceInstanceResources(shared_ptr<ListServiceInstanceResourcesRequest> request);
  ListServiceInstanceUpgradeHistoryResponse listServiceInstanceUpgradeHistoryWithOptions(shared_ptr<ListServiceInstanceUpgradeHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstanceUpgradeHistoryResponse listServiceInstanceUpgradeHistory(shared_ptr<ListServiceInstanceUpgradeHistoryRequest> request);
  ListServiceInstancesResponse listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstancesResponse listServiceInstances(shared_ptr<ListServiceInstancesRequest> request);
  ListServiceUsagesResponse listServiceUsagesWithOptions(shared_ptr<ListServiceUsagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceUsagesResponse listServiceUsages(shared_ptr<ListServiceUsagesRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  RenewServiceInstanceResourcesResponse renewServiceInstanceResourcesWithOptions(shared_ptr<RenewServiceInstanceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewServiceInstanceResourcesResponse renewServiceInstanceResources(shared_ptr<RenewServiceInstanceResourcesRequest> request);
  RestartServiceInstanceResponse restartServiceInstanceWithOptions(shared_ptr<RestartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartServiceInstanceResponse restartServiceInstance(shared_ptr<RestartServiceInstanceRequest> request);
  RollbackServiceInstanceResponse rollbackServiceInstanceWithOptions(shared_ptr<RollbackServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RollbackServiceInstanceResponse rollbackServiceInstance(shared_ptr<RollbackServiceInstanceRequest> request);
  StartServiceInstanceResponse startServiceInstanceWithOptions(shared_ptr<StartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartServiceInstanceResponse startServiceInstance(shared_ptr<StartServiceInstanceRequest> request);
  StopServiceInstanceResponse stopServiceInstanceWithOptions(shared_ptr<StopServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopServiceInstanceResponse stopServiceInstance(shared_ptr<StopServiceInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnTagResourcesResponse unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnTagResourcesResponse unTagResources(shared_ptr<UnTagResourcesRequest> request);
  UpdateServiceInstanceAttributesResponse updateServiceInstanceAttributesWithOptions(shared_ptr<UpdateServiceInstanceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceInstanceAttributesResponse updateServiceInstanceAttributes(shared_ptr<UpdateServiceInstanceAttributesRequest> request);
  UpdateServiceInstanceSpecResponse updateServiceInstanceSpecWithOptions(shared_ptr<UpdateServiceInstanceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceInstanceSpecResponse updateServiceInstanceSpec(shared_ptr<UpdateServiceInstanceSpecRequest> request);
  UpdateServiceUsageResponse updateServiceUsageWithOptions(shared_ptr<UpdateServiceUsageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceUsageResponse updateServiceUsage(shared_ptr<UpdateServiceUsageRequest> request);
  UpdateUserInformationResponse updateUserInformationWithOptions(shared_ptr<UpdateUserInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserInformationResponse updateUserInformation(shared_ptr<UpdateUserInformationRequest> request);
  UpgradeServiceInstanceResponse upgradeServiceInstanceWithOptions(shared_ptr<UpgradeServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeServiceInstanceResponse upgradeServiceInstance(shared_ptr<UpgradeServiceInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ComputeNest20210601

#endif
