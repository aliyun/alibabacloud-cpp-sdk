// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FOASCONSOLE20190601_H_
#define ALIBABACLOUD_FOASCONSOLE20190601_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Foasconsole20190601 {
class ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec() {}

  explicit ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec() = default;
};
class ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec> resourceSpec{};

  ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs() {}

  explicit ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec>(model1);
      }
    }
  }


  virtual ~ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs() = default;
};
class ConvertInstanceRequestConvertPostpayInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<vector<ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs>> namespaceResourceSpecs{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  ConvertInstanceRequestConvertPostpayInstanceRequest() {}

  explicit ConvertInstanceRequestConvertPostpayInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NamespaceResourceSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaceResourceSpecs = make_shared<vector<ConvertInstanceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs>>(expect1);
      }
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~ConvertInstanceRequestConvertPostpayInstanceRequest() = default;
};
class ConvertInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<ConvertInstanceRequestConvertPostpayInstanceRequest> convertPostpayInstanceRequest{};

  ConvertInstanceRequest() {}

  explicit ConvertInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (convertPostpayInstanceRequest) {
      res["ConvertPostpayInstanceRequest"] = convertPostpayInstanceRequest ? boost::any(convertPostpayInstanceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConvertPostpayInstanceRequest") != m.end() && !m["ConvertPostpayInstanceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConvertPostpayInstanceRequest"].type()) {
        ConvertInstanceRequestConvertPostpayInstanceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConvertPostpayInstanceRequest"]));
        convertPostpayInstanceRequest = make_shared<ConvertInstanceRequestConvertPostpayInstanceRequest>(model1);
      }
    }
  }


  virtual ~ConvertInstanceRequest() = default;
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
  shared_ptr<ConvertInstanceResponseBody> body{};

  ConvertInstanceResponse() {}

  explicit ConvertInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertInstanceResponse() = default;
};
class CreateInstanceRequestCreateInstanceRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  CreateInstanceRequestCreateInstanceRequestResourceSpec() {}

  explicit CreateInstanceRequestCreateInstanceRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateInstanceRequestCreateInstanceRequestResourceSpec() = default;
};
class CreateInstanceRequestCreateInstanceRequestStorageOss : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};

  CreateInstanceRequestCreateInstanceRequestStorageOss() {}

  explicit CreateInstanceRequestCreateInstanceRequestStorageOss(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateInstanceRequestCreateInstanceRequestStorageOss() = default;
};
class CreateInstanceRequestCreateInstanceRequestStorage : public Darabonba::Model {
public:
  shared_ptr<CreateInstanceRequestCreateInstanceRequestStorageOss> oss{};

  CreateInstanceRequestCreateInstanceRequestStorage() {}

