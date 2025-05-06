// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FOASCONSOLE20211028_H_
#define ALIBABACLOUD_FOASCONSOLE20211028_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Foasconsole20211028 {
class ConvertHybridInstanceRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ConvertHybridInstanceRequestResourceSpec() {}

  explicit ConvertHybridInstanceRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ConvertHybridInstanceRequestResourceSpec() = default;
};
class ConvertHybridInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<ConvertHybridInstanceRequestResourceSpec> resourceSpec{};

  ConvertHybridInstanceRequest() {}

  explicit ConvertHybridInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        ConvertHybridInstanceRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ConvertHybridInstanceRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~ConvertHybridInstanceRequest() = default;
};
class ConvertHybridInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceSpecShrink{};

  ConvertHybridInstanceShrinkRequest() {}

  explicit ConvertHybridInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
  }


  virtual ~ConvertHybridInstanceShrinkRequest() = default;
};
class ConvertHybridInstanceResponseBodyOrderInfo : public Darabonba::Model {
public:
  shared_ptr<string> elasticInstanceId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};

  ConvertHybridInstanceResponseBodyOrderInfo() {}

  explicit ConvertHybridInstanceResponseBodyOrderInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticInstanceId) {
      res["ElasticInstanceId"] = boost::any(*elasticInstanceId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticInstanceId") != m.end() && !m["ElasticInstanceId"].empty()) {
      elasticInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticInstanceId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~ConvertHybridInstanceResponseBodyOrderInfo() = default;
};
class ConvertHybridInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<ConvertHybridInstanceResponseBodyOrderInfo> orderInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConvertHybridInstanceResponseBody() {}

  explicit ConvertHybridInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (orderInfo) {
      res["OrderInfo"] = orderInfo ? boost::any(orderInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("OrderInfo") != m.end() && !m["OrderInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderInfo"].type()) {
        ConvertHybridInstanceResponseBodyOrderInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderInfo"]));
        orderInfo = make_shared<ConvertHybridInstanceResponseBodyOrderInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConvertHybridInstanceResponseBody() = default;
};
class ConvertHybridInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertHybridInstanceResponseBody> body{};

  ConvertHybridInstanceResponse() {}

  explicit ConvertHybridInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertHybridInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertHybridInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertHybridInstanceResponse() = default;
};
class ConvertInstanceRequestNamespaceResourceSpecsResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ConvertInstanceRequestNamespaceResourceSpecsResourceSpec() {}

  explicit ConvertInstanceRequestNamespaceResourceSpecsResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ConvertInstanceRequestNamespaceResourceSpecsResourceSpec() = default;
};
class ConvertInstanceRequestNamespaceResourceSpecs : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<ConvertInstanceRequestNamespaceResourceSpecsResourceSpec> resourceSpec{};

  ConvertInstanceRequestNamespaceResourceSpecs() {}

  explicit ConvertInstanceRequestNamespaceResourceSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        ConvertInstanceRequestNamespaceResourceSpecsResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ConvertInstanceRequestNamespaceResourceSpecsResourceSpec>(model1);
      }
    }
  }


  virtual ~ConvertInstanceRequestNamespaceResourceSpecs() = default;
};
class ConvertInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<vector<ConvertInstanceRequestNamespaceResourceSpecs>> namespaceResourceSpecs{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  ConvertInstanceRequest() {}

  explicit ConvertInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isAutoRenew) {
      res["IsAutoRenew"] = boost::any(*isAutoRenew);
    }
    if (namespaceResourceSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*namespaceResourceSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NamespaceResourceSpecs"] = boost::any(temp1);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsAutoRenew") != m.end() && !m["IsAutoRenew"].empty()) {
      isAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRenew"]));
    }
    if (m.find("NamespaceResourceSpecs") != m.end() && !m["NamespaceResourceSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["NamespaceResourceSpecs"].type()) {
        vector<ConvertInstanceRequestNamespaceResourceSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NamespaceResourceSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConvertInstanceRequestNamespaceResourceSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaceResourceSpecs = make_shared<vector<ConvertInstanceRequestNamespaceResourceSpecs>>(expect1);
      }
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ConvertInstanceRequest() = default;
};
class ConvertInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<string> namespaceResourceSpecsShrink{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  ConvertInstanceShrinkRequest() {}

  explicit ConvertInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isAutoRenew) {
      res["IsAutoRenew"] = boost::any(*isAutoRenew);
    }
    if (namespaceResourceSpecsShrink) {
      res["NamespaceResourceSpecs"] = boost::any(*namespaceResourceSpecsShrink);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsAutoRenew") != m.end() && !m["IsAutoRenew"].empty()) {
      isAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRenew"]));
    }
    if (m.find("NamespaceResourceSpecs") != m.end() && !m["NamespaceResourceSpecs"].empty()) {
      namespaceResourceSpecsShrink = make_shared<string>(boost::any_cast<string>(m["NamespaceResourceSpecs"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ConvertInstanceShrinkRequest() = default;
};
class ConvertInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConvertInstanceResponseBody() {}

  explicit ConvertInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConvertInstanceResponseBody() = default;
};
class ConvertInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertInstanceResponseBody> body{};

  ConvertInstanceResponse() {}

  explicit ConvertInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertInstanceResponse() = default;
};
class ConvertPrepayInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  ConvertPrepayInstanceRequest() {}

  explicit ConvertPrepayInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ConvertPrepayInstanceRequest() = default;
};
class ConvertPrepayInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConvertPrepayInstanceResponseBody() {}

  explicit ConvertPrepayInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConvertPrepayInstanceResponseBody() = default;
};
class ConvertPrepayInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertPrepayInstanceResponseBody> body{};

  ConvertPrepayInstanceResponse() {}

  explicit ConvertPrepayInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertPrepayInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertPrepayInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertPrepayInstanceResponse() = default;
};
class CreateInstanceRequestHaResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  CreateInstanceRequestHaResourceSpec() {}

  explicit CreateInstanceRequestHaResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~CreateInstanceRequestHaResourceSpec() = default;
};
class CreateInstanceRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  CreateInstanceRequestResourceSpec() {}

  explicit CreateInstanceRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~CreateInstanceRequestResourceSpec() = default;
};
class CreateInstanceRequestStorageOss : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};

  CreateInstanceRequestStorageOss() {}

  explicit CreateInstanceRequestStorageOss(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
  }


  virtual ~CreateInstanceRequestStorageOss() = default;
};
class CreateInstanceRequestStorage : public Darabonba::Model {
public:
  shared_ptr<bool> fullyManaged{};
  shared_ptr<CreateInstanceRequestStorageOss> oss{};

  CreateInstanceRequestStorage() {}

