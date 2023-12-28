// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDCONTROL20220830_H_
#define ALIBABACLOUD_CLOUDCONTROL20220830_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudcontrol20220830 {
class CancelTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelTaskResponseBody() {}

  explicit CancelTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CancelTaskResponseBody() = default;
};
class CancelTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelTaskResponseBody> body{};

  CancelTaskResponse() {}

  explicit CancelTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelTaskResponse() = default;
};
class CreateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};

  CreateResourceRequest() {}

  explicit CreateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~CreateResourceRequest() = default;
};
class CreateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourcePath{};
  shared_ptr<string> taskId{};

  CreateResourceResponseBody() {}

  explicit CreateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourcePath) {
      res["resourcePath"] = boost::any(*resourcePath);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourcePath") != m.end() && !m["resourcePath"].empty()) {
      resourcePath = make_shared<string>(boost::any_cast<string>(m["resourcePath"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
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
        CreateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceResponse() = default;
};
class DeleteResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};

  DeleteResourceRequest() {}

  explicit DeleteResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~DeleteResourceRequest() = default;
};
class DeleteResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  DeleteResourceResponseBody() {}

  explicit DeleteResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~DeleteResourceResponseBody() = default;
};
class DeleteResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceResponseBody> body{};

  DeleteResourceResponse() {}

  explicit DeleteResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceResponse() = default;
};
class GetPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<map<string, boost::any>> resourceAttributes{};

  GetPriceRequest() {}

  explicit GetPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceAttributes) {
      res["resourceAttributes"] = boost::any(*resourceAttributes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceAttributes") != m.end() && !m["resourceAttributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resourceAttributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceAttributes = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetPriceRequest() = default;
};
class GetPriceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceAttributesShrink{};

  GetPriceShrinkRequest() {}

  explicit GetPriceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceAttributesShrink) {
      res["resourceAttributes"] = boost::any(*resourceAttributesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceAttributes") != m.end() && !m["resourceAttributes"].empty()) {
      resourceAttributesShrink = make_shared<string>(boost::any_cast<string>(m["resourceAttributes"]));
    }
  }


  virtual ~GetPriceShrinkRequest() = default;
};
class GetPriceResponseBodyPriceModuleDetails : public Darabonba::Model {
public:
  shared_ptr<double> costAfterDiscount{};
  shared_ptr<double> invoiceDiscount{};
  shared_ptr<string> moduleCode{};
  shared_ptr<string> moduleName{};
  shared_ptr<double> originalCost{};
  shared_ptr<double> priceType{};

  GetPriceResponseBodyPriceModuleDetails() {}

