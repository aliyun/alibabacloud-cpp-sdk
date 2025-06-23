// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WSS20211221_H_
#define ALIBABACLOUD_WSS20211221_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Wss20211221 {
class CreateMultiOrderRequestOrderItemsComponents : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateMultiOrderRequestOrderItemsComponents() {}

  explicit CreateMultiOrderRequestOrderItemsComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateMultiOrderRequestOrderItemsComponents() = default;
};
class CreateMultiOrderRequestOrderItems : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<bool> buyChange{};
  shared_ptr<vector<CreateMultiOrderRequestOrderItemsComponents>> components{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> promotionId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  CreateMultiOrderRequestOrderItems() {}

  explicit CreateMultiOrderRequestOrderItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (buyChange) {
      res["BuyChange"] = boost::any(*buyChange);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BuyChange") != m.end() && !m["BuyChange"].empty()) {
      buyChange = make_shared<bool>(boost::any_cast<bool>(m["BuyChange"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<CreateMultiOrderRequestOrderItemsComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMultiOrderRequestOrderItemsComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CreateMultiOrderRequestOrderItemsComponents>>(expect1);
      }
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateMultiOrderRequestOrderItems() = default;
};
class CreateMultiOrderRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMultiOrderRequestOrderItems>> orderItems{};
  shared_ptr<string> orderType{};
  shared_ptr<map<string, string>> properties{};
  shared_ptr<long> resellerOwnerUid{};

  CreateMultiOrderRequest() {}

  explicit CreateMultiOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderItems) {
      vector<boost::any> temp1;
      for(auto item1:*orderItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderItems"] = boost::any(temp1);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (resellerOwnerUid) {
      res["ResellerOwnerUid"] = boost::any(*resellerOwnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderItems") != m.end() && !m["OrderItems"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderItems"].type()) {
        vector<CreateMultiOrderRequestOrderItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMultiOrderRequestOrderItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderItems = make_shared<vector<CreateMultiOrderRequestOrderItems>>(expect1);
      }
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Properties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ResellerOwnerUid") != m.end() && !m["ResellerOwnerUid"].empty()) {
      resellerOwnerUid = make_shared<long>(boost::any_cast<long>(m["ResellerOwnerUid"]));
    }
  }


  virtual ~CreateMultiOrderRequest() = default;
};
class CreateMultiOrderShrinkRequestOrderItemsComponents : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateMultiOrderShrinkRequestOrderItemsComponents() {}

  explicit CreateMultiOrderShrinkRequestOrderItemsComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateMultiOrderShrinkRequestOrderItemsComponents() = default;
};
class CreateMultiOrderShrinkRequestOrderItems : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<bool> buyChange{};
  shared_ptr<vector<CreateMultiOrderShrinkRequestOrderItemsComponents>> components{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> promotionId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  CreateMultiOrderShrinkRequestOrderItems() {}

  explicit CreateMultiOrderShrinkRequestOrderItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (buyChange) {
      res["BuyChange"] = boost::any(*buyChange);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BuyChange") != m.end() && !m["BuyChange"].empty()) {
      buyChange = make_shared<bool>(boost::any_cast<bool>(m["BuyChange"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<CreateMultiOrderShrinkRequestOrderItemsComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMultiOrderShrinkRequestOrderItemsComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CreateMultiOrderShrinkRequestOrderItemsComponents>>(expect1);
      }
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateMultiOrderShrinkRequestOrderItems() = default;
};
class CreateMultiOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMultiOrderShrinkRequestOrderItems>> orderItems{};
  shared_ptr<string> orderType{};
  shared_ptr<string> propertiesShrink{};
  shared_ptr<long> resellerOwnerUid{};

  CreateMultiOrderShrinkRequest() {}

  explicit CreateMultiOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderItems) {
      vector<boost::any> temp1;
      for(auto item1:*orderItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderItems"] = boost::any(temp1);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (propertiesShrink) {
      res["Properties"] = boost::any(*propertiesShrink);
    }
    if (resellerOwnerUid) {
      res["ResellerOwnerUid"] = boost::any(*resellerOwnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderItems") != m.end() && !m["OrderItems"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderItems"].type()) {
        vector<CreateMultiOrderShrinkRequestOrderItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMultiOrderShrinkRequestOrderItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderItems = make_shared<vector<CreateMultiOrderShrinkRequestOrderItems>>(expect1);
      }
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      propertiesShrink = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("ResellerOwnerUid") != m.end() && !m["ResellerOwnerUid"].empty()) {
      resellerOwnerUid = make_shared<long>(boost::any_cast<long>(m["ResellerOwnerUid"]));
    }
  }


  virtual ~CreateMultiOrderShrinkRequest() = default;
};
class CreateMultiOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<long>> orderIds{};
  shared_ptr<string> requestId{};

  CreateMultiOrderResponseBody() {}

  explicit CreateMultiOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderIds) {
      res["OrderIds"] = boost::any(*orderIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderIds") != m.end() && !m["OrderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["OrderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMultiOrderResponseBody() = default;
};
class CreateMultiOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMultiOrderResponseBody> body{};

  CreateMultiOrderResponse() {}

  explicit CreateMultiOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMultiOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMultiOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMultiOrderResponse() = default;
};
class DescribeDeliveryAddressResponseBodyAddressesArea : public Darabonba::Model {
public:
  shared_ptr<long> areaId{};
  shared_ptr<string> areaName{};

  DescribeDeliveryAddressResponseBodyAddressesArea() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaId) {
      res["AreaId"] = boost::any(*areaId);
    }
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaId") != m.end() && !m["AreaId"].empty()) {
      areaId = make_shared<long>(boost::any_cast<long>(m["AreaId"]));
    }
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesArea() = default;
};
class DescribeDeliveryAddressResponseBodyAddressesCity : public Darabonba::Model {
public:
  shared_ptr<long> cityId{};
  shared_ptr<string> cityName{};