  explicit CreateInstanceRequestStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullyManaged) {
      res["FullyManaged"] = boost::any(*fullyManaged);
    }
    if (oss) {
      res["Oss"] = oss ? boost::any(oss->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullyManaged") != m.end() && !m["FullyManaged"].empty()) {
      fullyManaged = make_shared<bool>(boost::any_cast<bool>(m["FullyManaged"]));
    }
    if (m.find("Oss") != m.end() && !m["Oss"].empty()) {
      if (typeid(map<string, boost::any>) == m["Oss"].type()) {
        CreateInstanceRequestStorageOss model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Oss"]));
        oss = make_shared<CreateInstanceRequestStorageOss>(model1);
      }
    }
  }


  virtual ~CreateInstanceRequestStorage() = default;
};
class CreateInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateInstanceRequestTag() {}

  explicit CreateInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateInstanceRequestTag() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> architectureType{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<string> extra{};
  shared_ptr<bool> ha{};
  shared_ptr<CreateInstanceRequestHaResourceSpec> haResourceSpec{};
  shared_ptr<vector<string>> haVSwitchIds{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> promotionCode{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<CreateInstanceRequestResourceSpec> resourceSpec{};
  shared_ptr<CreateInstanceRequestStorage> storage{};
  shared_ptr<vector<CreateInstanceRequestTag>> tag{};
  shared_ptr<bool> usePromotionCode{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpec) {
      res["HaResourceSpec"] = haResourceSpec ? boost::any(haResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (haVSwitchIds) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIds);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (promotionCode) {
      res["PromotionCode"] = boost::any(*promotionCode);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storage) {
      res["Storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (usePromotionCode) {
      res["UsePromotionCode"] = boost::any(*usePromotionCode);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["HaResourceSpec"].type()) {
        CreateInstanceRequestHaResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HaResourceSpec"]));
        haResourceSpec = make_shared<CreateInstanceRequestHaResourceSpec>(model1);
      }
    }
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HaVSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HaVSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      haVSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("PromotionCode") != m.end() && !m["PromotionCode"].empty()) {
      promotionCode = make_shared<string>(boost::any_cast<string>(m["PromotionCode"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        CreateInstanceRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<CreateInstanceRequestResourceSpec>(model1);
      }
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Storage"].type()) {
        CreateInstanceRequestStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Storage"]));
        storage = make_shared<CreateInstanceRequestStorage>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateInstanceRequestTag>>(expect1);
      }
    }
    if (m.find("UsePromotionCode") != m.end() && !m["UsePromotionCode"].empty()) {
      usePromotionCode = make_shared<bool>(boost::any_cast<bool>(m["UsePromotionCode"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> architectureType{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<string> extra{};
  shared_ptr<bool> ha{};
  shared_ptr<string> haResourceSpecShrink{};
  shared_ptr<string> haVSwitchIdsShrink{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> promotionCode{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceSpecShrink{};
  shared_ptr<string> storageShrink{};
  shared_ptr<string> tagShrink{};
  shared_ptr<bool> usePromotionCode{};
  shared_ptr<string> vSwitchIdsShrink{};
  shared_ptr<string> vpcId{};

  CreateInstanceShrinkRequest() {}

  explicit CreateInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpecShrink) {
      res["HaResourceSpec"] = boost::any(*haResourceSpecShrink);
    }
    if (haVSwitchIdsShrink) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIdsShrink);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (promotionCode) {
      res["PromotionCode"] = boost::any(*promotionCode);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    if (storageShrink) {
      res["Storage"] = boost::any(*storageShrink);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    if (usePromotionCode) {
      res["UsePromotionCode"] = boost::any(*usePromotionCode);
    }
    if (vSwitchIdsShrink) {
      res["VSwitchIds"] = boost::any(*vSwitchIdsShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      haResourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["HaResourceSpec"]));
    }
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      haVSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["HaVSwitchIds"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("PromotionCode") != m.end() && !m["PromotionCode"].empty()) {
      promotionCode = make_shared<string>(boost::any_cast<string>(m["PromotionCode"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storageShrink = make_shared<string>(boost::any_cast<string>(m["Storage"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("UsePromotionCode") != m.end() && !m["UsePromotionCode"].empty()) {
      usePromotionCode = make_shared<bool>(boost::any_cast<bool>(m["UsePromotionCode"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateInstanceShrinkRequest() = default;
};
class CreateInstanceResponseBodyOrderInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> storageInstanceId{};
  shared_ptr<long> storageOrderId{};

  CreateInstanceResponseBodyOrderInfo() {}

  explicit CreateInstanceResponseBodyOrderInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (storageInstanceId) {
      res["StorageInstanceId"] = boost::any(*storageInstanceId);
    }
    if (storageOrderId) {
      res["StorageOrderId"] = boost::any(*storageOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("StorageInstanceId") != m.end() && !m["StorageInstanceId"].empty()) {
      storageInstanceId = make_shared<string>(boost::any_cast<string>(m["StorageInstanceId"]));
    }
    if (m.find("StorageOrderId") != m.end() && !m["StorageOrderId"].empty()) {
      storageOrderId = make_shared<long>(boost::any_cast<long>(m["StorageOrderId"]));
    }
  }


  virtual ~CreateInstanceResponseBodyOrderInfo() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateInstanceResponseBodyOrderInfo> orderInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderInfo) {
      res["OrderInfo"] = orderInfo ? boost::any(orderInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("OrderInfo") != m.end() && !m["OrderInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderInfo"].type()) {
        CreateInstanceResponseBodyOrderInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderInfo"]));
        orderInfo = make_shared<CreateInstanceResponseBodyOrderInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateNamespaceRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  CreateNamespaceRequestResourceSpec() {}

  explicit CreateNamespaceRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~CreateNamespaceRequestResourceSpec() = default;
};
class CreateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};
  shared_ptr<CreateNamespaceRequestResourceSpec> resourceSpec{};

  CreateNamespaceRequest() {}

  explicit CreateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        CreateNamespaceRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<CreateNamespaceRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~CreateNamespaceRequest() = default;
};
class CreateNamespaceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceSpecShrink{};

  CreateNamespaceShrinkRequest() {}

  explicit CreateNamespaceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
  }


  virtual ~CreateNamespaceShrinkRequest() = default;
};
class CreateNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateNamespaceResponseBody() {}

  explicit CreateNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateNamespaceResponseBody() = default;
};
class CreateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNamespaceResponseBody> body{};

  CreateNamespaceResponse() {}

  explicit CreateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNamespaceResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};

  DeleteNamespaceRequest() {}

  explicit DeleteNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DeleteNamespaceRequest() = default;
};
class DeleteNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteNamespaceResponseBody() {}

  explicit DeleteNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNamespaceResponseBody() = default;
};
class DeleteNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNamespaceResponseBody> body{};

  DeleteNamespaceResponse() {}

  explicit DeleteNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNamespaceResponse() = default;
};
class DescribeInstancesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesRequestTags() {}

  explicit DescribeInstancesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesRequestTags() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> architectureType{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeInstancesRequestTags>> tags{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeInstancesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeInstancesRequestTags>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> architectureType{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagsShrink{};

  DescribeInstancesShrinkRequest() {}

  explicit DescribeInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~DescribeInstancesShrinkRequest() = default;
};
class DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight : public Darabonba::Model {
public:
  shared_ptr<long> stepIndex{};
  shared_ptr<string> stepName{};
  shared_ptr<long> weight{};

  DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight() {}

  explicit DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stepIndex) {
      res["StepIndex"] = boost::any(*stepIndex);
    }
    if (stepName) {
      res["StepName"] = boost::any(*stepName);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StepIndex") != m.end() && !m["StepIndex"].empty()) {
      stepIndex = make_shared<long>(boost::any_cast<long>(m["StepIndex"]));
    }
    if (m.find("StepName") != m.end() && !m["StepName"].empty()) {
      stepName = make_shared<string>(boost::any_cast<string>(m["StepName"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight() = default;
};
class DescribeInstancesResponseBodyInstancesClusterStateClusterStage : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> currentStage{};
  shared_ptr<string> message{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight>> totalStageWithWeight{};

  DescribeInstancesResponseBodyInstancesClusterStateClusterStage() {}

  explicit DescribeInstancesResponseBodyInstancesClusterStateClusterStage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (currentStage) {
      res["CurrentStage"] = boost::any(*currentStage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalStageWithWeight) {
      vector<boost::any> temp1;
      for(auto item1:*totalStageWithWeight){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TotalStageWithWeight"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CurrentStage") != m.end() && !m["CurrentStage"].empty()) {
      currentStage = make_shared<long>(boost::any_cast<long>(m["CurrentStage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalStageWithWeight") != m.end() && !m["TotalStageWithWeight"].empty()) {
      if (typeid(vector<boost::any>) == m["TotalStageWithWeight"].type()) {
        vector<DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TotalStageWithWeight"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        totalStageWithWeight = make_shared<vector<DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesClusterStateClusterStage() = default;
};
class DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners : public Darabonba::Model {
public:
  shared_ptr<string> listenersStatus{};
  shared_ptr<string> port{};

  DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners() {}

  explicit DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenersStatus) {
      res["ListenersStatus"] = boost::any(*listenersStatus);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenersStatus") != m.end() && !m["ListenersStatus"].empty()) {
      listenersStatus = make_shared<string>(boost::any_cast<string>(m["ListenersStatus"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners() = default;
};
class DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto : public Darabonba::Model {
public:
  shared_ptr<bool> existSlb{};
  shared_ptr<string> slbId{};
  shared_ptr<string> slbIp{};
  shared_ptr<string> slbStatus{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners>> userSlbListeners{};

  DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto() {}

  explicit DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (existSlb) {
      res["ExistSlb"] = boost::any(*existSlb);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (slbIp) {
      res["SlbIp"] = boost::any(*slbIp);
    }
    if (slbStatus) {
      res["SlbStatus"] = boost::any(*slbStatus);
    }
    if (userSlbListeners) {
      vector<boost::any> temp1;
      for(auto item1:*userSlbListeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserSlbListeners"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExistSlb") != m.end() && !m["ExistSlb"].empty()) {
      existSlb = make_shared<bool>(boost::any_cast<bool>(m["ExistSlb"]));
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("SlbIp") != m.end() && !m["SlbIp"].empty()) {
      slbIp = make_shared<string>(boost::any_cast<string>(m["SlbIp"]));
    }
    if (m.find("SlbStatus") != m.end() && !m["SlbStatus"].empty()) {
      slbStatus = make_shared<string>(boost::any_cast<string>(m["SlbStatus"]));
    }
    if (m.find("UserSlbListeners") != m.end() && !m["UserSlbListeners"].empty()) {
      if (typeid(vector<boost::any>) == m["UserSlbListeners"].type()) {
        vector<DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserSlbListeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userSlbListeners = make_shared<vector<DescribeInstancesResponseBodyInstancesClusterStateUserSlbDtoUserSlbListeners>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto() = default;
};
class DescribeInstancesResponseBodyInstancesClusterState : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<DescribeInstancesResponseBodyInstancesClusterStateClusterStage> clusterStage{};
  shared_ptr<bool> createTimeout{};
  shared_ptr<string> status{};
  shared_ptr<string> subStatus{};
  shared_ptr<string> url{};
  shared_ptr<DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto> userSlbDto{};
  shared_ptr<string> vpcCidr{};

  DescribeInstancesResponseBodyInstancesClusterState() {}

  explicit DescribeInstancesResponseBodyInstancesClusterState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterStage) {
      res["ClusterStage"] = clusterStage ? boost::any(clusterStage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimeout) {
      res["CreateTimeout"] = boost::any(*createTimeout);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (userSlbDto) {
      res["UserSlbDto"] = userSlbDto ? boost::any(userSlbDto->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcCidr) {
      res["VpcCidr"] = boost::any(*vpcCidr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterStage") != m.end() && !m["ClusterStage"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterStage"].type()) {
        DescribeInstancesResponseBodyInstancesClusterStateClusterStage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterStage"]));
        clusterStage = make_shared<DescribeInstancesResponseBodyInstancesClusterStateClusterStage>(model1);
      }
    }
    if (m.find("CreateTimeout") != m.end() && !m["CreateTimeout"].empty()) {
      createTimeout = make_shared<bool>(boost::any_cast<bool>(m["CreateTimeout"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UserSlbDto") != m.end() && !m["UserSlbDto"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserSlbDto"].type()) {
        DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserSlbDto"]));
        userSlbDto = make_shared<DescribeInstancesResponseBodyInstancesClusterStateUserSlbDto>(model1);
      }
    }
    if (m.find("VpcCidr") != m.end() && !m["VpcCidr"].empty()) {
      vpcCidr = make_shared<string>(boost::any_cast<string>(m["VpcCidr"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesClusterState() = default;
};
class DescribeInstancesResponseBodyInstancesClusterUsedResources : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<double> elasticUsedCpu{};
  shared_ptr<double> elasticUsedMemory{};
  shared_ptr<double> elasticUsedResource{};
  shared_ptr<double> guaranteedUsedCpu{};
  shared_ptr<double> guaranteedUsedMemory{};
  shared_ptr<double> guaranteedUsedResource{};
  shared_ptr<bool> ha{};
  shared_ptr<double> haUsedCpu{};
  shared_ptr<double> haUsedMemory{};
  shared_ptr<double> haUsedResource{};
  shared_ptr<double> usedCpu{};
  shared_ptr<double> usedMemory{};
  shared_ptr<double> usedResource{};

  DescribeInstancesResponseBodyInstancesClusterUsedResources() {}

  explicit DescribeInstancesResponseBodyInstancesClusterUsedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (elasticUsedCpu) {
      res["ElasticUsedCpu"] = boost::any(*elasticUsedCpu);
    }
    if (elasticUsedMemory) {
      res["ElasticUsedMemory"] = boost::any(*elasticUsedMemory);
    }
    if (elasticUsedResource) {
      res["ElasticUsedResource"] = boost::any(*elasticUsedResource);
    }
    if (guaranteedUsedCpu) {
      res["GuaranteedUsedCpu"] = boost::any(*guaranteedUsedCpu);
    }
    if (guaranteedUsedMemory) {
      res["GuaranteedUsedMemory"] = boost::any(*guaranteedUsedMemory);
    }
    if (guaranteedUsedResource) {
      res["GuaranteedUsedResource"] = boost::any(*guaranteedUsedResource);
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haUsedCpu) {
      res["HaUsedCpu"] = boost::any(*haUsedCpu);
    }
    if (haUsedMemory) {
      res["HaUsedMemory"] = boost::any(*haUsedMemory);
    }
    if (haUsedResource) {
      res["HaUsedResource"] = boost::any(*haUsedResource);
    }
    if (usedCpu) {
      res["UsedCpu"] = boost::any(*usedCpu);
    }
    if (usedMemory) {
      res["UsedMemory"] = boost::any(*usedMemory);
    }
    if (usedResource) {
      res["UsedResource"] = boost::any(*usedResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ElasticUsedCpu") != m.end() && !m["ElasticUsedCpu"].empty()) {
      elasticUsedCpu = make_shared<double>(boost::any_cast<double>(m["ElasticUsedCpu"]));
    }
    if (m.find("ElasticUsedMemory") != m.end() && !m["ElasticUsedMemory"].empty()) {
      elasticUsedMemory = make_shared<double>(boost::any_cast<double>(m["ElasticUsedMemory"]));
    }
    if (m.find("ElasticUsedResource") != m.end() && !m["ElasticUsedResource"].empty()) {
      elasticUsedResource = make_shared<double>(boost::any_cast<double>(m["ElasticUsedResource"]));
    }
    if (m.find("GuaranteedUsedCpu") != m.end() && !m["GuaranteedUsedCpu"].empty()) {
      guaranteedUsedCpu = make_shared<double>(boost::any_cast<double>(m["GuaranteedUsedCpu"]));
    }
    if (m.find("GuaranteedUsedMemory") != m.end() && !m["GuaranteedUsedMemory"].empty()) {
      guaranteedUsedMemory = make_shared<double>(boost::any_cast<double>(m["GuaranteedUsedMemory"]));
    }
    if (m.find("GuaranteedUsedResource") != m.end() && !m["GuaranteedUsedResource"].empty()) {
      guaranteedUsedResource = make_shared<double>(boost::any_cast<double>(m["GuaranteedUsedResource"]));
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaUsedCpu") != m.end() && !m["HaUsedCpu"].empty()) {
      haUsedCpu = make_shared<double>(boost::any_cast<double>(m["HaUsedCpu"]));
    }
    if (m.find("HaUsedMemory") != m.end() && !m["HaUsedMemory"].empty()) {
      haUsedMemory = make_shared<double>(boost::any_cast<double>(m["HaUsedMemory"]));
    }
    if (m.find("HaUsedResource") != m.end() && !m["HaUsedResource"].empty()) {
      haUsedResource = make_shared<double>(boost::any_cast<double>(m["HaUsedResource"]));
    }
    if (m.find("UsedCpu") != m.end() && !m["UsedCpu"].empty()) {
      usedCpu = make_shared<double>(boost::any_cast<double>(m["UsedCpu"]));
    }
    if (m.find("UsedMemory") != m.end() && !m["UsedMemory"].empty()) {
      usedMemory = make_shared<double>(boost::any_cast<double>(m["UsedMemory"]));
    }
    if (m.find("UsedResource") != m.end() && !m["UsedResource"].empty()) {
      usedResource = make_shared<double>(boost::any_cast<double>(m["UsedResource"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesClusterUsedResources() = default;
};
class DescribeInstancesResponseBodyInstancesClusterUsedStorage : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<double> usedStorage{};

  DescribeInstancesResponseBodyInstancesClusterUsedStorage() {}

  explicit DescribeInstancesResponseBodyInstancesClusterUsedStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (usedStorage) {
      res["UsedStorage"] = boost::any(*usedStorage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("UsedStorage") != m.end() && !m["UsedStorage"].empty()) {
      usedStorage = make_shared<double>(boost::any_cast<double>(m["UsedStorage"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesClusterUsedStorage() = default;
};
class DescribeInstancesResponseBodyInstancesElasticResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  DescribeInstancesResponseBodyInstancesElasticResourceSpec() {}

  explicit DescribeInstancesResponseBodyInstancesElasticResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesElasticResourceSpec() = default;
};
class DescribeInstancesResponseBodyInstancesHaResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  DescribeInstancesResponseBodyInstancesHaResourceSpec() {}

  explicit DescribeInstancesResponseBodyInstancesHaResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesHaResourceSpec() = default;
};
class DescribeInstancesResponseBodyInstancesHaVSwitchInfo : public Darabonba::Model {
public:
  shared_ptr<long> availableIpAddressCount{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchCidr{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeInstancesResponseBodyInstancesHaVSwitchInfo() {}

  explicit DescribeInstancesResponseBodyInstancesHaVSwitchInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableIpAddressCount) {
      res["AvailableIpAddressCount"] = boost::any(*availableIpAddressCount);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchCidr) {
      res["VSwitchCidr"] = boost::any(*vSwitchCidr);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableIpAddressCount") != m.end() && !m["AvailableIpAddressCount"].empty()) {
      availableIpAddressCount = make_shared<long>(boost::any_cast<long>(m["AvailableIpAddressCount"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchCidr") != m.end() && !m["VSwitchCidr"].empty()) {
      vSwitchCidr = make_shared<string>(boost::any_cast<string>(m["VSwitchCidr"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesHaVSwitchInfo() = default;
};
class DescribeInstancesResponseBodyInstancesHostAliases : public Darabonba::Model {
public:
  shared_ptr<vector<string>> hostNames{};
  shared_ptr<string> ip{};

  DescribeInstancesResponseBodyInstancesHostAliases() {}

  explicit DescribeInstancesResponseBodyInstancesHostAliases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostNames) {
      res["HostNames"] = boost::any(*hostNames);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostNames") != m.end() && !m["HostNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HostNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HostNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesHostAliases() = default;
};
class DescribeInstancesResponseBodyInstancesOssInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> bucket{};
  shared_ptr<string> bucketVersioningStatus{};
  shared_ptr<string> endpoint{};

  DescribeInstancesResponseBodyInstancesOssInfo() {}

  explicit DescribeInstancesResponseBodyInstancesOssInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (bucketVersioningStatus) {
      res["BucketVersioningStatus"] = boost::any(*bucketVersioningStatus);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("BucketVersioningStatus") != m.end() && !m["BucketVersioningStatus"].empty()) {
      bucketVersioningStatus = make_shared<string>(boost::any_cast<string>(m["BucketVersioningStatus"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesOssInfo() = default;
};
class DescribeInstancesResponseBodyInstancesResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  DescribeInstancesResponseBodyInstancesResourceSpec() {}

  explicit DescribeInstancesResponseBodyInstancesResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesResourceSpec() = default;
};
class DescribeInstancesResponseBodyInstancesStorageOss : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};

  DescribeInstancesResponseBodyInstancesStorageOss() {}

  explicit DescribeInstancesResponseBodyInstancesStorageOss(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesStorageOss() = default;
};
class DescribeInstancesResponseBodyInstancesStorage : public Darabonba::Model {
public:
  shared_ptr<bool> fullyManaged{};
  shared_ptr<string> orderState{};
  shared_ptr<DescribeInstancesResponseBodyInstancesStorageOss> oss{};
  shared_ptr<bool> supportCreateFullyManagedStorage{};
  shared_ptr<bool> supportMigrationProgressDetection{};

  DescribeInstancesResponseBodyInstancesStorage() {}

  explicit DescribeInstancesResponseBodyInstancesStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullyManaged) {
      res["FullyManaged"] = boost::any(*fullyManaged);
    }
    if (orderState) {
      res["OrderState"] = boost::any(*orderState);
    }
    if (oss) {
      res["Oss"] = oss ? boost::any(oss->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportCreateFullyManagedStorage) {
      res["SupportCreateFullyManagedStorage"] = boost::any(*supportCreateFullyManagedStorage);
    }
    if (supportMigrationProgressDetection) {
      res["SupportMigrationProgressDetection"] = boost::any(*supportMigrationProgressDetection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullyManaged") != m.end() && !m["FullyManaged"].empty()) {
      fullyManaged = make_shared<bool>(boost::any_cast<bool>(m["FullyManaged"]));
    }
    if (m.find("OrderState") != m.end() && !m["OrderState"].empty()) {
      orderState = make_shared<string>(boost::any_cast<string>(m["OrderState"]));
    }
    if (m.find("Oss") != m.end() && !m["Oss"].empty()) {
      if (typeid(map<string, boost::any>) == m["Oss"].type()) {
        DescribeInstancesResponseBodyInstancesStorageOss model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Oss"]));
        oss = make_shared<DescribeInstancesResponseBodyInstancesStorageOss>(model1);
      }
    }
    if (m.find("SupportCreateFullyManagedStorage") != m.end() && !m["SupportCreateFullyManagedStorage"].empty()) {
      supportCreateFullyManagedStorage = make_shared<bool>(boost::any_cast<bool>(m["SupportCreateFullyManagedStorage"]));
    }
    if (m.find("SupportMigrationProgressDetection") != m.end() && !m["SupportMigrationProgressDetection"].empty()) {
      supportMigrationProgressDetection = make_shared<bool>(boost::any_cast<bool>(m["SupportMigrationProgressDetection"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesStorage() = default;
};
class DescribeInstancesResponseBodyInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesResponseBodyInstancesTags() {}

  explicit DescribeInstancesResponseBodyInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesResponseBodyInstancesTags() = default;
};
class DescribeInstancesResponseBodyInstancesVSwitchInfo : public Darabonba::Model {
public:
  shared_ptr<string> availableIpAddressCount{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchCidr{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeInstancesResponseBodyInstancesVSwitchInfo() {}

  explicit DescribeInstancesResponseBodyInstancesVSwitchInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableIpAddressCount) {
      res["AvailableIpAddressCount"] = boost::any(*availableIpAddressCount);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchCidr) {
      res["VSwitchCidr"] = boost::any(*vSwitchCidr);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableIpAddressCount") != m.end() && !m["AvailableIpAddressCount"].empty()) {
      availableIpAddressCount = make_shared<string>(boost::any_cast<string>(m["AvailableIpAddressCount"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchCidr") != m.end() && !m["VSwitchCidr"].empty()) {
      vSwitchCidr = make_shared<string>(boost::any_cast<string>(m["VSwitchCidr"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesVSwitchInfo() = default;
};
class DescribeInstancesResponseBodyInstancesVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeInstancesResponseBodyInstancesVpcInfo() {}

  explicit DescribeInstancesResponseBodyInstancesVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesVpcInfo() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<bool> ansm{};
  shared_ptr<string> architectureType{};
  shared_ptr<string> askClusterId{};
  shared_ptr<string> chargeType{};
  shared_ptr<DescribeInstancesResponseBodyInstancesClusterState> clusterState{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<DescribeInstancesResponseBodyInstancesClusterUsedResources> clusterUsedResources{};
  shared_ptr<DescribeInstancesResponseBodyInstancesClusterUsedStorage> clusterUsedStorage{};
  shared_ptr<bool> elastic{};
  shared_ptr<string> elasticOrderState{};
  shared_ptr<DescribeInstancesResponseBodyInstancesElasticResourceSpec> elasticResourceSpec{};
  shared_ptr<bool> ha{};
  shared_ptr<DescribeInstancesResponseBodyInstancesHaResourceSpec> haResourceSpec{};
  shared_ptr<vector<string>> haVSwitchIds{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesHaVSwitchInfo>> haVSwitchInfo{};
  shared_ptr<string> haZoneId{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesHostAliases>> hostAliases{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> orderState{};
  shared_ptr<DescribeInstancesResponseBodyInstancesOssInfo> ossInfo{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreateTime{};
  shared_ptr<long> resourceExpiredTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<DescribeInstancesResponseBodyInstancesResourceSpec> resourceSpec{};
  shared_ptr<DescribeInstancesResponseBodyInstancesStorage> storage{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesTags>> tags{};
  shared_ptr<string> uid{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesVSwitchInfo>> vSwitchInfo{};
  shared_ptr<string> vpcId{};
  shared_ptr<DescribeInstancesResponseBodyInstancesVpcInfo> vpcInfo{};
  shared_ptr<string> zoneId{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ansm) {
      res["Ansm"] = boost::any(*ansm);
    }
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (askClusterId) {
      res["AskClusterId"] = boost::any(*askClusterId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterState) {
      res["ClusterState"] = clusterState ? boost::any(clusterState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (clusterUsedResources) {
      res["ClusterUsedResources"] = clusterUsedResources ? boost::any(clusterUsedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterUsedStorage) {
      res["ClusterUsedStorage"] = clusterUsedStorage ? boost::any(clusterUsedStorage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (elastic) {
      res["Elastic"] = boost::any(*elastic);
    }
    if (elasticOrderState) {
      res["ElasticOrderState"] = boost::any(*elasticOrderState);
    }
    if (elasticResourceSpec) {
      res["ElasticResourceSpec"] = elasticResourceSpec ? boost::any(elasticResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpec) {
      res["HaResourceSpec"] = haResourceSpec ? boost::any(haResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (haVSwitchIds) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIds);
    }
    if (haVSwitchInfo) {
      vector<boost::any> temp1;
      for(auto item1:*haVSwitchInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HaVSwitchInfo"] = boost::any(temp1);
    }
    if (haZoneId) {
      res["HaZoneId"] = boost::any(*haZoneId);
    }
    if (hostAliases) {
      vector<boost::any> temp1;
      for(auto item1:*hostAliases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAliases"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (orderState) {
      res["OrderState"] = boost::any(*orderState);
    }
    if (ossInfo) {
      res["OssInfo"] = ossInfo ? boost::any(ossInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
    }
    if (resourceExpiredTime) {
      res["ResourceExpiredTime"] = boost::any(*resourceExpiredTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storage) {
      res["Storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vSwitchInfo) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitchInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitchInfo"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcInfo) {
      res["VpcInfo"] = vpcInfo ? boost::any(vpcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ansm") != m.end() && !m["Ansm"].empty()) {
      ansm = make_shared<bool>(boost::any_cast<bool>(m["Ansm"]));
    }
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("AskClusterId") != m.end() && !m["AskClusterId"].empty()) {
      askClusterId = make_shared<string>(boost::any_cast<string>(m["AskClusterId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterState") != m.end() && !m["ClusterState"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterState"].type()) {
        DescribeInstancesResponseBodyInstancesClusterState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterState"]));
        clusterState = make_shared<DescribeInstancesResponseBodyInstancesClusterState>(model1);
      }
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ClusterUsedResources") != m.end() && !m["ClusterUsedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterUsedResources"].type()) {
        DescribeInstancesResponseBodyInstancesClusterUsedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterUsedResources"]));
        clusterUsedResources = make_shared<DescribeInstancesResponseBodyInstancesClusterUsedResources>(model1);
      }
    }
    if (m.find("ClusterUsedStorage") != m.end() && !m["ClusterUsedStorage"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterUsedStorage"].type()) {
        DescribeInstancesResponseBodyInstancesClusterUsedStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterUsedStorage"]));
        clusterUsedStorage = make_shared<DescribeInstancesResponseBodyInstancesClusterUsedStorage>(model1);
      }
    }
    if (m.find("Elastic") != m.end() && !m["Elastic"].empty()) {
      elastic = make_shared<bool>(boost::any_cast<bool>(m["Elastic"]));
    }
    if (m.find("ElasticOrderState") != m.end() && !m["ElasticOrderState"].empty()) {
      elasticOrderState = make_shared<string>(boost::any_cast<string>(m["ElasticOrderState"]));
    }
    if (m.find("ElasticResourceSpec") != m.end() && !m["ElasticResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticResourceSpec"].type()) {
        DescribeInstancesResponseBodyInstancesElasticResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticResourceSpec"]));
        elasticResourceSpec = make_shared<DescribeInstancesResponseBodyInstancesElasticResourceSpec>(model1);
      }
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["HaResourceSpec"].type()) {
        DescribeInstancesResponseBodyInstancesHaResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HaResourceSpec"]));
        haResourceSpec = make_shared<DescribeInstancesResponseBodyInstancesHaResourceSpec>(model1);
      }
    }
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HaVSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HaVSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      haVSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HaVSwitchInfo") != m.end() && !m["HaVSwitchInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["HaVSwitchInfo"].type()) {
        vector<DescribeInstancesResponseBodyInstancesHaVSwitchInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HaVSwitchInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesHaVSwitchInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        haVSwitchInfo = make_shared<vector<DescribeInstancesResponseBodyInstancesHaVSwitchInfo>>(expect1);
      }
    }
    if (m.find("HaZoneId") != m.end() && !m["HaZoneId"].empty()) {
      haZoneId = make_shared<string>(boost::any_cast<string>(m["HaZoneId"]));
    }
    if (m.find("HostAliases") != m.end() && !m["HostAliases"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAliases"].type()) {
        vector<DescribeInstancesResponseBodyInstancesHostAliases> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAliases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesHostAliases model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAliases = make_shared<vector<DescribeInstancesResponseBodyInstancesHostAliases>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("OrderState") != m.end() && !m["OrderState"].empty()) {
      orderState = make_shared<string>(boost::any_cast<string>(m["OrderState"]));
    }
    if (m.find("OssInfo") != m.end() && !m["OssInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssInfo"].type()) {
        DescribeInstancesResponseBodyInstancesOssInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssInfo"]));
        ossInfo = make_shared<DescribeInstancesResponseBodyInstancesOssInfo>(model1);
      }
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreateTime"]));
    }
    if (m.find("ResourceExpiredTime") != m.end() && !m["ResourceExpiredTime"].empty()) {
      resourceExpiredTime = make_shared<long>(boost::any_cast<long>(m["ResourceExpiredTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        DescribeInstancesResponseBodyInstancesResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<DescribeInstancesResponseBodyInstancesResourceSpec>(model1);
      }
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Storage"].type()) {
        DescribeInstancesResponseBodyInstancesStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Storage"]));
        storage = make_shared<DescribeInstancesResponseBodyInstancesStorage>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeInstancesResponseBodyInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeInstancesResponseBodyInstancesTags>>(expect1);
      }
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VSwitchInfo") != m.end() && !m["VSwitchInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitchInfo"].type()) {
        vector<DescribeInstancesResponseBodyInstancesVSwitchInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitchInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesVSwitchInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitchInfo = make_shared<vector<DescribeInstancesResponseBodyInstancesVSwitchInfo>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcInfo") != m.end() && !m["VpcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcInfo"].type()) {
        DescribeInstancesResponseBodyInstancesVpcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcInfo"]));
        vpcInfo = make_shared<DescribeInstancesResponseBodyInstancesVpcInfo>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstances>> instances{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeNamespacesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeNamespacesRequestTags() {}

  explicit DescribeNamespacesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeNamespacesRequestTags() = default;
};
class DescribeNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<vector<DescribeNamespacesRequestTags>> tags{};

  DescribeNamespacesRequest() {}

  explicit DescribeNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
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
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeNamespacesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNamespacesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeNamespacesRequestTags>>(expect1);
      }
    }
  }


  virtual ~DescribeNamespacesRequest() = default;
};
class DescribeNamespacesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> tagsShrink{};

  DescribeNamespacesShrinkRequest() {}

  explicit DescribeNamespacesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~DescribeNamespacesShrinkRequest() = default;
};
class DescribeNamespacesResponseBodyNamespacesElasticResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  DescribeNamespacesResponseBodyNamespacesElasticResourceSpec() {}

  explicit DescribeNamespacesResponseBodyNamespacesElasticResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeNamespacesResponseBodyNamespacesElasticResourceSpec() = default;
};
class DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec() {}

  explicit DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec() = default;
};
class DescribeNamespacesResponseBodyNamespacesResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  DescribeNamespacesResponseBodyNamespacesResourceSpec() {}

  explicit DescribeNamespacesResponseBodyNamespacesResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeNamespacesResponseBodyNamespacesResourceSpec() = default;
};
class DescribeNamespacesResponseBodyNamespacesResourceUsed : public Darabonba::Model {
public:
  shared_ptr<double> cpu{};
  shared_ptr<double> cu{};
  shared_ptr<double> memoryGB{};

  DescribeNamespacesResponseBodyNamespacesResourceUsed() {}

  explicit DescribeNamespacesResponseBodyNamespacesResourceUsed(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (cu) {
      res["Cu"] = boost::any(*cu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("Cu") != m.end() && !m["Cu"].empty()) {
      cu = make_shared<double>(boost::any_cast<double>(m["Cu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<double>(boost::any_cast<double>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeNamespacesResponseBodyNamespacesResourceUsed() = default;
};
class DescribeNamespacesResponseBodyNamespacesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeNamespacesResponseBodyNamespacesTags() {}

  explicit DescribeNamespacesResponseBodyNamespacesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeNamespacesResponseBodyNamespacesTags() = default;
};
class DescribeNamespacesResponseBodyNamespaces : public Darabonba::Model {
public:
  shared_ptr<DescribeNamespacesResponseBodyNamespacesElasticResourceSpec> elasticResourceSpec{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec> guaranteedResourceSpec{};
  shared_ptr<bool> ha{};
  shared_ptr<string> namespace_{};
  shared_ptr<DescribeNamespacesResponseBodyNamespacesResourceSpec> resourceSpec{};
  shared_ptr<DescribeNamespacesResponseBodyNamespacesResourceUsed> resourceUsed{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeNamespacesResponseBodyNamespacesTags>> tags{};

  DescribeNamespacesResponseBodyNamespaces() {}

  explicit DescribeNamespacesResponseBodyNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticResourceSpec) {
      res["ElasticResourceSpec"] = elasticResourceSpec ? boost::any(elasticResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (guaranteedResourceSpec) {
      res["GuaranteedResourceSpec"] = guaranteedResourceSpec ? boost::any(guaranteedResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceUsed) {
      res["ResourceUsed"] = resourceUsed ? boost::any(resourceUsed->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("ElasticResourceSpec") != m.end() && !m["ElasticResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticResourceSpec"].type()) {
        DescribeNamespacesResponseBodyNamespacesElasticResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticResourceSpec"]));
        elasticResourceSpec = make_shared<DescribeNamespacesResponseBodyNamespacesElasticResourceSpec>(model1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("GuaranteedResourceSpec") != m.end() && !m["GuaranteedResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["GuaranteedResourceSpec"].type()) {
        DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GuaranteedResourceSpec"]));
        guaranteedResourceSpec = make_shared<DescribeNamespacesResponseBodyNamespacesGuaranteedResourceSpec>(model1);
      }
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        DescribeNamespacesResponseBodyNamespacesResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<DescribeNamespacesResponseBodyNamespacesResourceSpec>(model1);
      }
    }
    if (m.find("ResourceUsed") != m.end() && !m["ResourceUsed"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceUsed"].type()) {
        DescribeNamespacesResponseBodyNamespacesResourceUsed model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceUsed"]));
        resourceUsed = make_shared<DescribeNamespacesResponseBodyNamespacesResourceUsed>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeNamespacesResponseBodyNamespacesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNamespacesResponseBodyNamespacesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeNamespacesResponseBodyNamespacesTags>>(expect1);
      }
    }
  }


  virtual ~DescribeNamespacesResponseBodyNamespaces() = default;
};
class DescribeNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNamespacesResponseBodyNamespaces>> namespaces{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  DescribeNamespacesResponseBody() {}

  explicit DescribeNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaces) {
      vector<boost::any> temp1;
      for(auto item1:*namespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Namespaces"] = boost::any(temp1);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<DescribeNamespacesResponseBodyNamespaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Namespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNamespacesResponseBodyNamespaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaces = make_shared<vector<DescribeNamespacesResponseBodyNamespaces>>(expect1);
      }
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeNamespacesResponseBody() = default;
};
class DescribeNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNamespacesResponseBody> body{};

  DescribeNamespacesResponse() {}

  explicit DescribeNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespacesResponse() = default;
};
class DescribeSupportedRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> extra{};
  shared_ptr<string> region{};
  shared_ptr<string> regionName{};

  DescribeSupportedRegionsResponseBodyRegions() {}

  explicit DescribeSupportedRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~DescribeSupportedRegionsResponseBodyRegions() = default;
};
class DescribeSupportedRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeSupportedRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  DescribeSupportedRegionsResponseBody() {}

  explicit DescribeSupportedRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeSupportedRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSupportedRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeSupportedRegionsResponseBodyRegions>>(expect1);
      }
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
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeSupportedRegionsResponseBody() = default;
};
class DescribeSupportedRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSupportedRegionsResponseBody> body{};

  DescribeSupportedRegionsResponse() {}

  explicit DescribeSupportedRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSupportedRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSupportedRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSupportedRegionsResponse() = default;
};
class DescribeSupportedZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> architectureType{};
  shared_ptr<string> region{};

  DescribeSupportedZonesRequest() {}

  explicit DescribeSupportedZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeSupportedZonesRequest() = default;
};
class DescribeSupportedZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};
  shared_ptr<vector<string>> zoneIds{};

  DescribeSupportedZonesResponseBody() {}

  explicit DescribeSupportedZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (zoneIds) {
      res["ZoneIds"] = boost::any(*zoneIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("ZoneIds") != m.end() && !m["ZoneIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSupportedZonesResponseBody() = default;
};
class DescribeSupportedZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSupportedZonesResponseBody> body{};

  DescribeSupportedZonesResponse() {}

  explicit DescribeSupportedZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSupportedZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSupportedZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSupportedZonesResponse() = default;
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
  shared_ptr<bool> success{};
  shared_ptr<string> tagReponseId{};
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tagReponseId) {
      res["TagReponseId"] = boost::any(*tagReponseId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TagReponseId") != m.end() && !m["TagReponseId"].empty()) {
      tagReponseId = make_shared<string>(boost::any_cast<string>(m["TagReponseId"]));
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
class ModifyElasticResourceSpecRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyElasticResourceSpecRequestResourceSpec() {}

  explicit ModifyElasticResourceSpecRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ModifyElasticResourceSpecRequestResourceSpec() = default;
};
class ModifyElasticResourceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<ModifyElasticResourceSpecRequestResourceSpec> resourceSpec{};

  ModifyElasticResourceSpecRequest() {}

  explicit ModifyElasticResourceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        ModifyElasticResourceSpecRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ModifyElasticResourceSpecRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~ModifyElasticResourceSpecRequest() = default;
};
class ModifyElasticResourceSpecShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceSpecShrink{};

  ModifyElasticResourceSpecShrinkRequest() {}

  explicit ModifyElasticResourceSpecShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
  }


  virtual ~ModifyElasticResourceSpecShrinkRequest() = default;
};
class ModifyElasticResourceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyElasticResourceSpecResponseBody() {}

  explicit ModifyElasticResourceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyElasticResourceSpecResponseBody() = default;
};
class ModifyElasticResourceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyElasticResourceSpecResponseBody> body{};

  ModifyElasticResourceSpecResponse() {}

  explicit ModifyElasticResourceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyElasticResourceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyElasticResourceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyElasticResourceSpecResponse() = default;
};
class ModifyInstanceVswitchRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> haVSwitchIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> vSwitchIds{};

  ModifyInstanceVswitchRequest() {}

  explicit ModifyInstanceVswitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (haVSwitchIds) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HaVSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HaVSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      haVSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyInstanceVswitchRequest() = default;
};
class ModifyInstanceVswitchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> haVSwitchIdsShrink{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> vSwitchIdsShrink{};

  ModifyInstanceVswitchShrinkRequest() {}

  explicit ModifyInstanceVswitchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (haVSwitchIdsShrink) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIdsShrink);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vSwitchIdsShrink) {
      res["VSwitchIds"] = boost::any(*vSwitchIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      haVSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["HaVSwitchIds"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
  }


  virtual ~ModifyInstanceVswitchShrinkRequest() = default;
};
class ModifyInstanceVswitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  ModifyInstanceVswitchResponseBody() {}

  explicit ModifyInstanceVswitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyInstanceVswitchResponseBody() = default;
};
class ModifyInstanceVswitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceVswitchResponseBody> body{};

  ModifyInstanceVswitchResponse() {}

  explicit ModifyInstanceVswitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceVswitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceVswitchResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceVswitchResponse() = default;
};
class ModifyNamespaceSpecV2RequestElasticResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyNamespaceSpecV2RequestElasticResourceSpec() {}

  explicit ModifyNamespaceSpecV2RequestElasticResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ModifyNamespaceSpecV2RequestElasticResourceSpec() = default;
};
class ModifyNamespaceSpecV2RequestGuaranteedResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyNamespaceSpecV2RequestGuaranteedResourceSpec() {}

  explicit ModifyNamespaceSpecV2RequestGuaranteedResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ModifyNamespaceSpecV2RequestGuaranteedResourceSpec() = default;
};
class ModifyNamespaceSpecV2Request : public Darabonba::Model {
public:
  shared_ptr<ModifyNamespaceSpecV2RequestElasticResourceSpec> elasticResourceSpec{};
  shared_ptr<ModifyNamespaceSpecV2RequestGuaranteedResourceSpec> guaranteedResourceSpec{};
  shared_ptr<bool> ha{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};

  ModifyNamespaceSpecV2Request() {}

  explicit ModifyNamespaceSpecV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticResourceSpec) {
      res["ElasticResourceSpec"] = elasticResourceSpec ? boost::any(elasticResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (guaranteedResourceSpec) {
      res["GuaranteedResourceSpec"] = guaranteedResourceSpec ? boost::any(guaranteedResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticResourceSpec") != m.end() && !m["ElasticResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticResourceSpec"].type()) {
        ModifyNamespaceSpecV2RequestElasticResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticResourceSpec"]));
        elasticResourceSpec = make_shared<ModifyNamespaceSpecV2RequestElasticResourceSpec>(model1);
      }
    }
    if (m.find("GuaranteedResourceSpec") != m.end() && !m["GuaranteedResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["GuaranteedResourceSpec"].type()) {
        ModifyNamespaceSpecV2RequestGuaranteedResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GuaranteedResourceSpec"]));
        guaranteedResourceSpec = make_shared<ModifyNamespaceSpecV2RequestGuaranteedResourceSpec>(model1);
      }
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ModifyNamespaceSpecV2Request() = default;
};
class ModifyNamespaceSpecV2ShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticResourceSpecShrink{};
  shared_ptr<string> guaranteedResourceSpecShrink{};
  shared_ptr<bool> ha{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};

  ModifyNamespaceSpecV2ShrinkRequest() {}

  explicit ModifyNamespaceSpecV2ShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticResourceSpecShrink) {
      res["ElasticResourceSpec"] = boost::any(*elasticResourceSpecShrink);
    }
    if (guaranteedResourceSpecShrink) {
      res["GuaranteedResourceSpec"] = boost::any(*guaranteedResourceSpecShrink);
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticResourceSpec") != m.end() && !m["ElasticResourceSpec"].empty()) {
      elasticResourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ElasticResourceSpec"]));
    }
    if (m.find("GuaranteedResourceSpec") != m.end() && !m["GuaranteedResourceSpec"].empty()) {
      guaranteedResourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["GuaranteedResourceSpec"]));
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ModifyNamespaceSpecV2ShrinkRequest() = default;
};
class ModifyNamespaceSpecV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyNamespaceSpecV2ResponseBody() {}

  explicit ModifyNamespaceSpecV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyNamespaceSpecV2ResponseBody() = default;
};
class ModifyNamespaceSpecV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNamespaceSpecV2ResponseBody> body{};

  ModifyNamespaceSpecV2Response() {}

  explicit ModifyNamespaceSpecV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNamespaceSpecV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNamespaceSpecV2ResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNamespaceSpecV2Response() = default;
};
class ModifyPrepayInstanceSpecRequestHaResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyPrepayInstanceSpecRequestHaResourceSpec() {}

  explicit ModifyPrepayInstanceSpecRequestHaResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ModifyPrepayInstanceSpecRequestHaResourceSpec() = default;
};
class ModifyPrepayInstanceSpecRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyPrepayInstanceSpecRequestResourceSpec() {}

  explicit ModifyPrepayInstanceSpecRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ModifyPrepayInstanceSpecRequestResourceSpec() = default;
};
class ModifyPrepayInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<ModifyPrepayInstanceSpecRequestHaResourceSpec> haResourceSpec{};
  shared_ptr<vector<string>> haVSwitchIds{};
  shared_ptr<string> haZoneId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<ModifyPrepayInstanceSpecRequestResourceSpec> resourceSpec{};

  ModifyPrepayInstanceSpecRequest() {}

  explicit ModifyPrepayInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpec) {
      res["HaResourceSpec"] = haResourceSpec ? boost::any(haResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (haVSwitchIds) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIds);
    }
    if (haZoneId) {
      res["HaZoneId"] = boost::any(*haZoneId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["HaResourceSpec"].type()) {
        ModifyPrepayInstanceSpecRequestHaResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HaResourceSpec"]));
        haResourceSpec = make_shared<ModifyPrepayInstanceSpecRequestHaResourceSpec>(model1);
      }
    }
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HaVSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HaVSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      haVSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HaZoneId") != m.end() && !m["HaZoneId"].empty()) {
      haZoneId = make_shared<string>(boost::any_cast<string>(m["HaZoneId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        ModifyPrepayInstanceSpecRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ModifyPrepayInstanceSpecRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~ModifyPrepayInstanceSpecRequest() = default;
};
class ModifyPrepayInstanceSpecShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<string> haResourceSpecShrink{};
  shared_ptr<string> haVSwitchIdsShrink{};
  shared_ptr<string> haZoneId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceSpecShrink{};

  ModifyPrepayInstanceSpecShrinkRequest() {}

  explicit ModifyPrepayInstanceSpecShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpecShrink) {
      res["HaResourceSpec"] = boost::any(*haResourceSpecShrink);
    }
    if (haVSwitchIdsShrink) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIdsShrink);
    }
    if (haZoneId) {
      res["HaZoneId"] = boost::any(*haZoneId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      haResourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["HaResourceSpec"]));
    }
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      haVSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["HaVSwitchIds"]));
    }
    if (m.find("HaZoneId") != m.end() && !m["HaZoneId"].empty()) {
      haZoneId = make_shared<string>(boost::any_cast<string>(m["HaZoneId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
  }


  virtual ~ModifyPrepayInstanceSpecShrinkRequest() = default;
};
class ModifyPrepayInstanceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyPrepayInstanceSpecResponseBody() {}

  explicit ModifyPrepayInstanceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyPrepayInstanceSpecResponseBody() = default;
};
class ModifyPrepayInstanceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPrepayInstanceSpecResponseBody> body{};

  ModifyPrepayInstanceSpecResponse() {}

  explicit ModifyPrepayInstanceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPrepayInstanceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPrepayInstanceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPrepayInstanceSpecResponse() = default;
};
class ModifyPrepayNamespaceSpecRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyPrepayNamespaceSpecRequestResourceSpec() {}

  explicit ModifyPrepayNamespaceSpecRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~ModifyPrepayNamespaceSpecRequestResourceSpec() = default;
};
class ModifyPrepayNamespaceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};
  shared_ptr<ModifyPrepayNamespaceSpecRequestResourceSpec> resourceSpec{};

  ModifyPrepayNamespaceSpecRequest() {}

  explicit ModifyPrepayNamespaceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        ModifyPrepayNamespaceSpecRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ModifyPrepayNamespaceSpecRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~ModifyPrepayNamespaceSpecRequest() = default;
};
class ModifyPrepayNamespaceSpecShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceSpecShrink{};

  ModifyPrepayNamespaceSpecShrinkRequest() {}

  explicit ModifyPrepayNamespaceSpecShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
  }


  virtual ~ModifyPrepayNamespaceSpecShrinkRequest() = default;
};
class ModifyPrepayNamespaceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyPrepayNamespaceSpecResponseBody() {}

  explicit ModifyPrepayNamespaceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPrepayNamespaceSpecResponseBody() = default;
};
class ModifyPrepayNamespaceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPrepayNamespaceSpecResponseBody> body{};

  ModifyPrepayNamespaceSpecResponse() {}

  explicit ModifyPrepayNamespaceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPrepayNamespaceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPrepayNamespaceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPrepayNamespaceSpecResponse() = default;
};
class QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec() {}

  explicit QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec() = default;
};
class QueryConvertInstancePriceRequestNamespaceResourceSpecs : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec> resourceSpec{};

  QueryConvertInstancePriceRequestNamespaceResourceSpecs() {}

  explicit QueryConvertInstancePriceRequestNamespaceResourceSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<QueryConvertInstancePriceRequestNamespaceResourceSpecsResourceSpec>(model1);
      }
    }
  }


  virtual ~QueryConvertInstancePriceRequestNamespaceResourceSpecs() = default;
};
class QueryConvertInstancePriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs>> namespaceResourceSpecs{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  QueryConvertInstancePriceRequest() {}

  explicit QueryConvertInstancePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isAutoRenew) {
      res["IsAutoRenew"] = boost::any(*isAutoRenew);
    }
    if (namespaceResourceSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*namespaceResourceSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NamespaceResourceSpecs"] = boost::any(temp1);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsAutoRenew") != m.end() && !m["IsAutoRenew"].empty()) {
      isAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRenew"]));
    }
    if (m.find("NamespaceResourceSpecs") != m.end() && !m["NamespaceResourceSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["NamespaceResourceSpecs"].type()) {
        vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NamespaceResourceSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryConvertInstancePriceRequestNamespaceResourceSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaceResourceSpecs = make_shared<vector<QueryConvertInstancePriceRequestNamespaceResourceSpecs>>(expect1);
      }
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryConvertInstancePriceRequest() = default;
};
class QueryConvertInstancePriceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<string> namespaceResourceSpecsShrink{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  QueryConvertInstancePriceShrinkRequest() {}

  explicit QueryConvertInstancePriceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isAutoRenew) {
      res["IsAutoRenew"] = boost::any(*isAutoRenew);
    }
    if (namespaceResourceSpecsShrink) {
      res["NamespaceResourceSpecs"] = boost::any(*namespaceResourceSpecsShrink);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsAutoRenew") != m.end() && !m["IsAutoRenew"].empty()) {
      isAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRenew"]));
    }
    if (m.find("NamespaceResourceSpecs") != m.end() && !m["NamespaceResourceSpecs"].empty()) {
      namespaceResourceSpecsShrink = make_shared<string>(boost::any_cast<string>(m["NamespaceResourceSpecs"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryConvertInstancePriceShrinkRequest() = default;
};
class QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo : public Darabonba::Model {
public:
  shared_ptr<string> cheapRate{};
  shared_ptr<string> cheapStandAmount{};
  shared_ptr<bool> isShow{};
  shared_ptr<string> monthPrice{};
  shared_ptr<string> originalStandAmount{};
  shared_ptr<string> startTime{};

  QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo() {}

  explicit QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cheapRate) {
      res["CheapRate"] = boost::any(*cheapRate);
    }
    if (cheapStandAmount) {
      res["CheapStandAmount"] = boost::any(*cheapStandAmount);
    }
    if (isShow) {
      res["IsShow"] = boost::any(*isShow);
    }
    if (monthPrice) {
      res["MonthPrice"] = boost::any(*monthPrice);
    }
    if (originalStandAmount) {
      res["OriginalStandAmount"] = boost::any(*originalStandAmount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheapRate") != m.end() && !m["CheapRate"].empty()) {
      cheapRate = make_shared<string>(boost::any_cast<string>(m["CheapRate"]));
    }
    if (m.find("CheapStandAmount") != m.end() && !m["CheapStandAmount"].empty()) {
      cheapStandAmount = make_shared<string>(boost::any_cast<string>(m["CheapStandAmount"]));
    }
    if (m.find("IsShow") != m.end() && !m["IsShow"].empty()) {
      isShow = make_shared<bool>(boost::any_cast<bool>(m["IsShow"]));
    }
    if (m.find("MonthPrice") != m.end() && !m["MonthPrice"].empty()) {
      monthPrice = make_shared<string>(boost::any_cast<string>(m["MonthPrice"]));
    }
    if (m.find("OriginalStandAmount") != m.end() && !m["OriginalStandAmount"].empty()) {
      originalStandAmount = make_shared<string>(boost::any_cast<string>(m["OriginalStandAmount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo() = default;
};
class QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<bool> selected{};

  QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions() {}

  explicit QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions() = default;
};
class QueryConvertInstancePriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  QueryConvertInstancePriceResponseBodyPriceInfoRules() {}

  explicit QueryConvertInstancePriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryConvertInstancePriceResponseBodyPriceInfoRules() = default;
};
class QueryConvertInstancePriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> currency{};
  shared_ptr<QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo> depreciateInfo{};
  shared_ptr<double> discountAmount{};
  shared_ptr<bool> isContractActivity{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions>> optionalPromotions{};
  shared_ptr<double> originalAmount{};
  shared_ptr<vector<QueryConvertInstancePriceResponseBodyPriceInfoRules>> rules{};
  shared_ptr<string> standDiscountPrice{};
  shared_ptr<string> standPrice{};
  shared_ptr<double> tradeAmount{};

  QueryConvertInstancePriceResponseBodyPriceInfo() {}

  explicit QueryConvertInstancePriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (depreciateInfo) {
      res["DepreciateInfo"] = depreciateInfo ? boost::any(depreciateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (isContractActivity) {
      res["IsContractActivity"] = boost::any(*isContractActivity);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (optionalPromotions) {
      vector<boost::any> temp1;
      for(auto item1:*optionalPromotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OptionalPromotions"] = boost::any(temp1);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (standDiscountPrice) {
      res["StandDiscountPrice"] = boost::any(*standDiscountPrice);
    }
    if (standPrice) {
      res["StandPrice"] = boost::any(*standPrice);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DepreciateInfo") != m.end() && !m["DepreciateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DepreciateInfo"].type()) {
        QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DepreciateInfo"]));
        depreciateInfo = make_shared<QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo>(model1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("IsContractActivity") != m.end() && !m["IsContractActivity"].empty()) {
      isContractActivity = make_shared<bool>(boost::any_cast<bool>(m["IsContractActivity"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OptionalPromotions") != m.end() && !m["OptionalPromotions"].empty()) {
      if (typeid(vector<boost::any>) == m["OptionalPromotions"].type()) {
        vector<QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OptionalPromotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        optionalPromotions = make_shared<vector<QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions>>(expect1);
      }
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<QueryConvertInstancePriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryConvertInstancePriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<QueryConvertInstancePriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
    if (m.find("StandDiscountPrice") != m.end() && !m["StandDiscountPrice"].empty()) {
      standDiscountPrice = make_shared<string>(boost::any_cast<string>(m["StandDiscountPrice"]));
    }
    if (m.find("StandPrice") != m.end() && !m["StandPrice"].empty()) {
      standPrice = make_shared<string>(boost::any_cast<string>(m["StandPrice"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~QueryConvertInstancePriceResponseBodyPriceInfo() = default;
};
class QueryConvertInstancePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryConvertInstancePriceResponseBodyPriceInfo> priceInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryConvertInstancePriceResponseBody() {}

  explicit QueryConvertInstancePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        QueryConvertInstancePriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<QueryConvertInstancePriceResponseBodyPriceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryConvertInstancePriceResponseBody() = default;
};
class QueryConvertInstancePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryConvertInstancePriceResponseBody> body{};

  QueryConvertInstancePriceResponse() {}

  explicit QueryConvertInstancePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryConvertInstancePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryConvertInstancePriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryConvertInstancePriceResponse() = default;
};
class QueryConvertPrepayInstancePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  QueryConvertPrepayInstancePriceRequest() {}

  explicit QueryConvertPrepayInstancePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryConvertPrepayInstancePriceRequest() = default;
};
class QueryConvertPrepayInstancePriceResponseBodyPriceInfoDepreciateInfo : public Darabonba::Model {
public:
  shared_ptr<string> cheapRate{};
  shared_ptr<string> cheapStandAmount{};
  shared_ptr<bool> isShow{};
  shared_ptr<string> monthPrice{};
  shared_ptr<string> originalStandAmount{};
  shared_ptr<string> startTime{};

  QueryConvertPrepayInstancePriceResponseBodyPriceInfoDepreciateInfo() {}

  explicit QueryConvertPrepayInstancePriceResponseBodyPriceInfoDepreciateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cheapRate) {
      res["CheapRate"] = boost::any(*cheapRate);
    }
    if (cheapStandAmount) {
      res["CheapStandAmount"] = boost::any(*cheapStandAmount);
    }
    if (isShow) {
      res["IsShow"] = boost::any(*isShow);
    }
    if (monthPrice) {
      res["MonthPrice"] = boost::any(*monthPrice);
    }
    if (originalStandAmount) {
      res["OriginalStandAmount"] = boost::any(*originalStandAmount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheapRate") != m.end() && !m["CheapRate"].empty()) {
      cheapRate = make_shared<string>(boost::any_cast<string>(m["CheapRate"]));
    }
    if (m.find("CheapStandAmount") != m.end() && !m["CheapStandAmount"].empty()) {
      cheapStandAmount = make_shared<string>(boost::any_cast<string>(m["CheapStandAmount"]));
    }
    if (m.find("IsShow") != m.end() && !m["IsShow"].empty()) {
      isShow = make_shared<bool>(boost::any_cast<bool>(m["IsShow"]));
    }
    if (m.find("MonthPrice") != m.end() && !m["MonthPrice"].empty()) {
      monthPrice = make_shared<string>(boost::any_cast<string>(m["MonthPrice"]));
    }
    if (m.find("OriginalStandAmount") != m.end() && !m["OriginalStandAmount"].empty()) {
      originalStandAmount = make_shared<string>(boost::any_cast<string>(m["OriginalStandAmount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryConvertPrepayInstancePriceResponseBodyPriceInfoDepreciateInfo() = default;
};
class QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<bool> selected{};

  QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions() {}

  explicit QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions() = default;
};
class QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules() {}

  explicit QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules() = default;
};
class QueryConvertPrepayInstancePriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> currency{};
  shared_ptr<QueryConvertPrepayInstancePriceResponseBodyPriceInfoDepreciateInfo> depreciateInfo{};
  shared_ptr<double> discountAmount{};
  shared_ptr<bool> isContractActivity{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions>> optionalPromotions{};
  shared_ptr<double> originalAmount{};
  shared_ptr<vector<QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules>> rules{};
  shared_ptr<string> standDiscountPrice{};
  shared_ptr<string> standPrice{};
  shared_ptr<double> tradeAmount{};

  QueryConvertPrepayInstancePriceResponseBodyPriceInfo() {}

  explicit QueryConvertPrepayInstancePriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (depreciateInfo) {
      res["DepreciateInfo"] = depreciateInfo ? boost::any(depreciateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (isContractActivity) {
      res["IsContractActivity"] = boost::any(*isContractActivity);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (optionalPromotions) {
      vector<boost::any> temp1;
      for(auto item1:*optionalPromotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OptionalPromotions"] = boost::any(temp1);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (standDiscountPrice) {
      res["StandDiscountPrice"] = boost::any(*standDiscountPrice);
    }
    if (standPrice) {
      res["StandPrice"] = boost::any(*standPrice);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DepreciateInfo") != m.end() && !m["DepreciateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DepreciateInfo"].type()) {
        QueryConvertPrepayInstancePriceResponseBodyPriceInfoDepreciateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DepreciateInfo"]));
        depreciateInfo = make_shared<QueryConvertPrepayInstancePriceResponseBodyPriceInfoDepreciateInfo>(model1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("IsContractActivity") != m.end() && !m["IsContractActivity"].empty()) {
      isContractActivity = make_shared<bool>(boost::any_cast<bool>(m["IsContractActivity"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OptionalPromotions") != m.end() && !m["OptionalPromotions"].empty()) {
      if (typeid(vector<boost::any>) == m["OptionalPromotions"].type()) {
        vector<QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OptionalPromotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        optionalPromotions = make_shared<vector<QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions>>(expect1);
      }
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<QueryConvertPrepayInstancePriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
    if (m.find("StandDiscountPrice") != m.end() && !m["StandDiscountPrice"].empty()) {
      standDiscountPrice = make_shared<string>(boost::any_cast<string>(m["StandDiscountPrice"]));
    }
    if (m.find("StandPrice") != m.end() && !m["StandPrice"].empty()) {
      standPrice = make_shared<string>(boost::any_cast<string>(m["StandPrice"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~QueryConvertPrepayInstancePriceResponseBodyPriceInfo() = default;
};
class QueryConvertPrepayInstancePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryConvertPrepayInstancePriceResponseBodyPriceInfo> priceInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryConvertPrepayInstancePriceResponseBody() {}

  explicit QueryConvertPrepayInstancePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        QueryConvertPrepayInstancePriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<QueryConvertPrepayInstancePriceResponseBodyPriceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryConvertPrepayInstancePriceResponseBody() = default;
};
class QueryConvertPrepayInstancePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryConvertPrepayInstancePriceResponseBody> body{};

  QueryConvertPrepayInstancePriceResponse() {}

  explicit QueryConvertPrepayInstancePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryConvertPrepayInstancePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryConvertPrepayInstancePriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryConvertPrepayInstancePriceResponse() = default;
};
class QueryCreateInstancePriceRequestHaResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  QueryCreateInstancePriceRequestHaResourceSpec() {}

  explicit QueryCreateInstancePriceRequestHaResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~QueryCreateInstancePriceRequestHaResourceSpec() = default;
};
class QueryCreateInstancePriceRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  QueryCreateInstancePriceRequestResourceSpec() {}

  explicit QueryCreateInstancePriceRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~QueryCreateInstancePriceRequestResourceSpec() = default;
};
class QueryCreateInstancePriceRequestStorageOss : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};

  QueryCreateInstancePriceRequestStorageOss() {}

  explicit QueryCreateInstancePriceRequestStorageOss(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
  }


  virtual ~QueryCreateInstancePriceRequestStorageOss() = default;
};
class QueryCreateInstancePriceRequestStorage : public Darabonba::Model {
public:
  shared_ptr<QueryCreateInstancePriceRequestStorageOss> oss{};

  QueryCreateInstancePriceRequestStorage() {}

  explicit QueryCreateInstancePriceRequestStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oss) {
      res["Oss"] = oss ? boost::any(oss->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Oss") != m.end() && !m["Oss"].empty()) {
      if (typeid(map<string, boost::any>) == m["Oss"].type()) {
        QueryCreateInstancePriceRequestStorageOss model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Oss"]));
        oss = make_shared<QueryCreateInstancePriceRequestStorageOss>(model1);
      }
    }
  }


  virtual ~QueryCreateInstancePriceRequestStorage() = default;
};
class QueryCreateInstancePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> architectureType{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<string> extra{};
  shared_ptr<bool> ha{};
  shared_ptr<QueryCreateInstancePriceRequestHaResourceSpec> haResourceSpec{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> promotionCode{};
  shared_ptr<string> region{};
  shared_ptr<QueryCreateInstancePriceRequestResourceSpec> resourceSpec{};
  shared_ptr<QueryCreateInstancePriceRequestStorage> storage{};
  shared_ptr<bool> usePromotionCode{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  QueryCreateInstancePriceRequest() {}

  explicit QueryCreateInstancePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpec) {
      res["HaResourceSpec"] = haResourceSpec ? boost::any(haResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (promotionCode) {
      res["PromotionCode"] = boost::any(*promotionCode);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storage) {
      res["Storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usePromotionCode) {
      res["UsePromotionCode"] = boost::any(*usePromotionCode);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["HaResourceSpec"].type()) {
        QueryCreateInstancePriceRequestHaResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HaResourceSpec"]));
        haResourceSpec = make_shared<QueryCreateInstancePriceRequestHaResourceSpec>(model1);
      }
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("PromotionCode") != m.end() && !m["PromotionCode"].empty()) {
      promotionCode = make_shared<string>(boost::any_cast<string>(m["PromotionCode"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        QueryCreateInstancePriceRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<QueryCreateInstancePriceRequestResourceSpec>(model1);
      }
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Storage"].type()) {
        QueryCreateInstancePriceRequestStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Storage"]));
        storage = make_shared<QueryCreateInstancePriceRequestStorage>(model1);
      }
    }
    if (m.find("UsePromotionCode") != m.end() && !m["UsePromotionCode"].empty()) {
      usePromotionCode = make_shared<bool>(boost::any_cast<bool>(m["UsePromotionCode"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~QueryCreateInstancePriceRequest() = default;
};
class QueryCreateInstancePriceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> architectureType{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<string> extra{};
  shared_ptr<bool> ha{};
  shared_ptr<string> haResourceSpecShrink{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> promotionCode{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceSpecShrink{};
  shared_ptr<string> storageShrink{};
  shared_ptr<bool> usePromotionCode{};
  shared_ptr<string> vSwitchIdsShrink{};
  shared_ptr<string> vpcId{};

  QueryCreateInstancePriceShrinkRequest() {}

  explicit QueryCreateInstancePriceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpecShrink) {
      res["HaResourceSpec"] = boost::any(*haResourceSpecShrink);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (promotionCode) {
      res["PromotionCode"] = boost::any(*promotionCode);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    if (storageShrink) {
      res["Storage"] = boost::any(*storageShrink);
    }
    if (usePromotionCode) {
      res["UsePromotionCode"] = boost::any(*usePromotionCode);
    }
    if (vSwitchIdsShrink) {
      res["VSwitchIds"] = boost::any(*vSwitchIdsShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      haResourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["HaResourceSpec"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("PromotionCode") != m.end() && !m["PromotionCode"].empty()) {
      promotionCode = make_shared<string>(boost::any_cast<string>(m["PromotionCode"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storageShrink = make_shared<string>(boost::any_cast<string>(m["Storage"]));
    }
    if (m.find("UsePromotionCode") != m.end() && !m["UsePromotionCode"].empty()) {
      usePromotionCode = make_shared<bool>(boost::any_cast<bool>(m["UsePromotionCode"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~QueryCreateInstancePriceShrinkRequest() = default;
};
class QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo : public Darabonba::Model {
public:
  shared_ptr<string> cheapRate{};
  shared_ptr<string> cheapStandAmount{};
  shared_ptr<bool> isShow{};
  shared_ptr<string> monthPrice{};
  shared_ptr<string> originalStandAmount{};
  shared_ptr<string> startTime{};

  QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo() {}

  explicit QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cheapRate) {
      res["CheapRate"] = boost::any(*cheapRate);
    }
    if (cheapStandAmount) {
      res["CheapStandAmount"] = boost::any(*cheapStandAmount);
    }
    if (isShow) {
      res["IsShow"] = boost::any(*isShow);
    }
    if (monthPrice) {
      res["MonthPrice"] = boost::any(*monthPrice);
    }
    if (originalStandAmount) {
      res["OriginalStandAmount"] = boost::any(*originalStandAmount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheapRate") != m.end() && !m["CheapRate"].empty()) {
      cheapRate = make_shared<string>(boost::any_cast<string>(m["CheapRate"]));
    }
    if (m.find("CheapStandAmount") != m.end() && !m["CheapStandAmount"].empty()) {
      cheapStandAmount = make_shared<string>(boost::any_cast<string>(m["CheapStandAmount"]));
    }
    if (m.find("IsShow") != m.end() && !m["IsShow"].empty()) {
      isShow = make_shared<bool>(boost::any_cast<bool>(m["IsShow"]));
    }
    if (m.find("MonthPrice") != m.end() && !m["MonthPrice"].empty()) {
      monthPrice = make_shared<string>(boost::any_cast<string>(m["MonthPrice"]));
    }
    if (m.find("OriginalStandAmount") != m.end() && !m["OriginalStandAmount"].empty()) {
      originalStandAmount = make_shared<string>(boost::any_cast<string>(m["OriginalStandAmount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo() = default;
};
class QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<bool> selected{};

  QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions() {}

  explicit QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions() = default;
};
class QueryCreateInstancePriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  QueryCreateInstancePriceResponseBodyPriceInfoRules() {}

  explicit QueryCreateInstancePriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryCreateInstancePriceResponseBodyPriceInfoRules() = default;
};
class QueryCreateInstancePriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> currency{};
  shared_ptr<QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo> depreciateInfo{};
  shared_ptr<double> discountAmount{};
  shared_ptr<bool> isContractActivity{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions>> optionalPromotions{};
  shared_ptr<double> originalAmount{};
  shared_ptr<vector<QueryCreateInstancePriceResponseBodyPriceInfoRules>> rules{};
  shared_ptr<string> standDiscountPrice{};
  shared_ptr<string> standPrice{};
  shared_ptr<double> tradeAmount{};

  QueryCreateInstancePriceResponseBodyPriceInfo() {}

  explicit QueryCreateInstancePriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (depreciateInfo) {
      res["DepreciateInfo"] = depreciateInfo ? boost::any(depreciateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (isContractActivity) {
      res["IsContractActivity"] = boost::any(*isContractActivity);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (optionalPromotions) {
      vector<boost::any> temp1;
      for(auto item1:*optionalPromotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OptionalPromotions"] = boost::any(temp1);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (standDiscountPrice) {
      res["StandDiscountPrice"] = boost::any(*standDiscountPrice);
    }
    if (standPrice) {
      res["StandPrice"] = boost::any(*standPrice);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DepreciateInfo") != m.end() && !m["DepreciateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DepreciateInfo"].type()) {
        QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DepreciateInfo"]));
        depreciateInfo = make_shared<QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo>(model1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("IsContractActivity") != m.end() && !m["IsContractActivity"].empty()) {
      isContractActivity = make_shared<bool>(boost::any_cast<bool>(m["IsContractActivity"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OptionalPromotions") != m.end() && !m["OptionalPromotions"].empty()) {
      if (typeid(vector<boost::any>) == m["OptionalPromotions"].type()) {
        vector<QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OptionalPromotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        optionalPromotions = make_shared<vector<QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions>>(expect1);
      }
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<QueryCreateInstancePriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCreateInstancePriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<QueryCreateInstancePriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
    if (m.find("StandDiscountPrice") != m.end() && !m["StandDiscountPrice"].empty()) {
      standDiscountPrice = make_shared<string>(boost::any_cast<string>(m["StandDiscountPrice"]));
    }
    if (m.find("StandPrice") != m.end() && !m["StandPrice"].empty()) {
      standPrice = make_shared<string>(boost::any_cast<string>(m["StandPrice"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~QueryCreateInstancePriceResponseBodyPriceInfo() = default;
};
class QueryCreateInstancePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryCreateInstancePriceResponseBodyPriceInfo> priceInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryCreateInstancePriceResponseBody() {}

  explicit QueryCreateInstancePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        QueryCreateInstancePriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<QueryCreateInstancePriceResponseBodyPriceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryCreateInstancePriceResponseBody() = default;
};
class QueryCreateInstancePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCreateInstancePriceResponseBody> body{};

  QueryCreateInstancePriceResponse() {}

  explicit QueryCreateInstancePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCreateInstancePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCreateInstancePriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCreateInstancePriceResponse() = default;
};
class QueryModifyInstancePriceRequestHaResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  QueryModifyInstancePriceRequestHaResourceSpec() {}

  explicit QueryModifyInstancePriceRequestHaResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~QueryModifyInstancePriceRequestHaResourceSpec() = default;
};
class QueryModifyInstancePriceRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  QueryModifyInstancePriceRequestResourceSpec() {}

  explicit QueryModifyInstancePriceRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<long>(boost::any_cast<long>(m["MemoryGB"]));
    }
  }


  virtual ~QueryModifyInstancePriceRequestResourceSpec() = default;
};
class QueryModifyInstancePriceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<QueryModifyInstancePriceRequestHaResourceSpec> haResourceSpec{};
  shared_ptr<vector<string>> haVSwitchIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> promotionCode{};
  shared_ptr<string> region{};
  shared_ptr<QueryModifyInstancePriceRequestResourceSpec> resourceSpec{};
  shared_ptr<bool> usePromotionCode{};

  QueryModifyInstancePriceRequest() {}

  explicit QueryModifyInstancePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpec) {
      res["HaResourceSpec"] = haResourceSpec ? boost::any(haResourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (haVSwitchIds) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (promotionCode) {
      res["PromotionCode"] = boost::any(*promotionCode);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpec) {
      res["ResourceSpec"] = resourceSpec ? boost::any(resourceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usePromotionCode) {
      res["UsePromotionCode"] = boost::any(*usePromotionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["HaResourceSpec"].type()) {
        QueryModifyInstancePriceRequestHaResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HaResourceSpec"]));
        haResourceSpec = make_shared<QueryModifyInstancePriceRequestHaResourceSpec>(model1);
      }
    }
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HaVSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HaVSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      haVSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PromotionCode") != m.end() && !m["PromotionCode"].empty()) {
      promotionCode = make_shared<string>(boost::any_cast<string>(m["PromotionCode"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        QueryModifyInstancePriceRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<QueryModifyInstancePriceRequestResourceSpec>(model1);
      }
    }
    if (m.find("UsePromotionCode") != m.end() && !m["UsePromotionCode"].empty()) {
      usePromotionCode = make_shared<bool>(boost::any_cast<bool>(m["UsePromotionCode"]));
    }
  }


  virtual ~QueryModifyInstancePriceRequest() = default;
};
class QueryModifyInstancePriceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ha{};
  shared_ptr<string> haResourceSpecShrink{};
  shared_ptr<string> haVSwitchIdsShrink{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> promotionCode{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceSpecShrink{};
  shared_ptr<bool> usePromotionCode{};

  QueryModifyInstancePriceShrinkRequest() {}

  explicit QueryModifyInstancePriceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ha) {
      res["Ha"] = boost::any(*ha);
    }
    if (haResourceSpecShrink) {
      res["HaResourceSpec"] = boost::any(*haResourceSpecShrink);
    }
    if (haVSwitchIdsShrink) {
      res["HaVSwitchIds"] = boost::any(*haVSwitchIdsShrink);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (promotionCode) {
      res["PromotionCode"] = boost::any(*promotionCode);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceSpecShrink) {
      res["ResourceSpec"] = boost::any(*resourceSpecShrink);
    }
    if (usePromotionCode) {
      res["UsePromotionCode"] = boost::any(*usePromotionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ha") != m.end() && !m["Ha"].empty()) {
      ha = make_shared<bool>(boost::any_cast<bool>(m["Ha"]));
    }
    if (m.find("HaResourceSpec") != m.end() && !m["HaResourceSpec"].empty()) {
      haResourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["HaResourceSpec"]));
    }
    if (m.find("HaVSwitchIds") != m.end() && !m["HaVSwitchIds"].empty()) {
      haVSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["HaVSwitchIds"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PromotionCode") != m.end() && !m["PromotionCode"].empty()) {
      promotionCode = make_shared<string>(boost::any_cast<string>(m["PromotionCode"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      resourceSpecShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSpec"]));
    }
    if (m.find("UsePromotionCode") != m.end() && !m["UsePromotionCode"].empty()) {
      usePromotionCode = make_shared<bool>(boost::any_cast<bool>(m["UsePromotionCode"]));
    }
  }


  virtual ~QueryModifyInstancePriceShrinkRequest() = default;
};
class QueryModifyInstancePriceResponseBodyPriceInfoDepreciateInfo : public Darabonba::Model {
public:
  shared_ptr<string> cheapRate{};
  shared_ptr<string> cheapStandAmount{};
  shared_ptr<bool> isShow{};
  shared_ptr<string> monthPrice{};
  shared_ptr<string> originalStandAmount{};
  shared_ptr<string> startTime{};

  QueryModifyInstancePriceResponseBodyPriceInfoDepreciateInfo() {}

  explicit QueryModifyInstancePriceResponseBodyPriceInfoDepreciateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cheapRate) {
      res["CheapRate"] = boost::any(*cheapRate);
    }
    if (cheapStandAmount) {
      res["CheapStandAmount"] = boost::any(*cheapStandAmount);
    }
    if (isShow) {
      res["IsShow"] = boost::any(*isShow);
    }
    if (monthPrice) {
      res["MonthPrice"] = boost::any(*monthPrice);
    }
    if (originalStandAmount) {
      res["OriginalStandAmount"] = boost::any(*originalStandAmount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheapRate") != m.end() && !m["CheapRate"].empty()) {
      cheapRate = make_shared<string>(boost::any_cast<string>(m["CheapRate"]));
    }
    if (m.find("CheapStandAmount") != m.end() && !m["CheapStandAmount"].empty()) {
      cheapStandAmount = make_shared<string>(boost::any_cast<string>(m["CheapStandAmount"]));
    }
    if (m.find("IsShow") != m.end() && !m["IsShow"].empty()) {
      isShow = make_shared<bool>(boost::any_cast<bool>(m["IsShow"]));
    }
    if (m.find("MonthPrice") != m.end() && !m["MonthPrice"].empty()) {
      monthPrice = make_shared<string>(boost::any_cast<string>(m["MonthPrice"]));
    }
    if (m.find("OriginalStandAmount") != m.end() && !m["OriginalStandAmount"].empty()) {
      originalStandAmount = make_shared<string>(boost::any_cast<string>(m["OriginalStandAmount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryModifyInstancePriceResponseBodyPriceInfoDepreciateInfo() = default;
};
class QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<bool> selected{};

  QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions() {}

  explicit QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions() = default;
};
class QueryModifyInstancePriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  QueryModifyInstancePriceResponseBodyPriceInfoRules() {}

  explicit QueryModifyInstancePriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryModifyInstancePriceResponseBodyPriceInfoRules() = default;
};
class QueryModifyInstancePriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> currency{};
  shared_ptr<QueryModifyInstancePriceResponseBodyPriceInfoDepreciateInfo> depreciateInfo{};
  shared_ptr<double> discountAmount{};
  shared_ptr<bool> isContractActivity{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions>> optionalPromotions{};
  shared_ptr<double> originalAmount{};
  shared_ptr<vector<QueryModifyInstancePriceResponseBodyPriceInfoRules>> rules{};
  shared_ptr<string> standDiscountPrice{};
  shared_ptr<string> standPrice{};
  shared_ptr<double> tradeAmount{};

  QueryModifyInstancePriceResponseBodyPriceInfo() {}

  explicit QueryModifyInstancePriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (depreciateInfo) {
      res["DepreciateInfo"] = depreciateInfo ? boost::any(depreciateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (isContractActivity) {
      res["IsContractActivity"] = boost::any(*isContractActivity);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (optionalPromotions) {
      vector<boost::any> temp1;
      for(auto item1:*optionalPromotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OptionalPromotions"] = boost::any(temp1);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (standDiscountPrice) {
      res["StandDiscountPrice"] = boost::any(*standDiscountPrice);
    }
    if (standPrice) {
      res["StandPrice"] = boost::any(*standPrice);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DepreciateInfo") != m.end() && !m["DepreciateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DepreciateInfo"].type()) {
        QueryModifyInstancePriceResponseBodyPriceInfoDepreciateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DepreciateInfo"]));
        depreciateInfo = make_shared<QueryModifyInstancePriceResponseBodyPriceInfoDepreciateInfo>(model1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("IsContractActivity") != m.end() && !m["IsContractActivity"].empty()) {
      isContractActivity = make_shared<bool>(boost::any_cast<bool>(m["IsContractActivity"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OptionalPromotions") != m.end() && !m["OptionalPromotions"].empty()) {
      if (typeid(vector<boost::any>) == m["OptionalPromotions"].type()) {
        vector<QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OptionalPromotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        optionalPromotions = make_shared<vector<QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions>>(expect1);
      }
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<QueryModifyInstancePriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryModifyInstancePriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<QueryModifyInstancePriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
    if (m.find("StandDiscountPrice") != m.end() && !m["StandDiscountPrice"].empty()) {
      standDiscountPrice = make_shared<string>(boost::any_cast<string>(m["StandDiscountPrice"]));
    }
    if (m.find("StandPrice") != m.end() && !m["StandPrice"].empty()) {
      standPrice = make_shared<string>(boost::any_cast<string>(m["StandPrice"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~QueryModifyInstancePriceResponseBodyPriceInfo() = default;
};
class QueryModifyInstancePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryModifyInstancePriceResponseBodyPriceInfo> priceInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryModifyInstancePriceResponseBody() {}

  explicit QueryModifyInstancePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        QueryModifyInstancePriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<QueryModifyInstancePriceResponseBodyPriceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryModifyInstancePriceResponseBody() = default;
};
class QueryModifyInstancePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryModifyInstancePriceResponseBody> body{};

  QueryModifyInstancePriceResponse() {}

  explicit QueryModifyInstancePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryModifyInstancePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryModifyInstancePriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryModifyInstancePriceResponse() = default;
};
class QueryRenewInstancePriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  QueryRenewInstancePriceRequest() {}

  explicit QueryRenewInstancePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryRenewInstancePriceRequest() = default;
};
class QueryRenewInstancePriceResponseBodyPriceInfoDepreciateInfo : public Darabonba::Model {
public:
  shared_ptr<string> cheapRate{};
  shared_ptr<string> cheapStandAmount{};
  shared_ptr<bool> isShow{};
  shared_ptr<string> monthPrice{};
  shared_ptr<string> originalStandAmount{};
  shared_ptr<string> startTime{};

  QueryRenewInstancePriceResponseBodyPriceInfoDepreciateInfo() {}

  explicit QueryRenewInstancePriceResponseBodyPriceInfoDepreciateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cheapRate) {
      res["CheapRate"] = boost::any(*cheapRate);
    }
    if (cheapStandAmount) {
      res["CheapStandAmount"] = boost::any(*cheapStandAmount);
    }
    if (isShow) {
      res["IsShow"] = boost::any(*isShow);
    }
    if (monthPrice) {
      res["MonthPrice"] = boost::any(*monthPrice);
    }
    if (originalStandAmount) {
      res["OriginalStandAmount"] = boost::any(*originalStandAmount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheapRate") != m.end() && !m["CheapRate"].empty()) {
      cheapRate = make_shared<string>(boost::any_cast<string>(m["CheapRate"]));
    }
    if (m.find("CheapStandAmount") != m.end() && !m["CheapStandAmount"].empty()) {
      cheapStandAmount = make_shared<string>(boost::any_cast<string>(m["CheapStandAmount"]));
    }
    if (m.find("IsShow") != m.end() && !m["IsShow"].empty()) {
      isShow = make_shared<bool>(boost::any_cast<bool>(m["IsShow"]));
    }
    if (m.find("MonthPrice") != m.end() && !m["MonthPrice"].empty()) {
      monthPrice = make_shared<string>(boost::any_cast<string>(m["MonthPrice"]));
    }
    if (m.find("OriginalStandAmount") != m.end() && !m["OriginalStandAmount"].empty()) {
      originalStandAmount = make_shared<string>(boost::any_cast<string>(m["OriginalStandAmount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryRenewInstancePriceResponseBodyPriceInfoDepreciateInfo() = default;
};
class QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions : public Darabonba::Model {
public:
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<bool> selected{};

  QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions() {}

  explicit QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions() = default;
};
class QueryRenewInstancePriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  QueryRenewInstancePriceResponseBodyPriceInfoRules() {}

  explicit QueryRenewInstancePriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryRenewInstancePriceResponseBodyPriceInfoRules() = default;
};
class QueryRenewInstancePriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> currency{};
  shared_ptr<QueryRenewInstancePriceResponseBodyPriceInfoDepreciateInfo> depreciateInfo{};
  shared_ptr<double> discountAmount{};
  shared_ptr<bool> isContractActivity{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions>> optionalPromotions{};
  shared_ptr<double> originalAmount{};
  shared_ptr<vector<QueryRenewInstancePriceResponseBodyPriceInfoRules>> rules{};
  shared_ptr<string> standDiscountPrice{};
  shared_ptr<string> standPrice{};
  shared_ptr<double> tradeAmount{};

  QueryRenewInstancePriceResponseBodyPriceInfo() {}

  explicit QueryRenewInstancePriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (depreciateInfo) {
      res["DepreciateInfo"] = depreciateInfo ? boost::any(depreciateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (isContractActivity) {
      res["IsContractActivity"] = boost::any(*isContractActivity);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (optionalPromotions) {
      vector<boost::any> temp1;
      for(auto item1:*optionalPromotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OptionalPromotions"] = boost::any(temp1);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (standDiscountPrice) {
      res["StandDiscountPrice"] = boost::any(*standDiscountPrice);
    }
    if (standPrice) {
      res["StandPrice"] = boost::any(*standPrice);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DepreciateInfo") != m.end() && !m["DepreciateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DepreciateInfo"].type()) {
        QueryRenewInstancePriceResponseBodyPriceInfoDepreciateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DepreciateInfo"]));
        depreciateInfo = make_shared<QueryRenewInstancePriceResponseBodyPriceInfoDepreciateInfo>(model1);
      }
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("IsContractActivity") != m.end() && !m["IsContractActivity"].empty()) {
      isContractActivity = make_shared<bool>(boost::any_cast<bool>(m["IsContractActivity"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OptionalPromotions") != m.end() && !m["OptionalPromotions"].empty()) {
      if (typeid(vector<boost::any>) == m["OptionalPromotions"].type()) {
        vector<QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OptionalPromotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        optionalPromotions = make_shared<vector<QueryRenewInstancePriceResponseBodyPriceInfoOptionalPromotions>>(expect1);
      }
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<QueryRenewInstancePriceResponseBodyPriceInfoRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRenewInstancePriceResponseBodyPriceInfoRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<QueryRenewInstancePriceResponseBodyPriceInfoRules>>(expect1);
      }
    }
    if (m.find("StandDiscountPrice") != m.end() && !m["StandDiscountPrice"].empty()) {
      standDiscountPrice = make_shared<string>(boost::any_cast<string>(m["StandDiscountPrice"]));
    }
    if (m.find("StandPrice") != m.end() && !m["StandPrice"].empty()) {
      standPrice = make_shared<string>(boost::any_cast<string>(m["StandPrice"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~QueryRenewInstancePriceResponseBodyPriceInfo() = default;
};
class QueryRenewInstancePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryRenewInstancePriceResponseBodyPriceInfo> priceInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRenewInstancePriceResponseBody() {}

  explicit QueryRenewInstancePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        QueryRenewInstancePriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<QueryRenewInstancePriceResponseBodyPriceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRenewInstancePriceResponseBody() = default;
};
class QueryRenewInstancePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRenewInstancePriceResponseBody> body{};

  QueryRenewInstancePriceResponse() {}

  explicit QueryRenewInstancePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRenewInstancePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRenewInstancePriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRenewInstancePriceResponse() = default;
};
class RenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  RenewInstanceRequest() {}

  explicit RenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~RenewInstanceRequest() = default;
};
class RenewInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenewInstanceResponseBody() {}

  explicit RenewInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenewInstanceResponseBody() = default;
};
class RenewInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewInstanceResponseBody> body{};

  RenewInstanceResponse() {}

  explicit RenewInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponse() = default;
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
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> tagResponseId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagResponseId) {
      res["TagResponseId"] = boost::any(*tagResponseId);
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
    if (m.find("TagResponseId") != m.end() && !m["TagResponseId"].empty()) {
      tagResponseId = make_shared<string>(boost::any_cast<string>(m["TagResponseId"]));
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
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> tagResponseId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagResponseId) {
      res["TagResponseId"] = boost::any(*tagResponseId);
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
    if (m.find("TagResponseId") != m.end() && !m["TagResponseId"].empty()) {
      tagResponseId = make_shared<string>(boost::any_cast<string>(m["TagResponseId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
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
  ConvertHybridInstanceResponse convertHybridInstanceWithOptions(shared_ptr<ConvertHybridInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertHybridInstanceResponse convertHybridInstance(shared_ptr<ConvertHybridInstanceRequest> request);
  ConvertInstanceResponse convertInstanceWithOptions(shared_ptr<ConvertInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertInstanceResponse convertInstance(shared_ptr<ConvertInstanceRequest> request);
  ConvertPrepayInstanceResponse convertPrepayInstanceWithOptions(shared_ptr<ConvertPrepayInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertPrepayInstanceResponse convertPrepayInstance(shared_ptr<ConvertPrepayInstanceRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateNamespaceResponse createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNamespaceResponse createNamespace(shared_ptr<CreateNamespaceRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteNamespaceResponse deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNamespaceResponse deleteNamespace(shared_ptr<DeleteNamespaceRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeNamespacesResponse describeNamespacesWithOptions(shared_ptr<DescribeNamespacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespacesResponse describeNamespaces(shared_ptr<DescribeNamespacesRequest> request);
  DescribeSupportedRegionsResponse describeSupportedRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSupportedRegionsResponse describeSupportedRegions();
  DescribeSupportedZonesResponse describeSupportedZonesWithOptions(shared_ptr<DescribeSupportedZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSupportedZonesResponse describeSupportedZones(shared_ptr<DescribeSupportedZonesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyElasticResourceSpecResponse modifyElasticResourceSpecWithOptions(shared_ptr<ModifyElasticResourceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyElasticResourceSpecResponse modifyElasticResourceSpec(shared_ptr<ModifyElasticResourceSpecRequest> request);
  ModifyInstanceVswitchResponse modifyInstanceVswitchWithOptions(shared_ptr<ModifyInstanceVswitchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceVswitchResponse modifyInstanceVswitch(shared_ptr<ModifyInstanceVswitchRequest> request);
  ModifyNamespaceSpecV2Response modifyNamespaceSpecV2WithOptions(shared_ptr<ModifyNamespaceSpecV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNamespaceSpecV2Response modifyNamespaceSpecV2(shared_ptr<ModifyNamespaceSpecV2Request> request);
  ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(shared_ptr<ModifyPrepayInstanceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(shared_ptr<ModifyPrepayInstanceSpecRequest> request);
  ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpecWithOptions(shared_ptr<ModifyPrepayNamespaceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpec(shared_ptr<ModifyPrepayNamespaceSpecRequest> request);
  QueryConvertInstancePriceResponse queryConvertInstancePriceWithOptions(shared_ptr<QueryConvertInstancePriceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryConvertInstancePriceResponse queryConvertInstancePrice(shared_ptr<QueryConvertInstancePriceRequest> request);
  QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePriceWithOptions(shared_ptr<QueryConvertPrepayInstancePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryConvertPrepayInstancePriceResponse queryConvertPrepayInstancePrice(shared_ptr<QueryConvertPrepayInstancePriceRequest> request);
  QueryCreateInstancePriceResponse queryCreateInstancePriceWithOptions(shared_ptr<QueryCreateInstancePriceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCreateInstancePriceResponse queryCreateInstancePrice(shared_ptr<QueryCreateInstancePriceRequest> request);
  QueryModifyInstancePriceResponse queryModifyInstancePriceWithOptions(shared_ptr<QueryModifyInstancePriceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryModifyInstancePriceResponse queryModifyInstancePrice(shared_ptr<QueryModifyInstancePriceRequest> request);
  QueryRenewInstancePriceResponse queryRenewInstancePriceWithOptions(shared_ptr<QueryRenewInstancePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRenewInstancePriceResponse queryRenewInstancePrice(shared_ptr<QueryRenewInstancePriceRequest> request);
  RenewInstanceResponse renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewInstanceResponse renewInstance(shared_ptr<RenewInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Foasconsole20211028

#endif
