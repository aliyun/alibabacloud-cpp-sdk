// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MARKET20151101_H_
#define ALIBABACLOUD_MARKET20151101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Market20151101 {
class ActivateLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> identification{};
  shared_ptr<string> licenseCode{};

  ActivateLicenseRequest() {}

  explicit ActivateLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identification) {
      res["Identification"] = boost::any(*identification);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identification") != m.end() && !m["Identification"].empty()) {
      identification = make_shared<string>(boost::any_cast<string>(m["Identification"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
  }


  virtual ~ActivateLicenseRequest() = default;
};
class ActivateLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ActivateLicenseResponseBody() {}

  explicit ActivateLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ActivateLicenseResponseBody() = default;
};
class ActivateLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ActivateLicenseResponseBody> body{};

  ActivateLicenseResponse() {}

  explicit ActivateLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivateLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateLicenseResponse() = default;
};
class BindImagePackageRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> imagePackageInstanceId{};

  BindImagePackageRequest() {}

  explicit BindImagePackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (imagePackageInstanceId) {
      res["ImagePackageInstanceId"] = boost::any(*imagePackageInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("ImagePackageInstanceId") != m.end() && !m["ImagePackageInstanceId"].empty()) {
      imagePackageInstanceId = make_shared<string>(boost::any_cast<string>(m["ImagePackageInstanceId"]));
    }
  }


  virtual ~BindImagePackageRequest() = default;
};
class BindImagePackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BindImagePackageResponseBody() {}

  explicit BindImagePackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BindImagePackageResponseBody() = default;
};
class BindImagePackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindImagePackageResponseBody> body{};

  BindImagePackageResponse() {}

  explicit BindImagePackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindImagePackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindImagePackageResponseBody>(model1);
      }
    }
  }


  virtual ~BindImagePackageResponse() = default;
};
class CreateCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> content{};

  CreateCommodityRequest() {}

  explicit CreateCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~CreateCommodityRequest() = default;
};
class CreateCommodityResponseBodyCommodity : public Darabonba::Model {
public:
  shared_ptr<string> commodityId{};

  CreateCommodityResponseBodyCommodity() {}

  explicit CreateCommodityResponseBodyCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<string>(boost::any_cast<string>(m["CommodityId"]));
    }
  }


  virtual ~CreateCommodityResponseBodyCommodity() = default;
};
class CreateCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateCommodityResponseBodyCommodity> commodity{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCommodityResponseBody() {}

