// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ROCKETMQ20220801_H_
#define ALIBABACLOUD_ROCKETMQ20220801_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_RocketMQ20220801 {
class CreateConsumerGroupRequestConsumeRetryPolicy : public Darabonba::Model {
public:
  shared_ptr<string> deadLetterTargetTopic{};
  shared_ptr<long> maxRetryTimes{};
  shared_ptr<string> retryPolicy{};

  CreateConsumerGroupRequestConsumeRetryPolicy() {}

  explicit CreateConsumerGroupRequestConsumeRetryPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadLetterTargetTopic) {
      res["deadLetterTargetTopic"] = boost::any(*deadLetterTargetTopic);
    }
    if (maxRetryTimes) {
      res["maxRetryTimes"] = boost::any(*maxRetryTimes);
    }
    if (retryPolicy) {
      res["retryPolicy"] = boost::any(*retryPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deadLetterTargetTopic") != m.end() && !m["deadLetterTargetTopic"].empty()) {
      deadLetterTargetTopic = make_shared<string>(boost::any_cast<string>(m["deadLetterTargetTopic"]));
    }
    if (m.find("maxRetryTimes") != m.end() && !m["maxRetryTimes"].empty()) {
      maxRetryTimes = make_shared<long>(boost::any_cast<long>(m["maxRetryTimes"]));
    }
    if (m.find("retryPolicy") != m.end() && !m["retryPolicy"].empty()) {
      retryPolicy = make_shared<string>(boost::any_cast<string>(m["retryPolicy"]));
    }
  }


  virtual ~CreateConsumerGroupRequestConsumeRetryPolicy() = default;
};
class CreateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<CreateConsumerGroupRequestConsumeRetryPolicy> consumeRetryPolicy{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<string> remark{};

  CreateConsumerGroupRequest() {}

  explicit CreateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeRetryPolicy) {
      res["consumeRetryPolicy"] = consumeRetryPolicy ? boost::any(consumeRetryPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryOrderType) {
      res["deliveryOrderType"] = boost::any(*deliveryOrderType);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumeRetryPolicy") != m.end() && !m["consumeRetryPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["consumeRetryPolicy"].type()) {
        CreateConsumerGroupRequestConsumeRetryPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["consumeRetryPolicy"]));
        consumeRetryPolicy = make_shared<CreateConsumerGroupRequestConsumeRetryPolicy>(model1);
      }
    }
    if (m.find("deliveryOrderType") != m.end() && !m["deliveryOrderType"].empty()) {
      deliveryOrderType = make_shared<string>(boost::any_cast<string>(m["deliveryOrderType"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
  }


  virtual ~CreateConsumerGroupRequest() = default;
};
class CreateConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateConsumerGroupResponseBody() {}

  explicit CreateConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateConsumerGroupResponseBody() = default;
};
class CreateConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConsumerGroupResponseBody> body{};

  CreateConsumerGroupResponse() {}

  explicit CreateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConsumerGroupResponse() = default;
};
class CreateInstanceRequestNetworkInfoInternetInfo : public Darabonba::Model {
public:
  shared_ptr<long> flowOutBandwidth{};
  shared_ptr<string> flowOutType{};
  shared_ptr<string> internetSpec{};
  shared_ptr<vector<string>> ipWhitelist{};

  CreateInstanceRequestNetworkInfoInternetInfo() {}

  explicit CreateInstanceRequestNetworkInfoInternetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowOutBandwidth) {
      res["flowOutBandwidth"] = boost::any(*flowOutBandwidth);
    }
    if (flowOutType) {
      res["flowOutType"] = boost::any(*flowOutType);
    }
    if (internetSpec) {
      res["internetSpec"] = boost::any(*internetSpec);
    }
    if (ipWhitelist) {
      res["ipWhitelist"] = boost::any(*ipWhitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flowOutBandwidth") != m.end() && !m["flowOutBandwidth"].empty()) {
      flowOutBandwidth = make_shared<long>(boost::any_cast<long>(m["flowOutBandwidth"]));
    }
    if (m.find("flowOutType") != m.end() && !m["flowOutType"].empty()) {
      flowOutType = make_shared<string>(boost::any_cast<string>(m["flowOutType"]));
    }
    if (m.find("internetSpec") != m.end() && !m["internetSpec"].empty()) {
      internetSpec = make_shared<string>(boost::any_cast<string>(m["internetSpec"]));
    }
    if (m.find("ipWhitelist") != m.end() && !m["ipWhitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateInstanceRequestNetworkInfoInternetInfo() = default;
};
class CreateInstanceRequestNetworkInfoVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateInstanceRequestNetworkInfoVpcInfo() {}

  explicit CreateInstanceRequestNetworkInfoVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~CreateInstanceRequestNetworkInfoVpcInfo() = default;
};
class CreateInstanceRequestNetworkInfo : public Darabonba::Model {
public:
  shared_ptr<CreateInstanceRequestNetworkInfoInternetInfo> internetInfo{};
  shared_ptr<CreateInstanceRequestNetworkInfoVpcInfo> vpcInfo{};

  CreateInstanceRequestNetworkInfo() {}

  explicit CreateInstanceRequestNetworkInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetInfo) {
      res["internetInfo"] = internetInfo ? boost::any(internetInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcInfo) {
      res["vpcInfo"] = vpcInfo ? boost::any(vpcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("internetInfo") != m.end() && !m["internetInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["internetInfo"].type()) {
        CreateInstanceRequestNetworkInfoInternetInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["internetInfo"]));
        internetInfo = make_shared<CreateInstanceRequestNetworkInfoInternetInfo>(model1);
      }
    }
    if (m.find("vpcInfo") != m.end() && !m["vpcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcInfo"].type()) {
        CreateInstanceRequestNetworkInfoVpcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcInfo"]));
        vpcInfo = make_shared<CreateInstanceRequestNetworkInfoVpcInfo>(model1);
      }
    }
  }


  virtual ~CreateInstanceRequestNetworkInfo() = default;
};
class CreateInstanceRequestProductInfo : public Darabonba::Model {
public:
  shared_ptr<bool> autoScaling{};
  shared_ptr<long> messageRetentionTime{};
  shared_ptr<string> msgProcessSpec{};
  shared_ptr<double> sendReceiveRatio{};