  explicit GetPriceResponseBodyPriceModuleDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costAfterDiscount) {
      res["costAfterDiscount"] = boost::any(*costAfterDiscount);
    }
    if (invoiceDiscount) {
      res["invoiceDiscount"] = boost::any(*invoiceDiscount);
    }
    if (moduleCode) {
      res["moduleCode"] = boost::any(*moduleCode);
    }
    if (moduleName) {
      res["moduleName"] = boost::any(*moduleName);
    }
    if (originalCost) {
      res["originalCost"] = boost::any(*originalCost);
    }
    if (priceType) {
      res["priceType"] = boost::any(*priceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("costAfterDiscount") != m.end() && !m["costAfterDiscount"].empty()) {
      costAfterDiscount = make_shared<double>(boost::any_cast<double>(m["costAfterDiscount"]));
    }
    if (m.find("invoiceDiscount") != m.end() && !m["invoiceDiscount"].empty()) {
      invoiceDiscount = make_shared<double>(boost::any_cast<double>(m["invoiceDiscount"]));
    }
    if (m.find("moduleCode") != m.end() && !m["moduleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["moduleCode"]));
    }
    if (m.find("moduleName") != m.end() && !m["moduleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["moduleName"]));
    }
    if (m.find("originalCost") != m.end() && !m["originalCost"].empty()) {
      originalCost = make_shared<double>(boost::any_cast<double>(m["originalCost"]));
    }
    if (m.find("priceType") != m.end() && !m["priceType"].empty()) {
      priceType = make_shared<double>(boost::any_cast<double>(m["priceType"]));
    }
  }


  virtual ~GetPriceResponseBodyPriceModuleDetails() = default;
};
class GetPriceResponseBodyPricePromotionDetails : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<long> promotionId{};
  shared_ptr<string> promotionName{};

  GetPriceResponseBodyPricePromotionDetails() {}

  explicit GetPriceResponseBodyPricePromotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["promotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["promotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["promotionName"] = boost::any(*promotionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("promotionDesc") != m.end() && !m["promotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["promotionDesc"]));
    }
    if (m.find("promotionId") != m.end() && !m["promotionId"].empty()) {
      promotionId = make_shared<long>(boost::any_cast<long>(m["promotionId"]));
    }
    if (m.find("promotionName") != m.end() && !m["promotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["promotionName"]));
    }
  }


  virtual ~GetPriceResponseBodyPricePromotionDetails() = default;
};
class GetPriceResponseBodyPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<vector<GetPriceResponseBodyPriceModuleDetails>> moduleDetails{};
  shared_ptr<double> originalPrice{};
  shared_ptr<vector<GetPriceResponseBodyPricePromotionDetails>> promotionDetails{};
  shared_ptr<double> tradePrice{};

  GetPriceResponseBodyPrice() {}

  explicit GetPriceResponseBodyPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["discountPrice"] = boost::any(*discountPrice);
    }
    if (moduleDetails) {
      vector<boost::any> temp1;
      for(auto item1:*moduleDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["moduleDetails"] = boost::any(temp1);
    }
    if (originalPrice) {
      res["originalPrice"] = boost::any(*originalPrice);
    }
    if (promotionDetails) {
      vector<boost::any> temp1;
      for(auto item1:*promotionDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["promotionDetails"] = boost::any(temp1);
    }
    if (tradePrice) {
      res["tradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currency") != m.end() && !m["currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["currency"]));
    }
    if (m.find("discountPrice") != m.end() && !m["discountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["discountPrice"]));
    }
    if (m.find("moduleDetails") != m.end() && !m["moduleDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["moduleDetails"].type()) {
        vector<GetPriceResponseBodyPriceModuleDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["moduleDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPriceResponseBodyPriceModuleDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleDetails = make_shared<vector<GetPriceResponseBodyPriceModuleDetails>>(expect1);
      }
    }
    if (m.find("originalPrice") != m.end() && !m["originalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["originalPrice"]));
    }
    if (m.find("promotionDetails") != m.end() && !m["promotionDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["promotionDetails"].type()) {
        vector<GetPriceResponseBodyPricePromotionDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["promotionDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPriceResponseBodyPricePromotionDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotionDetails = make_shared<vector<GetPriceResponseBodyPricePromotionDetails>>(expect1);
      }
    }
    if (m.find("tradePrice") != m.end() && !m["tradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["tradePrice"]));
    }
  }


  virtual ~GetPriceResponseBodyPrice() = default;
};
class GetPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPriceResponseBodyPrice> price{};
  shared_ptr<string> requestId{};

  GetPriceResponseBody() {}

  explicit GetPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("price") != m.end() && !m["price"].empty()) {
      if (typeid(map<string, boost::any>) == m["price"].type()) {
        GetPriceResponseBodyPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["price"]));
        price = make_shared<GetPriceResponseBodyPrice>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetPriceResponseBody() = default;
};
class GetPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPriceResponseBody> body{};

  GetPriceResponse() {}

  explicit GetPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPriceResponseBody>(model1);
      }
    }
  }


  virtual ~GetPriceResponse() = default;
};
class GetResourceTypeHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAcceptLanguage{};

  GetResourceTypeHeaders() {}

  explicit GetResourceTypeHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAcceptLanguage) {
      res["x-acs-accept-language"] = boost::any(*xAcsAcceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-accept-language") != m.end() && !m["x-acs-accept-language"].empty()) {
      xAcsAcceptLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-accept-language"]));
    }
  }


  virtual ~GetResourceTypeHeaders() = default;
};
class GetResourceTypeResponseBodyResourceTypeHandlersCreate : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  GetResourceTypeResponseBodyResourceTypeHandlersCreate() {}

  explicit GetResourceTypeResponseBodyResourceTypeHandlersCreate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceTypeHandlersCreate() = default;
};
class GetResourceTypeResponseBodyResourceTypeHandlersDelete : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  GetResourceTypeResponseBodyResourceTypeHandlersDelete() {}

  explicit GetResourceTypeResponseBodyResourceTypeHandlersDelete(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceTypeHandlersDelete() = default;
};
class GetResourceTypeResponseBodyResourceTypeHandlersGet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  GetResourceTypeResponseBodyResourceTypeHandlersGet() {}

  explicit GetResourceTypeResponseBodyResourceTypeHandlersGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceTypeHandlersGet() = default;
};
class GetResourceTypeResponseBodyResourceTypeHandlersList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  GetResourceTypeResponseBodyResourceTypeHandlersList() {}

  explicit GetResourceTypeResponseBodyResourceTypeHandlersList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceTypeHandlersList() = default;
};
class GetResourceTypeResponseBodyResourceTypeHandlersUpdate : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  GetResourceTypeResponseBodyResourceTypeHandlersUpdate() {}

  explicit GetResourceTypeResponseBodyResourceTypeHandlersUpdate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceTypeHandlersUpdate() = default;
};
class GetResourceTypeResponseBodyResourceTypeHandlers : public Darabonba::Model {
public:
  shared_ptr<GetResourceTypeResponseBodyResourceTypeHandlersCreate> create{};
  shared_ptr<GetResourceTypeResponseBodyResourceTypeHandlersDelete> delete_{};
  shared_ptr<GetResourceTypeResponseBodyResourceTypeHandlersGet> get{};
  shared_ptr<GetResourceTypeResponseBodyResourceTypeHandlersList> list{};
  shared_ptr<GetResourceTypeResponseBodyResourceTypeHandlersUpdate> update{};