  explicit CreateCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        CreateCommodityResponseBodyCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<CreateCommodityResponseBodyCommodity>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateCommodityResponseBody() = default;
};
class CreateCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCommodityResponseBody> body{};

  CreateCommodityResponse() {}

  explicit CreateCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCommodityResponse() = default;
};
class CreateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodity{};
  shared_ptr<string> orderSouce{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> paymentType{};

  CreateOrderRequest() {}

  explicit CreateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodity) {
      res["Commodity"] = boost::any(*commodity);
    }
    if (orderSouce) {
      res["OrderSouce"] = boost::any(*orderSouce);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      commodity = make_shared<string>(boost::any_cast<string>(m["Commodity"]));
    }
    if (m.find("OrderSouce") != m.end() && !m["OrderSouce"].empty()) {
      orderSouce = make_shared<string>(boost::any_cast<string>(m["OrderSouce"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
  }


  virtual ~CreateOrderRequest() = default;
};
class CreateOrderResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  CreateOrderResponseBodyInstanceIds() {}

  explicit CreateOrderResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateOrderResponseBodyInstanceIds() = default;
};
class CreateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateOrderResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateOrderResponseBody() {}

  explicit CreateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        CreateOrderResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<CreateOrderResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateOrderResponseBody() = default;
};
class CreateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOrderResponseBody> body{};

  CreateOrderResponse() {}

  explicit CreateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrderResponse() = default;
};
class CreateRateRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> customerLabels{};
  shared_ptr<string> orderId{};
  shared_ptr<string> packageVersion{};
  shared_ptr<string> requestId{};
  shared_ptr<string> score{};

  CreateRateRequest() {}

  explicit CreateRateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (customerLabels) {
      res["CustomerLabels"] = boost::any(*customerLabels);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CustomerLabels") != m.end() && !m["CustomerLabels"].empty()) {
      customerLabels = make_shared<string>(boost::any_cast<string>(m["CustomerLabels"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
  }


  virtual ~CreateRateRequest() = default;
};
class CreateRateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateRateResponseBody() {}

  explicit CreateRateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRateResponseBody() = default;
};
class CreateRateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRateResponseBody> body{};

  CreateRateResponse() {}

  explicit CreateRateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRateResponse() = default;
};
class DeleteCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityId{};

  DeleteCommodityRequest() {}

  explicit DeleteCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<string>(boost::any_cast<string>(m["CommodityId"]));
    }
  }


  virtual ~DeleteCommodityRequest() = default;
};
class DeleteCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCommodityResponseBody() {}

  explicit DeleteCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCommodityResponseBody() = default;
};
class DeleteCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCommodityResponseBody> body{};

  DeleteCommodityResponse() {}

  explicit DeleteCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCommodityResponse() = default;
};
class DescribeCommoditiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityAuditStatuses{};
  shared_ptr<string> commodityCategoryIds{};
  shared_ptr<string> commodityGmtCreatedFrom{};
  shared_ptr<string> commodityGmtCreatedTo{};
  shared_ptr<string> commodityGmtModifiedFrom{};
  shared_ptr<string> commodityGmtModifiedTo{};
  shared_ptr<string> commodityGmtPublishFrom{};
  shared_ptr<string> commodityGmtPublishTo{};
  shared_ptr<string> commodityId{};
  shared_ptr<string> commodityIds{};
  shared_ptr<string> commodityStatuses{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> properties{};

  DescribeCommoditiesRequest() {}

  explicit DescribeCommoditiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityAuditStatuses) {
      res["CommodityAuditStatuses"] = boost::any(*commodityAuditStatuses);
    }
    if (commodityCategoryIds) {
      res["CommodityCategoryIds"] = boost::any(*commodityCategoryIds);
    }
    if (commodityGmtCreatedFrom) {
      res["CommodityGmtCreatedFrom"] = boost::any(*commodityGmtCreatedFrom);
    }
    if (commodityGmtCreatedTo) {
      res["CommodityGmtCreatedTo"] = boost::any(*commodityGmtCreatedTo);
    }
    if (commodityGmtModifiedFrom) {
      res["CommodityGmtModifiedFrom"] = boost::any(*commodityGmtModifiedFrom);
    }
    if (commodityGmtModifiedTo) {
      res["CommodityGmtModifiedTo"] = boost::any(*commodityGmtModifiedTo);
    }
    if (commodityGmtPublishFrom) {
      res["CommodityGmtPublishFrom"] = boost::any(*commodityGmtPublishFrom);
    }
    if (commodityGmtPublishTo) {
      res["CommodityGmtPublishTo"] = boost::any(*commodityGmtPublishTo);
    }
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    if (commodityIds) {
      res["CommodityIds"] = boost::any(*commodityIds);
    }
    if (commodityStatuses) {
      res["CommodityStatuses"] = boost::any(*commodityStatuses);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityAuditStatuses") != m.end() && !m["CommodityAuditStatuses"].empty()) {
      commodityAuditStatuses = make_shared<string>(boost::any_cast<string>(m["CommodityAuditStatuses"]));
    }
    if (m.find("CommodityCategoryIds") != m.end() && !m["CommodityCategoryIds"].empty()) {
      commodityCategoryIds = make_shared<string>(boost::any_cast<string>(m["CommodityCategoryIds"]));
    }
    if (m.find("CommodityGmtCreatedFrom") != m.end() && !m["CommodityGmtCreatedFrom"].empty()) {
      commodityGmtCreatedFrom = make_shared<string>(boost::any_cast<string>(m["CommodityGmtCreatedFrom"]));
    }
    if (m.find("CommodityGmtCreatedTo") != m.end() && !m["CommodityGmtCreatedTo"].empty()) {
      commodityGmtCreatedTo = make_shared<string>(boost::any_cast<string>(m["CommodityGmtCreatedTo"]));
    }
    if (m.find("CommodityGmtModifiedFrom") != m.end() && !m["CommodityGmtModifiedFrom"].empty()) {
      commodityGmtModifiedFrom = make_shared<string>(boost::any_cast<string>(m["CommodityGmtModifiedFrom"]));
    }
    if (m.find("CommodityGmtModifiedTo") != m.end() && !m["CommodityGmtModifiedTo"].empty()) {
      commodityGmtModifiedTo = make_shared<string>(boost::any_cast<string>(m["CommodityGmtModifiedTo"]));
    }
    if (m.find("CommodityGmtPublishFrom") != m.end() && !m["CommodityGmtPublishFrom"].empty()) {
      commodityGmtPublishFrom = make_shared<string>(boost::any_cast<string>(m["CommodityGmtPublishFrom"]));
    }
    if (m.find("CommodityGmtPublishTo") != m.end() && !m["CommodityGmtPublishTo"].empty()) {
      commodityGmtPublishTo = make_shared<string>(boost::any_cast<string>(m["CommodityGmtPublishTo"]));
    }
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<string>(boost::any_cast<string>(m["CommodityId"]));
    }
    if (m.find("CommodityIds") != m.end() && !m["CommodityIds"].empty()) {
      commodityIds = make_shared<string>(boost::any_cast<string>(m["CommodityIds"]));
    }
    if (m.find("CommodityStatuses") != m.end() && !m["CommodityStatuses"].empty()) {
      commodityStatuses = make_shared<string>(boost::any_cast<string>(m["CommodityStatuses"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
  }


  virtual ~DescribeCommoditiesRequest() = default;
};
class DescribeCommoditiesResponseBodyDataCommoditiesCommodity : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> commodityId{};
  shared_ptr<string> properties{};

  DescribeCommoditiesResponseBodyDataCommoditiesCommodity() {}

  explicit DescribeCommoditiesResponseBodyDataCommoditiesCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<string>(boost::any_cast<string>(m["CommodityId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
  }


  virtual ~DescribeCommoditiesResponseBodyDataCommoditiesCommodity() = default;
};
class DescribeCommoditiesResponseBodyDataCommodities : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCommoditiesResponseBodyDataCommoditiesCommodity>> commodity{};

  DescribeCommoditiesResponseBodyDataCommodities() {}

  explicit DescribeCommoditiesResponseBodyDataCommodities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodity) {
      vector<boost::any> temp1;
      for(auto item1:*commodity){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Commodity"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(vector<boost::any>) == m["Commodity"].type()) {
        vector<DescribeCommoditiesResponseBodyDataCommoditiesCommodity> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Commodity"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCommoditiesResponseBodyDataCommoditiesCommodity model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commodity = make_shared<vector<DescribeCommoditiesResponseBodyDataCommoditiesCommodity>>(expect1);
      }
    }
  }


  virtual ~DescribeCommoditiesResponseBodyDataCommodities() = default;
};
class DescribeCommoditiesResponseBodyDataPageable : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeCommoditiesResponseBodyDataPageable() {}

  explicit DescribeCommoditiesResponseBodyDataPageable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeCommoditiesResponseBodyDataPageable() = default;
};
class DescribeCommoditiesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeCommoditiesResponseBodyDataCommodities> commodities{};
  shared_ptr<DescribeCommoditiesResponseBodyDataPageable> pageable{};
  shared_ptr<long> totalCount{};

  DescribeCommoditiesResponseBodyData() {}

  explicit DescribeCommoditiesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodities) {
      res["Commodities"] = commodities ? boost::any(commodities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageable) {
      res["Pageable"] = pageable ? boost::any(pageable->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commodities") != m.end() && !m["Commodities"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodities"].type()) {
        DescribeCommoditiesResponseBodyDataCommodities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodities"]));
        commodities = make_shared<DescribeCommoditiesResponseBodyDataCommodities>(model1);
      }
    }
    if (m.find("Pageable") != m.end() && !m["Pageable"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pageable"].type()) {
        DescribeCommoditiesResponseBodyDataPageable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pageable"]));
        pageable = make_shared<DescribeCommoditiesResponseBodyDataPageable>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCommoditiesResponseBodyData() = default;
};
class DescribeCommoditiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCommoditiesResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCommoditiesResponseBody() {}

  explicit DescribeCommoditiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeCommoditiesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCommoditiesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeCommoditiesResponseBody() = default;
};
class DescribeCommoditiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCommoditiesResponseBody> body{};

  DescribeCommoditiesResponse() {}

  explicit DescribeCommoditiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCommoditiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCommoditiesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCommoditiesResponse() = default;
};
class DescribeCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityId{};

  DescribeCommodityRequest() {}

  explicit DescribeCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<string>(boost::any_cast<string>(m["CommodityId"]));
    }
  }


  virtual ~DescribeCommodityRequest() = default;
};
class DescribeCommodityResponseBodyCommodity : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> commodityId{};
  shared_ptr<string> commoditySpecs{};
  shared_ptr<string> properties{};

  DescribeCommodityResponseBodyCommodity() {}

  explicit DescribeCommodityResponseBodyCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    if (commoditySpecs) {
      res["CommoditySpecs"] = boost::any(*commoditySpecs);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<string>(boost::any_cast<string>(m["CommodityId"]));
    }
    if (m.find("CommoditySpecs") != m.end() && !m["CommoditySpecs"].empty()) {
      commoditySpecs = make_shared<string>(boost::any_cast<string>(m["CommoditySpecs"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
  }


  virtual ~DescribeCommodityResponseBodyCommodity() = default;
};
class DescribeCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCommodityResponseBodyCommodity> commodity{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCommodityResponseBody() {}

  explicit DescribeCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        DescribeCommodityResponseBodyCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<DescribeCommodityResponseBodyCommodity>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeCommodityResponseBody() = default;
};
class DescribeCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCommodityResponseBody> body{};

  DescribeCommodityResponse() {}

  explicit DescribeCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCommodityResponse() = default;
};
class DescribeCurrentNodeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeCurrentNodeInfoRequest() {}

  explicit DescribeCurrentNodeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeCurrentNodeInfoRequest() = default;
};
class DescribeCurrentNodeInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> allowRollbackNode{};
  shared_ptr<bool> autoFinishNode{};
  shared_ptr<long> finalStepNo{};
  shared_ptr<long> gmtExpired{};
  shared_ptr<long> gmtFinished{};
  shared_ptr<long> gmtStart{};
  shared_ptr<bool> needAttachment{};
  shared_ptr<long> nextNodeId{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> operatorRole{};
  shared_ptr<long> parentNodeId{};
  shared_ptr<long> previousNodeId{};
  shared_ptr<long> stepNo{};
  shared_ptr<string> templateForm{};

  DescribeCurrentNodeInfoResponseBodyResult() {}

  explicit DescribeCurrentNodeInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRollbackNode) {
      res["AllowRollbackNode"] = boost::any(*allowRollbackNode);
    }
    if (autoFinishNode) {
      res["AutoFinishNode"] = boost::any(*autoFinishNode);
    }
    if (finalStepNo) {
      res["FinalStepNo"] = boost::any(*finalStepNo);
    }
    if (gmtExpired) {
      res["GmtExpired"] = boost::any(*gmtExpired);
    }
    if (gmtFinished) {
      res["GmtFinished"] = boost::any(*gmtFinished);
    }
    if (gmtStart) {
      res["GmtStart"] = boost::any(*gmtStart);
    }
    if (needAttachment) {
      res["NeedAttachment"] = boost::any(*needAttachment);
    }
    if (nextNodeId) {
      res["NextNodeId"] = boost::any(*nextNodeId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (operatorRole) {
      res["OperatorRole"] = boost::any(*operatorRole);
    }
    if (parentNodeId) {
      res["ParentNodeId"] = boost::any(*parentNodeId);
    }
    if (previousNodeId) {
      res["PreviousNodeId"] = boost::any(*previousNodeId);
    }
    if (stepNo) {
      res["StepNo"] = boost::any(*stepNo);
    }
    if (templateForm) {
      res["TemplateForm"] = boost::any(*templateForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowRollbackNode") != m.end() && !m["AllowRollbackNode"].empty()) {
      allowRollbackNode = make_shared<bool>(boost::any_cast<bool>(m["AllowRollbackNode"]));
    }
    if (m.find("AutoFinishNode") != m.end() && !m["AutoFinishNode"].empty()) {
      autoFinishNode = make_shared<bool>(boost::any_cast<bool>(m["AutoFinishNode"]));
    }
    if (m.find("FinalStepNo") != m.end() && !m["FinalStepNo"].empty()) {
      finalStepNo = make_shared<long>(boost::any_cast<long>(m["FinalStepNo"]));
    }
    if (m.find("GmtExpired") != m.end() && !m["GmtExpired"].empty()) {
      gmtExpired = make_shared<long>(boost::any_cast<long>(m["GmtExpired"]));
    }
    if (m.find("GmtFinished") != m.end() && !m["GmtFinished"].empty()) {
      gmtFinished = make_shared<long>(boost::any_cast<long>(m["GmtFinished"]));
    }
    if (m.find("GmtStart") != m.end() && !m["GmtStart"].empty()) {
      gmtStart = make_shared<long>(boost::any_cast<long>(m["GmtStart"]));
    }
    if (m.find("NeedAttachment") != m.end() && !m["NeedAttachment"].empty()) {
      needAttachment = make_shared<bool>(boost::any_cast<bool>(m["NeedAttachment"]));
    }
    if (m.find("NextNodeId") != m.end() && !m["NextNodeId"].empty()) {
      nextNodeId = make_shared<long>(boost::any_cast<long>(m["NextNodeId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("OperatorRole") != m.end() && !m["OperatorRole"].empty()) {
      operatorRole = make_shared<string>(boost::any_cast<string>(m["OperatorRole"]));
    }
    if (m.find("ParentNodeId") != m.end() && !m["ParentNodeId"].empty()) {
      parentNodeId = make_shared<long>(boost::any_cast<long>(m["ParentNodeId"]));
    }
    if (m.find("PreviousNodeId") != m.end() && !m["PreviousNodeId"].empty()) {
      previousNodeId = make_shared<long>(boost::any_cast<long>(m["PreviousNodeId"]));
    }
    if (m.find("StepNo") != m.end() && !m["StepNo"].empty()) {
      stepNo = make_shared<long>(boost::any_cast<long>(m["StepNo"]));
    }
    if (m.find("TemplateForm") != m.end() && !m["TemplateForm"].empty()) {
      templateForm = make_shared<string>(boost::any_cast<string>(m["TemplateForm"]));
    }
  }


  virtual ~DescribeCurrentNodeInfoResponseBodyResult() = default;
};
class DescribeCurrentNodeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeCurrentNodeInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  DescribeCurrentNodeInfoResponseBody() {}

  explicit DescribeCurrentNodeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeCurrentNodeInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeCurrentNodeInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeCurrentNodeInfoResponseBody() = default;
};
class DescribeCurrentNodeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCurrentNodeInfoResponseBody> body{};

  DescribeCurrentNodeInfoResponse() {}

  explicit DescribeCurrentNodeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCurrentNodeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCurrentNodeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCurrentNodeInfoResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderType{};
  shared_ptr<long> ownerId{};

  DescribeInstanceRequest() {}

  explicit DescribeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeInstanceRequest() = default;
};
class DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> max{};
  shared_ptr<string> min{};
  shared_ptr<string> remark{};
  shared_ptr<string> step{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue() {}

  explicit DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (max) {
      res["Max"] = boost::any(*max);
    }
    if (min) {
      res["Min"] = boost::any(*min);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (step) {
      res["Step"] = boost::any(*step);
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
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Max") != m.end() && !m["Max"].empty()) {
      max = make_shared<string>(boost::any_cast<string>(m["Max"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      min = make_shared<string>(boost::any_cast<string>(m["Min"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue() = default;
};
class DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue>> propertyValue{};

  DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues() {}

  explicit DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      vector<boost::any> temp1;
      for(auto item1:*propertyValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyValue"].type()) {
        vector<DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyValue = make_shared<vector<DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues() = default;
};
class DescribeInstanceResponseBodyModulesModulePropertiesProperty : public Darabonba::Model {
public:
  shared_ptr<string> displayUnit{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues> propertyValues{};
  shared_ptr<string> showType{};

  DescribeInstanceResponseBodyModulesModulePropertiesProperty() {}

  explicit DescribeInstanceResponseBodyModulesModulePropertiesProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayUnit) {
      res["DisplayUnit"] = boost::any(*displayUnit);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (propertyValues) {
      res["PropertyValues"] = propertyValues ? boost::any(propertyValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (showType) {
      res["ShowType"] = boost::any(*showType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayUnit") != m.end() && !m["DisplayUnit"].empty()) {
      displayUnit = make_shared<string>(boost::any_cast<string>(m["DisplayUnit"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyValues"].type()) {
        DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyValues"]));
        propertyValues = make_shared<DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues>(model1);
      }
    }
    if (m.find("ShowType") != m.end() && !m["ShowType"].empty()) {
      showType = make_shared<string>(boost::any_cast<string>(m["ShowType"]));
    }
  }


  virtual ~DescribeInstanceResponseBodyModulesModulePropertiesProperty() = default;
};
class DescribeInstanceResponseBodyModulesModuleProperties : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceResponseBodyModulesModulePropertiesProperty>> property{};

  DescribeInstanceResponseBodyModulesModuleProperties() {}

  explicit DescribeInstanceResponseBodyModulesModuleProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (property) {
      vector<boost::any> temp1;
      for(auto item1:*property){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Property"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      if (typeid(vector<boost::any>) == m["Property"].type()) {
        vector<DescribeInstanceResponseBodyModulesModulePropertiesProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Property"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceResponseBodyModulesModulePropertiesProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        property = make_shared<vector<DescribeInstanceResponseBodyModulesModulePropertiesProperty>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceResponseBodyModulesModuleProperties() = default;
};
class DescribeInstanceResponseBodyModulesModule : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<DescribeInstanceResponseBodyModulesModuleProperties> properties{};

  DescribeInstanceResponseBodyModulesModule() {}

  explicit DescribeInstanceResponseBodyModulesModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        DescribeInstanceResponseBodyModulesModuleProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<DescribeInstanceResponseBodyModulesModuleProperties>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponseBodyModulesModule() = default;
};
class DescribeInstanceResponseBodyModules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceResponseBodyModulesModule>> module{};

  DescribeInstanceResponseBodyModules() {}

  explicit DescribeInstanceResponseBodyModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Module"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(vector<boost::any>) == m["Module"].type()) {
        vector<DescribeInstanceResponseBodyModulesModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceResponseBodyModulesModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<DescribeInstanceResponseBodyModulesModule>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceResponseBodyModules() = default;
};
class DescribeInstanceResponseBodyRelationalData : public Darabonba::Model {
public:
  shared_ptr<string> serviceStatus{};

  DescribeInstanceResponseBodyRelationalData() {}

  explicit DescribeInstanceResponseBodyRelationalData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
  }


  virtual ~DescribeInstanceResponseBodyRelationalData() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appJson{};
  shared_ptr<long> beganOn{};
  shared_ptr<string> componentJson{};
  shared_ptr<string> constraints{};
  shared_ptr<long> createdOn{};
  shared_ptr<long> endOn{};
  shared_ptr<string> extendJson{};
  shared_ptr<string> hostJson{};
  shared_ptr<long> instanceId{};
  shared_ptr<bool> isTrial{};
  shared_ptr<DescribeInstanceResponseBodyModules> modules{};
  shared_ptr<long> orderId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> productSkuCode{};
  shared_ptr<string> productType{};
  shared_ptr<DescribeInstanceResponseBodyRelationalData> relationalData{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appJson) {
      res["AppJson"] = boost::any(*appJson);
    }
    if (beganOn) {
      res["BeganOn"] = boost::any(*beganOn);
    }
    if (componentJson) {
      res["ComponentJson"] = boost::any(*componentJson);
    }
    if (constraints) {
      res["Constraints"] = boost::any(*constraints);
    }
    if (createdOn) {
      res["CreatedOn"] = boost::any(*createdOn);
    }
    if (endOn) {
      res["EndOn"] = boost::any(*endOn);
    }
    if (extendJson) {
      res["ExtendJson"] = boost::any(*extendJson);
    }
    if (hostJson) {
      res["HostJson"] = boost::any(*hostJson);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isTrial) {
      res["IsTrial"] = boost::any(*isTrial);
    }
    if (modules) {
      res["Modules"] = modules ? boost::any(modules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productSkuCode) {
      res["ProductSkuCode"] = boost::any(*productSkuCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (relationalData) {
      res["RelationalData"] = relationalData ? boost::any(relationalData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppJson") != m.end() && !m["AppJson"].empty()) {
      appJson = make_shared<string>(boost::any_cast<string>(m["AppJson"]));
    }
    if (m.find("BeganOn") != m.end() && !m["BeganOn"].empty()) {
      beganOn = make_shared<long>(boost::any_cast<long>(m["BeganOn"]));
    }
    if (m.find("ComponentJson") != m.end() && !m["ComponentJson"].empty()) {
      componentJson = make_shared<string>(boost::any_cast<string>(m["ComponentJson"]));
    }
    if (m.find("Constraints") != m.end() && !m["Constraints"].empty()) {
      constraints = make_shared<string>(boost::any_cast<string>(m["Constraints"]));
    }
    if (m.find("CreatedOn") != m.end() && !m["CreatedOn"].empty()) {
      createdOn = make_shared<long>(boost::any_cast<long>(m["CreatedOn"]));
    }
    if (m.find("EndOn") != m.end() && !m["EndOn"].empty()) {
      endOn = make_shared<long>(boost::any_cast<long>(m["EndOn"]));
    }
    if (m.find("ExtendJson") != m.end() && !m["ExtendJson"].empty()) {
      extendJson = make_shared<string>(boost::any_cast<string>(m["ExtendJson"]));
    }
    if (m.find("HostJson") != m.end() && !m["HostJson"].empty()) {
      hostJson = make_shared<string>(boost::any_cast<string>(m["HostJson"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("IsTrial") != m.end() && !m["IsTrial"].empty()) {
      isTrial = make_shared<bool>(boost::any_cast<bool>(m["IsTrial"]));
    }
    if (m.find("Modules") != m.end() && !m["Modules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modules"].type()) {
        DescribeInstanceResponseBodyModules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modules"]));
        modules = make_shared<DescribeInstanceResponseBodyModules>(model1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductSkuCode") != m.end() && !m["ProductSkuCode"].empty()) {
      productSkuCode = make_shared<string>(boost::any_cast<string>(m["ProductSkuCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RelationalData") != m.end() && !m["RelationalData"].empty()) {
      if (typeid(map<string, boost::any>) == m["RelationalData"].type()) {
        DescribeInstanceResponseBodyRelationalData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RelationalData"]));
        relationalData = make_shared<DescribeInstanceResponseBodyRelationalData>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
  }


  virtual ~DescribeInstanceResponseBody() = default;
};
class DescribeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceResponseBody> body{};

  DescribeInstanceResponse() {}

  explicit DescribeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> codes{};
  shared_ptr<string> exceptCodes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codes) {
      res["Codes"] = boost::any(*codes);
    }
    if (exceptCodes) {
      res["ExceptCodes"] = boost::any(*exceptCodes);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Codes") != m.end() && !m["Codes"].empty()) {
      codes = make_shared<string>(boost::any_cast<string>(m["Codes"]));
    }
    if (m.find("ExceptCodes") != m.end() && !m["ExceptCodes"].empty()) {
      exceptCodes = make_shared<string>(boost::any_cast<string>(m["ExceptCodes"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyInstanceItemsInstanceItem : public Darabonba::Model {
public:
  shared_ptr<string> apiJson{};
  shared_ptr<string> appJson{};
  shared_ptr<long> beganOn{};
  shared_ptr<long> createdOn{};
  shared_ptr<long> endOn{};
  shared_ptr<string> extendJson{};
  shared_ptr<string> hostJson{};
  shared_ptr<string> idaasJson{};
  shared_ptr<string> imageJson{};
  shared_ptr<long> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> productSkuCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};

  DescribeInstancesResponseBodyInstanceItemsInstanceItem() {}

  explicit DescribeInstancesResponseBodyInstanceItemsInstanceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiJson) {
      res["ApiJson"] = boost::any(*apiJson);
    }
    if (appJson) {
      res["AppJson"] = boost::any(*appJson);
    }
    if (beganOn) {
      res["BeganOn"] = boost::any(*beganOn);
    }
    if (createdOn) {
      res["CreatedOn"] = boost::any(*createdOn);
    }
    if (endOn) {
      res["EndOn"] = boost::any(*endOn);
    }
    if (extendJson) {
      res["ExtendJson"] = boost::any(*extendJson);
    }
    if (hostJson) {
      res["HostJson"] = boost::any(*hostJson);
    }
    if (idaasJson) {
      res["IdaasJson"] = boost::any(*idaasJson);
    }
    if (imageJson) {
      res["ImageJson"] = boost::any(*imageJson);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productSkuCode) {
      res["ProductSkuCode"] = boost::any(*productSkuCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiJson") != m.end() && !m["ApiJson"].empty()) {
      apiJson = make_shared<string>(boost::any_cast<string>(m["ApiJson"]));
    }
    if (m.find("AppJson") != m.end() && !m["AppJson"].empty()) {
      appJson = make_shared<string>(boost::any_cast<string>(m["AppJson"]));
    }
    if (m.find("BeganOn") != m.end() && !m["BeganOn"].empty()) {
      beganOn = make_shared<long>(boost::any_cast<long>(m["BeganOn"]));
    }
    if (m.find("CreatedOn") != m.end() && !m["CreatedOn"].empty()) {
      createdOn = make_shared<long>(boost::any_cast<long>(m["CreatedOn"]));
    }
    if (m.find("EndOn") != m.end() && !m["EndOn"].empty()) {
      endOn = make_shared<long>(boost::any_cast<long>(m["EndOn"]));
    }
    if (m.find("ExtendJson") != m.end() && !m["ExtendJson"].empty()) {
      extendJson = make_shared<string>(boost::any_cast<string>(m["ExtendJson"]));
    }
    if (m.find("HostJson") != m.end() && !m["HostJson"].empty()) {
      hostJson = make_shared<string>(boost::any_cast<string>(m["HostJson"]));
    }
    if (m.find("IdaasJson") != m.end() && !m["IdaasJson"].empty()) {
      idaasJson = make_shared<string>(boost::any_cast<string>(m["IdaasJson"]));
    }
    if (m.find("ImageJson") != m.end() && !m["ImageJson"].empty()) {
      imageJson = make_shared<string>(boost::any_cast<string>(m["ImageJson"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductSkuCode") != m.end() && !m["ProductSkuCode"].empty()) {
      productSkuCode = make_shared<string>(boost::any_cast<string>(m["ProductSkuCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstanceItemsInstanceItem() = default;
};
class DescribeInstancesResponseBodyInstanceItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstanceItemsInstanceItem>> instanceItem{};

  DescribeInstancesResponseBodyInstanceItems() {}

  explicit DescribeInstancesResponseBodyInstanceItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceItem) {
      vector<boost::any> temp1;
      for(auto item1:*instanceItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceItem") != m.end() && !m["InstanceItem"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceItem"].type()) {
        vector<DescribeInstancesResponseBodyInstanceItemsInstanceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstanceItemsInstanceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceItem = make_shared<vector<DescribeInstancesResponseBodyInstanceItemsInstanceItem>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstanceItems() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInstancesResponseBodyInstanceItems> instanceItems{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceItems) {
      res["InstanceItems"] = instanceItems ? boost::any(instanceItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("InstanceItems") != m.end() && !m["InstanceItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceItems"].type()) {
        DescribeInstancesResponseBodyInstanceItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceItems"]));
        instanceItems = make_shared<DescribeInstancesResponseBodyInstanceItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> licenseCode{};

  DescribeLicenseRequest() {}

  explicit DescribeLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
  }


  virtual ~DescribeLicenseRequest() = default;
};
class DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> value{};

  DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute() {}

  explicit DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute() = default;
};
class DescribeLicenseResponseBodyLicenseExtendArray : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute>> licenseAttribute{};

  DescribeLicenseResponseBodyLicenseExtendArray() {}

  explicit DescribeLicenseResponseBodyLicenseExtendArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (licenseAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*licenseAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LicenseAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LicenseAttribute") != m.end() && !m["LicenseAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["LicenseAttribute"].type()) {
        vector<DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LicenseAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        licenseAttribute = make_shared<vector<DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeLicenseResponseBodyLicenseExtendArray() = default;
};
class DescribeLicenseResponseBodyLicenseExtendInfo : public Darabonba::Model {
public:
  shared_ptr<long> accountQuantity{};
  shared_ptr<long> aliUid{};
  shared_ptr<string> email{};
  shared_ptr<string> mobile{};

  DescribeLicenseResponseBodyLicenseExtendInfo() {}

  explicit DescribeLicenseResponseBodyLicenseExtendInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountQuantity) {
      res["AccountQuantity"] = boost::any(*accountQuantity);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountQuantity") != m.end() && !m["AccountQuantity"].empty()) {
      accountQuantity = make_shared<long>(boost::any_cast<long>(m["AccountQuantity"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
  }


  virtual ~DescribeLicenseResponseBodyLicenseExtendInfo() = default;
};
class DescribeLicenseResponseBodyLicense : public Darabonba::Model {
public:
  shared_ptr<string> activateTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<DescribeLicenseResponseBodyLicenseExtendArray> extendArray{};
  shared_ptr<DescribeLicenseResponseBodyLicenseExtendInfo> extendInfo{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> licenseCode{};
  shared_ptr<string> licenseStatus{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> productSkuId{};
  shared_ptr<string> supplierName{};

  DescribeLicenseResponseBodyLicense() {}

  explicit DescribeLicenseResponseBodyLicense(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateTime) {
      res["ActivateTime"] = boost::any(*activateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (extendArray) {
      res["ExtendArray"] = extendArray ? boost::any(extendArray->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extendInfo) {
      res["ExtendInfo"] = extendInfo ? boost::any(extendInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (licenseStatus) {
      res["LicenseStatus"] = boost::any(*licenseStatus);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productSkuId) {
      res["ProductSkuId"] = boost::any(*productSkuId);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateTime") != m.end() && !m["ActivateTime"].empty()) {
      activateTime = make_shared<string>(boost::any_cast<string>(m["ActivateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ExtendArray") != m.end() && !m["ExtendArray"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendArray"].type()) {
        DescribeLicenseResponseBodyLicenseExtendArray model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendArray"]));
        extendArray = make_shared<DescribeLicenseResponseBodyLicenseExtendArray>(model1);
      }
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendInfo"].type()) {
        DescribeLicenseResponseBodyLicenseExtendInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]));
        extendInfo = make_shared<DescribeLicenseResponseBodyLicenseExtendInfo>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("LicenseStatus") != m.end() && !m["LicenseStatus"].empty()) {
      licenseStatus = make_shared<string>(boost::any_cast<string>(m["LicenseStatus"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductSkuId") != m.end() && !m["ProductSkuId"].empty()) {
      productSkuId = make_shared<string>(boost::any_cast<string>(m["ProductSkuId"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
  }


  virtual ~DescribeLicenseResponseBodyLicense() = default;
};
class DescribeLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeLicenseResponseBodyLicense> license{};
  shared_ptr<string> requestId{};

  DescribeLicenseResponseBody() {}

  explicit DescribeLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (license) {
      res["License"] = license ? boost::any(license->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("License") != m.end() && !m["License"].empty()) {
      if (typeid(map<string, boost::any>) == m["License"].type()) {
        DescribeLicenseResponseBodyLicense model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["License"]));
        license = make_shared<DescribeLicenseResponseBodyLicense>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLicenseResponseBody() = default;
};
class DescribeLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLicenseResponseBody> body{};

  DescribeLicenseResponse() {}

  explicit DescribeLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLicenseResponse() = default;
};
class DescribeOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  DescribeOrderRequest() {}

  explicit DescribeOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~DescribeOrderRequest() = default;
};
class DescribeOrderResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  DescribeOrderResponseBodyInstanceIds() {}

  explicit DescribeOrderResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOrderResponseBodyInstanceIds() = default;
};
class DescribeOrderResponseBodySupplierTelephones : public Darabonba::Model {
public:
  shared_ptr<vector<string>> telephone{};

  DescribeOrderResponseBodySupplierTelephones() {}

  explicit DescribeOrderResponseBodySupplierTelephones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Telephone"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Telephone"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      telephone = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOrderResponseBodySupplierTelephones() = default;
};
class DescribeOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> accountQuantity{};
  shared_ptr<long> aliUid{};
  shared_ptr<map<string, boost::any>> components{};
  shared_ptr<double> couponPrice{};
  shared_ptr<long> createdOn{};
  shared_ptr<DescribeOrderResponseBodyInstanceIds> instanceIds{};
  shared_ptr<long> orderId{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<double> originalPrice{};
  shared_ptr<long> paidOn{};
  shared_ptr<string> payStatus{};
  shared_ptr<double> paymentPrice{};
  shared_ptr<string> periodType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> productSkuCode{};
  shared_ptr<long> quantity{};
  shared_ptr<string> requestId{};
  shared_ptr<string> supplierCompanyName{};
  shared_ptr<DescribeOrderResponseBodySupplierTelephones> supplierTelephones{};
  shared_ptr<double> totalPrice{};

  DescribeOrderResponseBody() {}

  explicit DescribeOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountQuantity) {
      res["AccountQuantity"] = boost::any(*accountQuantity);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    if (couponPrice) {
      res["CouponPrice"] = boost::any(*couponPrice);
    }
    if (createdOn) {
      res["CreatedOn"] = boost::any(*createdOn);
    }
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (paidOn) {
      res["PaidOn"] = boost::any(*paidOn);
    }
    if (payStatus) {
      res["PayStatus"] = boost::any(*payStatus);
    }
    if (paymentPrice) {
      res["PaymentPrice"] = boost::any(*paymentPrice);
    }
    if (periodType) {
      res["PeriodType"] = boost::any(*periodType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productSkuCode) {
      res["ProductSkuCode"] = boost::any(*productSkuCode);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supplierCompanyName) {
      res["SupplierCompanyName"] = boost::any(*supplierCompanyName);
    }
    if (supplierTelephones) {
      res["SupplierTelephones"] = supplierTelephones ? boost::any(supplierTelephones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalPrice) {
      res["TotalPrice"] = boost::any(*totalPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountQuantity") != m.end() && !m["AccountQuantity"].empty()) {
      accountQuantity = make_shared<long>(boost::any_cast<long>(m["AccountQuantity"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Components"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      components = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CouponPrice") != m.end() && !m["CouponPrice"].empty()) {
      couponPrice = make_shared<double>(boost::any_cast<double>(m["CouponPrice"]));
    }
    if (m.find("CreatedOn") != m.end() && !m["CreatedOn"].empty()) {
      createdOn = make_shared<long>(boost::any_cast<long>(m["CreatedOn"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        DescribeOrderResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<DescribeOrderResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("PaidOn") != m.end() && !m["PaidOn"].empty()) {
      paidOn = make_shared<long>(boost::any_cast<long>(m["PaidOn"]));
    }
    if (m.find("PayStatus") != m.end() && !m["PayStatus"].empty()) {
      payStatus = make_shared<string>(boost::any_cast<string>(m["PayStatus"]));
    }
    if (m.find("PaymentPrice") != m.end() && !m["PaymentPrice"].empty()) {
      paymentPrice = make_shared<double>(boost::any_cast<double>(m["PaymentPrice"]));
    }
    if (m.find("PeriodType") != m.end() && !m["PeriodType"].empty()) {
      periodType = make_shared<string>(boost::any_cast<string>(m["PeriodType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductSkuCode") != m.end() && !m["ProductSkuCode"].empty()) {
      productSkuCode = make_shared<string>(boost::any_cast<string>(m["ProductSkuCode"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupplierCompanyName") != m.end() && !m["SupplierCompanyName"].empty()) {
      supplierCompanyName = make_shared<string>(boost::any_cast<string>(m["SupplierCompanyName"]));
    }
    if (m.find("SupplierTelephones") != m.end() && !m["SupplierTelephones"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupplierTelephones"].type()) {
        DescribeOrderResponseBodySupplierTelephones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupplierTelephones"]));
        supplierTelephones = make_shared<DescribeOrderResponseBodySupplierTelephones>(model1);
      }
    }
    if (m.find("TotalPrice") != m.end() && !m["TotalPrice"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["TotalPrice"]));
    }
  }


  virtual ~DescribeOrderResponseBody() = default;
};
class DescribeOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeOrderResponseBody> body{};

  DescribeOrderResponse() {}

  explicit DescribeOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOrderResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOrderResponse() = default;
};
class DescribePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodity{};
  shared_ptr<string> orderType{};

  DescribePriceRequest() {}

  explicit DescribePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodity) {
      res["Commodity"] = boost::any(*commodity);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      commodity = make_shared<string>(boost::any_cast<string>(m["Commodity"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
  }


  virtual ~DescribePriceRequest() = default;
};
class DescribePriceResponseBodyCouponsCoupon : public Darabonba::Model {
public:
  shared_ptr<double> canPromFee{};
  shared_ptr<string> couponDesc{};
  shared_ptr<string> couponName{};
  shared_ptr<string> couponOptionCode{};
  shared_ptr<string> couponOptionNo{};
  shared_ptr<bool> isSelected{};

  DescribePriceResponseBodyCouponsCoupon() {}

  explicit DescribePriceResponseBodyCouponsCoupon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (couponOptionCode) {
      res["CouponOptionCode"] = boost::any(*couponOptionCode);
    }
    if (couponOptionNo) {
      res["CouponOptionNo"] = boost::any(*couponOptionNo);
    }
    if (isSelected) {
      res["IsSelected"] = boost::any(*isSelected);
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
    if (m.find("CouponOptionCode") != m.end() && !m["CouponOptionCode"].empty()) {
      couponOptionCode = make_shared<string>(boost::any_cast<string>(m["CouponOptionCode"]));
    }
    if (m.find("CouponOptionNo") != m.end() && !m["CouponOptionNo"].empty()) {
      couponOptionNo = make_shared<string>(boost::any_cast<string>(m["CouponOptionNo"]));
    }
    if (m.find("IsSelected") != m.end() && !m["IsSelected"].empty()) {
      isSelected = make_shared<bool>(boost::any_cast<bool>(m["IsSelected"]));
    }
  }


  virtual ~DescribePriceResponseBodyCouponsCoupon() = default;
};
class DescribePriceResponseBodyCoupons : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyCouponsCoupon>> coupon{};

  DescribePriceResponseBodyCoupons() {}

  explicit DescribePriceResponseBodyCoupons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribePriceResponseBodyCouponsCoupon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Coupon"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyCouponsCoupon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coupon = make_shared<vector<DescribePriceResponseBodyCouponsCoupon>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyCoupons() = default;
};
class DescribePriceResponseBodyPromotionRulesPromotionRule : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> title{};

  DescribePriceResponseBodyPromotionRulesPromotionRule() {}

  explicit DescribePriceResponseBodyPromotionRulesPromotionRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribePriceResponseBodyPromotionRulesPromotionRule() = default;
};
class DescribePriceResponseBodyPromotionRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyPromotionRulesPromotionRule>> promotionRule{};

  DescribePriceResponseBodyPromotionRules() {}

  explicit DescribePriceResponseBodyPromotionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionRule) {
      vector<boost::any> temp1;
      for(auto item1:*promotionRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PromotionRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionRule") != m.end() && !m["PromotionRule"].empty()) {
      if (typeid(vector<boost::any>) == m["PromotionRule"].type()) {
        vector<DescribePriceResponseBodyPromotionRulesPromotionRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PromotionRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyPromotionRulesPromotionRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotionRule = make_shared<vector<DescribePriceResponseBodyPromotionRulesPromotionRule>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyPromotionRules() = default;
};
class DescribePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePriceResponseBodyCoupons> coupons{};
  shared_ptr<string> currency{};
  shared_ptr<bool> cuxiao{};
  shared_ptr<string> cycle{};
  shared_ptr<double> discountPrice{};
  shared_ptr<long> duration{};
  shared_ptr<string> expressionCode{};
  shared_ptr<string> expressionMessage{};
  shared_ptr<string> infoTitle{};
  shared_ptr<double> originalPrice{};
  shared_ptr<string> productCode{};
  shared_ptr<DescribePriceResponseBodyPromotionRules> promotionRules{};
  shared_ptr<double> tradePrice{};

  DescribePriceResponseBody() {}

  explicit DescribePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupons) {
      res["Coupons"] = coupons ? boost::any(coupons->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (cuxiao) {
      res["Cuxiao"] = boost::any(*cuxiao);
    }
    if (cycle) {
      res["Cycle"] = boost::any(*cycle);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expressionCode) {
      res["ExpressionCode"] = boost::any(*expressionCode);
    }
    if (expressionMessage) {
      res["ExpressionMessage"] = boost::any(*expressionMessage);
    }
    if (infoTitle) {
      res["InfoTitle"] = boost::any(*infoTitle);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (promotionRules) {
      res["PromotionRules"] = promotionRules ? boost::any(promotionRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupons") != m.end() && !m["Coupons"].empty()) {
      if (typeid(map<string, boost::any>) == m["Coupons"].type()) {
        DescribePriceResponseBodyCoupons model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Coupons"]));
        coupons = make_shared<DescribePriceResponseBodyCoupons>(model1);
      }
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Cuxiao") != m.end() && !m["Cuxiao"].empty()) {
      cuxiao = make_shared<bool>(boost::any_cast<bool>(m["Cuxiao"]));
    }
    if (m.find("Cycle") != m.end() && !m["Cycle"].empty()) {
      cycle = make_shared<string>(boost::any_cast<string>(m["Cycle"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ExpressionCode") != m.end() && !m["ExpressionCode"].empty()) {
      expressionCode = make_shared<string>(boost::any_cast<string>(m["ExpressionCode"]));
    }
    if (m.find("ExpressionMessage") != m.end() && !m["ExpressionMessage"].empty()) {
      expressionMessage = make_shared<string>(boost::any_cast<string>(m["ExpressionMessage"]));
    }
    if (m.find("InfoTitle") != m.end() && !m["InfoTitle"].empty()) {
      infoTitle = make_shared<string>(boost::any_cast<string>(m["InfoTitle"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("PromotionRules") != m.end() && !m["PromotionRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["PromotionRules"].type()) {
        DescribePriceResponseBodyPromotionRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PromotionRules"]));
        promotionRules = make_shared<DescribePriceResponseBodyPromotionRules>(model1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribePriceResponseBody() = default;
};
class DescribePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePriceResponseBody> body{};

  DescribePriceResponse() {}

  explicit DescribePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePriceResponse() = default;
};
class DescribeProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> code{};
  shared_ptr<bool> queryDraft{};

  DescribeProductRequest() {}

  explicit DescribeProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (queryDraft) {
      res["QueryDraft"] = boost::any(*queryDraft);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("QueryDraft") != m.end() && !m["QueryDraft"].empty()) {
      queryDraft = make_shared<bool>(boost::any_cast<bool>(m["QueryDraft"]));
    }
  }


  virtual ~DescribeProductRequest() = default;
};
class DescribeProductResponseBodyProductExtrasProductExtra : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> label{};
  shared_ptr<long> order{};
  shared_ptr<string> type{};
  shared_ptr<string> values{};

  DescribeProductResponseBodyProductExtrasProductExtra() {}

  explicit DescribeProductResponseBodyProductExtrasProductExtra(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      values = make_shared<string>(boost::any_cast<string>(m["Values"]));
    }
  }


  virtual ~DescribeProductResponseBodyProductExtrasProductExtra() = default;
};
class DescribeProductResponseBodyProductExtras : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductResponseBodyProductExtrasProductExtra>> productExtra{};

  DescribeProductResponseBodyProductExtras() {}

  explicit DescribeProductResponseBodyProductExtras(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productExtra) {
      vector<boost::any> temp1;
      for(auto item1:*productExtra){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductExtra"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductExtra") != m.end() && !m["ProductExtra"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductExtra"].type()) {
        vector<DescribeProductResponseBodyProductExtrasProductExtra> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductExtra"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductResponseBodyProductExtrasProductExtra model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productExtra = make_shared<vector<DescribeProductResponseBodyProductExtrasProductExtra>>(expect1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductExtras() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> max{};
  shared_ptr<string> min{};
  shared_ptr<string> remark{};
  shared_ptr<string> step{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (max) {
      res["Max"] = boost::any(*max);
    }
    if (min) {
      res["Min"] = boost::any(*min);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (step) {
      res["Step"] = boost::any(*step);
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
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Max") != m.end() && !m["Max"].empty()) {
      max = make_shared<string>(boost::any_cast<string>(m["Max"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      min = make_shared<string>(boost::any_cast<string>(m["Min"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue>> propertyValue{};

  DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyValue) {
      vector<boost::any> temp1;
      for(auto item1:*propertyValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyValue"].type()) {
        vector<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyValue = make_shared<vector<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue>>(expect1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty : public Darabonba::Model {
public:
  shared_ptr<string> displayUnit{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues> propertyValues{};
  shared_ptr<string> showType{};

  DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayUnit) {
      res["DisplayUnit"] = boost::any(*displayUnit);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (propertyValues) {
      res["PropertyValues"] = propertyValues ? boost::any(propertyValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (showType) {
      res["ShowType"] = boost::any(*showType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayUnit") != m.end() && !m["DisplayUnit"].empty()) {
      displayUnit = make_shared<string>(boost::any_cast<string>(m["DisplayUnit"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PropertyValues") != m.end() && !m["PropertyValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyValues"].type()) {
        DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyValues"]));
        propertyValues = make_shared<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues>(model1);
      }
    }
    if (m.find("ShowType") != m.end() && !m["ShowType"].empty()) {
      showType = make_shared<string>(boost::any_cast<string>(m["ShowType"]));
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty>> property{};

  DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (property) {
      vector<boost::any> temp1;
      for(auto item1:*property){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Property"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      if (typeid(vector<boost::any>) == m["Property"].type()) {
        vector<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Property"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        property = make_shared<vector<DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty>>(expect1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuModulesModule : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties> properties{};

  DescribeProductResponseBodyProductSkusProductSkuModulesModule() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuModulesModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties>(model1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModule() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuModules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductResponseBodyProductSkusProductSkuModulesModule>> module{};

  DescribeProductResponseBodyProductSkusProductSkuModules() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Module"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(vector<boost::any>) == m["Module"].type()) {
        vector<DescribeProductResponseBodyProductSkusProductSkuModulesModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductResponseBodyProductSkusProductSkuModulesModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<DescribeProductResponseBodyProductSkusProductSkuModulesModule>>(expect1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuModules() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> periodType{};

  DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (periodType) {
      res["PeriodType"] = boost::any(*periodType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PeriodType") != m.end() && !m["PeriodType"].empty()) {
      periodType = make_shared<string>(boost::any_cast<string>(m["PeriodType"]));
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod() = default;
};
class DescribeProductResponseBodyProductSkusProductSkuOrderPeriods : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod>> orderPeriod{};

  DescribeProductResponseBodyProductSkusProductSkuOrderPeriods() {}

  explicit DescribeProductResponseBodyProductSkusProductSkuOrderPeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderPeriod) {
      vector<boost::any> temp1;
      for(auto item1:*orderPeriod){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderPeriod"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderPeriod") != m.end() && !m["OrderPeriod"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderPeriod"].type()) {
        vector<DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderPeriod"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderPeriod = make_shared<vector<DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod>>(expect1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSkuOrderPeriods() = default;
};
class DescribeProductResponseBodyProductSkusProductSku : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> code{};
  shared_ptr<string> constraints{};
  shared_ptr<bool> hidden{};
  shared_ptr<DescribeProductResponseBodyProductSkusProductSkuModules> modules{};
  shared_ptr<string> name{};
  shared_ptr<DescribeProductResponseBodyProductSkusProductSkuOrderPeriods> orderPeriods{};

  DescribeProductResponseBodyProductSkusProductSku() {}

  explicit DescribeProductResponseBodyProductSkusProductSku(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (constraints) {
      res["Constraints"] = boost::any(*constraints);
    }
    if (hidden) {
      res["Hidden"] = boost::any(*hidden);
    }
    if (modules) {
      res["Modules"] = modules ? boost::any(modules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderPeriods) {
      res["OrderPeriods"] = orderPeriods ? boost::any(orderPeriods->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Constraints") != m.end() && !m["Constraints"].empty()) {
      constraints = make_shared<string>(boost::any_cast<string>(m["Constraints"]));
    }
    if (m.find("Hidden") != m.end() && !m["Hidden"].empty()) {
      hidden = make_shared<bool>(boost::any_cast<bool>(m["Hidden"]));
    }
    if (m.find("Modules") != m.end() && !m["Modules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modules"].type()) {
        DescribeProductResponseBodyProductSkusProductSkuModules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modules"]));
        modules = make_shared<DescribeProductResponseBodyProductSkusProductSkuModules>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderPeriods") != m.end() && !m["OrderPeriods"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderPeriods"].type()) {
        DescribeProductResponseBodyProductSkusProductSkuOrderPeriods model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderPeriods"]));
        orderPeriods = make_shared<DescribeProductResponseBodyProductSkusProductSkuOrderPeriods>(model1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductSkusProductSku() = default;
};
class DescribeProductResponseBodyProductSkus : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductResponseBodyProductSkusProductSku>> productSku{};

  DescribeProductResponseBodyProductSkus() {}

  explicit DescribeProductResponseBodyProductSkus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productSku) {
      vector<boost::any> temp1;
      for(auto item1:*productSku){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductSku"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductSku") != m.end() && !m["ProductSku"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductSku"].type()) {
        vector<DescribeProductResponseBodyProductSkusProductSku> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductSku"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductResponseBodyProductSkusProductSku model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productSku = make_shared<vector<DescribeProductResponseBodyProductSkusProductSku>>(expect1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyProductSkus() = default;
};
class DescribeProductResponseBodyShopInfoTelephones : public Darabonba::Model {
public:
  shared_ptr<vector<string>> telephone{};

  DescribeProductResponseBodyShopInfoTelephones() {}

  explicit DescribeProductResponseBodyShopInfoTelephones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Telephone"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Telephone"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      telephone = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeProductResponseBodyShopInfoTelephones() = default;
};
class DescribeProductResponseBodyShopInfoWangWangsWangWang : public Darabonba::Model {
public:
  shared_ptr<string> remark{};
  shared_ptr<string> userName{};

  DescribeProductResponseBodyShopInfoWangWangsWangWang() {}

  explicit DescribeProductResponseBodyShopInfoWangWangsWangWang(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeProductResponseBodyShopInfoWangWangsWangWang() = default;
};
class DescribeProductResponseBodyShopInfoWangWangs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductResponseBodyShopInfoWangWangsWangWang>> wangWang{};

  DescribeProductResponseBodyShopInfoWangWangs() {}

  explicit DescribeProductResponseBodyShopInfoWangWangs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (wangWang) {
      vector<boost::any> temp1;
      for(auto item1:*wangWang){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WangWang"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WangWang") != m.end() && !m["WangWang"].empty()) {
      if (typeid(vector<boost::any>) == m["WangWang"].type()) {
        vector<DescribeProductResponseBodyShopInfoWangWangsWangWang> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WangWang"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductResponseBodyShopInfoWangWangsWangWang model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wangWang = make_shared<vector<DescribeProductResponseBodyShopInfoWangWangsWangWang>>(expect1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyShopInfoWangWangs() = default;
};
class DescribeProductResponseBodyShopInfo : public Darabonba::Model {
public:
  shared_ptr<string> emails{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<DescribeProductResponseBodyShopInfoTelephones> telephones{};
  shared_ptr<DescribeProductResponseBodyShopInfoWangWangs> wangWangs{};

  DescribeProductResponseBodyShopInfo() {}

  explicit DescribeProductResponseBodyShopInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emails) {
      res["Emails"] = boost::any(*emails);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (telephones) {
      res["Telephones"] = telephones ? boost::any(telephones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wangWangs) {
      res["WangWangs"] = wangWangs ? boost::any(wangWangs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Emails") != m.end() && !m["Emails"].empty()) {
      emails = make_shared<string>(boost::any_cast<string>(m["Emails"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Telephones") != m.end() && !m["Telephones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Telephones"].type()) {
        DescribeProductResponseBodyShopInfoTelephones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Telephones"]));
        telephones = make_shared<DescribeProductResponseBodyShopInfoTelephones>(model1);
      }
    }
    if (m.find("WangWangs") != m.end() && !m["WangWangs"].empty()) {
      if (typeid(map<string, boost::any>) == m["WangWangs"].type()) {
        DescribeProductResponseBodyShopInfoWangWangs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WangWangs"]));
        wangWangs = make_shared<DescribeProductResponseBodyShopInfoWangWangs>(model1);
      }
    }
  }


  virtual ~DescribeProductResponseBodyShopInfo() = default;
};
class DescribeProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> auditFailMsg{};
  shared_ptr<string> auditStatus{};
  shared_ptr<long> auditTime{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<long> frontCategoryId{};
  shared_ptr<long> gmtCreated{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> name{};
  shared_ptr<string> picUrl{};
  shared_ptr<DescribeProductResponseBodyProductExtras> productExtras{};
  shared_ptr<DescribeProductResponseBodyProductSkus> productSkus{};
  shared_ptr<string> requestId{};
  shared_ptr<double> score{};
  shared_ptr<DescribeProductResponseBodyShopInfo> shopInfo{};
  shared_ptr<string> shortDescription{};
  shared_ptr<string> status{};
  shared_ptr<long> supplierPk{};
  shared_ptr<string> type{};
  shared_ptr<long> useCount{};

  DescribeProductResponseBody() {}

  explicit DescribeProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditFailMsg) {
      res["AuditFailMsg"] = boost::any(*auditFailMsg);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (auditTime) {
      res["AuditTime"] = boost::any(*auditTime);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (frontCategoryId) {
      res["FrontCategoryId"] = boost::any(*frontCategoryId);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (productExtras) {
      res["ProductExtras"] = productExtras ? boost::any(productExtras->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productSkus) {
      res["ProductSkus"] = productSkus ? boost::any(productSkus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (shopInfo) {
      res["ShopInfo"] = shopInfo ? boost::any(shopInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierPk) {
      res["SupplierPk"] = boost::any(*supplierPk);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (useCount) {
      res["UseCount"] = boost::any(*useCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditFailMsg") != m.end() && !m["AuditFailMsg"].empty()) {
      auditFailMsg = make_shared<string>(boost::any_cast<string>(m["AuditFailMsg"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AuditTime") != m.end() && !m["AuditTime"].empty()) {
      auditTime = make_shared<long>(boost::any_cast<long>(m["AuditTime"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FrontCategoryId") != m.end() && !m["FrontCategoryId"].empty()) {
      frontCategoryId = make_shared<long>(boost::any_cast<long>(m["FrontCategoryId"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<long>(boost::any_cast<long>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("ProductExtras") != m.end() && !m["ProductExtras"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductExtras"].type()) {
        DescribeProductResponseBodyProductExtras model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductExtras"]));
        productExtras = make_shared<DescribeProductResponseBodyProductExtras>(model1);
      }
    }
    if (m.find("ProductSkus") != m.end() && !m["ProductSkus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductSkus"].type()) {
        DescribeProductResponseBodyProductSkus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductSkus"]));
        productSkus = make_shared<DescribeProductResponseBodyProductSkus>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ShopInfo") != m.end() && !m["ShopInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ShopInfo"].type()) {
        DescribeProductResponseBodyShopInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ShopInfo"]));
        shopInfo = make_shared<DescribeProductResponseBodyShopInfo>(model1);
      }
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierPk") != m.end() && !m["SupplierPk"].empty()) {
      supplierPk = make_shared<long>(boost::any_cast<long>(m["SupplierPk"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UseCount") != m.end() && !m["UseCount"].empty()) {
      useCount = make_shared<long>(boost::any_cast<long>(m["UseCount"]));
    }
  }


  virtual ~DescribeProductResponseBody() = default;
};
class DescribeProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProductResponseBody> body{};

  DescribeProductResponse() {}

  explicit DescribeProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProductResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProductResponse() = default;
};
class DescribeProductsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeProductsRequestFilter() {}

  explicit DescribeProductsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeProductsRequestFilter() = default;
};
class DescribeProductsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductsRequestFilter>> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchTerm{};

  DescribeProductsRequest() {}

  explicit DescribeProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchTerm) {
      res["SearchTerm"] = boost::any(*searchTerm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<DescribeProductsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<DescribeProductsRequestFilter>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchTerm") != m.end() && !m["SearchTerm"].empty()) {
      searchTerm = make_shared<string>(boost::any_cast<string>(m["SearchTerm"]));
    }
  }


  virtual ~DescribeProductsRequest() = default;
};
class DescribeProductsResponseBodyProductItemsProductItem : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> code{};
  shared_ptr<string> deliveryDate{};
  shared_ptr<string> deliveryWay{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> priceInfo{};
  shared_ptr<string> score{};
  shared_ptr<string> shortDescription{};
  shared_ptr<string> suggestedPrice{};
  shared_ptr<long> supplierId{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> tags{};
  shared_ptr<string> targetUrl{};
  shared_ptr<string> warrantyDate{};

  DescribeProductsResponseBodyProductItemsProductItem() {}

  explicit DescribeProductsResponseBodyProductItemsProductItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (deliveryDate) {
      res["DeliveryDate"] = boost::any(*deliveryDate);
    }
    if (deliveryWay) {
      res["DeliveryWay"] = boost::any(*deliveryWay);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (priceInfo) {
      res["PriceInfo"] = boost::any(*priceInfo);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (suggestedPrice) {
      res["SuggestedPrice"] = boost::any(*suggestedPrice);
    }
    if (supplierId) {
      res["SupplierId"] = boost::any(*supplierId);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targetUrl) {
      res["TargetUrl"] = boost::any(*targetUrl);
    }
    if (warrantyDate) {
      res["WarrantyDate"] = boost::any(*warrantyDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DeliveryDate") != m.end() && !m["DeliveryDate"].empty()) {
      deliveryDate = make_shared<string>(boost::any_cast<string>(m["DeliveryDate"]));
    }
    if (m.find("DeliveryWay") != m.end() && !m["DeliveryWay"].empty()) {
      deliveryWay = make_shared<string>(boost::any_cast<string>(m["DeliveryWay"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      priceInfo = make_shared<string>(boost::any_cast<string>(m["PriceInfo"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("SuggestedPrice") != m.end() && !m["SuggestedPrice"].empty()) {
      suggestedPrice = make_shared<string>(boost::any_cast<string>(m["SuggestedPrice"]));
    }
    if (m.find("SupplierId") != m.end() && !m["SupplierId"].empty()) {
      supplierId = make_shared<long>(boost::any_cast<long>(m["SupplierId"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TargetUrl") != m.end() && !m["TargetUrl"].empty()) {
      targetUrl = make_shared<string>(boost::any_cast<string>(m["TargetUrl"]));
    }
    if (m.find("WarrantyDate") != m.end() && !m["WarrantyDate"].empty()) {
      warrantyDate = make_shared<string>(boost::any_cast<string>(m["WarrantyDate"]));
    }
  }


  virtual ~DescribeProductsResponseBodyProductItemsProductItem() = default;
};
class DescribeProductsResponseBodyProductItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductsResponseBodyProductItemsProductItem>> productItem{};

  DescribeProductsResponseBodyProductItems() {}

  explicit DescribeProductsResponseBodyProductItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productItem) {
      vector<boost::any> temp1;
      for(auto item1:*productItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductItem") != m.end() && !m["ProductItem"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductItem"].type()) {
        vector<DescribeProductsResponseBodyProductItemsProductItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductsResponseBodyProductItemsProductItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productItem = make_shared<vector<DescribeProductsResponseBodyProductItemsProductItem>>(expect1);
      }
    }
  }


  virtual ~DescribeProductsResponseBodyProductItems() = default;
};
class DescribeProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeProductsResponseBodyProductItems> productItems{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeProductsResponseBody() {}

  explicit DescribeProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productItems) {
      res["ProductItems"] = productItems ? boost::any(productItems->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductItems") != m.end() && !m["ProductItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductItems"].type()) {
        DescribeProductsResponseBodyProductItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductItems"]));
        productItems = make_shared<DescribeProductsResponseBodyProductItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeProductsResponseBody() = default;
};
class DescribeProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProductsResponseBody> body{};

  DescribeProductsResponse() {}

  explicit DescribeProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProductsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProductsResponse() = default;
};
class DescribeProjectAttachmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeProjectAttachmentsRequest() {}

  explicit DescribeProjectAttachmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeProjectAttachmentsRequest() = default;
};
class DescribeProjectAttachmentsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> attachmentToken{};
  shared_ptr<string> attachmentType{};
  shared_ptr<string> content{};
  shared_ptr<string> fileLink{};
  shared_ptr<long> fileLinkGmtExpired{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> fileSuffix{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> operator_{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> operatorRole{};
  shared_ptr<long> stepNo{};

  DescribeProjectAttachmentsResponseBodyResult() {}

  explicit DescribeProjectAttachmentsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentToken) {
      res["AttachmentToken"] = boost::any(*attachmentToken);
    }
    if (attachmentType) {
      res["AttachmentType"] = boost::any(*attachmentType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (fileLink) {
      res["FileLink"] = boost::any(*fileLink);
    }
    if (fileLinkGmtExpired) {
      res["FileLinkGmtExpired"] = boost::any(*fileLinkGmtExpired);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileSuffix) {
      res["FileSuffix"] = boost::any(*fileSuffix);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (operatorRole) {
      res["OperatorRole"] = boost::any(*operatorRole);
    }
    if (stepNo) {
      res["StepNo"] = boost::any(*stepNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentToken") != m.end() && !m["AttachmentToken"].empty()) {
      attachmentToken = make_shared<string>(boost::any_cast<string>(m["AttachmentToken"]));
    }
    if (m.find("AttachmentType") != m.end() && !m["AttachmentType"].empty()) {
      attachmentType = make_shared<string>(boost::any_cast<string>(m["AttachmentType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("FileLink") != m.end() && !m["FileLink"].empty()) {
      fileLink = make_shared<string>(boost::any_cast<string>(m["FileLink"]));
    }
    if (m.find("FileLinkGmtExpired") != m.end() && !m["FileLinkGmtExpired"].empty()) {
      fileLinkGmtExpired = make_shared<long>(boost::any_cast<long>(m["FileLinkGmtExpired"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileSuffix") != m.end() && !m["FileSuffix"].empty()) {
      fileSuffix = make_shared<string>(boost::any_cast<string>(m["FileSuffix"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<long>(boost::any_cast<long>(m["Operator"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OperatorRole") != m.end() && !m["OperatorRole"].empty()) {
      operatorRole = make_shared<string>(boost::any_cast<string>(m["OperatorRole"]));
    }
    if (m.find("StepNo") != m.end() && !m["StepNo"].empty()) {
      stepNo = make_shared<long>(boost::any_cast<long>(m["StepNo"]));
    }
  }


  virtual ~DescribeProjectAttachmentsResponseBodyResult() = default;
};
class DescribeProjectAttachmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeProjectAttachmentsResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  DescribeProjectAttachmentsResponseBody() {}

  explicit DescribeProjectAttachmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeProjectAttachmentsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProjectAttachmentsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeProjectAttachmentsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeProjectAttachmentsResponseBody() = default;
};
class DescribeProjectAttachmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProjectAttachmentsResponseBody> body{};

  DescribeProjectAttachmentsResponse() {}

  explicit DescribeProjectAttachmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProjectAttachmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProjectAttachmentsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProjectAttachmentsResponse() = default;
};
class DescribeProjectInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeProjectInfoRequest() {}

  explicit DescribeProjectInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeProjectInfoRequest() = default;
};
class DescribeProjectInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> currentStepNo{};
  shared_ptr<long> customerAliUid{};
  shared_ptr<long> finalStepNo{};
  shared_ptr<string> finishType{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtExpired{};
  shared_ptr<long> gmtFinished{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> productSkuCode{};
  shared_ptr<string> productSkuName{};
  shared_ptr<string> projectStatus{};
  shared_ptr<long> supplierAliUid{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateType{};

  DescribeProjectInfoResponseBodyResult() {}

  explicit DescribeProjectInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentStepNo) {
      res["CurrentStepNo"] = boost::any(*currentStepNo);
    }
    if (customerAliUid) {
      res["CustomerAliUid"] = boost::any(*customerAliUid);
    }
    if (finalStepNo) {
      res["FinalStepNo"] = boost::any(*finalStepNo);
    }
    if (finishType) {
      res["FinishType"] = boost::any(*finishType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtExpired) {
      res["GmtExpired"] = boost::any(*gmtExpired);
    }
    if (gmtFinished) {
      res["GmtFinished"] = boost::any(*gmtFinished);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productSkuCode) {
      res["ProductSkuCode"] = boost::any(*productSkuCode);
    }
    if (productSkuName) {
      res["ProductSkuName"] = boost::any(*productSkuName);
    }
    if (projectStatus) {
      res["ProjectStatus"] = boost::any(*projectStatus);
    }
    if (supplierAliUid) {
      res["SupplierAliUid"] = boost::any(*supplierAliUid);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentStepNo") != m.end() && !m["CurrentStepNo"].empty()) {
      currentStepNo = make_shared<long>(boost::any_cast<long>(m["CurrentStepNo"]));
    }
    if (m.find("CustomerAliUid") != m.end() && !m["CustomerAliUid"].empty()) {
      customerAliUid = make_shared<long>(boost::any_cast<long>(m["CustomerAliUid"]));
    }
    if (m.find("FinalStepNo") != m.end() && !m["FinalStepNo"].empty()) {
      finalStepNo = make_shared<long>(boost::any_cast<long>(m["FinalStepNo"]));
    }
    if (m.find("FinishType") != m.end() && !m["FinishType"].empty()) {
      finishType = make_shared<string>(boost::any_cast<string>(m["FinishType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtExpired") != m.end() && !m["GmtExpired"].empty()) {
      gmtExpired = make_shared<long>(boost::any_cast<long>(m["GmtExpired"]));
    }
    if (m.find("GmtFinished") != m.end() && !m["GmtFinished"].empty()) {
      gmtFinished = make_shared<long>(boost::any_cast<long>(m["GmtFinished"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductSkuCode") != m.end() && !m["ProductSkuCode"].empty()) {
      productSkuCode = make_shared<string>(boost::any_cast<string>(m["ProductSkuCode"]));
    }
    if (m.find("ProductSkuName") != m.end() && !m["ProductSkuName"].empty()) {
      productSkuName = make_shared<string>(boost::any_cast<string>(m["ProductSkuName"]));
    }
    if (m.find("ProjectStatus") != m.end() && !m["ProjectStatus"].empty()) {
      projectStatus = make_shared<string>(boost::any_cast<string>(m["ProjectStatus"]));
    }
    if (m.find("SupplierAliUid") != m.end() && !m["SupplierAliUid"].empty()) {
      supplierAliUid = make_shared<long>(boost::any_cast<long>(m["SupplierAliUid"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~DescribeProjectInfoResponseBodyResult() = default;
};
class DescribeProjectInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeProjectInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  DescribeProjectInfoResponseBody() {}

  explicit DescribeProjectInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeProjectInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeProjectInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeProjectInfoResponseBody() = default;
};
class DescribeProjectInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProjectInfoResponseBody> body{};

  DescribeProjectInfoResponse() {}

  explicit DescribeProjectInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProjectInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProjectInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProjectInfoResponse() = default;
};
class DescribeProjectMessagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageIndex{};

  DescribeProjectMessagesRequest() {}

  explicit DescribeProjectMessagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
  }


  virtual ~DescribeProjectMessagesRequest() = default;
};
class DescribeProjectMessagesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> operator_{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> operatorRole{};

  DescribeProjectMessagesResponseBodyResult() {}

  explicit DescribeProjectMessagesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (operatorRole) {
      res["OperatorRole"] = boost::any(*operatorRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<long>(boost::any_cast<long>(m["Operator"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OperatorRole") != m.end() && !m["OperatorRole"].empty()) {
      operatorRole = make_shared<string>(boost::any_cast<string>(m["OperatorRole"]));
    }
  }


  virtual ~DescribeProjectMessagesResponseBodyResult() = default;
};
class DescribeProjectMessagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeProjectMessagesResponseBodyResult>> result{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeProjectMessagesResponseBody() {}

  explicit DescribeProjectMessagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeProjectMessagesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProjectMessagesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeProjectMessagesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeProjectMessagesResponseBody() = default;
};
class DescribeProjectMessagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProjectMessagesResponseBody> body{};

  DescribeProjectMessagesResponse() {}

  explicit DescribeProjectMessagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProjectMessagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProjectMessagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProjectMessagesResponse() = default;
};
class DescribeProjectNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeProjectNodesRequest() {}

  explicit DescribeProjectNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeProjectNodesRequest() = default;
};
class DescribeProjectNodesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> allowRollbackNode{};
  shared_ptr<bool> autoFinishNode{};
  shared_ptr<long> finalStepNo{};
  shared_ptr<long> gmtExpired{};
  shared_ptr<long> gmtFinished{};
  shared_ptr<long> gmtStart{};
  shared_ptr<bool> needAttachment{};
  shared_ptr<long> nextNodeId{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> operatorRole{};
  shared_ptr<long> parentNodeId{};
  shared_ptr<long> previousNodeId{};
  shared_ptr<long> stepNo{};
  shared_ptr<string> templateForm{};

  DescribeProjectNodesResponseBodyResult() {}

  explicit DescribeProjectNodesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRollbackNode) {
      res["AllowRollbackNode"] = boost::any(*allowRollbackNode);
    }
    if (autoFinishNode) {
      res["AutoFinishNode"] = boost::any(*autoFinishNode);
    }
    if (finalStepNo) {
      res["FinalStepNo"] = boost::any(*finalStepNo);
    }
    if (gmtExpired) {
      res["GmtExpired"] = boost::any(*gmtExpired);
    }
    if (gmtFinished) {
      res["GmtFinished"] = boost::any(*gmtFinished);
    }
    if (gmtStart) {
      res["GmtStart"] = boost::any(*gmtStart);
    }
    if (needAttachment) {
      res["NeedAttachment"] = boost::any(*needAttachment);
    }
    if (nextNodeId) {
      res["NextNodeId"] = boost::any(*nextNodeId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (operatorRole) {
      res["OperatorRole"] = boost::any(*operatorRole);
    }
    if (parentNodeId) {
      res["ParentNodeId"] = boost::any(*parentNodeId);
    }
    if (previousNodeId) {
      res["PreviousNodeId"] = boost::any(*previousNodeId);
    }
    if (stepNo) {
      res["StepNo"] = boost::any(*stepNo);
    }
    if (templateForm) {
      res["TemplateForm"] = boost::any(*templateForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowRollbackNode") != m.end() && !m["AllowRollbackNode"].empty()) {
      allowRollbackNode = make_shared<bool>(boost::any_cast<bool>(m["AllowRollbackNode"]));
    }
    if (m.find("AutoFinishNode") != m.end() && !m["AutoFinishNode"].empty()) {
      autoFinishNode = make_shared<bool>(boost::any_cast<bool>(m["AutoFinishNode"]));
    }
    if (m.find("FinalStepNo") != m.end() && !m["FinalStepNo"].empty()) {
      finalStepNo = make_shared<long>(boost::any_cast<long>(m["FinalStepNo"]));
    }
    if (m.find("GmtExpired") != m.end() && !m["GmtExpired"].empty()) {
      gmtExpired = make_shared<long>(boost::any_cast<long>(m["GmtExpired"]));
    }
    if (m.find("GmtFinished") != m.end() && !m["GmtFinished"].empty()) {
      gmtFinished = make_shared<long>(boost::any_cast<long>(m["GmtFinished"]));
    }
    if (m.find("GmtStart") != m.end() && !m["GmtStart"].empty()) {
      gmtStart = make_shared<long>(boost::any_cast<long>(m["GmtStart"]));
    }
    if (m.find("NeedAttachment") != m.end() && !m["NeedAttachment"].empty()) {
      needAttachment = make_shared<bool>(boost::any_cast<bool>(m["NeedAttachment"]));
    }
    if (m.find("NextNodeId") != m.end() && !m["NextNodeId"].empty()) {
      nextNodeId = make_shared<long>(boost::any_cast<long>(m["NextNodeId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("OperatorRole") != m.end() && !m["OperatorRole"].empty()) {
      operatorRole = make_shared<string>(boost::any_cast<string>(m["OperatorRole"]));
    }
    if (m.find("ParentNodeId") != m.end() && !m["ParentNodeId"].empty()) {
      parentNodeId = make_shared<long>(boost::any_cast<long>(m["ParentNodeId"]));
    }
    if (m.find("PreviousNodeId") != m.end() && !m["PreviousNodeId"].empty()) {
      previousNodeId = make_shared<long>(boost::any_cast<long>(m["PreviousNodeId"]));
    }
    if (m.find("StepNo") != m.end() && !m["StepNo"].empty()) {
      stepNo = make_shared<long>(boost::any_cast<long>(m["StepNo"]));
    }
    if (m.find("TemplateForm") != m.end() && !m["TemplateForm"].empty()) {
      templateForm = make_shared<string>(boost::any_cast<string>(m["TemplateForm"]));
    }
  }


  virtual ~DescribeProjectNodesResponseBodyResult() = default;
};
class DescribeProjectNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeProjectNodesResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  DescribeProjectNodesResponseBody() {}

  explicit DescribeProjectNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeProjectNodesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProjectNodesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeProjectNodesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeProjectNodesResponseBody() = default;
};
class DescribeProjectNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProjectNodesResponseBody> body{};

  DescribeProjectNodesResponse() {}

  explicit DescribeProjectNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProjectNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProjectNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProjectNodesResponse() = default;
};
class DescribeProjectOperateLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeProjectOperateLogsRequest() {}

  explicit DescribeProjectOperateLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeProjectOperateLogsRequest() = default;
};
class DescribeProjectOperateLogsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> operator_{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> operatorRole{};

  DescribeProjectOperateLogsResponseBodyResult() {}

  explicit DescribeProjectOperateLogsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (operatorRole) {
      res["OperatorRole"] = boost::any(*operatorRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<long>(boost::any_cast<long>(m["Operator"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OperatorRole") != m.end() && !m["OperatorRole"].empty()) {
      operatorRole = make_shared<string>(boost::any_cast<string>(m["OperatorRole"]));
    }
  }


  virtual ~DescribeProjectOperateLogsResponseBodyResult() = default;
};
class DescribeProjectOperateLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeProjectOperateLogsResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  DescribeProjectOperateLogsResponseBody() {}

  explicit DescribeProjectOperateLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeProjectOperateLogsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProjectOperateLogsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeProjectOperateLogsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeProjectOperateLogsResponseBody() = default;
};
class DescribeProjectOperateLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProjectOperateLogsResponseBody> body{};

  DescribeProjectOperateLogsResponse() {}

  explicit DescribeProjectOperateLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProjectOperateLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProjectOperateLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProjectOperateLogsResponse() = default;
};
class DescribeRateRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  DescribeRateRequest() {}

  explicit DescribeRateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~DescribeRateRequest() = default;
};
class DescribeRateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> additionalContent{};
  shared_ptr<string> additionalExplaintion{};
  shared_ptr<long> aliUid{};
  shared_ptr<string> content{};
  shared_ptr<string> customerLabels{};
  shared_ptr<string> explaintion{};
  shared_ptr<long> gmtAdditional{};
  shared_ptr<long> gmtAdditionalExplaintion{};
  shared_ptr<long> gmtCreated{};
  shared_ptr<long> gmtExplaintion{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> packageVersion{};
  shared_ptr<string> productId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> score{};
  shared_ptr<string> type{};

  DescribeRateResponseBody() {}

  explicit DescribeRateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalContent) {
      res["AdditionalContent"] = boost::any(*additionalContent);
    }
    if (additionalExplaintion) {
      res["AdditionalExplaintion"] = boost::any(*additionalExplaintion);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (customerLabels) {
      res["CustomerLabels"] = boost::any(*customerLabels);
    }
    if (explaintion) {
      res["Explaintion"] = boost::any(*explaintion);
    }
    if (gmtAdditional) {
      res["GmtAdditional"] = boost::any(*gmtAdditional);
    }
    if (gmtAdditionalExplaintion) {
      res["GmtAdditionalExplaintion"] = boost::any(*gmtAdditionalExplaintion);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtExplaintion) {
      res["GmtExplaintion"] = boost::any(*gmtExplaintion);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalContent") != m.end() && !m["AdditionalContent"].empty()) {
      additionalContent = make_shared<string>(boost::any_cast<string>(m["AdditionalContent"]));
    }
    if (m.find("AdditionalExplaintion") != m.end() && !m["AdditionalExplaintion"].empty()) {
      additionalExplaintion = make_shared<string>(boost::any_cast<string>(m["AdditionalExplaintion"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CustomerLabels") != m.end() && !m["CustomerLabels"].empty()) {
      customerLabels = make_shared<string>(boost::any_cast<string>(m["CustomerLabels"]));
    }
    if (m.find("Explaintion") != m.end() && !m["Explaintion"].empty()) {
      explaintion = make_shared<string>(boost::any_cast<string>(m["Explaintion"]));
    }
    if (m.find("GmtAdditional") != m.end() && !m["GmtAdditional"].empty()) {
      gmtAdditional = make_shared<long>(boost::any_cast<long>(m["GmtAdditional"]));
    }
    if (m.find("GmtAdditionalExplaintion") != m.end() && !m["GmtAdditionalExplaintion"].empty()) {
      gmtAdditionalExplaintion = make_shared<long>(boost::any_cast<long>(m["GmtAdditionalExplaintion"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<long>(boost::any_cast<long>(m["GmtCreated"]));
    }
    if (m.find("GmtExplaintion") != m.end() && !m["GmtExplaintion"].empty()) {
      gmtExplaintion = make_shared<long>(boost::any_cast<long>(m["GmtExplaintion"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeRateResponseBody() = default;
};
class DescribeRateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRateResponseBody> body{};

  DescribeRateResponse() {}

  explicit DescribeRateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRateResponse() = default;
};
class FinishCurrentProjectNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> remark{};
  shared_ptr<string> templateForm{};

  FinishCurrentProjectNodeRequest() {}

  explicit FinishCurrentProjectNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (templateForm) {
      res["TemplateForm"] = boost::any(*templateForm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("TemplateForm") != m.end() && !m["TemplateForm"].empty()) {
      templateForm = make_shared<string>(boost::any_cast<string>(m["TemplateForm"]));
    }
  }


  virtual ~FinishCurrentProjectNodeRequest() = default;
};
class FinishCurrentProjectNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  FinishCurrentProjectNodeResponseBody() {}

  explicit FinishCurrentProjectNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FinishCurrentProjectNodeResponseBody() = default;
};
class FinishCurrentProjectNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FinishCurrentProjectNodeResponseBody> body{};

  FinishCurrentProjectNodeResponse() {}

  explicit FinishCurrentProjectNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FinishCurrentProjectNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FinishCurrentProjectNodeResponseBody>(model1);
      }
    }
  }


  virtual ~FinishCurrentProjectNodeResponse() = default;
};
class NotifyContractEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventMessage{};
  shared_ptr<string> eventType{};

  NotifyContractEventRequest() {}

  explicit NotifyContractEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventMessage) {
      res["EventMessage"] = boost::any(*eventMessage);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventMessage") != m.end() && !m["EventMessage"].empty()) {
      eventMessage = make_shared<string>(boost::any_cast<string>(m["EventMessage"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
  }


  virtual ~NotifyContractEventRequest() = default;
};
class NotifyContractEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  NotifyContractEventResponseBody() {}

  explicit NotifyContractEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~NotifyContractEventResponseBody() = default;
};
class NotifyContractEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<NotifyContractEventResponseBody> body{};

  NotifyContractEventResponse() {}

  explicit NotifyContractEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NotifyContractEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NotifyContractEventResponseBody>(model1);
      }
    }
  }


  virtual ~NotifyContractEventResponse() = default;
};
class PauseProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> remark{};

  PauseProjectRequest() {}

  explicit PauseProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~PauseProjectRequest() = default;
};
class PauseProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  PauseProjectResponseBody() {}

  explicit PauseProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PauseProjectResponseBody() = default;
};
class PauseProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PauseProjectResponseBody> body{};

  PauseProjectResponse() {}

  explicit PauseProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PauseProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PauseProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PauseProjectResponse() = default;
};
class PushMeteringDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> metering{};

  PushMeteringDataRequest() {}

  explicit PushMeteringDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metering) {
      res["Metering"] = boost::any(*metering);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metering") != m.end() && !m["Metering"].empty()) {
      metering = make_shared<string>(boost::any_cast<string>(m["Metering"]));
    }
  }


  virtual ~PushMeteringDataRequest() = default;
};
class PushMeteringDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PushMeteringDataResponseBody() {}

  explicit PushMeteringDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PushMeteringDataResponseBody() = default;
};
class PushMeteringDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PushMeteringDataResponseBody> body{};

  PushMeteringDataResponse() {}

  explicit PushMeteringDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushMeteringDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushMeteringDataResponseBody>(model1);
      }
    }
  }


  virtual ~PushMeteringDataResponse() = default;
};
class QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory : public Darabonba::Model {
public:
  shared_ptr<string> categoryCode{};
  shared_ptr<string> categoryName{};
  shared_ptr<long> id{};

  QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory() {}

  explicit QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["CategoryCode"] = boost::any(*categoryCode);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryCode") != m.end() && !m["CategoryCode"].empty()) {
      categoryCode = make_shared<string>(boost::any_cast<string>(m["CategoryCode"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory() = default;
};
class QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategories : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory>> childCategory{};

  QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategories() {}

  explicit QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childCategory) {
      vector<boost::any> temp1;
      for(auto item1:*childCategory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChildCategory"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildCategory") != m.end() && !m["ChildCategory"].empty()) {
      if (typeid(vector<boost::any>) == m["ChildCategory"].type()) {
        vector<QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChildCategory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childCategory = make_shared<vector<QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategoriesChildCategory>>(expect1);
      }
    }
  }


  virtual ~QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategories() = default;
};
class QueryMarketCategoriesResponseBodyCategoriesCategory : public Darabonba::Model {
public:
  shared_ptr<string> categoryCode{};
  shared_ptr<string> categoryName{};
  shared_ptr<QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategories> childCategories{};
  shared_ptr<long> id{};

  QueryMarketCategoriesResponseBodyCategoriesCategory() {}

  explicit QueryMarketCategoriesResponseBodyCategoriesCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["CategoryCode"] = boost::any(*categoryCode);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (childCategories) {
      res["ChildCategories"] = childCategories ? boost::any(childCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryCode") != m.end() && !m["CategoryCode"].empty()) {
      categoryCode = make_shared<string>(boost::any_cast<string>(m["CategoryCode"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ChildCategories") != m.end() && !m["ChildCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChildCategories"].type()) {
        QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChildCategories"]));
        childCategories = make_shared<QueryMarketCategoriesResponseBodyCategoriesCategoryChildCategories>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~QueryMarketCategoriesResponseBodyCategoriesCategory() = default;
};
class QueryMarketCategoriesResponseBodyCategories : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMarketCategoriesResponseBodyCategoriesCategory>> category{};

  QueryMarketCategoriesResponseBodyCategories() {}

  explicit QueryMarketCategoriesResponseBodyCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      vector<boost::any> temp1;
      for(auto item1:*category){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Category"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      if (typeid(vector<boost::any>) == m["Category"].type()) {
        vector<QueryMarketCategoriesResponseBodyCategoriesCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Category"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMarketCategoriesResponseBodyCategoriesCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        category = make_shared<vector<QueryMarketCategoriesResponseBodyCategoriesCategory>>(expect1);
      }
    }
  }


  virtual ~QueryMarketCategoriesResponseBodyCategories() = default;
};
class QueryMarketCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryMarketCategoriesResponseBodyCategories> categories{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryMarketCategoriesResponseBody() {}

  explicit QueryMarketCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = categories ? boost::any(categories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(map<string, boost::any>) == m["Categories"].type()) {
        QueryMarketCategoriesResponseBodyCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Categories"]));
        categories = make_shared<QueryMarketCategoriesResponseBodyCategories>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~QueryMarketCategoriesResponseBody() = default;
};
class QueryMarketCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryMarketCategoriesResponseBody> body{};

  QueryMarketCategoriesResponse() {}

  explicit QueryMarketCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMarketCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMarketCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMarketCategoriesResponse() = default;
};
class QueryMarketImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> param{};

  QueryMarketImagesRequest() {}

  explicit QueryMarketImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (param) {
      res["Param"] = boost::any(*param);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
  }


  virtual ~QueryMarketImagesRequest() = default;
};
class QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping : public Darabonba::Model {
public:
  shared_ptr<string> device{};
  shared_ptr<string> diskType{};
  shared_ptr<string> format{};
  shared_ptr<string> importOSSBucket{};
  shared_ptr<string> importOSSObject{};
  shared_ptr<long> size{};
  shared_ptr<string> snapshotId{};

  QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping() {}

  explicit QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (importOSSBucket) {
      res["ImportOSSBucket"] = boost::any(*importOSSBucket);
    }
    if (importOSSObject) {
      res["ImportOSSObject"] = boost::any(*importOSSObject);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("ImportOSSBucket") != m.end() && !m["ImportOSSBucket"].empty()) {
      importOSSBucket = make_shared<string>(boost::any_cast<string>(m["ImportOSSBucket"]));
    }
    if (m.find("ImportOSSObject") != m.end() && !m["ImportOSSObject"].empty()) {
      importOSSObject = make_shared<string>(boost::any_cast<string>(m["ImportOSSObject"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping() = default;
};
class QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappings : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping>> diskDeviceMapping{};

  QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappings() {}

  explicit QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskDeviceMapping) {
      vector<boost::any> temp1;
      for(auto item1:*diskDeviceMapping){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiskDeviceMapping"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskDeviceMapping") != m.end() && !m["DiskDeviceMapping"].empty()) {
      if (typeid(vector<boost::any>) == m["DiskDeviceMapping"].type()) {
        vector<QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiskDeviceMapping"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        diskDeviceMapping = make_shared<vector<QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappingsDiskDeviceMapping>>(expect1);
      }
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappings() = default;
};
class QueryMarketImagesResponseBodyResultImageProductImagesImage : public Darabonba::Model {
public:
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappings> diskDeviceMappings{};
  shared_ptr<string> imageId{};
  shared_ptr<long> imageSize{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> region{};
  shared_ptr<bool> supportIO{};
  shared_ptr<string> version{};
  shared_ptr<string> versionDescription{};

  QueryMarketImagesResponseBodyResultImageProductImagesImage() {}

  explicit QueryMarketImagesResponseBodyResultImageProductImagesImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskDeviceMappings) {
      res["DiskDeviceMappings"] = diskDeviceMappings ? boost::any(diskDeviceMappings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageSize) {
      res["ImageSize"] = boost::any(*imageSize);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (supportIO) {
      res["SupportIO"] = boost::any(*supportIO);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskDeviceMappings") != m.end() && !m["DiskDeviceMappings"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiskDeviceMappings"].type()) {
        QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiskDeviceMappings"]));
        diskDeviceMappings = make_shared<QueryMarketImagesResponseBodyResultImageProductImagesImageDiskDeviceMappings>(model1);
      }
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageSize") != m.end() && !m["ImageSize"].empty()) {
      imageSize = make_shared<long>(boost::any_cast<long>(m["ImageSize"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SupportIO") != m.end() && !m["SupportIO"].empty()) {
      supportIO = make_shared<bool>(boost::any_cast<bool>(m["SupportIO"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductImagesImage() = default;
};
class QueryMarketImagesResponseBodyResultImageProductImages : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMarketImagesResponseBodyResultImageProductImagesImage>> image{};

  QueryMarketImagesResponseBodyResultImageProductImages() {}

  explicit QueryMarketImagesResponseBodyResultImageProductImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      vector<boost::any> temp1;
      for(auto item1:*image){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Image"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(vector<boost::any>) == m["Image"].type()) {
        vector<QueryMarketImagesResponseBodyResultImageProductImagesImage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Image"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMarketImagesResponseBodyResultImageProductImagesImage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        image = make_shared<vector<QueryMarketImagesResponseBodyResultImageProductImagesImage>>(expect1);
      }
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductImages() = default;
};
class QueryMarketImagesResponseBodyResultImageProductPriceInfoOrderRuleIdSet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleId{};

  QueryMarketImagesResponseBodyResultImageProductPriceInfoOrderRuleIdSet() {}

  explicit QueryMarketImagesResponseBodyResultImageProductPriceInfoOrderRuleIdSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductPriceInfoOrderRuleIdSet() = default;
};
class QueryMarketImagesResponseBodyResultImageProductPriceInfoOrder : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<long> period{};
  shared_ptr<string> priceUnit{};
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductPriceInfoOrderRuleIdSet> ruleIdSet{};
  shared_ptr<double> tradePrice{};

  QueryMarketImagesResponseBodyResultImageProductPriceInfoOrder() {}

  explicit QueryMarketImagesResponseBodyResultImageProductPriceInfoOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (ruleIdSet) {
      res["RuleIdSet"] = ruleIdSet ? boost::any(ruleIdSet->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("RuleIdSet") != m.end() && !m["RuleIdSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleIdSet"].type()) {
        QueryMarketImagesResponseBodyResultImageProductPriceInfoOrderRuleIdSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleIdSet"]));
        ruleIdSet = make_shared<QueryMarketImagesResponseBodyResultImageProductPriceInfoOrderRuleIdSet>(model1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductPriceInfoOrder() = default;
};
class QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> title{};

  QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule() {}

  explicit QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule() = default;
};
class QueryMarketImagesResponseBodyResultImageProductPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule>> rule{};

  QueryMarketImagesResponseBodyResultImageProductPriceInfoRules() {}

  explicit QueryMarketImagesResponseBodyResultImageProductPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<QueryMarketImagesResponseBodyResultImageProductPriceInfoRulesRule>>(expect1);
      }
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductPriceInfoRules() = default;
};
class QueryMarketImagesResponseBodyResultImageProductPriceInfo : public Darabonba::Model {
public:
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductPriceInfoOrder> order{};
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductPriceInfoRules> rules{};

  QueryMarketImagesResponseBodyResultImageProductPriceInfo() {}

  explicit QueryMarketImagesResponseBodyResultImageProductPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = order ? boost::any(order->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(map<string, boost::any>) == m["Order"].type()) {
        QueryMarketImagesResponseBodyResultImageProductPriceInfoOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Order"]));
        order = make_shared<QueryMarketImagesResponseBodyResultImageProductPriceInfoOrder>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        QueryMarketImagesResponseBodyResultImageProductPriceInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<QueryMarketImagesResponseBodyResultImageProductPriceInfoRules>(model1);
      }
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductPriceInfo() = default;
};
class QueryMarketImagesResponseBodyResultImageProductQuota : public Darabonba::Model {
public:
  shared_ptr<long> totalQuota{};
  shared_ptr<long> unusedQuota{};
  shared_ptr<long> usingQuota{};

  QueryMarketImagesResponseBodyResultImageProductQuota() {}

  explicit QueryMarketImagesResponseBodyResultImageProductQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalQuota) {
      res["TotalQuota"] = boost::any(*totalQuota);
    }
    if (unusedQuota) {
      res["UnusedQuota"] = boost::any(*unusedQuota);
    }
    if (usingQuota) {
      res["UsingQuota"] = boost::any(*usingQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalQuota") != m.end() && !m["TotalQuota"].empty()) {
      totalQuota = make_shared<long>(boost::any_cast<long>(m["TotalQuota"]));
    }
    if (m.find("UnusedQuota") != m.end() && !m["UnusedQuota"].empty()) {
      unusedQuota = make_shared<long>(boost::any_cast<long>(m["UnusedQuota"]));
    }
    if (m.find("UsingQuota") != m.end() && !m["UsingQuota"].empty()) {
      usingQuota = make_shared<long>(boost::any_cast<long>(m["UsingQuota"]));
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductQuota() = default;
};
class QueryMarketImagesResponseBodyResultImageProductSkuCodes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> skuCode{};

  QueryMarketImagesResponseBodyResultImageProductSkuCodes() {}

  explicit QueryMarketImagesResponseBodyResultImageProductSkuCodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skuCode) {
      res["SkuCode"] = boost::any(*skuCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkuCode") != m.end() && !m["SkuCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SkuCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkuCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      skuCode = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProductSkuCodes() = default;
};
class QueryMarketImagesResponseBodyResultImageProduct : public Darabonba::Model {
public:
  shared_ptr<string> agreementUrl{};
  shared_ptr<string> baseSystem{};
  shared_ptr<string> buyUrl{};
  shared_ptr<string> categoryName{};
  shared_ptr<long> createdOn{};
  shared_ptr<string> detailUrl{};
  shared_ptr<string> imageProductCode{};
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductImages> images{};
  shared_ptr<long> osBit{};
  shared_ptr<string> osKind{};
  shared_ptr<string> pictureUrl{};
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductPriceInfo> priceInfo{};
  shared_ptr<string> productName{};
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductQuota> quota{};
  shared_ptr<double> score{};
  shared_ptr<string> shortDescription{};
  shared_ptr<QueryMarketImagesResponseBodyResultImageProductSkuCodes> skuCodes{};
  shared_ptr<string> smallPicUrl{};
  shared_ptr<string> storeUrl{};
  shared_ptr<string> supplierName{};
  shared_ptr<bool> supportIO{};
  shared_ptr<long> userCount{};

  QueryMarketImagesResponseBodyResultImageProduct() {}

  explicit QueryMarketImagesResponseBodyResultImageProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementUrl) {
      res["AgreementUrl"] = boost::any(*agreementUrl);
    }
    if (baseSystem) {
      res["BaseSystem"] = boost::any(*baseSystem);
    }
    if (buyUrl) {
      res["BuyUrl"] = boost::any(*buyUrl);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (createdOn) {
      res["CreatedOn"] = boost::any(*createdOn);
    }
    if (detailUrl) {
      res["DetailUrl"] = boost::any(*detailUrl);
    }
    if (imageProductCode) {
      res["ImageProductCode"] = boost::any(*imageProductCode);
    }
    if (images) {
      res["Images"] = images ? boost::any(images->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (osBit) {
      res["OsBit"] = boost::any(*osBit);
    }
    if (osKind) {
      res["OsKind"] = boost::any(*osKind);
    }
    if (pictureUrl) {
      res["PictureUrl"] = boost::any(*pictureUrl);
    }
    if (priceInfo) {
      res["PriceInfo"] = priceInfo ? boost::any(priceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (quota) {
      res["Quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (skuCodes) {
      res["SkuCodes"] = skuCodes ? boost::any(skuCodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (smallPicUrl) {
      res["SmallPicUrl"] = boost::any(*smallPicUrl);
    }
    if (storeUrl) {
      res["StoreUrl"] = boost::any(*storeUrl);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supportIO) {
      res["SupportIO"] = boost::any(*supportIO);
    }
    if (userCount) {
      res["UserCount"] = boost::any(*userCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementUrl") != m.end() && !m["AgreementUrl"].empty()) {
      agreementUrl = make_shared<string>(boost::any_cast<string>(m["AgreementUrl"]));
    }
    if (m.find("BaseSystem") != m.end() && !m["BaseSystem"].empty()) {
      baseSystem = make_shared<string>(boost::any_cast<string>(m["BaseSystem"]));
    }
    if (m.find("BuyUrl") != m.end() && !m["BuyUrl"].empty()) {
      buyUrl = make_shared<string>(boost::any_cast<string>(m["BuyUrl"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CreatedOn") != m.end() && !m["CreatedOn"].empty()) {
      createdOn = make_shared<long>(boost::any_cast<long>(m["CreatedOn"]));
    }
    if (m.find("DetailUrl") != m.end() && !m["DetailUrl"].empty()) {
      detailUrl = make_shared<string>(boost::any_cast<string>(m["DetailUrl"]));
    }
    if (m.find("ImageProductCode") != m.end() && !m["ImageProductCode"].empty()) {
      imageProductCode = make_shared<string>(boost::any_cast<string>(m["ImageProductCode"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(map<string, boost::any>) == m["Images"].type()) {
        QueryMarketImagesResponseBodyResultImageProductImages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Images"]));
        images = make_shared<QueryMarketImagesResponseBodyResultImageProductImages>(model1);
      }
    }
    if (m.find("OsBit") != m.end() && !m["OsBit"].empty()) {
      osBit = make_shared<long>(boost::any_cast<long>(m["OsBit"]));
    }
    if (m.find("OsKind") != m.end() && !m["OsKind"].empty()) {
      osKind = make_shared<string>(boost::any_cast<string>(m["OsKind"]));
    }
    if (m.find("PictureUrl") != m.end() && !m["PictureUrl"].empty()) {
      pictureUrl = make_shared<string>(boost::any_cast<string>(m["PictureUrl"]));
    }
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        QueryMarketImagesResponseBodyResultImageProductPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<QueryMarketImagesResponseBodyResultImageProductPriceInfo>(model1);
      }
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quota"].type()) {
        QueryMarketImagesResponseBodyResultImageProductQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quota"]));
        quota = make_shared<QueryMarketImagesResponseBodyResultImageProductQuota>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("SkuCodes") != m.end() && !m["SkuCodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SkuCodes"].type()) {
        QueryMarketImagesResponseBodyResultImageProductSkuCodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SkuCodes"]));
        skuCodes = make_shared<QueryMarketImagesResponseBodyResultImageProductSkuCodes>(model1);
      }
    }
    if (m.find("SmallPicUrl") != m.end() && !m["SmallPicUrl"].empty()) {
      smallPicUrl = make_shared<string>(boost::any_cast<string>(m["SmallPicUrl"]));
    }
    if (m.find("StoreUrl") != m.end() && !m["StoreUrl"].empty()) {
      storeUrl = make_shared<string>(boost::any_cast<string>(m["StoreUrl"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupportIO") != m.end() && !m["SupportIO"].empty()) {
      supportIO = make_shared<bool>(boost::any_cast<bool>(m["SupportIO"]));
    }
    if (m.find("UserCount") != m.end() && !m["UserCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["UserCount"]));
    }
  }


  virtual ~QueryMarketImagesResponseBodyResultImageProduct() = default;
};
class QueryMarketImagesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMarketImagesResponseBodyResultImageProduct>> imageProduct{};

  QueryMarketImagesResponseBodyResult() {}

  explicit QueryMarketImagesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageProduct) {
      vector<boost::any> temp1;
      for(auto item1:*imageProduct){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageProduct"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageProduct") != m.end() && !m["ImageProduct"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageProduct"].type()) {
        vector<QueryMarketImagesResponseBodyResultImageProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageProduct"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMarketImagesResponseBodyResultImageProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageProduct = make_shared<vector<QueryMarketImagesResponseBodyResultImageProduct>>(expect1);
      }
    }
  }


  virtual ~QueryMarketImagesResponseBodyResult() = default;
};
class QueryMarketImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryMarketImagesResponseBodyResult> result{};
  shared_ptr<long> totalCount{};

  QueryMarketImagesResponseBody() {}

  explicit QueryMarketImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryMarketImagesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryMarketImagesResponseBodyResult>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryMarketImagesResponseBody() = default;
};
class QueryMarketImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryMarketImagesResponseBody> body{};

  QueryMarketImagesResponse() {}

  explicit QueryMarketImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMarketImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMarketImagesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMarketImagesResponse() = default;
};
class ResumeProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> remark{};

  ResumeProjectRequest() {}

  explicit ResumeProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ResumeProjectRequest() = default;
};
class ResumeProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  ResumeProjectResponseBody() {}

  explicit ResumeProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ResumeProjectResponseBody() = default;
};
class ResumeProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResumeProjectResponseBody> body{};

  ResumeProjectResponse() {}

  explicit ResumeProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeProjectResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeProjectResponse() = default;
};
class RollbackCurrentProjectNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> remark{};

  RollbackCurrentProjectNodeRequest() {}

  explicit RollbackCurrentProjectNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~RollbackCurrentProjectNodeRequest() = default;
};
class RollbackCurrentProjectNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  RollbackCurrentProjectNodeResponseBody() {}

  explicit RollbackCurrentProjectNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RollbackCurrentProjectNodeResponseBody() = default;
};
class RollbackCurrentProjectNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RollbackCurrentProjectNodeResponseBody> body{};

  RollbackCurrentProjectNodeResponse() {}

  explicit RollbackCurrentProjectNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RollbackCurrentProjectNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RollbackCurrentProjectNodeResponseBody>(model1);
      }
    }
  }


  virtual ~RollbackCurrentProjectNodeResponse() = default;
};
class UpdateCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityId{};
  shared_ptr<string> content{};

  UpdateCommodityRequest() {}

  explicit UpdateCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<string>(boost::any_cast<string>(m["CommodityId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~UpdateCommodityRequest() = default;
};
class UpdateCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateCommodityResponseBody() {}

  explicit UpdateCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCommodityResponseBody() = default;
};
class UpdateCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCommodityResponseBody> body{};

  UpdateCommodityResponse() {}

  explicit UpdateCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCommodityResponse() = default;
};
class UploadCommodityFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileContentType{};
  shared_ptr<string> fileResource{};
  shared_ptr<string> fileResourceType{};

  UploadCommodityFileRequest() {}

  explicit UploadCommodityFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContentType) {
      res["FileContentType"] = boost::any(*fileContentType);
    }
    if (fileResource) {
      res["FileResource"] = boost::any(*fileResource);
    }
    if (fileResourceType) {
      res["FileResourceType"] = boost::any(*fileResourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileContentType") != m.end() && !m["FileContentType"].empty()) {
      fileContentType = make_shared<string>(boost::any_cast<string>(m["FileContentType"]));
    }
    if (m.find("FileResource") != m.end() && !m["FileResource"].empty()) {
      fileResource = make_shared<string>(boost::any_cast<string>(m["FileResource"]));
    }
    if (m.find("FileResourceType") != m.end() && !m["FileResourceType"].empty()) {
      fileResourceType = make_shared<string>(boost::any_cast<string>(m["FileResourceType"]));
    }
  }


  virtual ~UploadCommodityFileRequest() = default;
};
class UploadCommodityFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resource{};
  shared_ptr<string> resourceType{};

  UploadCommodityFileResponseBodyData() {}

  explicit UploadCommodityFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~UploadCommodityFileResponseBodyData() = default;
};
class UploadCommodityFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<UploadCommodityFileResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadCommodityFileResponseBody() {}

  explicit UploadCommodityFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UploadCommodityFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UploadCommodityFileResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadCommodityFileResponseBody() = default;
};
class UploadCommodityFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadCommodityFileResponseBody> body{};

  UploadCommodityFileResponse() {}

  explicit UploadCommodityFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadCommodityFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadCommodityFileResponseBody>(model1);
      }
    }
  }


  virtual ~UploadCommodityFileResponse() = default;
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
  ActivateLicenseResponse activateLicenseWithOptions(shared_ptr<ActivateLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateLicenseResponse activateLicense(shared_ptr<ActivateLicenseRequest> request);
  BindImagePackageResponse bindImagePackageWithOptions(shared_ptr<BindImagePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindImagePackageResponse bindImagePackage(shared_ptr<BindImagePackageRequest> request);
  CreateCommodityResponse createCommodityWithOptions(shared_ptr<CreateCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCommodityResponse createCommodity(shared_ptr<CreateCommodityRequest> request);
  CreateOrderResponse createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrderResponse createOrder(shared_ptr<CreateOrderRequest> request);
  CreateRateResponse createRateWithOptions(shared_ptr<CreateRateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRateResponse createRate(shared_ptr<CreateRateRequest> request);
  DeleteCommodityResponse deleteCommodityWithOptions(shared_ptr<DeleteCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCommodityResponse deleteCommodity(shared_ptr<DeleteCommodityRequest> request);
  DescribeCommoditiesResponse describeCommoditiesWithOptions(shared_ptr<DescribeCommoditiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCommoditiesResponse describeCommodities(shared_ptr<DescribeCommoditiesRequest> request);
  DescribeCommodityResponse describeCommodityWithOptions(shared_ptr<DescribeCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCommodityResponse describeCommodity(shared_ptr<DescribeCommodityRequest> request);
  DescribeCurrentNodeInfoResponse describeCurrentNodeInfoWithOptions(shared_ptr<DescribeCurrentNodeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCurrentNodeInfoResponse describeCurrentNodeInfo(shared_ptr<DescribeCurrentNodeInfoRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeLicenseResponse describeLicenseWithOptions(shared_ptr<DescribeLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLicenseResponse describeLicense(shared_ptr<DescribeLicenseRequest> request);
  DescribeOrderResponse describeOrderWithOptions(shared_ptr<DescribeOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOrderResponse describeOrder(shared_ptr<DescribeOrderRequest> request);
  DescribePriceResponse describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePriceResponse describePrice(shared_ptr<DescribePriceRequest> request);
  DescribeProductResponse describeProductWithOptions(shared_ptr<DescribeProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProductResponse describeProduct(shared_ptr<DescribeProductRequest> request);
  DescribeProductsResponse describeProductsWithOptions(shared_ptr<DescribeProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProductsResponse describeProducts(shared_ptr<DescribeProductsRequest> request);
  DescribeProjectAttachmentsResponse describeProjectAttachmentsWithOptions(shared_ptr<DescribeProjectAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProjectAttachmentsResponse describeProjectAttachments(shared_ptr<DescribeProjectAttachmentsRequest> request);
  DescribeProjectInfoResponse describeProjectInfoWithOptions(shared_ptr<DescribeProjectInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProjectInfoResponse describeProjectInfo(shared_ptr<DescribeProjectInfoRequest> request);
  DescribeProjectMessagesResponse describeProjectMessagesWithOptions(shared_ptr<DescribeProjectMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProjectMessagesResponse describeProjectMessages(shared_ptr<DescribeProjectMessagesRequest> request);
  DescribeProjectNodesResponse describeProjectNodesWithOptions(shared_ptr<DescribeProjectNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProjectNodesResponse describeProjectNodes(shared_ptr<DescribeProjectNodesRequest> request);
  DescribeProjectOperateLogsResponse describeProjectOperateLogsWithOptions(shared_ptr<DescribeProjectOperateLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProjectOperateLogsResponse describeProjectOperateLogs(shared_ptr<DescribeProjectOperateLogsRequest> request);
  DescribeRateResponse describeRateWithOptions(shared_ptr<DescribeRateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRateResponse describeRate(shared_ptr<DescribeRateRequest> request);
  FinishCurrentProjectNodeResponse finishCurrentProjectNodeWithOptions(shared_ptr<FinishCurrentProjectNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FinishCurrentProjectNodeResponse finishCurrentProjectNode(shared_ptr<FinishCurrentProjectNodeRequest> request);
  NotifyContractEventResponse notifyContractEventWithOptions(shared_ptr<NotifyContractEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NotifyContractEventResponse notifyContractEvent(shared_ptr<NotifyContractEventRequest> request);
  PauseProjectResponse pauseProjectWithOptions(shared_ptr<PauseProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseProjectResponse pauseProject(shared_ptr<PauseProjectRequest> request);
  PushMeteringDataResponse pushMeteringDataWithOptions(shared_ptr<PushMeteringDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushMeteringDataResponse pushMeteringData(shared_ptr<PushMeteringDataRequest> request);
  QueryMarketCategoriesResponse queryMarketCategoriesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMarketCategoriesResponse queryMarketCategories();
  QueryMarketImagesResponse queryMarketImagesWithOptions(shared_ptr<QueryMarketImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMarketImagesResponse queryMarketImages(shared_ptr<QueryMarketImagesRequest> request);
  ResumeProjectResponse resumeProjectWithOptions(shared_ptr<ResumeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeProjectResponse resumeProject(shared_ptr<ResumeProjectRequest> request);
  RollbackCurrentProjectNodeResponse rollbackCurrentProjectNodeWithOptions(shared_ptr<RollbackCurrentProjectNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RollbackCurrentProjectNodeResponse rollbackCurrentProjectNode(shared_ptr<RollbackCurrentProjectNodeRequest> request);
  UpdateCommodityResponse updateCommodityWithOptions(shared_ptr<UpdateCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCommodityResponse updateCommodity(shared_ptr<UpdateCommodityRequest> request);
  UploadCommodityFileResponse uploadCommodityFileWithOptions(shared_ptr<UploadCommodityFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadCommodityFileResponse uploadCommodityFile(shared_ptr<UploadCommodityFileRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Market20151101

#endif