  CreateInstanceRequestProductInfo() {}

  explicit CreateInstanceRequestProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScaling) {
      res["autoScaling"] = boost::any(*autoScaling);
    }
    if (messageRetentionTime) {
      res["messageRetentionTime"] = boost::any(*messageRetentionTime);
    }
    if (msgProcessSpec) {
      res["msgProcessSpec"] = boost::any(*msgProcessSpec);
    }
    if (sendReceiveRatio) {
      res["sendReceiveRatio"] = boost::any(*sendReceiveRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoScaling") != m.end() && !m["autoScaling"].empty()) {
      autoScaling = make_shared<bool>(boost::any_cast<bool>(m["autoScaling"]));
    }
    if (m.find("messageRetentionTime") != m.end() && !m["messageRetentionTime"].empty()) {
      messageRetentionTime = make_shared<long>(boost::any_cast<long>(m["messageRetentionTime"]));
    }
    if (m.find("msgProcessSpec") != m.end() && !m["msgProcessSpec"].empty()) {
      msgProcessSpec = make_shared<string>(boost::any_cast<string>(m["msgProcessSpec"]));
    }
    if (m.find("sendReceiveRatio") != m.end() && !m["sendReceiveRatio"].empty()) {
      sendReceiveRatio = make_shared<double>(boost::any_cast<double>(m["sendReceiveRatio"]));
    }
  }


  virtual ~CreateInstanceRequestProductInfo() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> instanceName{};
  shared_ptr<CreateInstanceRequestNetworkInfo> networkInfo{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<CreateInstanceRequestProductInfo> productInfo{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> subSeriesCode{};
  shared_ptr<string> clientToken{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["autoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["autoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (networkInfo) {
      res["networkInfo"] = networkInfo ? boost::any(networkInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paymentType) {
      res["paymentType"] = boost::any(*paymentType);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["periodUnit"] = boost::any(*periodUnit);
    }
    if (productInfo) {
      res["productInfo"] = productInfo ? boost::any(productInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (seriesCode) {
      res["seriesCode"] = boost::any(*seriesCode);
    }
    if (serviceCode) {
      res["serviceCode"] = boost::any(*serviceCode);
    }
    if (subSeriesCode) {
      res["subSeriesCode"] = boost::any(*subSeriesCode);
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoRenew") != m.end() && !m["autoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["autoRenew"]));
    }
    if (m.find("autoRenewPeriod") != m.end() && !m["autoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["autoRenewPeriod"]));
    }
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("networkInfo") != m.end() && !m["networkInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["networkInfo"].type()) {
        CreateInstanceRequestNetworkInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["networkInfo"]));
        networkInfo = make_shared<CreateInstanceRequestNetworkInfo>(model1);
      }
    }
    if (m.find("paymentType") != m.end() && !m["paymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["paymentType"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("periodUnit") != m.end() && !m["periodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["periodUnit"]));
    }
    if (m.find("productInfo") != m.end() && !m["productInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["productInfo"].type()) {
        CreateInstanceRequestProductInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productInfo"]));
        productInfo = make_shared<CreateInstanceRequestProductInfo>(model1);
      }
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("seriesCode") != m.end() && !m["seriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["seriesCode"]));
    }
    if (m.find("serviceCode") != m.end() && !m["serviceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["serviceCode"]));
    }
    if (m.find("subSeriesCode") != m.end() && !m["subSeriesCode"].empty()) {
      subSeriesCode = make_shared<string>(boost::any_cast<string>(m["subSeriesCode"]));
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> messageType{};
  shared_ptr<string> remark{};

  CreateTopicRequest() {}

  explicit CreateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("messageType") != m.end() && !m["messageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["messageType"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
  }


  virtual ~CreateTopicRequest() = default;
};
class CreateTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTopicResponseBody() {}

  explicit CreateTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateTopicResponseBody() = default;
};
class CreateTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTopicResponseBody> body{};

  CreateTopicResponse() {}

  explicit CreateTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTopicResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTopicResponse() = default;
};
class DeleteConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteConsumerGroupResponseBody() {}

  explicit DeleteConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteConsumerGroupResponseBody() = default;
};
class DeleteConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConsumerGroupResponseBody> body{};

  DeleteConsumerGroupResponse() {}

  explicit DeleteConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConsumerGroupResponse() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteTopicResponseBody() {}

  explicit DeleteTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteTopicResponseBody() = default;
};
class DeleteTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTopicResponseBody> body{};

  DeleteTopicResponse() {}

  explicit DeleteTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTopicResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTopicResponse() = default;
};
class GetConsumerGroupResponseBodyDataConsumeRetryPolicy : public Darabonba::Model {
public:
  shared_ptr<string> deadLetterTargetTopic{};
  shared_ptr<long> maxRetryTimes{};
  shared_ptr<string> retryPolicy{};