  GetResourceTypeResponseBodyResourceTypeHandlers() {}

  explicit GetResourceTypeResponseBodyResourceTypeHandlers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (create) {
      res["create"] = create ? boost::any(create->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (delete_) {
      res["delete"] = delete_ ? boost::any(delete_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (get) {
      res["get"] = get ? boost::any(get->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (list) {
      res["list"] = list ? boost::any(list->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (update) {
      res["update"] = update ? boost::any(update->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("create") != m.end() && !m["create"].empty()) {
      if (typeid(map<string, boost::any>) == m["create"].type()) {
        GetResourceTypeResponseBodyResourceTypeHandlersCreate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["create"]));
        create = make_shared<GetResourceTypeResponseBodyResourceTypeHandlersCreate>(model1);
      }
    }
    if (m.find("delete") != m.end() && !m["delete"].empty()) {
      if (typeid(map<string, boost::any>) == m["delete"].type()) {
        GetResourceTypeResponseBodyResourceTypeHandlersDelete model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["delete"]));
        delete_ = make_shared<GetResourceTypeResponseBodyResourceTypeHandlersDelete>(model1);
      }
    }
    if (m.find("get") != m.end() && !m["get"].empty()) {
      if (typeid(map<string, boost::any>) == m["get"].type()) {
        GetResourceTypeResponseBodyResourceTypeHandlersGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["get"]));
        get = make_shared<GetResourceTypeResponseBodyResourceTypeHandlersGet>(model1);
      }
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(map<string, boost::any>) == m["list"].type()) {
        GetResourceTypeResponseBodyResourceTypeHandlersList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["list"]));
        list = make_shared<GetResourceTypeResponseBodyResourceTypeHandlersList>(model1);
      }
    }
    if (m.find("update") != m.end() && !m["update"].empty()) {
      if (typeid(map<string, boost::any>) == m["update"].type()) {
        GetResourceTypeResponseBodyResourceTypeHandlersUpdate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["update"]));
        update = make_shared<GetResourceTypeResponseBodyResourceTypeHandlersUpdate>(model1);
      }
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceTypeHandlers() = default;
};
class GetResourceTypeResponseBodyResourceTypeInfo : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> deliveryScope{};
  shared_ptr<string> description{};
  shared_ptr<string> title{};

  GetResourceTypeResponseBodyResourceTypeInfo() {}

  explicit GetResourceTypeResponseBodyResourceTypeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (deliveryScope) {
      res["deliveryScope"] = boost::any(*deliveryScope);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("deliveryScope") != m.end() && !m["deliveryScope"].empty()) {
      deliveryScope = make_shared<string>(boost::any_cast<string>(m["deliveryScope"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceTypeInfo() = default;
};
class GetResourceTypeResponseBodyResourceType : public Darabonba::Model {
public:
  shared_ptr<vector<string>> createOnlyProperties{};
  shared_ptr<vector<string>> deleteOnlyProperties{};
  shared_ptr<vector<string>> filterProperties{};
  shared_ptr<vector<string>> getOnlyProperties{};
  shared_ptr<vector<string>> getResponseProperties{};
  shared_ptr<GetResourceTypeResponseBodyResourceTypeHandlers> handlers{};
  shared_ptr<GetResourceTypeResponseBodyResourceTypeInfo> info{};
  shared_ptr<vector<string>> listOnlyProperties{};
  shared_ptr<vector<string>> listResponseProperties{};
  shared_ptr<string> primaryIdentifier{};
  shared_ptr<string> product{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<vector<string>> publicProperties{};
  shared_ptr<vector<string>> readOnlyProperties{};
  shared_ptr<vector<string>> required{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> sensitiveInfoProperties{};
  shared_ptr<vector<string>> updateOnlyProperties{};
  shared_ptr<vector<string>> updateTypeProperties{};

  GetResourceTypeResponseBodyResourceType() {}

  explicit GetResourceTypeResponseBodyResourceType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createOnlyProperties) {
      res["createOnlyProperties"] = boost::any(*createOnlyProperties);
    }
    if (deleteOnlyProperties) {
      res["deleteOnlyProperties"] = boost::any(*deleteOnlyProperties);
    }
    if (filterProperties) {
      res["filterProperties"] = boost::any(*filterProperties);
    }
    if (getOnlyProperties) {
      res["getOnlyProperties"] = boost::any(*getOnlyProperties);
    }
    if (getResponseProperties) {
      res["getResponseProperties"] = boost::any(*getResponseProperties);
    }
    if (handlers) {
      res["handlers"] = handlers ? boost::any(handlers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (info) {
      res["info"] = info ? boost::any(info->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (listOnlyProperties) {
      res["listOnlyProperties"] = boost::any(*listOnlyProperties);
    }
    if (listResponseProperties) {
      res["listResponseProperties"] = boost::any(*listResponseProperties);
    }
    if (primaryIdentifier) {
      res["primaryIdentifier"] = boost::any(*primaryIdentifier);
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (publicProperties) {
      res["publicProperties"] = boost::any(*publicProperties);
    }
    if (readOnlyProperties) {
      res["readOnlyProperties"] = boost::any(*readOnlyProperties);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (sensitiveInfoProperties) {
      res["sensitiveInfoProperties"] = boost::any(*sensitiveInfoProperties);
    }
    if (updateOnlyProperties) {
      res["updateOnlyProperties"] = boost::any(*updateOnlyProperties);
    }
    if (updateTypeProperties) {
      res["updateTypeProperties"] = boost::any(*updateTypeProperties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createOnlyProperties") != m.end() && !m["createOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["createOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["createOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      createOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("deleteOnlyProperties") != m.end() && !m["deleteOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["deleteOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deleteOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deleteOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("filterProperties") != m.end() && !m["filterProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["filterProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["filterProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      filterProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("getOnlyProperties") != m.end() && !m["getOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["getOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["getOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      getOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("getResponseProperties") != m.end() && !m["getResponseProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["getResponseProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["getResponseProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      getResponseProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("handlers") != m.end() && !m["handlers"].empty()) {
      if (typeid(map<string, boost::any>) == m["handlers"].type()) {
        GetResourceTypeResponseBodyResourceTypeHandlers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["handlers"]));
        handlers = make_shared<GetResourceTypeResponseBodyResourceTypeHandlers>(model1);
      }
    }
    if (m.find("info") != m.end() && !m["info"].empty()) {
      if (typeid(map<string, boost::any>) == m["info"].type()) {
        GetResourceTypeResponseBodyResourceTypeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["info"]));
        info = make_shared<GetResourceTypeResponseBodyResourceTypeInfo>(model1);
      }
    }
    if (m.find("listOnlyProperties") != m.end() && !m["listOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["listOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["listOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("listResponseProperties") != m.end() && !m["listResponseProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["listResponseProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["listResponseProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listResponseProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("primaryIdentifier") != m.end() && !m["primaryIdentifier"].empty()) {
      primaryIdentifier = make_shared<string>(boost::any_cast<string>(m["primaryIdentifier"]));
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("publicProperties") != m.end() && !m["publicProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["publicProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["publicProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("readOnlyProperties") != m.end() && !m["readOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["readOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["readOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["required"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["required"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      required = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("sensitiveInfoProperties") != m.end() && !m["sensitiveInfoProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sensitiveInfoProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sensitiveInfoProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sensitiveInfoProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateOnlyProperties") != m.end() && !m["updateOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["updateOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["updateOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      updateOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateTypeProperties") != m.end() && !m["updateTypeProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["updateTypeProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["updateTypeProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      updateTypeProperties = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetResourceTypeResponseBodyResourceType() = default;
};
class GetResourceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceTypeResponseBodyResourceType> resourceType{};

  GetResourceTypeResponseBody() {}

  explicit GetResourceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["resourceType"] = resourceType ? boost::any(resourceType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      if (typeid(map<string, boost::any>) == m["resourceType"].type()) {
        GetResourceTypeResponseBodyResourceType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resourceType"]));
        resourceType = make_shared<GetResourceTypeResponseBodyResourceType>(model1);
      }
    }
  }


  virtual ~GetResourceTypeResponseBody() = default;
};
class GetResourceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceTypeResponseBody> body{};

  GetResourceTypeResponse() {}

  explicit GetResourceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceTypeResponse() = default;
};
class GetResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  GetResourcesRequest() {}

  explicit GetResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["filter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      filter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~GetResourcesRequest() = default;
};
class GetResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterShrink{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  GetResourcesShrinkRequest() {}

  explicit GetResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterShrink) {
      res["filter"] = boost::any(*filterShrink);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~GetResourcesShrinkRequest() = default;
};
class GetResourcesResponseBodyResource : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> resourceAttributes{};
  shared_ptr<string> resourceId{};

  GetResourcesResponseBodyResource() {}

  explicit GetResourcesResponseBodyResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceAttributes) {
      res["resourceAttributes"] = boost::any(*resourceAttributes);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceAttributes") != m.end() && !m["resourceAttributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resourceAttributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceAttributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
  }


  virtual ~GetResourcesResponseBodyResource() = default;
};
class GetResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> resourceAttributes{};
  shared_ptr<string> resourceId{};

  GetResourcesResponseBodyResources() {}

  explicit GetResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceAttributes) {
      res["resourceAttributes"] = boost::any(*resourceAttributes);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceAttributes") != m.end() && !m["resourceAttributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resourceAttributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceAttributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
  }


  virtual ~GetResourcesResponseBodyResources() = default;
};
class GetResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<GetResourcesResponseBodyResource> resource{};
  shared_ptr<vector<GetResourcesResponseBodyResources>> resources{};
  shared_ptr<long> totalCount{};

  GetResourcesResponseBody() {}

  explicit GetResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resource) {
      res["resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["resource"].type()) {
        GetResourcesResponseBodyResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resource"]));
        resource = make_shared<GetResourcesResponseBodyResource>(model1);
      }
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      if (typeid(vector<boost::any>) == m["resources"].type()) {
        vector<GetResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<GetResourcesResponseBodyResources>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetResourcesResponseBody() = default;
};
class GetResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourcesResponseBody> body{};

  GetResourcesResponse() {}

  explicit GetResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourcesResponse() = default;
};
class GetTaskResponseBodyTaskError : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  GetTaskResponseBodyTaskError() {}

  explicit GetTaskResponseBodyTaskError(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetTaskResponseBodyTaskError() = default;
};
class GetTaskResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<GetTaskResponseBodyTaskError> error{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourcePath{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskId{};

  GetTaskResponseBodyTask() {}

  explicit GetTaskResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (error) {
      res["error"] = error ? boost::any(error->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourcePath) {
      res["resourcePath"] = boost::any(*resourcePath);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskAction) {
      res["taskAction"] = boost::any(*taskAction);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("error") != m.end() && !m["error"].empty()) {
      if (typeid(map<string, boost::any>) == m["error"].type()) {
        GetTaskResponseBodyTaskError model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["error"]));
        error = make_shared<GetTaskResponseBodyTaskError>(model1);
      }
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourcePath") != m.end() && !m["resourcePath"].empty()) {
      resourcePath = make_shared<string>(boost::any_cast<string>(m["resourcePath"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskAction") != m.end() && !m["taskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["taskAction"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetTaskResponseBodyTask() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTaskResponseBodyTask> task{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (task) {
      res["task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("task") != m.end() && !m["task"].empty()) {
      if (typeid(map<string, boost::any>) == m["task"].type()) {
        GetTaskResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["task"]));
        task = make_shared<GetTaskResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class ListDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributeName{};
  shared_ptr<map<string, boost::any>> filter{};

  ListDataSourcesRequest() {}

  explicit ListDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeName) {
      res["attributeName"] = boost::any(*attributeName);
    }
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attributeName") != m.end() && !m["attributeName"].empty()) {
      attributeName = make_shared<string>(boost::any_cast<string>(m["attributeName"]));
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["filter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      filter = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListDataSourcesRequest() = default;
};
class ListDataSourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributeName{};
  shared_ptr<string> filterShrink{};

  ListDataSourcesShrinkRequest() {}

  explicit ListDataSourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeName) {
      res["attributeName"] = boost::any(*attributeName);
    }
    if (filterShrink) {
      res["filter"] = boost::any(*filterShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attributeName") != m.end() && !m["attributeName"].empty()) {
      attributeName = make_shared<string>(boost::any_cast<string>(m["attributeName"]));
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
  }


  virtual ~ListDataSourcesShrinkRequest() = default;
};
class ListDataSourcesResponseBodyDataSources : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  ListDataSourcesResponseBodyDataSources() {}

  explicit ListDataSourcesResponseBodyDataSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
  }


  virtual ~ListDataSourcesResponseBodyDataSources() = default;
};
class ListDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourcesResponseBodyDataSources>> dataSources{};
  shared_ptr<string> requestId{};

  ListDataSourcesResponseBody() {}

  explicit ListDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataSources"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSources") != m.end() && !m["dataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["dataSources"].type()) {
        vector<ListDataSourcesResponseBodyDataSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourcesResponseBodyDataSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSources = make_shared<vector<ListDataSourcesResponseBodyDataSources>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListDataSourcesResponseBody() = default;
};
class ListDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourcesResponseBody> body{};

  ListDataSourcesResponse() {}

  explicit ListDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourcesResponse() = default;
};
class ListProductsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAcceptLanguage{};

  ListProductsHeaders() {}

  explicit ListProductsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAcceptLanguage) {
      res["x-acs-accept-language"] = boost::any(*xAcsAcceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-accept-language") != m.end() && !m["x-acs-accept-language"].empty()) {
      xAcsAcceptLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-accept-language"]));
    }
  }


  virtual ~ListProductsHeaders() = default;
};
class ListProductsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListProductsRequest() {}

  explicit ListProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListProductsRequest() = default;
};
class ListProductsResponseBodyProducts : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};

  ListProductsResponseBodyProducts() {}

  explicit ListProductsResponseBodyProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
  }


  virtual ~ListProductsResponseBodyProducts() = default;
};
class ListProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListProductsResponseBodyProducts>> products{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProductsResponseBody() {}

  explicit ListProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<ListProductsResponseBodyProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<ListProductsResponseBodyProducts>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListProductsResponseBody() = default;
};
class ListProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsResponseBody> body{};

  ListProductsResponse() {}

  explicit ListProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsResponse() = default;
};
class ListResourceTypesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAcceptLanguage{};

  ListResourceTypesHeaders() {}

  explicit ListResourceTypesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAcceptLanguage) {
      res["x-acs-accept-language"] = boost::any(*xAcsAcceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("x-acs-accept-language") != m.end() && !m["x-acs-accept-language"].empty()) {
      xAcsAcceptLanguage = make_shared<string>(boost::any_cast<string>(m["x-acs-accept-language"]));
    }
  }


  virtual ~ListResourceTypesHeaders() = default;
};
class ListResourceTypesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceTypes{};

  ListResourceTypesRequest() {}

  explicit ListResourceTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (resourceTypes) {
      res["resourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("resourceTypes") != m.end() && !m["resourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesRequest() = default;
};
class ListResourceTypesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceTypesShrink{};

  ListResourceTypesShrinkRequest() {}

  explicit ListResourceTypesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (resourceTypesShrink) {
      res["resourceTypes"] = boost::any(*resourceTypesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("resourceTypes") != m.end() && !m["resourceTypes"].empty()) {
      resourceTypesShrink = make_shared<string>(boost::any_cast<string>(m["resourceTypes"]));
    }
  }


  virtual ~ListResourceTypesShrinkRequest() = default;
};
class ListResourceTypesResponseBodyResourceTypesHandlersCreate : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  ListResourceTypesResponseBodyResourceTypesHandlersCreate() {}

  explicit ListResourceTypesResponseBodyResourceTypesHandlersCreate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesHandlersCreate() = default;
};
class ListResourceTypesResponseBodyResourceTypesHandlersDelete : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  ListResourceTypesResponseBodyResourceTypesHandlersDelete() {}

  explicit ListResourceTypesResponseBodyResourceTypesHandlersDelete(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesHandlersDelete() = default;
};
class ListResourceTypesResponseBodyResourceTypesHandlersGet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  ListResourceTypesResponseBodyResourceTypesHandlersGet() {}

  explicit ListResourceTypesResponseBodyResourceTypesHandlersGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesHandlersGet() = default;
};
class ListResourceTypesResponseBodyResourceTypesHandlersList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  ListResourceTypesResponseBodyResourceTypesHandlersList() {}

  explicit ListResourceTypesResponseBodyResourceTypesHandlersList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesHandlersList() = default;
};
class ListResourceTypesResponseBodyResourceTypesHandlersUpdate : public Darabonba::Model {
public:
  shared_ptr<vector<string>> permissions{};

  ListResourceTypesResponseBodyResourceTypesHandlersUpdate() {}

  explicit ListResourceTypesResponseBodyResourceTypesHandlersUpdate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      res["permissions"] = boost::any(*permissions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("permissions") != m.end() && !m["permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesHandlersUpdate() = default;
};
class ListResourceTypesResponseBodyResourceTypesHandlers : public Darabonba::Model {
public:
  shared_ptr<ListResourceTypesResponseBodyResourceTypesHandlersCreate> create{};
  shared_ptr<ListResourceTypesResponseBodyResourceTypesHandlersDelete> delete_{};
  shared_ptr<ListResourceTypesResponseBodyResourceTypesHandlersGet> get{};
  shared_ptr<ListResourceTypesResponseBodyResourceTypesHandlersList> list{};
  shared_ptr<ListResourceTypesResponseBodyResourceTypesHandlersUpdate> update{};

  ListResourceTypesResponseBodyResourceTypesHandlers() {}

  explicit ListResourceTypesResponseBodyResourceTypesHandlers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (create) {
      res["create"] = create ? boost::any(create->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (delete_) {
      res["delete"] = delete_ ? boost::any(delete_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (get) {
      res["get"] = get ? boost::any(get->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (list) {
      res["list"] = list ? boost::any(list->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (update) {
      res["update"] = update ? boost::any(update->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("create") != m.end() && !m["create"].empty()) {
      if (typeid(map<string, boost::any>) == m["create"].type()) {
        ListResourceTypesResponseBodyResourceTypesHandlersCreate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["create"]));
        create = make_shared<ListResourceTypesResponseBodyResourceTypesHandlersCreate>(model1);
      }
    }
    if (m.find("delete") != m.end() && !m["delete"].empty()) {
      if (typeid(map<string, boost::any>) == m["delete"].type()) {
        ListResourceTypesResponseBodyResourceTypesHandlersDelete model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["delete"]));
        delete_ = make_shared<ListResourceTypesResponseBodyResourceTypesHandlersDelete>(model1);
      }
    }
    if (m.find("get") != m.end() && !m["get"].empty()) {
      if (typeid(map<string, boost::any>) == m["get"].type()) {
        ListResourceTypesResponseBodyResourceTypesHandlersGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["get"]));
        get = make_shared<ListResourceTypesResponseBodyResourceTypesHandlersGet>(model1);
      }
    }
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(map<string, boost::any>) == m["list"].type()) {
        ListResourceTypesResponseBodyResourceTypesHandlersList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["list"]));
        list = make_shared<ListResourceTypesResponseBodyResourceTypesHandlersList>(model1);
      }
    }
    if (m.find("update") != m.end() && !m["update"].empty()) {
      if (typeid(map<string, boost::any>) == m["update"].type()) {
        ListResourceTypesResponseBodyResourceTypesHandlersUpdate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["update"]));
        update = make_shared<ListResourceTypesResponseBodyResourceTypesHandlersUpdate>(model1);
      }
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesHandlers() = default;
};
class ListResourceTypesResponseBodyResourceTypesInfo : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> deliveryScope{};
  shared_ptr<string> description{};
  shared_ptr<string> title{};

  ListResourceTypesResponseBodyResourceTypesInfo() {}

  explicit ListResourceTypesResponseBodyResourceTypesInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (deliveryScope) {
      res["deliveryScope"] = boost::any(*deliveryScope);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("deliveryScope") != m.end() && !m["deliveryScope"].empty()) {
      deliveryScope = make_shared<string>(boost::any_cast<string>(m["deliveryScope"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypesInfo() = default;
};
class ListResourceTypesResponseBodyResourceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> createOnlyProperties{};
  shared_ptr<vector<string>> deleteOnlyProperties{};
  shared_ptr<vector<string>> filterProperties{};
  shared_ptr<vector<string>> getOnlyProperties{};
  shared_ptr<vector<string>> getResponseProperties{};
  shared_ptr<ListResourceTypesResponseBodyResourceTypesHandlers> handlers{};
  shared_ptr<ListResourceTypesResponseBodyResourceTypesInfo> info{};
  shared_ptr<vector<string>> listOnlyProperties{};
  shared_ptr<vector<string>> listResponseProperties{};
  shared_ptr<string> primaryIdentifier{};
  shared_ptr<string> product{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<vector<string>> publicProperties{};
  shared_ptr<vector<string>> readOnlyProperties{};
  shared_ptr<vector<string>> required{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> sensitiveInfoProperties{};
  shared_ptr<vector<string>> updateOnlyProperties{};
  shared_ptr<vector<string>> updateTypeProperties{};

  ListResourceTypesResponseBodyResourceTypes() {}

  explicit ListResourceTypesResponseBodyResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createOnlyProperties) {
      res["createOnlyProperties"] = boost::any(*createOnlyProperties);
    }
    if (deleteOnlyProperties) {
      res["deleteOnlyProperties"] = boost::any(*deleteOnlyProperties);
    }
    if (filterProperties) {
      res["filterProperties"] = boost::any(*filterProperties);
    }
    if (getOnlyProperties) {
      res["getOnlyProperties"] = boost::any(*getOnlyProperties);
    }
    if (getResponseProperties) {
      res["getResponseProperties"] = boost::any(*getResponseProperties);
    }
    if (handlers) {
      res["handlers"] = handlers ? boost::any(handlers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (info) {
      res["info"] = info ? boost::any(info->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (listOnlyProperties) {
      res["listOnlyProperties"] = boost::any(*listOnlyProperties);
    }
    if (listResponseProperties) {
      res["listResponseProperties"] = boost::any(*listResponseProperties);
    }
    if (primaryIdentifier) {
      res["primaryIdentifier"] = boost::any(*primaryIdentifier);
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (publicProperties) {
      res["publicProperties"] = boost::any(*publicProperties);
    }
    if (readOnlyProperties) {
      res["readOnlyProperties"] = boost::any(*readOnlyProperties);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (sensitiveInfoProperties) {
      res["sensitiveInfoProperties"] = boost::any(*sensitiveInfoProperties);
    }
    if (updateOnlyProperties) {
      res["updateOnlyProperties"] = boost::any(*updateOnlyProperties);
    }
    if (updateTypeProperties) {
      res["updateTypeProperties"] = boost::any(*updateTypeProperties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createOnlyProperties") != m.end() && !m["createOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["createOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["createOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      createOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("deleteOnlyProperties") != m.end() && !m["deleteOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["deleteOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deleteOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deleteOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("filterProperties") != m.end() && !m["filterProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["filterProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["filterProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      filterProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("getOnlyProperties") != m.end() && !m["getOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["getOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["getOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      getOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("getResponseProperties") != m.end() && !m["getResponseProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["getResponseProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["getResponseProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      getResponseProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("handlers") != m.end() && !m["handlers"].empty()) {
      if (typeid(map<string, boost::any>) == m["handlers"].type()) {
        ListResourceTypesResponseBodyResourceTypesHandlers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["handlers"]));
        handlers = make_shared<ListResourceTypesResponseBodyResourceTypesHandlers>(model1);
      }
    }
    if (m.find("info") != m.end() && !m["info"].empty()) {
      if (typeid(map<string, boost::any>) == m["info"].type()) {
        ListResourceTypesResponseBodyResourceTypesInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["info"]));
        info = make_shared<ListResourceTypesResponseBodyResourceTypesInfo>(model1);
      }
    }
    if (m.find("listOnlyProperties") != m.end() && !m["listOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["listOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["listOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("listResponseProperties") != m.end() && !m["listResponseProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["listResponseProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["listResponseProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listResponseProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("primaryIdentifier") != m.end() && !m["primaryIdentifier"].empty()) {
      primaryIdentifier = make_shared<string>(boost::any_cast<string>(m["primaryIdentifier"]));
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("publicProperties") != m.end() && !m["publicProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["publicProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["publicProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("readOnlyProperties") != m.end() && !m["readOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["readOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["readOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["required"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["required"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      required = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("sensitiveInfoProperties") != m.end() && !m["sensitiveInfoProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sensitiveInfoProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sensitiveInfoProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sensitiveInfoProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateOnlyProperties") != m.end() && !m["updateOnlyProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["updateOnlyProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["updateOnlyProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      updateOnlyProperties = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateTypeProperties") != m.end() && !m["updateTypeProperties"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["updateTypeProperties"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["updateTypeProperties"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      updateTypeProperties = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesResponseBodyResourceTypes() = default;
};
class ListResourceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceTypesResponseBodyResourceTypes>> resourceTypes{};
  shared_ptr<long> totalCount{};

  ListResourceTypesResponseBody() {}

  explicit ListResourceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceTypes"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceTypes") != m.end() && !m["resourceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceTypes"].type()) {
        vector<ListResourceTypesResponseBodyResourceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceTypesResponseBodyResourceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceTypes = make_shared<vector<ListResourceTypesResponseBodyResourceTypes>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListResourceTypesResponseBody() = default;
};
class ListResourceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceTypesResponseBody> body{};

  ListResourceTypesResponse() {}

  explicit ListResourceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceTypesResponse() = default;
};
class UpdateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};

  UpdateResourceRequest() {}

  explicit UpdateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~UpdateResourceRequest() = default;
};
class UpdateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpdateResourceResponseBody() {}

  explicit UpdateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~UpdateResourceResponseBody() = default;
};
class UpdateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceResponseBody> body{};

  UpdateResourceResponse() {}

  explicit UpdateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceResponse() = default;
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
  CancelTaskResponse cancelTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelTaskResponse cancelTask(shared_ptr<string> taskId);
  CreateResourceResponse createResourceWithOptions(shared_ptr<string> requestPath,
                                                   shared_ptr<CreateResourceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceResponse createResource(shared_ptr<string> requestPath, shared_ptr<CreateResourceRequest> request);
  DeleteResourceResponse deleteResourceWithOptions(shared_ptr<string> requestPath,
                                                   shared_ptr<DeleteResourceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceResponse deleteResource(shared_ptr<string> requestPath, shared_ptr<DeleteResourceRequest> request);
  GetPriceResponse getPriceWithOptions(shared_ptr<string> requestPath,
                                       shared_ptr<GetPriceRequest> tmpReq,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPriceResponse getPrice(shared_ptr<string> requestPath, shared_ptr<GetPriceRequest> request);
  GetResourceTypeResponse getResourceTypeWithOptions(shared_ptr<string> requestPath, shared_ptr<GetResourceTypeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceTypeResponse getResourceType(shared_ptr<string> requestPath);
  GetResourcesResponse getResourcesWithOptions(shared_ptr<string> requestPath,
                                               shared_ptr<GetResourcesRequest> tmpReq,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourcesResponse getResources(shared_ptr<string> requestPath, shared_ptr<GetResourcesRequest> request);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> taskId);
  ListDataSourcesResponse listDataSourcesWithOptions(shared_ptr<string> requestPath,
                                                     shared_ptr<ListDataSourcesRequest> tmpReq,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourcesResponse listDataSources(shared_ptr<string> requestPath, shared_ptr<ListDataSourcesRequest> request);
  ListProductsResponse listProductsWithOptions(shared_ptr<string> provider,
                                               shared_ptr<ListProductsRequest> request,
                                               shared_ptr<ListProductsHeaders> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsResponse listProducts(shared_ptr<string> provider, shared_ptr<ListProductsRequest> request);
  ListResourceTypesResponse listResourceTypesWithOptions(shared_ptr<string> provider,
                                                         shared_ptr<string> product,
                                                         shared_ptr<ListResourceTypesRequest> tmpReq,
                                                         shared_ptr<ListResourceTypesHeaders> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceTypesResponse listResourceTypes(shared_ptr<string> provider, shared_ptr<string> product, shared_ptr<ListResourceTypesRequest> request);
  UpdateResourceResponse updateResourceWithOptions(shared_ptr<string> requestPath,
                                                   shared_ptr<UpdateResourceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceResponse updateResource(shared_ptr<string> requestPath, shared_ptr<UpdateResourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudcontrol20220830

#endif
