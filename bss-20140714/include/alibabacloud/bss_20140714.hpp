// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BSS20140714_H_
#define ALIBABACLOUD_BSS20140714_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Bss20140714 {
class CreateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramStr{};

  CreateOrderRequest() {}

  explicit CreateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramStr) {
      res["paramStr"] = boost::any(*paramStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("paramStr") != m.end() && !m["paramStr"].empty()) {
      paramStr = make_shared<string>(boost::any_cast<string>(m["paramStr"]));
    }
  }


  virtual ~CreateOrderRequest() = default;
};
class CreateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateOrderResponseBody() {}

  explicit CreateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~CreateOrderResponseBody() = default;
};
class CreateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOrderResponseBody> body{};

  CreateOrderResponse() {}

  explicit CreateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrderResponse() = default;
};
class DescribeCashDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> amountOwed{};
  shared_ptr<string> availableCredit{};
  shared_ptr<string> balanceAmount{};
  shared_ptr<string> creditCardAmount{};
  shared_ptr<string> creditLimit{};
  shared_ptr<string> enableThresholdAlert{};
  shared_ptr<string> frozenAmount{};
  shared_ptr<long> miniAlertThreshold{};
  shared_ptr<string> remmitanceAmount{};
  shared_ptr<string> requestId{};

  DescribeCashDetailResponseBody() {}

  explicit DescribeCashDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amountOwed) {
      res["AmountOwed"] = boost::any(*amountOwed);
    }
    if (availableCredit) {
      res["AvailableCredit"] = boost::any(*availableCredit);
    }
    if (balanceAmount) {
      res["BalanceAmount"] = boost::any(*balanceAmount);
    }
    if (creditCardAmount) {
      res["CreditCardAmount"] = boost::any(*creditCardAmount);
    }
    if (creditLimit) {
      res["CreditLimit"] = boost::any(*creditLimit);
    }
    if (enableThresholdAlert) {
      res["EnableThresholdAlert"] = boost::any(*enableThresholdAlert);
    }
    if (frozenAmount) {
      res["FrozenAmount"] = boost::any(*frozenAmount);
    }
    if (miniAlertThreshold) {
      res["MiniAlertThreshold"] = boost::any(*miniAlertThreshold);
    }
    if (remmitanceAmount) {
      res["RemmitanceAmount"] = boost::any(*remmitanceAmount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AmountOwed") != m.end() && !m["AmountOwed"].empty()) {
      amountOwed = make_shared<string>(boost::any_cast<string>(m["AmountOwed"]));
    }
    if (m.find("AvailableCredit") != m.end() && !m["AvailableCredit"].empty()) {
      availableCredit = make_shared<string>(boost::any_cast<string>(m["AvailableCredit"]));
    }
    if (m.find("BalanceAmount") != m.end() && !m["BalanceAmount"].empty()) {
      balanceAmount = make_shared<string>(boost::any_cast<string>(m["BalanceAmount"]));
    }
    if (m.find("CreditCardAmount") != m.end() && !m["CreditCardAmount"].empty()) {
      creditCardAmount = make_shared<string>(boost::any_cast<string>(m["CreditCardAmount"]));
    }
    if (m.find("CreditLimit") != m.end() && !m["CreditLimit"].empty()) {
      creditLimit = make_shared<string>(boost::any_cast<string>(m["CreditLimit"]));
    }
    if (m.find("EnableThresholdAlert") != m.end() && !m["EnableThresholdAlert"].empty()) {
      enableThresholdAlert = make_shared<string>(boost::any_cast<string>(m["EnableThresholdAlert"]));
    }
    if (m.find("FrozenAmount") != m.end() && !m["FrozenAmount"].empty()) {
      frozenAmount = make_shared<string>(boost::any_cast<string>(m["FrozenAmount"]));
    }
    if (m.find("MiniAlertThreshold") != m.end() && !m["MiniAlertThreshold"].empty()) {
      miniAlertThreshold = make_shared<long>(boost::any_cast<long>(m["MiniAlertThreshold"]));
    }
    if (m.find("RemmitanceAmount") != m.end() && !m["RemmitanceAmount"].empty()) {
      remmitanceAmount = make_shared<string>(boost::any_cast<string>(m["RemmitanceAmount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCashDetailResponseBody() = default;
};
class DescribeCashDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCashDetailResponseBody> body{};

  DescribeCashDetailResponse() {}

  explicit DescribeCashDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCashDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCashDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCashDetailResponse() = default;
};
class DescribeCouponListRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDeliveryTime{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startDeliveryTime{};
  shared_ptr<string> status{};

  DescribeCouponListRequest() {}

  explicit DescribeCouponListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDeliveryTime) {
      res["EndDeliveryTime"] = boost::any(*endDeliveryTime);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDeliveryTime) {
      res["StartDeliveryTime"] = boost::any(*startDeliveryTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDeliveryTime") != m.end() && !m["EndDeliveryTime"].empty()) {
      endDeliveryTime = make_shared<string>(boost::any_cast<string>(m["EndDeliveryTime"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDeliveryTime") != m.end() && !m["StartDeliveryTime"].empty()) {
      startDeliveryTime = make_shared<string>(boost::any_cast<string>(m["StartDeliveryTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCouponListRequest() = default;
};
class DescribeCouponListResponseBodyCouponsCouponProductCodes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> productCode{};

  DescribeCouponListResponseBodyCouponsCouponProductCodes() {}

  explicit DescribeCouponListResponseBodyCouponsCouponProductCodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProductCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProductCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productCode = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCouponListResponseBodyCouponsCouponProductCodes() = default;
};
class DescribeCouponListResponseBodyCouponsCouponTradeTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tradeType{};

  DescribeCouponListResponseBodyCouponsCouponTradeTypes() {}

  explicit DescribeCouponListResponseBodyCouponsCouponTradeTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tradeType) {
      res["TradeType"] = boost::any(*tradeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TradeType") != m.end() && !m["TradeType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TradeType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TradeType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tradeType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCouponListResponseBodyCouponsCouponTradeTypes() = default;
};
class DescribeCouponListResponseBodyCouponsCoupon : public Darabonba::Model {
public:
  shared_ptr<string> application{};
  shared_ptr<string> balanceAmount{};
  shared_ptr<string> couponNumber{};
  shared_ptr<long> couponTemplateId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> deliveryTime{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredAmount{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> frozenAmount{};
  shared_ptr<string> modificationTime{};
  shared_ptr<string> priceLimit{};
  shared_ptr<DescribeCouponListResponseBodyCouponsCouponProductCodes> productCodes{};
  shared_ptr<string> status{};
  shared_ptr<string> totalAmount{};
  shared_ptr<DescribeCouponListResponseBodyCouponsCouponTradeTypes> tradeTypes{};

  DescribeCouponListResponseBodyCouponsCoupon() {}

  explicit DescribeCouponListResponseBodyCouponsCoupon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = boost::any(*application);
    }
    if (balanceAmount) {
      res["BalanceAmount"] = boost::any(*balanceAmount);
    }
    if (couponNumber) {
      res["CouponNumber"] = boost::any(*couponNumber);
    }
    if (couponTemplateId) {
      res["CouponTemplateId"] = boost::any(*couponTemplateId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (deliveryTime) {
      res["DeliveryTime"] = boost::any(*deliveryTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expiredAmount) {
      res["ExpiredAmount"] = boost::any(*expiredAmount);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (frozenAmount) {
      res["FrozenAmount"] = boost::any(*frozenAmount);
    }
    if (modificationTime) {
      res["ModificationTime"] = boost::any(*modificationTime);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (productCodes) {
      res["ProductCodes"] = productCodes ? boost::any(productCodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalAmount) {
      res["TotalAmount"] = boost::any(*totalAmount);
    }
    if (tradeTypes) {
      res["TradeTypes"] = tradeTypes ? boost::any(tradeTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      application = make_shared<string>(boost::any_cast<string>(m["Application"]));
    }
    if (m.find("BalanceAmount") != m.end() && !m["BalanceAmount"].empty()) {
      balanceAmount = make_shared<string>(boost::any_cast<string>(m["BalanceAmount"]));
    }
    if (m.find("CouponNumber") != m.end() && !m["CouponNumber"].empty()) {
      couponNumber = make_shared<string>(boost::any_cast<string>(m["CouponNumber"]));
    }
    if (m.find("CouponTemplateId") != m.end() && !m["CouponTemplateId"].empty()) {
      couponTemplateId = make_shared<long>(boost::any_cast<long>(m["CouponTemplateId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DeliveryTime") != m.end() && !m["DeliveryTime"].empty()) {
      deliveryTime = make_shared<string>(boost::any_cast<string>(m["DeliveryTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpiredAmount") != m.end() && !m["ExpiredAmount"].empty()) {
      expiredAmount = make_shared<string>(boost::any_cast<string>(m["ExpiredAmount"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FrozenAmount") != m.end() && !m["FrozenAmount"].empty()) {
      frozenAmount = make_shared<string>(boost::any_cast<string>(m["FrozenAmount"]));
    }
    if (m.find("ModificationTime") != m.end() && !m["ModificationTime"].empty()) {
      modificationTime = make_shared<string>(boost::any_cast<string>(m["ModificationTime"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
    }
    if (m.find("ProductCodes") != m.end() && !m["ProductCodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductCodes"].type()) {
        DescribeCouponListResponseBodyCouponsCouponProductCodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductCodes"]));
        productCodes = make_shared<DescribeCouponListResponseBodyCouponsCouponProductCodes>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalAmount") != m.end() && !m["TotalAmount"].empty()) {
      totalAmount = make_shared<string>(boost::any_cast<string>(m["TotalAmount"]));
    }
    if (m.find("TradeTypes") != m.end() && !m["TradeTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["TradeTypes"].type()) {
        DescribeCouponListResponseBodyCouponsCouponTradeTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TradeTypes"]));
        tradeTypes = make_shared<DescribeCouponListResponseBodyCouponsCouponTradeTypes>(model1);
      }
    }
  }


  virtual ~DescribeCouponListResponseBodyCouponsCoupon() = default;
};
class DescribeCouponListResponseBodyCoupons : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCouponListResponseBodyCouponsCoupon>> coupon{};

  DescribeCouponListResponseBodyCoupons() {}

  explicit DescribeCouponListResponseBodyCoupons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupon) {
      vector<boost::any> temp1;
      for(auto item1:*coupon){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Coupon"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupon") != m.end() && !m["Coupon"].empty()) {
      if (typeid(vector<boost::any>) == m["Coupon"].type()) {
        vector<DescribeCouponListResponseBodyCouponsCoupon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Coupon"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponListResponseBodyCouponsCoupon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coupon = make_shared<vector<DescribeCouponListResponseBodyCouponsCoupon>>(expect1);
      }
    }
  }


  virtual ~DescribeCouponListResponseBodyCoupons() = default;
};
class DescribeCouponListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCouponListResponseBodyCoupons> coupons{};
  shared_ptr<string> requestId{};

  DescribeCouponListResponseBody() {}

  explicit DescribeCouponListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupons) {
      res["Coupons"] = coupons ? boost::any(coupons->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupons") != m.end() && !m["Coupons"].empty()) {
      if (typeid(map<string, boost::any>) == m["Coupons"].type()) {
        DescribeCouponListResponseBodyCoupons model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Coupons"]));
        coupons = make_shared<DescribeCouponListResponseBodyCoupons>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCouponListResponseBody() = default;
};
class DescribeCouponListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCouponListResponseBody> body{};

  DescribeCouponListResponse() {}

  explicit DescribeCouponListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCouponListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCouponListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCouponListResponse() = default;
};
class OpenCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramStr{};

  OpenCallbackRequest() {}

  explicit OpenCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramStr) {
      res["paramStr"] = boost::any(*paramStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("paramStr") != m.end() && !m["paramStr"].empty()) {
      paramStr = make_shared<string>(boost::any_cast<string>(m["paramStr"]));
    }
  }


  virtual ~OpenCallbackRequest() = default;
};
class OpenCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OpenCallbackResponseBody() {}

  explicit OpenCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~OpenCallbackResponseBody() = default;
};
class OpenCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenCallbackResponseBody> body{};

  OpenCallbackResponse() {}

  explicit OpenCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~OpenCallbackResponse() = default;
};
class QueryForCssOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramStr{};

  QueryForCssOrderRequest() {}

  explicit QueryForCssOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramStr) {
      res["paramStr"] = boost::any(*paramStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("paramStr") != m.end() && !m["paramStr"].empty()) {
      paramStr = make_shared<string>(boost::any_cast<string>(m["paramStr"]));
    }
  }


  virtual ~QueryForCssOrderRequest() = default;
};
class QueryForCssOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryForCssOrderResponseBody() {}

  explicit QueryForCssOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~QueryForCssOrderResponseBody() = default;
};
class QueryForCssOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryForCssOrderResponseBody> body{};

  QueryForCssOrderResponse() {}

  explicit QueryForCssOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryForCssOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryForCssOrderResponseBody>(model1);
      }
    }
  }


  virtual ~QueryForCssOrderResponse() = default;
};
class VnoBatchRefundOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramStr{};

  VnoBatchRefundOrderRequest() {}

  explicit VnoBatchRefundOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramStr) {
      res["paramStr"] = boost::any(*paramStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("paramStr") != m.end() && !m["paramStr"].empty()) {
      paramStr = make_shared<string>(boost::any_cast<string>(m["paramStr"]));
    }
  }


  virtual ~VnoBatchRefundOrderRequest() = default;
};
class VnoBatchRefundOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VnoBatchRefundOrderResponseBody() {}

  explicit VnoBatchRefundOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~VnoBatchRefundOrderResponseBody() = default;
};
class VnoBatchRefundOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VnoBatchRefundOrderResponseBody> body{};

  VnoBatchRefundOrderResponse() {}

  explicit VnoBatchRefundOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VnoBatchRefundOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VnoBatchRefundOrderResponseBody>(model1);
      }
    }
  }


  virtual ~VnoBatchRefundOrderResponse() = default;
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
  CreateOrderResponse createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrderResponse createOrder(shared_ptr<CreateOrderRequest> request);
  DescribeCashDetailResponse describeCashDetailWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCashDetailResponse describeCashDetail();
  DescribeCouponListResponse describeCouponListWithOptions(shared_ptr<DescribeCouponListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCouponListResponse describeCouponList(shared_ptr<DescribeCouponListRequest> request);
  OpenCallbackResponse openCallbackWithOptions(shared_ptr<OpenCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenCallbackResponse openCallback(shared_ptr<OpenCallbackRequest> request);
  QueryForCssOrderResponse queryForCssOrderWithOptions(shared_ptr<QueryForCssOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryForCssOrderResponse queryForCssOrder(shared_ptr<QueryForCssOrderRequest> request);
  VnoBatchRefundOrderResponse vnoBatchRefundOrderWithOptions(shared_ptr<VnoBatchRefundOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VnoBatchRefundOrderResponse vnoBatchRefundOrder(shared_ptr<VnoBatchRefundOrderRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Bss20140714

#endif