  GetConsumerGroupResponseBodyDataConsumeRetryPolicy() {}

  explicit GetConsumerGroupResponseBodyDataConsumeRetryPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadLetterTargetTopic) {
      res["deadLetterTargetTopic"] = boost::any(*deadLetterTargetTopic);
    }
    if (maxRetryTimes) {
      res["maxRetryTimes"] = boost::any(*maxRetryTimes);
    }
    if (retryPolicy) {
      res["retryPolicy"] = boost::any(*retryPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deadLetterTargetTopic") != m.end() && !m["deadLetterTargetTopic"].empty()) {
      deadLetterTargetTopic = make_shared<string>(boost::any_cast<string>(m["deadLetterTargetTopic"]));
    }
    if (m.find("maxRetryTimes") != m.end() && !m["maxRetryTimes"].empty()) {
      maxRetryTimes = make_shared<long>(boost::any_cast<long>(m["maxRetryTimes"]));
    }
    if (m.find("retryPolicy") != m.end() && !m["retryPolicy"].empty()) {
      retryPolicy = make_shared<string>(boost::any_cast<string>(m["retryPolicy"]));
    }
  }


  virtual ~GetConsumerGroupResponseBodyDataConsumeRetryPolicy() = default;
};
class GetConsumerGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetConsumerGroupResponseBodyDataConsumeRetryPolicy> consumeRetryPolicy{};
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  GetConsumerGroupResponseBodyData() {}

  explicit GetConsumerGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeRetryPolicy) {
      res["consumeRetryPolicy"] = consumeRetryPolicy ? boost::any(consumeRetryPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (deliveryOrderType) {
      res["deliveryOrderType"] = boost::any(*deliveryOrderType);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumeRetryPolicy") != m.end() && !m["consumeRetryPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["consumeRetryPolicy"].type()) {
        GetConsumerGroupResponseBodyDataConsumeRetryPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["consumeRetryPolicy"]));
        consumeRetryPolicy = make_shared<GetConsumerGroupResponseBodyDataConsumeRetryPolicy>(model1);
      }
    }
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("deliveryOrderType") != m.end() && !m["deliveryOrderType"].empty()) {
      deliveryOrderType = make_shared<string>(boost::any_cast<string>(m["deliveryOrderType"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~GetConsumerGroupResponseBodyData() = default;
};
class GetConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetConsumerGroupResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsumerGroupResponseBody() {}

  explicit GetConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetConsumerGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetConsumerGroupResponseBodyData>(model1);
      }
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetConsumerGroupResponseBody() = default;
};
class GetConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerGroupResponseBody> body{};

  GetConsumerGroupResponse() {}

  explicit GetConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerGroupResponse() = default;
};
class GetInstanceResponseBodyDataAccountInfo : public Darabonba::Model {
public:
  shared_ptr<string> username{};

  GetInstanceResponseBodyDataAccountInfo() {}

  explicit GetInstanceResponseBodyDataAccountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataAccountInfo() = default;
};
class GetInstanceResponseBodyDataAclInfo : public Darabonba::Model {
public:
  shared_ptr<string> aclType{};

  GetInstanceResponseBodyDataAclInfo() {}

  explicit GetInstanceResponseBodyDataAclInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclType) {
      res["aclType"] = boost::any(*aclType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aclType") != m.end() && !m["aclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["aclType"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataAclInfo() = default;
};
class GetInstanceResponseBodyDataExtConfig : public Darabonba::Model {
public:
  shared_ptr<string> aclType{};
  shared_ptr<bool> autoScaling{};
  shared_ptr<long> flowOutBandwidth{};
  shared_ptr<string> flowOutType{};
  shared_ptr<string> internetSpec{};
  shared_ptr<long> messageRetentionTime{};
  shared_ptr<string> msgProcessSpec{};
  shared_ptr<double> sendReceiveRatio{};
  shared_ptr<bool> supportAutoScaling{};

  GetInstanceResponseBodyDataExtConfig() {}

  explicit GetInstanceResponseBodyDataExtConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclType) {
      res["aclType"] = boost::any(*aclType);
    }
    if (autoScaling) {
      res["autoScaling"] = boost::any(*autoScaling);
    }
    if (flowOutBandwidth) {
      res["flowOutBandwidth"] = boost::any(*flowOutBandwidth);
    }
    if (flowOutType) {
      res["flowOutType"] = boost::any(*flowOutType);
    }
    if (internetSpec) {
      res["internetSpec"] = boost::any(*internetSpec);
    }
    if (messageRetentionTime) {
      res["messageRetentionTime"] = boost::any(*messageRetentionTime);
    }
    if (msgProcessSpec) {
      res["msgProcessSpec"] = boost::any(*msgProcessSpec);
    }
    if (sendReceiveRatio) {
      res["sendReceiveRatio"] = boost::any(*sendReceiveRatio);
    }
    if (supportAutoScaling) {
      res["supportAutoScaling"] = boost::any(*supportAutoScaling);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aclType") != m.end() && !m["aclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["aclType"]));
    }
    if (m.find("autoScaling") != m.end() && !m["autoScaling"].empty()) {
      autoScaling = make_shared<bool>(boost::any_cast<bool>(m["autoScaling"]));
    }
    if (m.find("flowOutBandwidth") != m.end() && !m["flowOutBandwidth"].empty()) {
      flowOutBandwidth = make_shared<long>(boost::any_cast<long>(m["flowOutBandwidth"]));
    }
    if (m.find("flowOutType") != m.end() && !m["flowOutType"].empty()) {
      flowOutType = make_shared<string>(boost::any_cast<string>(m["flowOutType"]));
    }
    if (m.find("internetSpec") != m.end() && !m["internetSpec"].empty()) {
      internetSpec = make_shared<string>(boost::any_cast<string>(m["internetSpec"]));
    }
    if (m.find("messageRetentionTime") != m.end() && !m["messageRetentionTime"].empty()) {
      messageRetentionTime = make_shared<long>(boost::any_cast<long>(m["messageRetentionTime"]));
    }
    if (m.find("msgProcessSpec") != m.end() && !m["msgProcessSpec"].empty()) {
      msgProcessSpec = make_shared<string>(boost::any_cast<string>(m["msgProcessSpec"]));
    }
    if (m.find("sendReceiveRatio") != m.end() && !m["sendReceiveRatio"].empty()) {
      sendReceiveRatio = make_shared<double>(boost::any_cast<double>(m["sendReceiveRatio"]));
    }
    if (m.find("supportAutoScaling") != m.end() && !m["supportAutoScaling"].empty()) {
      supportAutoScaling = make_shared<bool>(boost::any_cast<bool>(m["supportAutoScaling"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataExtConfig() = default;
};
class GetInstanceResponseBodyDataInstanceQuotas : public Darabonba::Model {
public:
  shared_ptr<double> freeCount{};
  shared_ptr<string> quotaName{};
  shared_ptr<double> totalCount{};
  shared_ptr<double> usedCount{};

  GetInstanceResponseBodyDataInstanceQuotas() {}

  explicit GetInstanceResponseBodyDataInstanceQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (freeCount) {
      res["freeCount"] = boost::any(*freeCount);
    }
    if (quotaName) {
      res["quotaName"] = boost::any(*quotaName);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (usedCount) {
      res["usedCount"] = boost::any(*usedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("freeCount") != m.end() && !m["freeCount"].empty()) {
      freeCount = make_shared<double>(boost::any_cast<double>(m["freeCount"]));
    }
    if (m.find("quotaName") != m.end() && !m["quotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["quotaName"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<double>(boost::any_cast<double>(m["totalCount"]));
    }
    if (m.find("usedCount") != m.end() && !m["usedCount"].empty()) {
      usedCount = make_shared<double>(boost::any_cast<double>(m["usedCount"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataInstanceQuotas() = default;
};
class GetInstanceResponseBodyDataNetworkInfoEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> endpointType{};
  shared_ptr<string> endpointUrl{};
  shared_ptr<string> ipWhitelist{};

  GetInstanceResponseBodyDataNetworkInfoEndpoints() {}

  explicit GetInstanceResponseBodyDataNetworkInfoEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointType) {
      res["endpointType"] = boost::any(*endpointType);
    }
    if (endpointUrl) {
      res["endpointUrl"] = boost::any(*endpointUrl);
    }
    if (ipWhitelist) {
      res["ipWhitelist"] = boost::any(*ipWhitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpointType") != m.end() && !m["endpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["endpointType"]));
    }
    if (m.find("endpointUrl") != m.end() && !m["endpointUrl"].empty()) {
      endpointUrl = make_shared<string>(boost::any_cast<string>(m["endpointUrl"]));
    }
    if (m.find("ipWhitelist") != m.end() && !m["ipWhitelist"].empty()) {
      ipWhitelist = make_shared<string>(boost::any_cast<string>(m["ipWhitelist"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataNetworkInfoEndpoints() = default;
};
class GetInstanceResponseBodyDataNetworkInfoInternetInfo : public Darabonba::Model {
public:
  shared_ptr<long> flowOutBandwidth{};
  shared_ptr<string> flowOutType{};
  shared_ptr<string> internetSpec{};
  shared_ptr<vector<string>> ipWhitelist{};

  GetInstanceResponseBodyDataNetworkInfoInternetInfo() {}

  explicit GetInstanceResponseBodyDataNetworkInfoInternetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowOutBandwidth) {
      res["flowOutBandwidth"] = boost::any(*flowOutBandwidth);
    }
    if (flowOutType) {
      res["flowOutType"] = boost::any(*flowOutType);
    }
    if (internetSpec) {
      res["internetSpec"] = boost::any(*internetSpec);
    }
    if (ipWhitelist) {
      res["ipWhitelist"] = boost::any(*ipWhitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flowOutBandwidth") != m.end() && !m["flowOutBandwidth"].empty()) {
      flowOutBandwidth = make_shared<long>(boost::any_cast<long>(m["flowOutBandwidth"]));
    }
    if (m.find("flowOutType") != m.end() && !m["flowOutType"].empty()) {
      flowOutType = make_shared<string>(boost::any_cast<string>(m["flowOutType"]));
    }
    if (m.find("internetSpec") != m.end() && !m["internetSpec"].empty()) {
      internetSpec = make_shared<string>(boost::any_cast<string>(m["internetSpec"]));
    }
    if (m.find("ipWhitelist") != m.end() && !m["ipWhitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetInstanceResponseBodyDataNetworkInfoInternetInfo() = default;
};
class GetInstanceResponseBodyDataNetworkInfoVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  GetInstanceResponseBodyDataNetworkInfoVpcInfo() {}

  explicit GetInstanceResponseBodyDataNetworkInfoVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataNetworkInfoVpcInfo() = default;
};
class GetInstanceResponseBodyDataNetworkInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceResponseBodyDataNetworkInfoEndpoints>> endpoints{};
  shared_ptr<GetInstanceResponseBodyDataNetworkInfoInternetInfo> internetInfo{};
  shared_ptr<GetInstanceResponseBodyDataNetworkInfoVpcInfo> vpcInfo{};

  GetInstanceResponseBodyDataNetworkInfo() {}

  explicit GetInstanceResponseBodyDataNetworkInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["endpoints"] = boost::any(temp1);
    }
    if (internetInfo) {
      res["internetInfo"] = internetInfo ? boost::any(internetInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcInfo) {
      res["vpcInfo"] = vpcInfo ? boost::any(vpcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoints") != m.end() && !m["endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["endpoints"].type()) {
        vector<GetInstanceResponseBodyDataNetworkInfoEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyDataNetworkInfoEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<GetInstanceResponseBodyDataNetworkInfoEndpoints>>(expect1);
      }
    }
    if (m.find("internetInfo") != m.end() && !m["internetInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["internetInfo"].type()) {
        GetInstanceResponseBodyDataNetworkInfoInternetInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["internetInfo"]));
        internetInfo = make_shared<GetInstanceResponseBodyDataNetworkInfoInternetInfo>(model1);
      }
    }
    if (m.find("vpcInfo") != m.end() && !m["vpcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcInfo"].type()) {
        GetInstanceResponseBodyDataNetworkInfoVpcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcInfo"]));
        vpcInfo = make_shared<GetInstanceResponseBodyDataNetworkInfoVpcInfo>(model1);
      }
    }
  }


  virtual ~GetInstanceResponseBodyDataNetworkInfo() = default;
};
class GetInstanceResponseBodyDataProductInfo : public Darabonba::Model {
public:
  shared_ptr<bool> autoScaling{};
  shared_ptr<long> messageRetentionTime{};
  shared_ptr<string> msgProcessSpec{};
  shared_ptr<double> sendReceiveRatio{};
  shared_ptr<bool> supportAutoScaling{};

  GetInstanceResponseBodyDataProductInfo() {}

  explicit GetInstanceResponseBodyDataProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScaling) {
      res["autoScaling"] = boost::any(*autoScaling);
    }
    if (messageRetentionTime) {
      res["messageRetentionTime"] = boost::any(*messageRetentionTime);
    }
    if (msgProcessSpec) {
      res["msgProcessSpec"] = boost::any(*msgProcessSpec);
    }
    if (sendReceiveRatio) {
      res["sendReceiveRatio"] = boost::any(*sendReceiveRatio);
    }
    if (supportAutoScaling) {
      res["supportAutoScaling"] = boost::any(*supportAutoScaling);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoScaling") != m.end() && !m["autoScaling"].empty()) {
      autoScaling = make_shared<bool>(boost::any_cast<bool>(m["autoScaling"]));
    }
    if (m.find("messageRetentionTime") != m.end() && !m["messageRetentionTime"].empty()) {
      messageRetentionTime = make_shared<long>(boost::any_cast<long>(m["messageRetentionTime"]));
    }
    if (m.find("msgProcessSpec") != m.end() && !m["msgProcessSpec"].empty()) {
      msgProcessSpec = make_shared<string>(boost::any_cast<string>(m["msgProcessSpec"]));
    }
    if (m.find("sendReceiveRatio") != m.end() && !m["sendReceiveRatio"].empty()) {
      sendReceiveRatio = make_shared<double>(boost::any_cast<double>(m["sendReceiveRatio"]));
    }
    if (m.find("supportAutoScaling") != m.end() && !m["supportAutoScaling"].empty()) {
      supportAutoScaling = make_shared<bool>(boost::any_cast<bool>(m["supportAutoScaling"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataProductInfo() = default;
};
class GetInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetInstanceResponseBodyDataAccountInfo> accountInfo{};
  shared_ptr<GetInstanceResponseBodyDataAclInfo> aclInfo{};
  shared_ptr<string> bid{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<GetInstanceResponseBodyDataExtConfig> extConfig{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<vector<GetInstanceResponseBodyDataInstanceQuotas>> instanceQuotas{};
  shared_ptr<GetInstanceResponseBodyDataNetworkInfo> networkInfo{};
  shared_ptr<string> paymentType{};
  shared_ptr<GetInstanceResponseBodyDataProductInfo> productInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subSeriesCode{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};

  GetInstanceResponseBodyData() {}

  explicit GetInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfo) {
      res["accountInfo"] = accountInfo ? boost::any(accountInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (aclInfo) {
      res["aclInfo"] = aclInfo ? boost::any(aclInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bid) {
      res["bid"] = boost::any(*bid);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (extConfig) {
      res["extConfig"] = extConfig ? boost::any(extConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (instanceQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*instanceQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instanceQuotas"] = boost::any(temp1);
    }
    if (networkInfo) {
      res["networkInfo"] = networkInfo ? boost::any(networkInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paymentType) {
      res["paymentType"] = boost::any(*paymentType);
    }
    if (productInfo) {
      res["productInfo"] = productInfo ? boost::any(productInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (releaseTime) {
      res["releaseTime"] = boost::any(*releaseTime);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (seriesCode) {
      res["seriesCode"] = boost::any(*seriesCode);
    }
    if (serviceCode) {
      res["serviceCode"] = boost::any(*serviceCode);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subSeriesCode) {
      res["subSeriesCode"] = boost::any(*subSeriesCode);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountInfo") != m.end() && !m["accountInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["accountInfo"].type()) {
        GetInstanceResponseBodyDataAccountInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["accountInfo"]));
        accountInfo = make_shared<GetInstanceResponseBodyDataAccountInfo>(model1);
      }
    }
    if (m.find("aclInfo") != m.end() && !m["aclInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["aclInfo"].type()) {
        GetInstanceResponseBodyDataAclInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["aclInfo"]));
        aclInfo = make_shared<GetInstanceResponseBodyDataAclInfo>(model1);
      }
    }
    if (m.find("bid") != m.end() && !m["bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["bid"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("extConfig") != m.end() && !m["extConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["extConfig"].type()) {
        GetInstanceResponseBodyDataExtConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extConfig"]));
        extConfig = make_shared<GetInstanceResponseBodyDataExtConfig>(model1);
      }
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("instanceQuotas") != m.end() && !m["instanceQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["instanceQuotas"].type()) {
        vector<GetInstanceResponseBodyDataInstanceQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instanceQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyDataInstanceQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceQuotas = make_shared<vector<GetInstanceResponseBodyDataInstanceQuotas>>(expect1);
      }
    }
    if (m.find("networkInfo") != m.end() && !m["networkInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["networkInfo"].type()) {
        GetInstanceResponseBodyDataNetworkInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["networkInfo"]));
        networkInfo = make_shared<GetInstanceResponseBodyDataNetworkInfo>(model1);
      }
    }
    if (m.find("paymentType") != m.end() && !m["paymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["paymentType"]));
    }
    if (m.find("productInfo") != m.end() && !m["productInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["productInfo"].type()) {
        GetInstanceResponseBodyDataProductInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productInfo"]));
        productInfo = make_shared<GetInstanceResponseBodyDataProductInfo>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("releaseTime") != m.end() && !m["releaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["releaseTime"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("seriesCode") != m.end() && !m["seriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["seriesCode"]));
    }
    if (m.find("serviceCode") != m.end() && !m["serviceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["serviceCode"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subSeriesCode") != m.end() && !m["subSeriesCode"].empty()) {
      subSeriesCode = make_shared<string>(boost::any_cast<string>(m["subSeriesCode"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetInstanceResponseBodyData() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetInstanceResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetTopicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<string> topicName{};
  shared_ptr<string> updateTime{};

  GetTopicResponseBodyData() {}

  explicit GetTopicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("messageType") != m.end() && !m["messageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["messageType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~GetTopicResponseBodyData() = default;
};
class GetTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTopicResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTopicResponseBody() {}

  explicit GetTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTopicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTopicResponseBodyData>(model1);
      }
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetTopicResponseBody() = default;
};
class GetTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTopicResponseBody> body{};

  GetTopicResponse() {}

  explicit GetTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicResponse() = default;
};
class ListConsumerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListConsumerGroupsRequest() {}

  explicit ListConsumerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListConsumerGroupsRequest() = default;
};
class ListConsumerGroupsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  ListConsumerGroupsResponseBodyDataList() {}

  explicit ListConsumerGroupsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListConsumerGroupsResponseBodyDataList() = default;
};
class ListConsumerGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListConsumerGroupsResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListConsumerGroupsResponseBodyData() {}

  explicit ListConsumerGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListConsumerGroupsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConsumerGroupsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListConsumerGroupsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListConsumerGroupsResponseBodyData() = default;
};
class ListConsumerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListConsumerGroupsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListConsumerGroupsResponseBody() {}

  explicit ListConsumerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListConsumerGroupsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListConsumerGroupsResponseBodyData>(model1);
      }
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListConsumerGroupsResponseBody() = default;
};
class ListConsumerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConsumerGroupsResponseBody> body{};

  ListConsumerGroupsResponse() {}

  explicit ListConsumerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConsumerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConsumerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConsumerGroupsResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> groupCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> remark{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subSeriesCode{};
  shared_ptr<long> topicCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};

  ListInstancesResponseBodyDataList() {}

  explicit ListInstancesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (groupCount) {
      res["groupCount"] = boost::any(*groupCount);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (paymentType) {
      res["paymentType"] = boost::any(*paymentType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (releaseTime) {
      res["releaseTime"] = boost::any(*releaseTime);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (seriesCode) {
      res["seriesCode"] = boost::any(*seriesCode);
    }
    if (serviceCode) {
      res["serviceCode"] = boost::any(*serviceCode);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subSeriesCode) {
      res["subSeriesCode"] = boost::any(*subSeriesCode);
    }
    if (topicCount) {
      res["topicCount"] = boost::any(*topicCount);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("groupCount") != m.end() && !m["groupCount"].empty()) {
      groupCount = make_shared<long>(boost::any_cast<long>(m["groupCount"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("paymentType") != m.end() && !m["paymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["paymentType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("releaseTime") != m.end() && !m["releaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["releaseTime"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("seriesCode") != m.end() && !m["seriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["seriesCode"]));
    }
    if (m.find("serviceCode") != m.end() && !m["serviceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["serviceCode"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subSeriesCode") != m.end() && !m["subSeriesCode"].empty()) {
      subSeriesCode = make_shared<string>(boost::any_cast<string>(m["subSeriesCode"]));
    }
    if (m.find("topicCount") != m.end() && !m["topicCount"].empty()) {
      topicCount = make_shared<long>(boost::any_cast<long>(m["topicCount"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ListInstancesResponseBodyDataList() = default;
};
class ListInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBodyData() {}

  explicit ListInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListInstancesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListInstancesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListInstancesResponseBodyData() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListInstancesResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListInstancesResponseBodyData>(model1);
      }
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListTopicsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<vector<string>> messageTypes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTopicsRequest() {}

  explicit ListTopicsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (messageTypes) {
      res["messageTypes"] = boost::any(*messageTypes);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
    if (m.find("messageTypes") != m.end() && !m["messageTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["messageTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["messageTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListTopicsRequest() = default;
};
class ListTopicsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> messageTypesShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTopicsShrinkRequest() {}

  explicit ListTopicsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (messageTypesShrink) {
      res["messageTypes"] = boost::any(*messageTypesShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
    if (m.find("messageTypes") != m.end() && !m["messageTypes"].empty()) {
      messageTypesShrink = make_shared<string>(boost::any_cast<string>(m["messageTypes"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListTopicsShrinkRequest() = default;
};
class ListTopicsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<string> topicName{};
  shared_ptr<string> updateTime{};

  ListTopicsResponseBodyDataList() {}

  explicit ListTopicsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("messageType") != m.end() && !m["messageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["messageType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListTopicsResponseBodyDataList() = default;
};
class ListTopicsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTopicsResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListTopicsResponseBodyData() {}

  explicit ListTopicsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListTopicsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTopicsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListTopicsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListTopicsResponseBodyData() = default;
};
class ListTopicsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTopicsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTopicsResponseBody() {}

  explicit ListTopicsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListTopicsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListTopicsResponseBodyData>(model1);
      }
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListTopicsResponseBody() = default;
};
class ListTopicsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTopicsResponseBody> body{};

  ListTopicsResponse() {}

  explicit ListTopicsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTopicsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTopicsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTopicsResponse() = default;
};
class UpdateConsumerGroupRequestConsumeRetryPolicy : public Darabonba::Model {
public:
  shared_ptr<long> maxRetryTimes{};
  shared_ptr<string> retryPolicy{};

  UpdateConsumerGroupRequestConsumeRetryPolicy() {}

  explicit UpdateConsumerGroupRequestConsumeRetryPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRetryTimes) {
      res["maxRetryTimes"] = boost::any(*maxRetryTimes);
    }
    if (retryPolicy) {
      res["retryPolicy"] = boost::any(*retryPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxRetryTimes") != m.end() && !m["maxRetryTimes"].empty()) {
      maxRetryTimes = make_shared<long>(boost::any_cast<long>(m["maxRetryTimes"]));
    }
    if (m.find("retryPolicy") != m.end() && !m["retryPolicy"].empty()) {
      retryPolicy = make_shared<string>(boost::any_cast<string>(m["retryPolicy"]));
    }
  }


  virtual ~UpdateConsumerGroupRequestConsumeRetryPolicy() = default;
};
class UpdateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateConsumerGroupRequestConsumeRetryPolicy> consumeRetryPolicy{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<string> remark{};

  UpdateConsumerGroupRequest() {}

  explicit UpdateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeRetryPolicy) {
      res["consumeRetryPolicy"] = consumeRetryPolicy ? boost::any(consumeRetryPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryOrderType) {
      res["deliveryOrderType"] = boost::any(*deliveryOrderType);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumeRetryPolicy") != m.end() && !m["consumeRetryPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["consumeRetryPolicy"].type()) {
        UpdateConsumerGroupRequestConsumeRetryPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["consumeRetryPolicy"]));
        consumeRetryPolicy = make_shared<UpdateConsumerGroupRequestConsumeRetryPolicy>(model1);
      }
    }
    if (m.find("deliveryOrderType") != m.end() && !m["deliveryOrderType"].empty()) {
      deliveryOrderType = make_shared<string>(boost::any_cast<string>(m["deliveryOrderType"]));
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
  }


  virtual ~UpdateConsumerGroupRequest() = default;
};
class UpdateConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateConsumerGroupResponseBody() {}

  explicit UpdateConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateConsumerGroupResponseBody() = default;
};
class UpdateConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConsumerGroupResponseBody> body{};

  UpdateConsumerGroupResponse() {}

  explicit UpdateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConsumerGroupResponse() = default;
};
class UpdateInstanceRequestNetworkInfoInternetInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipWhitelist{};

  UpdateInstanceRequestNetworkInfoInternetInfo() {}

  explicit UpdateInstanceRequestNetworkInfoInternetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhitelist) {
      res["ipWhitelist"] = boost::any(*ipWhitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipWhitelist") != m.end() && !m["ipWhitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateInstanceRequestNetworkInfoInternetInfo() = default;
};
class UpdateInstanceRequestNetworkInfo : public Darabonba::Model {
public:
  shared_ptr<UpdateInstanceRequestNetworkInfoInternetInfo> internetInfo{};

  UpdateInstanceRequestNetworkInfo() {}

  explicit UpdateInstanceRequestNetworkInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetInfo) {
      res["internetInfo"] = internetInfo ? boost::any(internetInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("internetInfo") != m.end() && !m["internetInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["internetInfo"].type()) {
        UpdateInstanceRequestNetworkInfoInternetInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["internetInfo"]));
        internetInfo = make_shared<UpdateInstanceRequestNetworkInfoInternetInfo>(model1);
      }
    }
  }


  virtual ~UpdateInstanceRequestNetworkInfo() = default;
};
class UpdateInstanceRequestProductInfo : public Darabonba::Model {
public:
  shared_ptr<bool> autoScaling{};
  shared_ptr<long> messageRetentionTime{};
  shared_ptr<double> sendReceiveRatio{};

  UpdateInstanceRequestProductInfo() {}

  explicit UpdateInstanceRequestProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScaling) {
      res["autoScaling"] = boost::any(*autoScaling);
    }
    if (messageRetentionTime) {
      res["messageRetentionTime"] = boost::any(*messageRetentionTime);
    }
    if (sendReceiveRatio) {
      res["sendReceiveRatio"] = boost::any(*sendReceiveRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoScaling") != m.end() && !m["autoScaling"].empty()) {
      autoScaling = make_shared<bool>(boost::any_cast<bool>(m["autoScaling"]));
    }
    if (m.find("messageRetentionTime") != m.end() && !m["messageRetentionTime"].empty()) {
      messageRetentionTime = make_shared<long>(boost::any_cast<long>(m["messageRetentionTime"]));
    }
    if (m.find("sendReceiveRatio") != m.end() && !m["sendReceiveRatio"].empty()) {
      sendReceiveRatio = make_shared<double>(boost::any_cast<double>(m["sendReceiveRatio"]));
    }
  }


  virtual ~UpdateInstanceRequestProductInfo() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<UpdateInstanceRequestNetworkInfo> networkInfo{};
  shared_ptr<UpdateInstanceRequestProductInfo> productInfo{};
  shared_ptr<string> remark{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (networkInfo) {
      res["networkInfo"] = networkInfo ? boost::any(networkInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productInfo) {
      res["productInfo"] = productInfo ? boost::any(productInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("networkInfo") != m.end() && !m["networkInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["networkInfo"].type()) {
        UpdateInstanceRequestNetworkInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["networkInfo"]));
        networkInfo = make_shared<UpdateInstanceRequestNetworkInfo>(model1);
      }
    }
    if (m.find("productInfo") != m.end() && !m["productInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["productInfo"].type()) {
        UpdateInstanceRequestProductInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productInfo"]));
        productInfo = make_shared<UpdateInstanceRequestProductInfo>(model1);
      }
    }
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
};
class UpdateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> remark{};

  UpdateTopicRequest() {}

  explicit UpdateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("remark") != m.end() && !m["remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["remark"]));
    }
  }


  virtual ~UpdateTopicRequest() = default;
};
class UpdateTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTopicResponseBody() {}

  explicit UpdateTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (dynamicCode) {
      res["dynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["dynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("dynamicCode") != m.end() && !m["dynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["dynamicCode"]));
    }
    if (m.find("dynamicMessage") != m.end() && !m["dynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["dynamicMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateTopicResponseBody() = default;
};
class UpdateTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTopicResponseBody> body{};

  UpdateTopicResponse() {}

  explicit UpdateTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTopicResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTopicResponse() = default;
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
  CreateConsumerGroupResponse createConsumerGroupWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> consumerGroupId,
                                                             shared_ptr<CreateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsumerGroupResponse createConsumerGroup(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<CreateConsumerGroupRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateTopicResponse createTopicWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> topicName,
                                             shared_ptr<CreateTopicRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTopicResponse createTopic(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<CreateTopicRequest> request);
  DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> consumerGroupId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConsumerGroupResponse deleteConsumerGroup(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<string> instanceId);
  DeleteTopicResponse deleteTopicWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> topicName,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTopicResponse deleteTopic(shared_ptr<string> instanceId, shared_ptr<string> topicName);
  GetConsumerGroupResponse getConsumerGroupWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> consumerGroupId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerGroupResponse getConsumerGroup(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> instanceId);
  GetTopicResponse getTopicWithOptions(shared_ptr<string> instanceId,
                                       shared_ptr<string> topicName,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicResponse getTopic(shared_ptr<string> instanceId, shared_ptr<string> topicName);
  ListConsumerGroupsResponse listConsumerGroupsWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<ListConsumerGroupsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsumerGroupsResponse listConsumerGroups(shared_ptr<string> instanceId, shared_ptr<ListConsumerGroupsRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListTopicsResponse listTopicsWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<ListTopicsRequest> tmpReq,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTopicsResponse listTopics(shared_ptr<string> instanceId, shared_ptr<ListTopicsRequest> request);
  UpdateConsumerGroupResponse updateConsumerGroupWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> consumerGroupId,
                                                             shared_ptr<UpdateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConsumerGroupResponse updateConsumerGroup(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<UpdateConsumerGroupRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<string> instanceId,
                                                   shared_ptr<UpdateInstanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<string> instanceId, shared_ptr<UpdateInstanceRequest> request);
  UpdateTopicResponse updateTopicWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> topicName,
                                             shared_ptr<UpdateTopicRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTopicResponse updateTopic(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<UpdateTopicRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_RocketMQ20220801

#endif