  explicit CreateInstanceRequestCreateInstanceRequestStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceRequestCreateInstanceRequestStorageOss model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Oss"]));
        oss = make_shared<CreateInstanceRequestCreateInstanceRequestStorageOss>(model1);
      }
    }
  }


  virtual ~CreateInstanceRequestCreateInstanceRequestStorage() = default;
};
class CreateInstanceRequestCreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};
  shared_ptr<CreateInstanceRequestCreateInstanceRequestResourceSpec> resourceSpec{};
  shared_ptr<CreateInstanceRequestCreateInstanceRequestStorage> storage{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateInstanceRequestCreateInstanceRequest() {}

  explicit CreateInstanceRequestCreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
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
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceSpec") != m.end() && !m["ResourceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSpec"].type()) {
        CreateInstanceRequestCreateInstanceRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<CreateInstanceRequestCreateInstanceRequestResourceSpec>(model1);
      }
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Storage"].type()) {
        CreateInstanceRequestCreateInstanceRequestStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Storage"]));
        storage = make_shared<CreateInstanceRequestCreateInstanceRequestStorage>(model1);
      }
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateInstanceRequestCreateInstanceRequest() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<CreateInstanceRequestCreateInstanceRequest> createInstanceRequest{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createInstanceRequest) {
      res["CreateInstanceRequest"] = createInstanceRequest ? boost::any(createInstanceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateInstanceRequest") != m.end() && !m["CreateInstanceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateInstanceRequest"].type()) {
        CreateInstanceRequestCreateInstanceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateInstanceRequest"]));
        createInstanceRequest = make_shared<CreateInstanceRequestCreateInstanceRequest>(model1);
      }
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBodyOrderInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
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
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateNamespaceRequestCreateNamespaceRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  CreateNamespaceRequestCreateNamespaceRequestResourceSpec() {}

  explicit CreateNamespaceRequestCreateNamespaceRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateNamespaceRequestCreateNamespaceRequestResourceSpec() = default;
};
class CreateNamespaceRequestCreateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};
  shared_ptr<CreateNamespaceRequestCreateNamespaceRequestResourceSpec> resourceSpec{};

  CreateNamespaceRequestCreateNamespaceRequest() {}

  explicit CreateNamespaceRequestCreateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNamespaceRequestCreateNamespaceRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<CreateNamespaceRequestCreateNamespaceRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~CreateNamespaceRequestCreateNamespaceRequest() = default;
};
class CreateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<CreateNamespaceRequestCreateNamespaceRequest> createNamespaceRequest{};

  CreateNamespaceRequest() {}

  explicit CreateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createNamespaceRequest) {
      res["CreateNamespaceRequest"] = createNamespaceRequest ? boost::any(createNamespaceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateNamespaceRequest") != m.end() && !m["CreateNamespaceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateNamespaceRequest"].type()) {
        CreateNamespaceRequestCreateNamespaceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateNamespaceRequest"]));
        createNamespaceRequest = make_shared<CreateNamespaceRequestCreateNamespaceRequest>(model1);
      }
    }
  }


  virtual ~CreateNamespaceRequest() = default;
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
  shared_ptr<CreateNamespaceResponseBody> body{};

  CreateNamespaceResponse() {}

  explicit CreateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNamespaceResponse() = default;
};
class DeleteInstanceRequestDeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};

  DeleteInstanceRequestDeleteInstanceRequest() {}

  explicit DeleteInstanceRequestDeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceRequestDeleteInstanceRequest() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<DeleteInstanceRequestDeleteInstanceRequest> deleteInstanceRequest{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteInstanceRequest) {
      res["DeleteInstanceRequest"] = deleteInstanceRequest ? boost::any(deleteInstanceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteInstanceRequest") != m.end() && !m["DeleteInstanceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeleteInstanceRequest"].type()) {
        DeleteInstanceRequestDeleteInstanceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeleteInstanceRequest"]));
        deleteInstanceRequest = make_shared<DeleteInstanceRequestDeleteInstanceRequest>(model1);
      }
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
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteNamespaceRequestDeleteNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};

  DeleteNamespaceRequestDeleteNamespaceRequest() {}

  explicit DeleteNamespaceRequestDeleteNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNamespaceRequestDeleteNamespaceRequest() = default;
};
class DeleteNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<DeleteNamespaceRequestDeleteNamespaceRequest> deleteNamespaceRequest{};

  DeleteNamespaceRequest() {}

  explicit DeleteNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteNamespaceRequest) {
      res["DeleteNamespaceRequest"] = deleteNamespaceRequest ? boost::any(deleteNamespaceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteNamespaceRequest") != m.end() && !m["DeleteNamespaceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeleteNamespaceRequest"].type()) {
        DeleteNamespaceRequestDeleteNamespaceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeleteNamespaceRequest"]));
        deleteNamespaceRequest = make_shared<DeleteNamespaceRequestDeleteNamespaceRequest>(model1);
      }
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
  shared_ptr<DeleteNamespaceResponseBody> body{};

  DeleteNamespaceResponse() {}

  explicit DeleteNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNamespaceResponse() = default;
};
class DescribeInstancesRequestDescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};

  DescribeInstancesRequestDescribeInstancesRequest() {}

  explicit DescribeInstancesRequestDescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~DescribeInstancesRequestDescribeInstancesRequest() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<DescribeInstancesRequestDescribeInstancesRequest> describeInstancesRequest{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (describeInstancesRequest) {
      res["DescribeInstancesRequest"] = describeInstancesRequest ? boost::any(describeInstancesRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DescribeInstancesRequest") != m.end() && !m["DescribeInstancesRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["DescribeInstancesRequest"].type()) {
        DescribeInstancesRequestDescribeInstancesRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DescribeInstancesRequest"]));
        describeInstancesRequest = make_shared<DescribeInstancesRequestDescribeInstancesRequest>(model1);
      }
    }
  }


  virtual ~DescribeInstancesRequest() = default;
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
  shared_ptr<DescribeInstancesResponseBodyInstancesStorageOss> oss{};

  DescribeInstancesResponseBodyInstancesStorage() {}

  explicit DescribeInstancesResponseBodyInstancesStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBodyInstancesStorageOss model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Oss"]));
        oss = make_shared<DescribeInstancesResponseBodyInstancesStorageOss>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesStorage() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> orderState{};
  shared_ptr<string> region{};
  shared_ptr<long> resourceCreateTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<DescribeInstancesResponseBodyInstancesResourceSpec> resourceSpec{};
  shared_ptr<DescribeInstancesResponseBodyInstancesStorage> storage{};
  shared_ptr<string> uid{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (orderState) {
      res["OrderState"] = boost::any(*orderState);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceCreateTime) {
      res["ResourceCreateTime"] = boost::any(*resourceCreateTime);
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
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
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
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("OrderState") != m.end() && !m["OrderState"].empty()) {
      orderState = make_shared<string>(boost::any_cast<string>(m["OrderState"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceCreateTime") != m.end() && !m["ResourceCreateTime"].empty()) {
      resourceCreateTime = make_shared<long>(boost::any_cast<long>(m["ResourceCreateTime"]));
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
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
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
class DescribeNamespacesRequestDescribeNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};

  DescribeNamespacesRequestDescribeNamespacesRequest() {}

  explicit DescribeNamespacesRequestDescribeNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeNamespacesRequestDescribeNamespacesRequest() = default;
};
class DescribeNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<DescribeNamespacesRequestDescribeNamespacesRequest> describeNamespacesRequest{};

  DescribeNamespacesRequest() {}

  explicit DescribeNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (describeNamespacesRequest) {
      res["DescribeNamespacesRequest"] = describeNamespacesRequest ? boost::any(describeNamespacesRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DescribeNamespacesRequest") != m.end() && !m["DescribeNamespacesRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["DescribeNamespacesRequest"].type()) {
        DescribeNamespacesRequestDescribeNamespacesRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DescribeNamespacesRequest"]));
        describeNamespacesRequest = make_shared<DescribeNamespacesRequestDescribeNamespacesRequest>(model1);
      }
    }
  }


  virtual ~DescribeNamespacesRequest() = default;
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
    if (memoryGB) {
      res["MemoryGB"] = boost::any(*memoryGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("MemoryGB") != m.end() && !m["MemoryGB"].empty()) {
      memoryGB = make_shared<double>(boost::any_cast<double>(m["MemoryGB"]));
    }
  }


  virtual ~DescribeNamespacesResponseBodyNamespacesResourceUsed() = default;
};
class DescribeNamespacesResponseBodyNamespaces : public Darabonba::Model {
public:
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> namespace_{};
  shared_ptr<DescribeNamespacesResponseBodyNamespacesResourceSpec> resourceSpec{};
  shared_ptr<DescribeNamespacesResponseBodyNamespacesResourceUsed> resourceUsed{};
  shared_ptr<string> status{};

  DescribeNamespacesResponseBodyNamespaces() {}

  explicit DescribeNamespacesResponseBodyNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
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
  shared_ptr<DescribeNamespacesResponseBody> body{};

  DescribeNamespacesResponse() {}

  explicit DescribeNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespacesResponse() = default;
};
class ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequestResourceSpec() {}

  explicit ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequestResourceSpec() = default;
};
class ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequestResourceSpec> resourceSpec{};

  ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest() {}

  explicit ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest() = default;
};
class ModifyPrepayInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest> modifyPrepayInstanceSpecRequest{};

  ModifyPrepayInstanceSpecRequest() {}

  explicit ModifyPrepayInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifyPrepayInstanceSpecRequest) {
      res["ModifyPrepayInstanceSpecRequest"] = modifyPrepayInstanceSpecRequest ? boost::any(modifyPrepayInstanceSpecRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifyPrepayInstanceSpecRequest") != m.end() && !m["ModifyPrepayInstanceSpecRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModifyPrepayInstanceSpecRequest"].type()) {
        ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModifyPrepayInstanceSpecRequest"]));
        modifyPrepayInstanceSpecRequest = make_shared<ModifyPrepayInstanceSpecRequestModifyPrepayInstanceSpecRequest>(model1);
      }
    }
  }


  virtual ~ModifyPrepayInstanceSpecRequest() = default;
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
  shared_ptr<ModifyPrepayInstanceSpecResponseBody> body{};

  ModifyPrepayInstanceSpecResponse() {}

  explicit ModifyPrepayInstanceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPrepayInstanceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPrepayInstanceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPrepayInstanceSpecResponse() = default;
};
class ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequestResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequestResourceSpec() {}

  explicit ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequestResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequestResourceSpec() = default;
};
class ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> region{};
  shared_ptr<ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequestResourceSpec> resourceSpec{};

  ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest() {}

  explicit ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequestResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequestResourceSpec>(model1);
      }
    }
  }


  virtual ~ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest() = default;
};
class ModifyPrepayNamespaceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest> modifyPrepayNamespaceSpecRequest{};

  ModifyPrepayNamespaceSpecRequest() {}

  explicit ModifyPrepayNamespaceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifyPrepayNamespaceSpecRequest) {
      res["ModifyPrepayNamespaceSpecRequest"] = modifyPrepayNamespaceSpecRequest ? boost::any(modifyPrepayNamespaceSpecRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifyPrepayNamespaceSpecRequest") != m.end() && !m["ModifyPrepayNamespaceSpecRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModifyPrepayNamespaceSpecRequest"].type()) {
        ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModifyPrepayNamespaceSpecRequest"]));
        modifyPrepayNamespaceSpecRequest = make_shared<ModifyPrepayNamespaceSpecRequestModifyPrepayNamespaceSpecRequest>(model1);
      }
    }
  }


  virtual ~ModifyPrepayNamespaceSpecRequest() = default;
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
  shared_ptr<ModifyPrepayNamespaceSpecResponseBody> body{};

  ModifyPrepayNamespaceSpecResponse() {}

  explicit ModifyPrepayNamespaceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPrepayNamespaceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPrepayNamespaceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPrepayNamespaceSpecResponse() = default;
};
class QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryGB{};

  QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec() {}

  explicit QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec() = default;
};
class QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec> resourceSpec{};

  QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs() {}

  explicit QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSpec"]));
        resourceSpec = make_shared<QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecsResourceSpec>(model1);
      }
    }
  }


  virtual ~QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs() = default;
};
class QueryConvertInstancePriceRequestConvertPostpayInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<vector<QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs>> namespaceResourceSpecs{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  QueryConvertInstancePriceRequestConvertPostpayInstanceRequest() {}