  DescribeDeliveryAddressResponseBodyAddressesCity() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesCity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityId) {
      res["CityId"] = boost::any(*cityId);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CityId") != m.end() && !m["CityId"].empty()) {
      cityId = make_shared<long>(boost::any_cast<long>(m["CityId"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesCity() = default;
};
class DescribeDeliveryAddressResponseBodyAddressesProvince : public Darabonba::Model {
public:
  shared_ptr<long> provinceId{};
  shared_ptr<string> provinceName{};

  DescribeDeliveryAddressResponseBodyAddressesProvince() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesProvince(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provinceId) {
      res["ProvinceId"] = boost::any(*provinceId);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvinceId") != m.end() && !m["ProvinceId"].empty()) {
      provinceId = make_shared<long>(boost::any_cast<long>(m["ProvinceId"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesProvince() = default;
};
class DescribeDeliveryAddressResponseBodyAddressesTown : public Darabonba::Model {
public:
  shared_ptr<long> townId{};
  shared_ptr<string> townName{};

  DescribeDeliveryAddressResponseBodyAddressesTown() {}

  explicit DescribeDeliveryAddressResponseBodyAddressesTown(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (townId) {
      res["TownId"] = boost::any(*townId);
    }
    if (townName) {
      res["TownName"] = boost::any(*townName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TownId") != m.end() && !m["TownId"].empty()) {
      townId = make_shared<long>(boost::any_cast<long>(m["TownId"]));
    }
    if (m.find("TownName") != m.end() && !m["TownName"].empty()) {
      townName = make_shared<string>(boost::any_cast<string>(m["TownName"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddressesTown() = default;
};
class DescribeDeliveryAddressResponseBodyAddresses : public Darabonba::Model {
public:
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesArea> area{};
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesCity> city{};
  shared_ptr<string> contacts{};
  shared_ptr<bool> defaultAddress{};
  shared_ptr<string> detail{};
  shared_ptr<string> mobile{};
  shared_ptr<string> postalCode{};
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesProvince> province{};
  shared_ptr<DescribeDeliveryAddressResponseBodyAddressesTown> town{};

  DescribeDeliveryAddressResponseBodyAddresses() {}

  explicit DescribeDeliveryAddressResponseBodyAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = area ? boost::any(area->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (city) {
      res["City"] = city ? boost::any(city->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contacts) {
      res["Contacts"] = boost::any(*contacts);
    }
    if (defaultAddress) {
      res["DefaultAddress"] = boost::any(*defaultAddress);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (postalCode) {
      res["PostalCode"] = boost::any(*postalCode);
    }
    if (province) {
      res["Province"] = province ? boost::any(province->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (town) {
      res["Town"] = town ? boost::any(town->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      if (typeid(map<string, boost::any>) == m["Area"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesArea model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Area"]));
        area = make_shared<DescribeDeliveryAddressResponseBodyAddressesArea>(model1);
      }
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      if (typeid(map<string, boost::any>) == m["City"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesCity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["City"]));
        city = make_shared<DescribeDeliveryAddressResponseBodyAddressesCity>(model1);
      }
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      contacts = make_shared<string>(boost::any_cast<string>(m["Contacts"]));
    }
    if (m.find("DefaultAddress") != m.end() && !m["DefaultAddress"].empty()) {
      defaultAddress = make_shared<bool>(boost::any_cast<bool>(m["DefaultAddress"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("PostalCode") != m.end() && !m["PostalCode"].empty()) {
      postalCode = make_shared<string>(boost::any_cast<string>(m["PostalCode"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      if (typeid(map<string, boost::any>) == m["Province"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesProvince model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Province"]));
        province = make_shared<DescribeDeliveryAddressResponseBodyAddressesProvince>(model1);
      }
    }
    if (m.find("Town") != m.end() && !m["Town"].empty()) {
      if (typeid(map<string, boost::any>) == m["Town"].type()) {
        DescribeDeliveryAddressResponseBodyAddressesTown model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Town"]));
        town = make_shared<DescribeDeliveryAddressResponseBodyAddressesTown>(model1);
      }
    }
  }


  virtual ~DescribeDeliveryAddressResponseBodyAddresses() = default;
};
class DescribeDeliveryAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeliveryAddressResponseBodyAddresses>> addresses{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDeliveryAddressResponseBody() {}

  explicit DescribeDeliveryAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      vector<boost::any> temp1;
      for(auto item1:*addresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addresses"] = boost::any(temp1);
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
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<DescribeDeliveryAddressResponseBodyAddresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeliveryAddressResponseBodyAddresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addresses = make_shared<vector<DescribeDeliveryAddressResponseBodyAddresses>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDeliveryAddressResponseBody() = default;
};
class DescribeDeliveryAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeliveryAddressResponseBody> body{};

  DescribeDeliveryAddressResponse() {}

  explicit DescribeDeliveryAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeliveryAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeliveryAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeliveryAddressResponse() = default;
};
class DescribeMultiPriceRequestOrderItemsComponents : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeMultiPriceRequestOrderItemsComponents() {}

  explicit DescribeMultiPriceRequestOrderItemsComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeMultiPriceRequestOrderItemsComponents() = default;
};
class DescribeMultiPriceRequestOrderItems : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<vector<DescribeMultiPriceRequestOrderItemsComponents>> components{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> promotionId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};

  DescribeMultiPriceRequestOrderItems() {}

  explicit DescribeMultiPriceRequestOrderItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<DescribeMultiPriceRequestOrderItemsComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiPriceRequestOrderItemsComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<DescribeMultiPriceRequestOrderItemsComponents>>(expect1);
      }
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeMultiPriceRequestOrderItems() = default;
};
class DescribeMultiPriceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiPriceRequestOrderItems>> orderItems{};
  shared_ptr<string> orderType{};
  shared_ptr<string> packageCode{};
  shared_ptr<long> resellerOwnerUid{};

  DescribeMultiPriceRequest() {}

  explicit DescribeMultiPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderItems) {
      vector<boost::any> temp1;
      for(auto item1:*orderItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderItems"] = boost::any(temp1);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (packageCode) {
      res["PackageCode"] = boost::any(*packageCode);
    }
    if (resellerOwnerUid) {
      res["ResellerOwnerUid"] = boost::any(*resellerOwnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderItems") != m.end() && !m["OrderItems"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderItems"].type()) {
        vector<DescribeMultiPriceRequestOrderItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiPriceRequestOrderItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderItems = make_shared<vector<DescribeMultiPriceRequestOrderItems>>(expect1);
      }
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PackageCode") != m.end() && !m["PackageCode"].empty()) {
      packageCode = make_shared<string>(boost::any_cast<string>(m["PackageCode"]));
    }
    if (m.find("ResellerOwnerUid") != m.end() && !m["ResellerOwnerUid"].empty()) {
      resellerOwnerUid = make_shared<long>(boost::any_cast<long>(m["ResellerOwnerUid"]));
    }
  }


  virtual ~DescribeMultiPriceRequest() = default;
};
class DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails : public Darabonba::Model {
public:
  shared_ptr<double> discountPrice{};
  shared_ptr<string> moduleCode{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleValue{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails() {}

  explicit DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleValue) {
      res["ModuleValue"] = boost::any(*moduleValue);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleValue") != m.end() && !m["ModuleValue"].empty()) {
      moduleValue = make_shared<string>(boost::any_cast<string>(m["ModuleValue"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails() = default;
};
class DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail : public Darabonba::Model {
public:
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<string> resourceType{};
  shared_ptr<double> tradePrice{};

  DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail() {}

  explicit DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail() = default;
};
class DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails>> moduleDetails{};
  shared_ptr<long> orderItem{};
  shared_ptr<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail> priceDetail{};

  DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails() {}

  explicit DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleDetails) {
      vector<boost::any> temp1;
      for(auto item1:*moduleDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleDetails"] = boost::any(temp1);
    }
    if (orderItem) {
      res["OrderItem"] = boost::any(*orderItem);
    }
    if (priceDetail) {
      res["PriceDetail"] = priceDetail ? boost::any(priceDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleDetails") != m.end() && !m["ModuleDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleDetails"].type()) {
        vector<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleDetails = make_shared<vector<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsModuleDetails>>(expect1);
      }
    }
    if (m.find("OrderItem") != m.end() && !m["OrderItem"].empty()) {
      orderItem = make_shared<long>(boost::any_cast<long>(m["OrderItem"]));
    }
    if (m.find("PriceDetail") != m.end() && !m["PriceDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceDetail"].type()) {
        DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceDetail"]));
        priceDetail = make_shared<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetailsPriceDetail>(model1);
      }
    }
  }


  virtual ~DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails() = default;
};
class DescribeMultiPriceResponseBodyPriceInfoPricePromotions : public Darabonba::Model {
public:
  shared_ptr<string> optionCode{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> promotionName{};
  shared_ptr<bool> selected{};

  DescribeMultiPriceResponseBodyPriceInfoPricePromotions() {}

  explicit DescribeMultiPriceResponseBodyPriceInfoPricePromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionCode) {
      res["OptionCode"] = boost::any(*optionCode);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionCode") != m.end() && !m["OptionCode"].empty()) {
      optionCode = make_shared<string>(boost::any_cast<string>(m["OptionCode"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~DescribeMultiPriceResponseBodyPriceInfoPricePromotions() = default;
};
class DescribeMultiPriceResponseBodyPriceInfoPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<vector<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails>> priceDetails{};
  shared_ptr<vector<DescribeMultiPriceResponseBodyPriceInfoPricePromotions>> promotions{};
  shared_ptr<map<string, double>> refundInstanceIdPriceMap{};
  shared_ptr<double> refundPrice{};
  shared_ptr<double> tradePrice{};

  DescribeMultiPriceResponseBodyPriceInfoPrice() {}

  explicit DescribeMultiPriceResponseBodyPriceInfoPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (priceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*priceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PriceDetails"] = boost::any(temp1);
    }
    if (promotions) {
      vector<boost::any> temp1;
      for(auto item1:*promotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotions"] = boost::any(temp1);
    }
    if (refundInstanceIdPriceMap) {
      res["RefundInstanceIdPriceMap"] = boost::any(*refundInstanceIdPriceMap);
    }
    if (refundPrice) {
      res["RefundPrice"] = boost::any(*refundPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("PriceDetails") != m.end() && !m["PriceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["PriceDetails"].type()) {
        vector<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PriceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceDetails = make_shared<vector<DescribeMultiPriceResponseBodyPriceInfoPricePriceDetails>>(expect1);
      }
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotions"].type()) {
        vector<DescribeMultiPriceResponseBodyPriceInfoPricePromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiPriceResponseBodyPriceInfoPricePromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotions = make_shared<vector<DescribeMultiPriceResponseBodyPriceInfoPricePromotions>>(expect1);
      }
    }
    if (m.find("RefundInstanceIdPriceMap") != m.end() && !m["RefundInstanceIdPriceMap"].empty()) {
      map<string, double> map1 = boost::any_cast<map<string, double>>(m["RefundInstanceIdPriceMap"]);
      map<string, double> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      refundInstanceIdPriceMap = make_shared<map<string, double>>(toMap1);
    }
    if (m.find("RefundPrice") != m.end() && !m["RefundPrice"].empty()) {
      refundPrice = make_shared<double>(boost::any_cast<double>(m["RefundPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribeMultiPriceResponseBodyPriceInfoPrice() = default;
};
class DescribeMultiPriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  DescribeMultiPriceResponseBodyPriceInfoRules() {}

  explicit DescribeMultiPriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribeMultiPriceResponseBodyPriceInfoRules() = default;
};
class DescribeMultiPriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiPriceResponseBodyPriceInfoPrice> price{};
  shared_ptr<vector<DescribeMultiPriceResponseBodyPriceInfoRules>> rules{};

  DescribeMultiPriceResponseBodyPriceInfo() {}

  explicit DescribeMultiPriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        DescribeMultiPriceResponseBodyPriceInfoPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<DescribeMultiPriceResponseBodyPriceInfoPrice>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeMultiPriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiPriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeMultiPriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiPriceResponseBodyPriceInfo() = default;
};
class DescribeMultiPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiPriceResponseBodyPriceInfo> priceInfo{};
  shared_ptr<string> requestId{};

  DescribeMultiPriceResponseBody() {}

  explicit DescribeMultiPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceInfo) {
      res["PriceInfo"] = priceInfo ? boost::any(priceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        DescribeMultiPriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<DescribeMultiPriceResponseBodyPriceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMultiPriceResponseBody() = default;
};
class DescribeMultiPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMultiPriceResponseBody> body{};

  DescribeMultiPriceResponse() {}

  explicit DescribeMultiPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMultiPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMultiPriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMultiPriceResponse() = default;
};
class DescribePackageDeductionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<string>> packageIds{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceTypes{};
  shared_ptr<long> startTime{};

  DescribePackageDeductionsRequest() {}

  explicit DescribePackageDeductionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (packageIds) {
      res["PackageIds"] = boost::any(*packageIds);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PackageIds") != m.end() && !m["PackageIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PackageIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PackageIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      packageIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribePackageDeductionsRequest() = default;
};
class DescribePackageDeductionsResponseBodyDeductions : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceState{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memory{};
  shared_ptr<string> osType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> staTime{};
  shared_ptr<double> usedCoreTime{};
  shared_ptr<long> usedTime{};
  shared_ptr<long> usedTimeWithScale{};

  DescribePackageDeductionsResponseBodyDeductions() {}

  explicit DescribePackageDeductionsResponseBodyDeductions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceState) {
      res["InstanceState"] = boost::any(*instanceState);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (staTime) {
      res["StaTime"] = boost::any(*staTime);
    }
    if (usedCoreTime) {
      res["UsedCoreTime"] = boost::any(*usedCoreTime);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (usedTimeWithScale) {
      res["UsedTimeWithScale"] = boost::any(*usedTimeWithScale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceState") != m.end() && !m["InstanceState"].empty()) {
      instanceState = make_shared<string>(boost::any_cast<string>(m["InstanceState"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("StaTime") != m.end() && !m["StaTime"].empty()) {
      staTime = make_shared<string>(boost::any_cast<string>(m["StaTime"]));
    }
    if (m.find("UsedCoreTime") != m.end() && !m["UsedCoreTime"].empty()) {
      usedCoreTime = make_shared<double>(boost::any_cast<double>(m["UsedCoreTime"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("UsedTimeWithScale") != m.end() && !m["UsedTimeWithScale"].empty()) {
      usedTimeWithScale = make_shared<long>(boost::any_cast<long>(m["UsedTimeWithScale"]));
    }
  }


  virtual ~DescribePackageDeductionsResponseBodyDeductions() = default;
};
class DescribePackageDeductionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePackageDeductionsResponseBodyDeductions>> deductions{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<double> totalUsedCoreTime{};
  shared_ptr<long> totalUsedTime{};

  DescribePackageDeductionsResponseBody() {}

  explicit DescribePackageDeductionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deductions) {
      vector<boost::any> temp1;
      for(auto item1:*deductions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Deductions"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (totalUsedCoreTime) {
      res["TotalUsedCoreTime"] = boost::any(*totalUsedCoreTime);
    }
    if (totalUsedTime) {
      res["TotalUsedTime"] = boost::any(*totalUsedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deductions") != m.end() && !m["Deductions"].empty()) {
      if (typeid(vector<boost::any>) == m["Deductions"].type()) {
        vector<DescribePackageDeductionsResponseBodyDeductions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Deductions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePackageDeductionsResponseBodyDeductions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deductions = make_shared<vector<DescribePackageDeductionsResponseBodyDeductions>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
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
    if (m.find("TotalUsedCoreTime") != m.end() && !m["TotalUsedCoreTime"].empty()) {
      totalUsedCoreTime = make_shared<double>(boost::any_cast<double>(m["TotalUsedCoreTime"]));
    }
    if (m.find("TotalUsedTime") != m.end() && !m["TotalUsedTime"].empty()) {
      totalUsedTime = make_shared<long>(boost::any_cast<long>(m["TotalUsedTime"]));
    }
  }


  virtual ~DescribePackageDeductionsResponseBody() = default;
};
class DescribePackageDeductionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePackageDeductionsResponseBody> body{};

  DescribePackageDeductionsResponse() {}

  explicit DescribePackageDeductionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePackageDeductionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePackageDeductionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePackageDeductionsResponse() = default;
};
class ModifyInstancePropertiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> key{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> value{};

  ModifyInstancePropertiesRequest() {}

  explicit ModifyInstancePropertiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ModifyInstancePropertiesRequest() = default;
};
class ModifyInstancePropertiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstancePropertiesResponseBody() {}

  explicit ModifyInstancePropertiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstancePropertiesResponseBody() = default;
};
class ModifyInstancePropertiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstancePropertiesResponseBody> body{};

  ModifyInstancePropertiesResponse() {}

  explicit ModifyInstancePropertiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstancePropertiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstancePropertiesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstancePropertiesResponse() = default;
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
  CreateMultiOrderResponse createMultiOrderWithOptions(shared_ptr<CreateMultiOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMultiOrderResponse createMultiOrder(shared_ptr<CreateMultiOrderRequest> request);
  DescribeDeliveryAddressResponse describeDeliveryAddressWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeliveryAddressResponse describeDeliveryAddress();
  DescribeMultiPriceResponse describeMultiPriceWithOptions(shared_ptr<DescribeMultiPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMultiPriceResponse describeMultiPrice(shared_ptr<DescribeMultiPriceRequest> request);
  DescribePackageDeductionsResponse describePackageDeductionsWithOptions(shared_ptr<DescribePackageDeductionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackageDeductionsResponse describePackageDeductions(shared_ptr<DescribePackageDeductionsRequest> request);
  ModifyInstancePropertiesResponse modifyInstancePropertiesWithOptions(shared_ptr<ModifyInstancePropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstancePropertiesResponse modifyInstanceProperties(shared_ptr<ModifyInstancePropertiesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Wss20211221

#endif