  explicit QueryConvertInstancePriceRequestConvertPostpayInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NamespaceResourceSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaceResourceSpecs = make_shared<vector<QueryConvertInstancePriceRequestConvertPostpayInstanceRequestNamespaceResourceSpecs>>(expect1);
      }
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryConvertInstancePriceRequestConvertPostpayInstanceRequest() = default;
};
class QueryConvertInstancePriceRequest : public Darabonba::Model {
public:
  shared_ptr<QueryConvertInstancePriceRequestConvertPostpayInstanceRequest> convertPostpayInstanceRequest{};

  QueryConvertInstancePriceRequest() {}

  explicit QueryConvertInstancePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (convertPostpayInstanceRequest) {
      res["ConvertPostpayInstanceRequest"] = convertPostpayInstanceRequest ? boost::any(convertPostpayInstanceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConvertPostpayInstanceRequest") != m.end() && !m["ConvertPostpayInstanceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConvertPostpayInstanceRequest"].type()) {
        QueryConvertInstancePriceRequestConvertPostpayInstanceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConvertPostpayInstanceRequest"]));
        convertPostpayInstanceRequest = make_shared<QueryConvertInstancePriceRequestConvertPostpayInstanceRequest>(model1);
      }
    }
  }


  virtual ~QueryConvertInstancePriceRequest() = default;
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
  shared_ptr<double> discountAmount{};
  shared_ptr<string> message{};
  shared_ptr<QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions> optionalPromotions{};
  shared_ptr<double> originalAmount{};
  shared_ptr<vector<QueryConvertInstancePriceResponseBodyPriceInfoRules>> rules{};
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
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (optionalPromotions) {
      res["OptionalPromotions"] = optionalPromotions ? boost::any(optionalPromotions->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OptionalPromotions") != m.end() && !m["OptionalPromotions"].empty()) {
      if (typeid(map<string, boost::any>) == m["OptionalPromotions"].type()) {
        QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OptionalPromotions"]));
        optionalPromotions = make_shared<QueryConvertInstancePriceResponseBodyPriceInfoOptionalPromotions>(model1);
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
  shared_ptr<QueryConvertInstancePriceResponseBody> body{};

  QueryConvertInstancePriceResponse() {}

  explicit QueryConvertInstancePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryConvertInstancePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryConvertInstancePriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryConvertInstancePriceResponse() = default;
};
class RenewInstanceRequestRenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> region{};

  RenewInstanceRequestRenewInstanceRequest() {}

  explicit RenewInstanceRequestRenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RenewInstanceRequestRenewInstanceRequest() = default;
};
class RenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<RenewInstanceRequestRenewInstanceRequest> renewInstanceRequest{};

  RenewInstanceRequest() {}

  explicit RenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (renewInstanceRequest) {
      res["RenewInstanceRequest"] = renewInstanceRequest ? boost::any(renewInstanceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RenewInstanceRequest") != m.end() && !m["RenewInstanceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["RenewInstanceRequest"].type()) {
        RenewInstanceRequestRenewInstanceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RenewInstanceRequest"]));
        renewInstanceRequest = make_shared<RenewInstanceRequestRenewInstanceRequest>(model1);
      }
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
  shared_ptr<RenewInstanceResponseBody> body{};

  RenewInstanceResponse() {}

  explicit RenewInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponse() = default;
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
  ConvertInstanceResponse convertInstanceWithOptions(shared_ptr<ConvertInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertInstanceResponse convertInstance(shared_ptr<ConvertInstanceRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateNamespaceResponse createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNamespaceResponse createNamespace(shared_ptr<CreateNamespaceRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteNamespaceResponse deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNamespaceResponse deleteNamespace(shared_ptr<DeleteNamespaceRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeNamespacesResponse describeNamespacesWithOptions(shared_ptr<DescribeNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespacesResponse describeNamespaces(shared_ptr<DescribeNamespacesRequest> request);
  ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(shared_ptr<ModifyPrepayInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(shared_ptr<ModifyPrepayInstanceSpecRequest> request);
  ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpecWithOptions(shared_ptr<ModifyPrepayNamespaceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPrepayNamespaceSpecResponse modifyPrepayNamespaceSpec(shared_ptr<ModifyPrepayNamespaceSpecRequest> request);
  QueryConvertInstancePriceResponse queryConvertInstancePriceWithOptions(shared_ptr<QueryConvertInstancePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryConvertInstancePriceResponse queryConvertInstancePrice(shared_ptr<QueryConvertInstancePriceRequest> request);
  RenewInstanceResponse renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewInstanceResponse renewInstance(shared_ptr<RenewInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Foasconsole20190601

#endif
