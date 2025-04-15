// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ROCKETMQ20220801_H_
#define ALIBABACLOUD_ROCKETMQ20220801_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_RocketMQ20220801 {
class DataTopicLagMapValue : public Darabonba::Model {
public:
  shared_ptr<long> readyCount{};
  shared_ptr<long> inflightCount{};
  shared_ptr<long> deliveryDuration{};
  shared_ptr<long> lastConsumeTimestamp{};

  DataTopicLagMapValue() {}

  explicit DataTopicLagMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readyCount) {
      res["readyCount"] = boost::any(*readyCount);
    }
    if (inflightCount) {
      res["inflightCount"] = boost::any(*inflightCount);
    }
    if (deliveryDuration) {
      res["deliveryDuration"] = boost::any(*deliveryDuration);
    }
    if (lastConsumeTimestamp) {
      res["lastConsumeTimestamp"] = boost::any(*lastConsumeTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("readyCount") != m.end() && !m["readyCount"].empty()) {
      readyCount = make_shared<long>(boost::any_cast<long>(m["readyCount"]));
    }
    if (m.find("inflightCount") != m.end() && !m["inflightCount"].empty()) {
      inflightCount = make_shared<long>(boost::any_cast<long>(m["inflightCount"]));
    }
    if (m.find("deliveryDuration") != m.end() && !m["deliveryDuration"].empty()) {
      deliveryDuration = make_shared<long>(boost::any_cast<long>(m["deliveryDuration"]));
    }
    if (m.find("lastConsumeTimestamp") != m.end() && !m["lastConsumeTimestamp"].empty()) {
      lastConsumeTimestamp = make_shared<long>(boost::any_cast<long>(m["lastConsumeTimestamp"]));
    }
  }


  virtual ~DataTopicLagMapValue() = default;
};
class AddDisasterRecoveryItemRequestTopics : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  AddDisasterRecoveryItemRequestTopics() {}

  explicit AddDisasterRecoveryItemRequestTopics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (deliveryOrderType) {
      res["deliveryOrderType"] = boost::any(*deliveryOrderType);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("deliveryOrderType") != m.end() && !m["deliveryOrderType"].empty()) {
      deliveryOrderType = make_shared<string>(boost::any_cast<string>(m["deliveryOrderType"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~AddDisasterRecoveryItemRequestTopics() = default;
};
class AddDisasterRecoveryItemRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddDisasterRecoveryItemRequestTopics>> topics{};

  AddDisasterRecoveryItemRequest() {}

  explicit AddDisasterRecoveryItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topics) {
      vector<boost::any> temp1;
      for(auto item1:*topics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["topics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("topics") != m.end() && !m["topics"].empty()) {
      if (typeid(vector<boost::any>) == m["topics"].type()) {
        vector<AddDisasterRecoveryItemRequestTopics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["topics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddDisasterRecoveryItemRequestTopics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topics = make_shared<vector<AddDisasterRecoveryItemRequestTopics>>(expect1);
      }
    }
  }


  virtual ~AddDisasterRecoveryItemRequest() = default;
};
class AddDisasterRecoveryItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddDisasterRecoveryItemResponseBody() {}

  explicit AddDisasterRecoveryItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
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


  virtual ~AddDisasterRecoveryItemResponseBody() = default;
};
class AddDisasterRecoveryItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDisasterRecoveryItemResponseBody> body{};

  AddDisasterRecoveryItemResponse() {}

  explicit AddDisasterRecoveryItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDisasterRecoveryItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDisasterRecoveryItemResponseBody>(model1);
      }
    }
  }


  virtual ~AddDisasterRecoveryItemResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> maxReceiveTps{};
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
    if (maxReceiveTps) {
      res["maxReceiveTps"] = boost::any(*maxReceiveTps);
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
    if (m.find("maxReceiveTps") != m.end() && !m["maxReceiveTps"].empty()) {
      maxReceiveTps = make_shared<long>(boost::any_cast<long>(m["maxReceiveTps"]));
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
        CreateConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConsumerGroupResponse() = default;
};
class CreateDisasterRecoveryPlanRequestInstancesMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> propertyKey{};
  shared_ptr<string> propertyValue{};

  CreateDisasterRecoveryPlanRequestInstancesMessageProperty() {}

  explicit CreateDisasterRecoveryPlanRequestInstancesMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyKey) {
      res["propertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValue) {
      res["propertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("propertyKey") != m.end() && !m["propertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["propertyKey"]));
    }
    if (m.find("propertyValue") != m.end() && !m["propertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["propertyValue"]));
    }
  }


  virtual ~CreateDisasterRecoveryPlanRequestInstancesMessageProperty() = default;
};
class CreateDisasterRecoveryPlanRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> endpointUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRole{};
  shared_ptr<string> instanceType{};
  shared_ptr<CreateDisasterRecoveryPlanRequestInstancesMessageProperty> messageProperty{};
  shared_ptr<string> networkType{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> username{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateDisasterRecoveryPlanRequestInstances() {}

  explicit CreateDisasterRecoveryPlanRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (endpointUrl) {
      res["endpointUrl"] = boost::any(*endpointUrl);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceRole) {
      res["instanceRole"] = boost::any(*instanceRole);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (messageProperty) {
      res["messageProperty"] = messageProperty ? boost::any(messageProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("endpointUrl") != m.end() && !m["endpointUrl"].empty()) {
      endpointUrl = make_shared<string>(boost::any_cast<string>(m["endpointUrl"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceRole") != m.end() && !m["instanceRole"].empty()) {
      instanceRole = make_shared<string>(boost::any_cast<string>(m["instanceRole"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("messageProperty") != m.end() && !m["messageProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["messageProperty"].type()) {
        CreateDisasterRecoveryPlanRequestInstancesMessageProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["messageProperty"]));
        messageProperty = make_shared<CreateDisasterRecoveryPlanRequestInstancesMessageProperty>(model1);
      }
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~CreateDisasterRecoveryPlanRequestInstances() = default;
};
class CreateDisasterRecoveryPlanRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoSyncCheckpoint{};
  shared_ptr<vector<CreateDisasterRecoveryPlanRequestInstances>> instances{};
  shared_ptr<string> planDesc{};
  shared_ptr<string> planName{};
  shared_ptr<string> planType{};
  shared_ptr<bool> syncCheckpointEnabled{};

  CreateDisasterRecoveryPlanRequest() {}

  explicit CreateDisasterRecoveryPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSyncCheckpoint) {
      res["autoSyncCheckpoint"] = boost::any(*autoSyncCheckpoint);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instances"] = boost::any(temp1);
    }
    if (planDesc) {
      res["planDesc"] = boost::any(*planDesc);
    }
    if (planName) {
      res["planName"] = boost::any(*planName);
    }
    if (planType) {
      res["planType"] = boost::any(*planType);
    }
    if (syncCheckpointEnabled) {
      res["syncCheckpointEnabled"] = boost::any(*syncCheckpointEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSyncCheckpoint") != m.end() && !m["autoSyncCheckpoint"].empty()) {
      autoSyncCheckpoint = make_shared<bool>(boost::any_cast<bool>(m["autoSyncCheckpoint"]));
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<CreateDisasterRecoveryPlanRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDisasterRecoveryPlanRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<CreateDisasterRecoveryPlanRequestInstances>>(expect1);
      }
    }
    if (m.find("planDesc") != m.end() && !m["planDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["planDesc"]));
    }
    if (m.find("planName") != m.end() && !m["planName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["planName"]));
    }
    if (m.find("planType") != m.end() && !m["planType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["planType"]));
    }
    if (m.find("syncCheckpointEnabled") != m.end() && !m["syncCheckpointEnabled"].empty()) {
      syncCheckpointEnabled = make_shared<bool>(boost::any_cast<bool>(m["syncCheckpointEnabled"]));
    }
  }


  virtual ~CreateDisasterRecoveryPlanRequest() = default;
};
class CreateDisasterRecoveryPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDisasterRecoveryPlanResponseBody() {}

  explicit CreateDisasterRecoveryPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["data"]));
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


  virtual ~CreateDisasterRecoveryPlanResponseBody() = default;
};
class CreateDisasterRecoveryPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDisasterRecoveryPlanResponseBody> body{};

  CreateDisasterRecoveryPlanResponse() {}

  explicit CreateDisasterRecoveryPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDisasterRecoveryPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDisasterRecoveryPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDisasterRecoveryPlanResponse() = default;
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
class CreateInstanceRequestNetworkInfoVpcInfoVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};

  CreateInstanceRequestNetworkInfoVpcInfoVSwitches() {}

  explicit CreateInstanceRequestNetworkInfoVpcInfoVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~CreateInstanceRequestNetworkInfoVpcInfoVSwitches() = default;
};
class CreateInstanceRequestNetworkInfoVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupIds{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<vector<CreateInstanceRequestNetworkInfoVpcInfoVSwitches>> vSwitches{};
  shared_ptr<string> vpcId{};

  CreateInstanceRequestNetworkInfoVpcInfo() {}

  explicit CreateInstanceRequestNetworkInfoVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupIds) {
      res["securityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vSwitches"] = boost::any(temp1);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupIds") != m.end() && !m["securityGroupIds"].empty()) {
      securityGroupIds = make_shared<string>(boost::any_cast<string>(m["securityGroupIds"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vSwitches") != m.end() && !m["vSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["vSwitches"].type()) {
        vector<CreateInstanceRequestNetworkInfoVpcInfoVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestNetworkInfoVpcInfoVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<CreateInstanceRequestNetworkInfoVpcInfoVSwitches>>(expect1);
      }
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
  shared_ptr<bool> storageEncryption{};
  shared_ptr<string> storageSecretKey{};

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
    if (storageEncryption) {
      res["storageEncryption"] = boost::any(*storageEncryption);
    }
    if (storageSecretKey) {
      res["storageSecretKey"] = boost::any(*storageSecretKey);
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
    if (m.find("storageEncryption") != m.end() && !m["storageEncryption"].empty()) {
      storageEncryption = make_shared<bool>(boost::any_cast<bool>(m["storageEncryption"]));
    }
    if (m.find("storageSecretKey") != m.end() && !m["storageSecretKey"].empty()) {
      storageSecretKey = make_shared<string>(boost::any_cast<string>(m["storageSecretKey"]));
    }
  }


  virtual ~CreateInstanceRequestProductInfo() = default;
};
class CreateInstanceRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateInstanceRequestTags() {}

  explicit CreateInstanceRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateInstanceRequestTags() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> commodityCode{};
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
  shared_ptr<vector<CreateInstanceRequestTags>> tags{};
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
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
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
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
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
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<CreateInstanceRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateInstanceRequestTags>>(expect1);
      }
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
class CreateInstanceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  CreateInstanceAccountRequest() {}

  explicit CreateInstanceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~CreateInstanceAccountRequest() = default;
};
class CreateInstanceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceAccountResponseBody() {}

  explicit CreateInstanceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~CreateInstanceAccountResponseBody() = default;
};
class CreateInstanceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceAccountResponseBody> body{};

  CreateInstanceAccountResponse() {}

  explicit CreateInstanceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceAccountResponse() = default;
};
class CreateInstanceAclRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> decision{};
  shared_ptr<vector<string>> ipWhitelists{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  CreateInstanceAclRequest() {}

  explicit CreateInstanceAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (decision) {
      res["decision"] = boost::any(*decision);
    }
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("decision") != m.end() && !m["decision"].empty()) {
      decision = make_shared<string>(boost::any_cast<string>(m["decision"]));
    }
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~CreateInstanceAclRequest() = default;
};
class CreateInstanceAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceAclResponseBody() {}

  explicit CreateInstanceAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~CreateInstanceAclResponseBody() = default;
};
class CreateInstanceAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceAclResponseBody> body{};

  CreateInstanceAclResponse() {}

  explicit CreateInstanceAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceAclResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceAclResponse() = default;
};
class CreateInstanceIpWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipWhitelists{};

  CreateInstanceIpWhitelistRequest() {}

  explicit CreateInstanceIpWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateInstanceIpWhitelistRequest() = default;
};
class CreateInstanceIpWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceIpWhitelistResponseBody() {}

  explicit CreateInstanceIpWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~CreateInstanceIpWhitelistResponseBody() = default;
};
class CreateInstanceIpWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceIpWhitelistResponseBody> body{};

  CreateInstanceIpWhitelistResponse() {}

  explicit CreateInstanceIpWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceIpWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceIpWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceIpWhitelistResponse() = default;
};
class CreateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxSendTps{};
  shared_ptr<string> messageType{};
  shared_ptr<string> remark{};

  CreateTopicRequest() {}

  explicit CreateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxSendTps) {
      res["maxSendTps"] = boost::any(*maxSendTps);
    }
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxSendTps") != m.end() && !m["maxSendTps"].empty()) {
      maxSendTps = make_shared<long>(boost::any_cast<long>(m["maxSendTps"]));
    }
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
        DeleteConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConsumerGroupResponse() = default;
};
class DeleteConsumerGroupSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterExpression{};
  shared_ptr<string> filterType{};
  shared_ptr<string> topicName{};

  DeleteConsumerGroupSubscriptionRequest() {}

  explicit DeleteConsumerGroupSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterExpression) {
      res["filterExpression"] = boost::any(*filterExpression);
    }
    if (filterType) {
      res["filterType"] = boost::any(*filterType);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterExpression") != m.end() && !m["filterExpression"].empty()) {
      filterExpression = make_shared<string>(boost::any_cast<string>(m["filterExpression"]));
    }
    if (m.find("filterType") != m.end() && !m["filterType"].empty()) {
      filterType = make_shared<string>(boost::any_cast<string>(m["filterType"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~DeleteConsumerGroupSubscriptionRequest() = default;
};
class DeleteConsumerGroupSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteConsumerGroupSubscriptionResponseBody() {}

  explicit DeleteConsumerGroupSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~DeleteConsumerGroupSubscriptionResponseBody() = default;
};
class DeleteConsumerGroupSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConsumerGroupSubscriptionResponseBody> body{};

  DeleteConsumerGroupSubscriptionResponse() {}

  explicit DeleteConsumerGroupSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConsumerGroupSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConsumerGroupSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConsumerGroupSubscriptionResponse() = default;
};
class DeleteDisasterRecoveryItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDisasterRecoveryItemResponseBody() {}

  explicit DeleteDisasterRecoveryItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~DeleteDisasterRecoveryItemResponseBody() = default;
};
class DeleteDisasterRecoveryItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDisasterRecoveryItemResponseBody> body{};

  DeleteDisasterRecoveryItemResponse() {}

  explicit DeleteDisasterRecoveryItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDisasterRecoveryItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDisasterRecoveryItemResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDisasterRecoveryItemResponse() = default;
};
class DeleteDisasterRecoveryPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDisasterRecoveryPlanResponseBody() {}

  explicit DeleteDisasterRecoveryPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~DeleteDisasterRecoveryPlanResponseBody() = default;
};
class DeleteDisasterRecoveryPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDisasterRecoveryPlanResponseBody> body{};

  DeleteDisasterRecoveryPlanResponse() {}

  explicit DeleteDisasterRecoveryPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDisasterRecoveryPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDisasterRecoveryPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDisasterRecoveryPlanResponse() = default;
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
class DeleteInstanceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceAccountResponseBody() {}

  explicit DeleteInstanceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~DeleteInstanceAccountResponseBody() = default;
};
class DeleteInstanceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceAccountResponseBody> body{};

  DeleteInstanceAccountResponse() {}

  explicit DeleteInstanceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceAccountResponse() = default;
};
class DeleteInstanceAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  DeleteInstanceAclRequest() {}

  explicit DeleteInstanceAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~DeleteInstanceAclRequest() = default;
};
class DeleteInstanceAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceAclResponseBody() {}

  explicit DeleteInstanceAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~DeleteInstanceAclResponseBody() = default;
};
class DeleteInstanceAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceAclResponseBody> body{};

  DeleteInstanceAclResponse() {}

  explicit DeleteInstanceAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceAclResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceAclResponse() = default;
};
class DeleteInstanceIpWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipWhitelist{};
  shared_ptr<vector<string>> ipWhitelists{};

  DeleteInstanceIpWhitelistRequest() {}

  explicit DeleteInstanceIpWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhitelist) {
      res["ipWhitelist"] = boost::any(*ipWhitelist);
    }
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipWhitelist") != m.end() && !m["ipWhitelist"].empty()) {
      ipWhitelist = make_shared<string>(boost::any_cast<string>(m["ipWhitelist"]));
    }
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteInstanceIpWhitelistRequest() = default;
};
class DeleteInstanceIpWhitelistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipWhitelist{};
  shared_ptr<string> ipWhitelistsShrink{};

  DeleteInstanceIpWhitelistShrinkRequest() {}

  explicit DeleteInstanceIpWhitelistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhitelist) {
      res["ipWhitelist"] = boost::any(*ipWhitelist);
    }
    if (ipWhitelistsShrink) {
      res["ipWhitelists"] = boost::any(*ipWhitelistsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipWhitelist") != m.end() && !m["ipWhitelist"].empty()) {
      ipWhitelist = make_shared<string>(boost::any_cast<string>(m["ipWhitelist"]));
    }
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      ipWhitelistsShrink = make_shared<string>(boost::any_cast<string>(m["ipWhitelists"]));
    }
  }


  virtual ~DeleteInstanceIpWhitelistShrinkRequest() = default;
};
class DeleteInstanceIpWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceIpWhitelistResponseBody() {}

  explicit DeleteInstanceIpWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~DeleteInstanceIpWhitelistResponseBody() = default;
};
class DeleteInstanceIpWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceIpWhitelistResponseBody> body{};

  DeleteInstanceIpWhitelistResponse() {}

  explicit DeleteInstanceIpWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceIpWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceIpWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceIpWhitelistResponse() = default;
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
  shared_ptr<long> maxReceiveTps{};
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
    if (maxReceiveTps) {
      res["maxReceiveTps"] = boost::any(*maxReceiveTps);
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
    if (m.find("maxReceiveTps") != m.end() && !m["maxReceiveTps"].empty()) {
      maxReceiveTps = make_shared<long>(boost::any_cast<long>(m["maxReceiveTps"]));
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
        GetConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerGroupResponse() = default;
};
class GetConsumerGroupLagRequest : public Darabonba::Model {
public:
  shared_ptr<string> topicName{};

  GetConsumerGroupLagRequest() {}

  explicit GetConsumerGroupLagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~GetConsumerGroupLagRequest() = default;
};
class GetConsumerGroupLagResponseBodyDataTotalLag : public Darabonba::Model {
public:
  shared_ptr<long> deliveryDuration{};
  shared_ptr<long> inflightCount{};
  shared_ptr<long> lastConsumeTimestamp{};
  shared_ptr<long> readyCount{};

  GetConsumerGroupLagResponseBodyDataTotalLag() {}

  explicit GetConsumerGroupLagResponseBodyDataTotalLag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryDuration) {
      res["deliveryDuration"] = boost::any(*deliveryDuration);
    }
    if (inflightCount) {
      res["inflightCount"] = boost::any(*inflightCount);
    }
    if (lastConsumeTimestamp) {
      res["lastConsumeTimestamp"] = boost::any(*lastConsumeTimestamp);
    }
    if (readyCount) {
      res["readyCount"] = boost::any(*readyCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliveryDuration") != m.end() && !m["deliveryDuration"].empty()) {
      deliveryDuration = make_shared<long>(boost::any_cast<long>(m["deliveryDuration"]));
    }
    if (m.find("inflightCount") != m.end() && !m["inflightCount"].empty()) {
      inflightCount = make_shared<long>(boost::any_cast<long>(m["inflightCount"]));
    }
    if (m.find("lastConsumeTimestamp") != m.end() && !m["lastConsumeTimestamp"].empty()) {
      lastConsumeTimestamp = make_shared<long>(boost::any_cast<long>(m["lastConsumeTimestamp"]));
    }
    if (m.find("readyCount") != m.end() && !m["readyCount"].empty()) {
      readyCount = make_shared<long>(boost::any_cast<long>(m["readyCount"]));
    }
  }


  virtual ~GetConsumerGroupLagResponseBodyDataTotalLag() = default;
};
class GetConsumerGroupLagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, DataTopicLagMapValue>> topicLagMap{};
  shared_ptr<GetConsumerGroupLagResponseBodyDataTotalLag> totalLag{};

  GetConsumerGroupLagResponseBodyData() {}

  explicit GetConsumerGroupLagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicLagMap) {
      map<string, boost::any> temp1;
      for(auto item1:*topicLagMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["topicLagMap"] = boost::any(temp1);
    }
    if (totalLag) {
      res["totalLag"] = totalLag ? boost::any(totalLag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicLagMap") != m.end() && !m["topicLagMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["topicLagMap"].type()) {
        map<string, DataTopicLagMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["topicLagMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataTopicLagMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        topicLagMap = make_shared<map<string, DataTopicLagMapValue>>(expect1);
      }
    }
    if (m.find("totalLag") != m.end() && !m["totalLag"].empty()) {
      if (typeid(map<string, boost::any>) == m["totalLag"].type()) {
        GetConsumerGroupLagResponseBodyDataTotalLag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["totalLag"]));
        totalLag = make_shared<GetConsumerGroupLagResponseBodyDataTotalLag>(model1);
      }
    }
  }


  virtual ~GetConsumerGroupLagResponseBodyData() = default;
};
class GetConsumerGroupLagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetConsumerGroupLagResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsumerGroupLagResponseBody() {}

  explicit GetConsumerGroupLagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerGroupLagResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetConsumerGroupLagResponseBodyData>(model1);
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


  virtual ~GetConsumerGroupLagResponseBody() = default;
};
class GetConsumerGroupLagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerGroupLagResponseBody> body{};

  GetConsumerGroupLagResponse() {}

  explicit GetConsumerGroupLagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerGroupLagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerGroupLagResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerGroupLagResponse() = default;
};
class GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> egressIp{};
  shared_ptr<string> hostname{};
  shared_ptr<string> language{};
  shared_ptr<string> messageModel{};
  shared_ptr<string> version{};

  GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO() {}

  explicit GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["clientId"] = boost::any(*clientId);
    }
    if (egressIp) {
      res["egressIp"] = boost::any(*egressIp);
    }
    if (hostname) {
      res["hostname"] = boost::any(*hostname);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (messageModel) {
      res["messageModel"] = boost::any(*messageModel);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientId") != m.end() && !m["clientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["clientId"]));
    }
    if (m.find("egressIp") != m.end() && !m["egressIp"].empty()) {
      egressIp = make_shared<string>(boost::any_cast<string>(m["egressIp"]));
    }
    if (m.find("hostname") != m.end() && !m["hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["hostname"]));
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("messageModel") != m.end() && !m["messageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["messageModel"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO() = default;
};
class GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> filterExpression{};
  shared_ptr<string> filterExpressionType{};
  shared_ptr<string> messageModel{};
  shared_ptr<string> subscriptionStatus{};
  shared_ptr<string> topicName{};

  GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO() {}

  explicit GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (filterExpression) {
      res["filterExpression"] = boost::any(*filterExpression);
    }
    if (filterExpressionType) {
      res["filterExpressionType"] = boost::any(*filterExpressionType);
    }
    if (messageModel) {
      res["messageModel"] = boost::any(*messageModel);
    }
    if (subscriptionStatus) {
      res["subscriptionStatus"] = boost::any(*subscriptionStatus);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("filterExpression") != m.end() && !m["filterExpression"].empty()) {
      filterExpression = make_shared<string>(boost::any_cast<string>(m["filterExpression"]));
    }
    if (m.find("filterExpressionType") != m.end() && !m["filterExpressionType"].empty()) {
      filterExpressionType = make_shared<string>(boost::any_cast<string>(m["filterExpressionType"]));
    }
    if (m.find("messageModel") != m.end() && !m["messageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["messageModel"]));
    }
    if (m.find("subscriptionStatus") != m.end() && !m["subscriptionStatus"].empty()) {
      subscriptionStatus = make_shared<string>(boost::any_cast<string>(m["subscriptionStatus"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO() = default;
};
class GetConsumerGroupSubscriptionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO> connectionDTO{};
  shared_ptr<GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO> subscriptionDTO{};

  GetConsumerGroupSubscriptionResponseBodyData() {}

  explicit GetConsumerGroupSubscriptionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDTO) {
      res["connectionDTO"] = connectionDTO ? boost::any(connectionDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subscriptionDTO) {
      res["subscriptionDTO"] = subscriptionDTO ? boost::any(subscriptionDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("connectionDTO") != m.end() && !m["connectionDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["connectionDTO"].type()) {
        GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["connectionDTO"]));
        connectionDTO = make_shared<GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO>(model1);
      }
    }
    if (m.find("subscriptionDTO") != m.end() && !m["subscriptionDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["subscriptionDTO"].type()) {
        GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["subscriptionDTO"]));
        subscriptionDTO = make_shared<GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO>(model1);
      }
    }
  }


  virtual ~GetConsumerGroupSubscriptionResponseBodyData() = default;
};
class GetConsumerGroupSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetConsumerGroupSubscriptionResponseBodyData>> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsumerGroupSubscriptionResponseBody() {}

  explicit GetConsumerGroupSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetConsumerGroupSubscriptionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerGroupSubscriptionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetConsumerGroupSubscriptionResponseBodyData>>(expect1);
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


  virtual ~GetConsumerGroupSubscriptionResponseBody() = default;
};
class GetConsumerGroupSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerGroupSubscriptionResponseBody> body{};

  GetConsumerGroupSubscriptionResponse() {}

  explicit GetConsumerGroupSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerGroupSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerGroupSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerGroupSubscriptionResponse() = default;
};
class GetConsumerStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};

  GetConsumerStackRequest() {}

  explicit GetConsumerStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["clientId"] = boost::any(*clientId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientId") != m.end() && !m["clientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["clientId"]));
    }
  }


  virtual ~GetConsumerStackRequest() = default;
};
class GetConsumerStackResponseBodyDataStacks : public Darabonba::Model {
public:
  shared_ptr<string> thread{};
  shared_ptr<vector<string>> tracks{};

  GetConsumerStackResponseBodyDataStacks() {}

  explicit GetConsumerStackResponseBodyDataStacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thread) {
      res["thread"] = boost::any(*thread);
    }
    if (tracks) {
      res["tracks"] = boost::any(*tracks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("thread") != m.end() && !m["thread"].empty()) {
      thread = make_shared<string>(boost::any_cast<string>(m["thread"]));
    }
    if (m.find("tracks") != m.end() && !m["tracks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tracks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tracks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tracks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetConsumerStackResponseBodyDataStacks() = default;
};
class GetConsumerStackResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<GetConsumerStackResponseBodyDataStacks>> stacks{};

  GetConsumerStackResponseBodyData() {}

  explicit GetConsumerStackResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (stacks) {
      vector<boost::any> temp1;
      for(auto item1:*stacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stacks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("stacks") != m.end() && !m["stacks"].empty()) {
      if (typeid(vector<boost::any>) == m["stacks"].type()) {
        vector<GetConsumerStackResponseBodyDataStacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerStackResponseBodyDataStacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stacks = make_shared<vector<GetConsumerStackResponseBodyDataStacks>>(expect1);
      }
    }
  }


  virtual ~GetConsumerStackResponseBodyData() = default;
};
class GetConsumerStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetConsumerStackResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsumerStackResponseBody() {}

  explicit GetConsumerStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerStackResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetConsumerStackResponseBodyData>(model1);
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


  virtual ~GetConsumerStackResponseBody() = default;
};
class GetConsumerStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerStackResponseBody> body{};

  GetConsumerStackResponse() {}

  explicit GetConsumerStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerStackResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerStackResponse() = default;
};
class GetDisasterRecoveryItemResponseBodyDataTopics : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  GetDisasterRecoveryItemResponseBodyDataTopics() {}

  explicit GetDisasterRecoveryItemResponseBodyDataTopics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (deliveryOrderType) {
      res["deliveryOrderType"] = boost::any(*deliveryOrderType);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("deliveryOrderType") != m.end() && !m["deliveryOrderType"].empty()) {
      deliveryOrderType = make_shared<string>(boost::any_cast<string>(m["deliveryOrderType"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~GetDisasterRecoveryItemResponseBodyDataTopics() = default;
};
class GetDisasterRecoveryItemResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemStatus{};
  shared_ptr<long> planId{};
  shared_ptr<vector<GetDisasterRecoveryItemResponseBodyDataTopics>> topics{};
  shared_ptr<string> updateTime{};

  GetDisasterRecoveryItemResponseBodyData() {}

  explicit GetDisasterRecoveryItemResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemStatus) {
      res["itemStatus"] = boost::any(*itemStatus);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (topics) {
      vector<boost::any> temp1;
      for(auto item1:*topics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["topics"] = boost::any(temp1);
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
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["extInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["itemId"]));
    }
    if (m.find("itemStatus") != m.end() && !m["itemStatus"].empty()) {
      itemStatus = make_shared<string>(boost::any_cast<string>(m["itemStatus"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("topics") != m.end() && !m["topics"].empty()) {
      if (typeid(vector<boost::any>) == m["topics"].type()) {
        vector<GetDisasterRecoveryItemResponseBodyDataTopics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["topics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDisasterRecoveryItemResponseBodyDataTopics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topics = make_shared<vector<GetDisasterRecoveryItemResponseBodyDataTopics>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~GetDisasterRecoveryItemResponseBodyData() = default;
};
class GetDisasterRecoveryItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetDisasterRecoveryItemResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDisasterRecoveryItemResponseBody() {}

  explicit GetDisasterRecoveryItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDisasterRecoveryItemResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDisasterRecoveryItemResponseBodyData>(model1);
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


  virtual ~GetDisasterRecoveryItemResponseBody() = default;
};
class GetDisasterRecoveryItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDisasterRecoveryItemResponseBody> body{};

  GetDisasterRecoveryItemResponse() {}

  explicit GetDisasterRecoveryItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDisasterRecoveryItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDisasterRecoveryItemResponseBody>(model1);
      }
    }
  }


  virtual ~GetDisasterRecoveryItemResponse() = default;
};
class GetDisasterRecoveryPlanResponseBodyDataInstancesMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> propertyKey{};
  shared_ptr<string> propertyValue{};

  GetDisasterRecoveryPlanResponseBodyDataInstancesMessageProperty() {}

  explicit GetDisasterRecoveryPlanResponseBodyDataInstancesMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyKey) {
      res["propertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValue) {
      res["propertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("propertyKey") != m.end() && !m["propertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["propertyKey"]));
    }
    if (m.find("propertyValue") != m.end() && !m["propertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["propertyValue"]));
    }
  }


  virtual ~GetDisasterRecoveryPlanResponseBodyDataInstancesMessageProperty() = default;
};
class GetDisasterRecoveryPlanResponseBodyDataInstances : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> endpointUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRole{};
  shared_ptr<string> instanceType{};
  shared_ptr<GetDisasterRecoveryPlanResponseBodyDataInstancesMessageProperty> messageProperty{};
  shared_ptr<string> networkType{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> username{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  GetDisasterRecoveryPlanResponseBodyDataInstances() {}

  explicit GetDisasterRecoveryPlanResponseBodyDataInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (endpointUrl) {
      res["endpointUrl"] = boost::any(*endpointUrl);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceRole) {
      res["instanceRole"] = boost::any(*instanceRole);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (messageProperty) {
      res["messageProperty"] = messageProperty ? boost::any(messageProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("endpointUrl") != m.end() && !m["endpointUrl"].empty()) {
      endpointUrl = make_shared<string>(boost::any_cast<string>(m["endpointUrl"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceRole") != m.end() && !m["instanceRole"].empty()) {
      instanceRole = make_shared<string>(boost::any_cast<string>(m["instanceRole"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("messageProperty") != m.end() && !m["messageProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["messageProperty"].type()) {
        GetDisasterRecoveryPlanResponseBodyDataInstancesMessageProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["messageProperty"]));
        messageProperty = make_shared<GetDisasterRecoveryPlanResponseBodyDataInstancesMessageProperty>(model1);
      }
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~GetDisasterRecoveryPlanResponseBodyDataInstances() = default;
};
class GetDisasterRecoveryPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoSyncCheckpoint{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<vector<GetDisasterRecoveryPlanResponseBodyDataInstances>> instances{};
  shared_ptr<string> planDesc{};
  shared_ptr<long> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> planStatus{};
  shared_ptr<string> planType{};
  shared_ptr<bool> syncCheckpointEnabled{};
  shared_ptr<string> updateTime{};

  GetDisasterRecoveryPlanResponseBodyData() {}

  explicit GetDisasterRecoveryPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSyncCheckpoint) {
      res["autoSyncCheckpoint"] = boost::any(*autoSyncCheckpoint);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instances"] = boost::any(temp1);
    }
    if (planDesc) {
      res["planDesc"] = boost::any(*planDesc);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (planName) {
      res["planName"] = boost::any(*planName);
    }
    if (planStatus) {
      res["planStatus"] = boost::any(*planStatus);
    }
    if (planType) {
      res["planType"] = boost::any(*planType);
    }
    if (syncCheckpointEnabled) {
      res["syncCheckpointEnabled"] = boost::any(*syncCheckpointEnabled);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSyncCheckpoint") != m.end() && !m["autoSyncCheckpoint"].empty()) {
      autoSyncCheckpoint = make_shared<bool>(boost::any_cast<bool>(m["autoSyncCheckpoint"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["extInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<GetDisasterRecoveryPlanResponseBodyDataInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDisasterRecoveryPlanResponseBodyDataInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<GetDisasterRecoveryPlanResponseBodyDataInstances>>(expect1);
      }
    }
    if (m.find("planDesc") != m.end() && !m["planDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["planDesc"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("planName") != m.end() && !m["planName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["planName"]));
    }
    if (m.find("planStatus") != m.end() && !m["planStatus"].empty()) {
      planStatus = make_shared<string>(boost::any_cast<string>(m["planStatus"]));
    }
    if (m.find("planType") != m.end() && !m["planType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["planType"]));
    }
    if (m.find("syncCheckpointEnabled") != m.end() && !m["syncCheckpointEnabled"].empty()) {
      syncCheckpointEnabled = make_shared<bool>(boost::any_cast<bool>(m["syncCheckpointEnabled"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~GetDisasterRecoveryPlanResponseBodyData() = default;
};
class GetDisasterRecoveryPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetDisasterRecoveryPlanResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDisasterRecoveryPlanResponseBody() {}

  explicit GetDisasterRecoveryPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDisasterRecoveryPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDisasterRecoveryPlanResponseBodyData>(model1);
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


  virtual ~GetDisasterRecoveryPlanResponseBody() = default;
};
class GetDisasterRecoveryPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDisasterRecoveryPlanResponseBody> body{};

  GetDisasterRecoveryPlanResponse() {}

  explicit GetDisasterRecoveryPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDisasterRecoveryPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDisasterRecoveryPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetDisasterRecoveryPlanResponse() = default;
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
  shared_ptr<vector<string>> aclTypes{};
  shared_ptr<bool> defaultVpcAuthFree{};

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
    if (aclTypes) {
      res["aclTypes"] = boost::any(*aclTypes);
    }
    if (defaultVpcAuthFree) {
      res["defaultVpcAuthFree"] = boost::any(*defaultVpcAuthFree);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aclType") != m.end() && !m["aclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["aclType"]));
    }
    if (m.find("aclTypes") != m.end() && !m["aclTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["aclTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aclTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("defaultVpcAuthFree") != m.end() && !m["defaultVpcAuthFree"].empty()) {
      defaultVpcAuthFree = make_shared<bool>(boost::any_cast<bool>(m["defaultVpcAuthFree"]));
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
  shared_ptr<vector<string>> ipWhitelist{};

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
class GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches() {}

  explicit GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches() = default;
};
class GetInstanceResponseBodyDataNetworkInfoVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupIds{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<vector<GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches>> vSwitches{};
  shared_ptr<string> vpcId{};

  GetInstanceResponseBodyDataNetworkInfoVpcInfo() {}

  explicit GetInstanceResponseBodyDataNetworkInfoVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupIds) {
      res["securityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vSwitches"] = boost::any(temp1);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupIds") != m.end() && !m["securityGroupIds"].empty()) {
      securityGroupIds = make_shared<string>(boost::any_cast<string>(m["securityGroupIds"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vSwitches") != m.end() && !m["vSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["vSwitches"].type()) {
        vector<GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<GetInstanceResponseBodyDataNetworkInfoVpcInfoVSwitches>>(expect1);
      }
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
  shared_ptr<bool> storageEncryption{};
  shared_ptr<string> storageSecretKey{};
  shared_ptr<bool> supportAutoScaling{};
  shared_ptr<bool> traceOn{};

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
    if (storageEncryption) {
      res["storageEncryption"] = boost::any(*storageEncryption);
    }
    if (storageSecretKey) {
      res["storageSecretKey"] = boost::any(*storageSecretKey);
    }
    if (supportAutoScaling) {
      res["supportAutoScaling"] = boost::any(*supportAutoScaling);
    }
    if (traceOn) {
      res["traceOn"] = boost::any(*traceOn);
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
    if (m.find("storageEncryption") != m.end() && !m["storageEncryption"].empty()) {
      storageEncryption = make_shared<bool>(boost::any_cast<bool>(m["storageEncryption"]));
    }
    if (m.find("storageSecretKey") != m.end() && !m["storageSecretKey"].empty()) {
      storageSecretKey = make_shared<string>(boost::any_cast<string>(m["storageSecretKey"]));
    }
    if (m.find("supportAutoScaling") != m.end() && !m["supportAutoScaling"].empty()) {
      supportAutoScaling = make_shared<bool>(boost::any_cast<bool>(m["supportAutoScaling"]));
    }
    if (m.find("traceOn") != m.end() && !m["traceOn"].empty()) {
      traceOn = make_shared<bool>(boost::any_cast<bool>(m["traceOn"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataProductInfo() = default;
};
class GetInstanceResponseBodyDataSoftware : public Darabonba::Model {
public:
  shared_ptr<string> maintainTime{};
  shared_ptr<string> softwareVersion{};
  shared_ptr<string> upgradeMethod{};

  GetInstanceResponseBodyDataSoftware() {}

  explicit GetInstanceResponseBodyDataSoftware(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maintainTime) {
      res["maintainTime"] = boost::any(*maintainTime);
    }
    if (softwareVersion) {
      res["softwareVersion"] = boost::any(*softwareVersion);
    }
    if (upgradeMethod) {
      res["upgradeMethod"] = boost::any(*upgradeMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maintainTime") != m.end() && !m["maintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["maintainTime"]));
    }
    if (m.find("softwareVersion") != m.end() && !m["softwareVersion"].empty()) {
      softwareVersion = make_shared<string>(boost::any_cast<string>(m["softwareVersion"]));
    }
    if (m.find("upgradeMethod") != m.end() && !m["upgradeMethod"].empty()) {
      upgradeMethod = make_shared<string>(boost::any_cast<string>(m["upgradeMethod"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataSoftware() = default;
};
class GetInstanceResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceResponseBodyDataTags() {}

  explicit GetInstanceResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetInstanceResponseBodyDataTags() = default;
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
  shared_ptr<long> groupCount{};
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
  shared_ptr<GetInstanceResponseBodyDataSoftware> software{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subSeriesCode{};
  shared_ptr<vector<GetInstanceResponseBodyDataTags>> tags{};
  shared_ptr<long> topicCount{};
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
    if (groupCount) {
      res["groupCount"] = boost::any(*groupCount);
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
    if (software) {
      res["software"] = software ? boost::any(software->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
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
    if (m.find("groupCount") != m.end() && !m["groupCount"].empty()) {
      groupCount = make_shared<long>(boost::any_cast<long>(m["groupCount"]));
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
    if (m.find("software") != m.end() && !m["software"].empty()) {
      if (typeid(map<string, boost::any>) == m["software"].type()) {
        GetInstanceResponseBodyDataSoftware model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["software"]));
        software = make_shared<GetInstanceResponseBodyDataSoftware>(model1);
      }
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
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<GetInstanceResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetInstanceResponseBodyDataTags>>(expect1);
      }
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetInstanceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> username{};

  GetInstanceAccountRequest() {}

  explicit GetInstanceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceAccountRequest() = default;
};
class GetInstanceAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  GetInstanceAccountResponseBodyData() {}

  explicit GetInstanceAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["accountStatus"] = boost::any(*accountStatus);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountStatus") != m.end() && !m["accountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["accountStatus"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetInstanceAccountResponseBodyData() = default;
};
class GetInstanceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetInstanceAccountResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceAccountResponseBody() {}

  explicit GetInstanceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetInstanceAccountResponseBodyData>(model1);
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


  virtual ~GetInstanceAccountResponseBody() = default;
};
class GetInstanceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceAccountResponseBody> body{};

  GetInstanceAccountResponse() {}

  explicit GetInstanceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceAccountResponse() = default;
};
class GetInstanceAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  GetInstanceAclRequest() {}

  explicit GetInstanceAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~GetInstanceAclRequest() = default;
};
class GetInstanceAclResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aclType{};
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> decision{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> ipWhitelists{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> username{};

  GetInstanceAclResponseBodyData() {}

  explicit GetInstanceAclResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclType) {
      res["aclType"] = boost::any(*aclType);
    }
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (decision) {
      res["decision"] = boost::any(*decision);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aclType") != m.end() && !m["aclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["aclType"]));
    }
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("decision") != m.end() && !m["decision"].empty()) {
      decision = make_shared<string>(boost::any_cast<string>(m["decision"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetInstanceAclResponseBodyData() = default;
};
class GetInstanceAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetInstanceAclResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceAclResponseBody() {}

  explicit GetInstanceAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceAclResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetInstanceAclResponseBodyData>(model1);
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


  virtual ~GetInstanceAclResponseBody() = default;
};
class GetInstanceAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceAclResponseBody> body{};

  GetInstanceAclResponse() {}

  explicit GetInstanceAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceAclResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceAclResponse() = default;
};
class GetInstanceIpWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipWhitelists{};

  GetInstanceIpWhitelistRequest() {}

  explicit GetInstanceIpWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetInstanceIpWhitelistRequest() = default;
};
class GetInstanceIpWhitelistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipWhitelistsShrink{};

  GetInstanceIpWhitelistShrinkRequest() {}

  explicit GetInstanceIpWhitelistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhitelistsShrink) {
      res["ipWhitelists"] = boost::any(*ipWhitelistsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      ipWhitelistsShrink = make_shared<string>(boost::any_cast<string>(m["ipWhitelists"]));
    }
  }


  virtual ~GetInstanceIpWhitelistShrinkRequest() = default;
};
class GetInstanceIpWhitelistResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> ipWhitelists{};
  shared_ptr<string> regionId{};

  GetInstanceIpWhitelistResponseBodyData() {}

  explicit GetInstanceIpWhitelistResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~GetInstanceIpWhitelistResponseBodyData() = default;
};
class GetInstanceIpWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetInstanceIpWhitelistResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceIpWhitelistResponseBody() {}

  explicit GetInstanceIpWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceIpWhitelistResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetInstanceIpWhitelistResponseBodyData>(model1);
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


  virtual ~GetInstanceIpWhitelistResponseBody() = default;
};
class GetInstanceIpWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceIpWhitelistResponseBody> body{};

  GetInstanceIpWhitelistResponse() {}

  explicit GetInstanceIpWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceIpWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceIpWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceIpWhitelistResponse() = default;
};
class GetMessageDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<long> bodySize{};
  shared_ptr<string> bornHost{};
  shared_ptr<string> bornTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageGroup{};
  shared_ptr<string> messageId{};
  shared_ptr<vector<string>> messageKeys{};
  shared_ptr<string> messageTag{};
  shared_ptr<string> messageType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storeHost{};
  shared_ptr<string> storeTime{};
  shared_ptr<map<string, string>> systemProperties{};
  shared_ptr<string> topicName{};
  shared_ptr<map<string, string>> userProperties{};

  GetMessageDetailResponseBodyData() {}

  explicit GetMessageDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (bodySize) {
      res["bodySize"] = boost::any(*bodySize);
    }
    if (bornHost) {
      res["bornHost"] = boost::any(*bornHost);
    }
    if (bornTime) {
      res["bornTime"] = boost::any(*bornTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (messageGroup) {
      res["messageGroup"] = boost::any(*messageGroup);
    }
    if (messageId) {
      res["messageId"] = boost::any(*messageId);
    }
    if (messageKeys) {
      res["messageKeys"] = boost::any(*messageKeys);
    }
    if (messageTag) {
      res["messageTag"] = boost::any(*messageTag);
    }
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (storeHost) {
      res["storeHost"] = boost::any(*storeHost);
    }
    if (storeTime) {
      res["storeTime"] = boost::any(*storeTime);
    }
    if (systemProperties) {
      res["systemProperties"] = boost::any(*systemProperties);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    if (userProperties) {
      res["userProperties"] = boost::any(*userProperties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("bodySize") != m.end() && !m["bodySize"].empty()) {
      bodySize = make_shared<long>(boost::any_cast<long>(m["bodySize"]));
    }
    if (m.find("bornHost") != m.end() && !m["bornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["bornHost"]));
    }
    if (m.find("bornTime") != m.end() && !m["bornTime"].empty()) {
      bornTime = make_shared<string>(boost::any_cast<string>(m["bornTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("messageGroup") != m.end() && !m["messageGroup"].empty()) {
      messageGroup = make_shared<string>(boost::any_cast<string>(m["messageGroup"]));
    }
    if (m.find("messageId") != m.end() && !m["messageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["messageId"]));
    }
    if (m.find("messageKeys") != m.end() && !m["messageKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["messageKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["messageKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("messageTag") != m.end() && !m["messageTag"].empty()) {
      messageTag = make_shared<string>(boost::any_cast<string>(m["messageTag"]));
    }
    if (m.find("messageType") != m.end() && !m["messageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["messageType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("storeHost") != m.end() && !m["storeHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["storeHost"]));
    }
    if (m.find("storeTime") != m.end() && !m["storeTime"].empty()) {
      storeTime = make_shared<string>(boost::any_cast<string>(m["storeTime"]));
    }
    if (m.find("systemProperties") != m.end() && !m["systemProperties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["systemProperties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      systemProperties = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
    if (m.find("userProperties") != m.end() && !m["userProperties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["userProperties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userProperties = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetMessageDetailResponseBodyData() = default;
};
class GetMessageDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMessageDetailResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMessageDetailResponseBody() {}

  explicit GetMessageDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMessageDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMessageDetailResponseBodyData>(model1);
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


  virtual ~GetMessageDetailResponseBody() = default;
};
class GetMessageDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMessageDetailResponseBody> body{};

  GetMessageDetailResponse() {}

  explicit GetMessageDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMessageDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMessageDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetMessageDetailResponse() = default;
};
class GetTopicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxSendTps{};
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
    if (maxSendTps) {
      res["maxSendTps"] = boost::any(*maxSendTps);
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
    if (m.find("maxSendTps") != m.end() && !m["maxSendTps"].empty()) {
      maxSendTps = make_shared<long>(boost::any_cast<long>(m["maxSendTps"]));
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
        GetTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicResponse() = default;
};
class GetTraceResponseBodyDataBrokerInfoOperations : public Darabonba::Model {
public:
  shared_ptr<string> operateTime{};
  shared_ptr<string> operateType{};

  GetTraceResponseBodyDataBrokerInfoOperations() {}

  explicit GetTraceResponseBodyDataBrokerInfoOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateTime) {
      res["operateTime"] = boost::any(*operateTime);
    }
    if (operateType) {
      res["operateType"] = boost::any(*operateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operateTime") != m.end() && !m["operateTime"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["operateTime"]));
    }
    if (m.find("operateType") != m.end() && !m["operateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["operateType"]));
    }
  }


  virtual ~GetTraceResponseBodyDataBrokerInfoOperations() = default;
};
class GetTraceResponseBodyDataBrokerInfo : public Darabonba::Model {
public:
  shared_ptr<string> delayStatus{};
  shared_ptr<vector<GetTraceResponseBodyDataBrokerInfoOperations>> operations{};
  shared_ptr<string> presetDelayTime{};
  shared_ptr<string> recallResult{};

  GetTraceResponseBodyDataBrokerInfo() {}

  explicit GetTraceResponseBodyDataBrokerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delayStatus) {
      res["delayStatus"] = boost::any(*delayStatus);
    }
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    if (presetDelayTime) {
      res["presetDelayTime"] = boost::any(*presetDelayTime);
    }
    if (recallResult) {
      res["recallResult"] = boost::any(*recallResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("delayStatus") != m.end() && !m["delayStatus"].empty()) {
      delayStatus = make_shared<string>(boost::any_cast<string>(m["delayStatus"]));
    }
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<GetTraceResponseBodyDataBrokerInfoOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodyDataBrokerInfoOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<GetTraceResponseBodyDataBrokerInfoOperations>>(expect1);
      }
    }
    if (m.find("presetDelayTime") != m.end() && !m["presetDelayTime"].empty()) {
      presetDelayTime = make_shared<string>(boost::any_cast<string>(m["presetDelayTime"]));
    }
    if (m.find("recallResult") != m.end() && !m["recallResult"].empty()) {
      recallResult = make_shared<string>(boost::any_cast<string>(m["recallResult"]));
    }
  }


  virtual ~GetTraceResponseBodyDataBrokerInfo() = default;
};
class GetTraceResponseBodyDataConsumerInfosDeadLetterInfo : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> toDlqTime{};
  shared_ptr<string> topicName{};

  GetTraceResponseBodyDataConsumerInfosDeadLetterInfo() {}

  explicit GetTraceResponseBodyDataConsumerInfosDeadLetterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["messageId"] = boost::any(*messageId);
    }
    if (toDlqTime) {
      res["toDlqTime"] = boost::any(*toDlqTime);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("messageId") != m.end() && !m["messageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["messageId"]));
    }
    if (m.find("toDlqTime") != m.end() && !m["toDlqTime"].empty()) {
      toDlqTime = make_shared<string>(boost::any_cast<string>(m["toDlqTime"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~GetTraceResponseBodyDataConsumerInfosDeadLetterInfo() = default;
};
class GetTraceResponseBodyDataConsumerInfosRecordsOperations : public Darabonba::Model {
public:
  shared_ptr<bool> deadMessage{};
  shared_ptr<long> invisibleTime{};
  shared_ptr<string> operateTime{};
  shared_ptr<string> operateType{};

  GetTraceResponseBodyDataConsumerInfosRecordsOperations() {}

  explicit GetTraceResponseBodyDataConsumerInfosRecordsOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deadMessage) {
      res["deadMessage"] = boost::any(*deadMessage);
    }
    if (invisibleTime) {
      res["invisibleTime"] = boost::any(*invisibleTime);
    }
    if (operateTime) {
      res["operateTime"] = boost::any(*operateTime);
    }
    if (operateType) {
      res["operateType"] = boost::any(*operateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deadMessage") != m.end() && !m["deadMessage"].empty()) {
      deadMessage = make_shared<bool>(boost::any_cast<bool>(m["deadMessage"]));
    }
    if (m.find("invisibleTime") != m.end() && !m["invisibleTime"].empty()) {
      invisibleTime = make_shared<long>(boost::any_cast<long>(m["invisibleTime"]));
    }
    if (m.find("operateTime") != m.end() && !m["operateTime"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["operateTime"]));
    }
    if (m.find("operateType") != m.end() && !m["operateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["operateType"]));
    }
  }


  virtual ~GetTraceResponseBodyDataConsumerInfosRecordsOperations() = default;
};
class GetTraceResponseBodyDataConsumerInfosRecords : public Darabonba::Model {
public:
  shared_ptr<string> clientHost{};
  shared_ptr<string> consumeStatus{};
  shared_ptr<bool> fifoEnable{};
  shared_ptr<vector<GetTraceResponseBodyDataConsumerInfosRecordsOperations>> operations{};
  shared_ptr<string> popCk{};
  shared_ptr<string> userName{};

  GetTraceResponseBodyDataConsumerInfosRecords() {}

  explicit GetTraceResponseBodyDataConsumerInfosRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientHost) {
      res["clientHost"] = boost::any(*clientHost);
    }
    if (consumeStatus) {
      res["consumeStatus"] = boost::any(*consumeStatus);
    }
    if (fifoEnable) {
      res["fifoEnable"] = boost::any(*fifoEnable);
    }
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    if (popCk) {
      res["popCk"] = boost::any(*popCk);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientHost") != m.end() && !m["clientHost"].empty()) {
      clientHost = make_shared<string>(boost::any_cast<string>(m["clientHost"]));
    }
    if (m.find("consumeStatus") != m.end() && !m["consumeStatus"].empty()) {
      consumeStatus = make_shared<string>(boost::any_cast<string>(m["consumeStatus"]));
    }
    if (m.find("fifoEnable") != m.end() && !m["fifoEnable"].empty()) {
      fifoEnable = make_shared<bool>(boost::any_cast<bool>(m["fifoEnable"]));
    }
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<GetTraceResponseBodyDataConsumerInfosRecordsOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodyDataConsumerInfosRecordsOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<GetTraceResponseBodyDataConsumerInfosRecordsOperations>>(expect1);
      }
    }
    if (m.find("popCk") != m.end() && !m["popCk"].empty()) {
      popCk = make_shared<string>(boost::any_cast<string>(m["popCk"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
  }


  virtual ~GetTraceResponseBodyDataConsumerInfosRecords() = default;
};
class GetTraceResponseBodyDataConsumerInfos : public Darabonba::Model {
public:
  shared_ptr<string> consumeStatus{};
  shared_ptr<string> consumerGroupId{};
  shared_ptr<GetTraceResponseBodyDataConsumerInfosDeadLetterInfo> deadLetterInfo{};
  shared_ptr<bool> deadMessage{};
  shared_ptr<vector<GetTraceResponseBodyDataConsumerInfosRecords>> records{};

  GetTraceResponseBodyDataConsumerInfos() {}

  explicit GetTraceResponseBodyDataConsumerInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeStatus) {
      res["consumeStatus"] = boost::any(*consumeStatus);
    }
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (deadLetterInfo) {
      res["deadLetterInfo"] = deadLetterInfo ? boost::any(deadLetterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deadMessage) {
      res["deadMessage"] = boost::any(*deadMessage);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumeStatus") != m.end() && !m["consumeStatus"].empty()) {
      consumeStatus = make_shared<string>(boost::any_cast<string>(m["consumeStatus"]));
    }
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("deadLetterInfo") != m.end() && !m["deadLetterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["deadLetterInfo"].type()) {
        GetTraceResponseBodyDataConsumerInfosDeadLetterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deadLetterInfo"]));
        deadLetterInfo = make_shared<GetTraceResponseBodyDataConsumerInfosDeadLetterInfo>(model1);
      }
    }
    if (m.find("deadMessage") != m.end() && !m["deadMessage"].empty()) {
      deadMessage = make_shared<bool>(boost::any_cast<bool>(m["deadMessage"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetTraceResponseBodyDataConsumerInfosRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodyDataConsumerInfosRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetTraceResponseBodyDataConsumerInfosRecords>>(expect1);
      }
    }
  }


  virtual ~GetTraceResponseBodyDataConsumerInfos() = default;
};
class GetTraceResponseBodyDataMessageInfo : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> bornHost{};
  shared_ptr<string> bornTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageGroup{};
  shared_ptr<string> messageId{};
  shared_ptr<vector<string>> messageKeys{};
  shared_ptr<string> messageTag{};
  shared_ptr<string> messageType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storeHost{};
  shared_ptr<string> storeTime{};
  shared_ptr<string> topicName{};
  shared_ptr<string> transactionId{};
  shared_ptr<map<string, string>> userProperties{};

  GetTraceResponseBodyDataMessageInfo() {}

  explicit GetTraceResponseBodyDataMessageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (bornHost) {
      res["bornHost"] = boost::any(*bornHost);
    }
    if (bornTime) {
      res["bornTime"] = boost::any(*bornTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (messageGroup) {
      res["messageGroup"] = boost::any(*messageGroup);
    }
    if (messageId) {
      res["messageId"] = boost::any(*messageId);
    }
    if (messageKeys) {
      res["messageKeys"] = boost::any(*messageKeys);
    }
    if (messageTag) {
      res["messageTag"] = boost::any(*messageTag);
    }
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (storeHost) {
      res["storeHost"] = boost::any(*storeHost);
    }
    if (storeTime) {
      res["storeTime"] = boost::any(*storeTime);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    if (transactionId) {
      res["transactionId"] = boost::any(*transactionId);
    }
    if (userProperties) {
      res["userProperties"] = boost::any(*userProperties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("bornHost") != m.end() && !m["bornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["bornHost"]));
    }
    if (m.find("bornTime") != m.end() && !m["bornTime"].empty()) {
      bornTime = make_shared<string>(boost::any_cast<string>(m["bornTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("messageGroup") != m.end() && !m["messageGroup"].empty()) {
      messageGroup = make_shared<string>(boost::any_cast<string>(m["messageGroup"]));
    }
    if (m.find("messageId") != m.end() && !m["messageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["messageId"]));
    }
    if (m.find("messageKeys") != m.end() && !m["messageKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["messageKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["messageKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("messageTag") != m.end() && !m["messageTag"].empty()) {
      messageTag = make_shared<string>(boost::any_cast<string>(m["messageTag"]));
    }
    if (m.find("messageType") != m.end() && !m["messageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["messageType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("storeHost") != m.end() && !m["storeHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["storeHost"]));
    }
    if (m.find("storeTime") != m.end() && !m["storeTime"].empty()) {
      storeTime = make_shared<string>(boost::any_cast<string>(m["storeTime"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
    if (m.find("transactionId") != m.end() && !m["transactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["transactionId"]));
    }
    if (m.find("userProperties") != m.end() && !m["userProperties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["userProperties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userProperties = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetTraceResponseBodyDataMessageInfo() = default;
};
class GetTraceResponseBodyDataProducerInfoRecords : public Darabonba::Model {
public:
  shared_ptr<string> arriveTime{};
  shared_ptr<string> clientHost{};
  shared_ptr<string> dlqOriginMessageId{};
  shared_ptr<string> dlqOriginTopic{};
  shared_ptr<string> messageSource{};
  shared_ptr<long> produceDuration{};
  shared_ptr<string> produceStatus{};
  shared_ptr<string> produceTime{};
  shared_ptr<string> recallTime{};
  shared_ptr<string> userName{};

  GetTraceResponseBodyDataProducerInfoRecords() {}

  explicit GetTraceResponseBodyDataProducerInfoRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arriveTime) {
      res["arriveTime"] = boost::any(*arriveTime);
    }
    if (clientHost) {
      res["clientHost"] = boost::any(*clientHost);
    }
    if (dlqOriginMessageId) {
      res["dlqOriginMessageId"] = boost::any(*dlqOriginMessageId);
    }
    if (dlqOriginTopic) {
      res["dlqOriginTopic"] = boost::any(*dlqOriginTopic);
    }
    if (messageSource) {
      res["messageSource"] = boost::any(*messageSource);
    }
    if (produceDuration) {
      res["produceDuration"] = boost::any(*produceDuration);
    }
    if (produceStatus) {
      res["produceStatus"] = boost::any(*produceStatus);
    }
    if (produceTime) {
      res["produceTime"] = boost::any(*produceTime);
    }
    if (recallTime) {
      res["recallTime"] = boost::any(*recallTime);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arriveTime") != m.end() && !m["arriveTime"].empty()) {
      arriveTime = make_shared<string>(boost::any_cast<string>(m["arriveTime"]));
    }
    if (m.find("clientHost") != m.end() && !m["clientHost"].empty()) {
      clientHost = make_shared<string>(boost::any_cast<string>(m["clientHost"]));
    }
    if (m.find("dlqOriginMessageId") != m.end() && !m["dlqOriginMessageId"].empty()) {
      dlqOriginMessageId = make_shared<string>(boost::any_cast<string>(m["dlqOriginMessageId"]));
    }
    if (m.find("dlqOriginTopic") != m.end() && !m["dlqOriginTopic"].empty()) {
      dlqOriginTopic = make_shared<string>(boost::any_cast<string>(m["dlqOriginTopic"]));
    }
    if (m.find("messageSource") != m.end() && !m["messageSource"].empty()) {
      messageSource = make_shared<string>(boost::any_cast<string>(m["messageSource"]));
    }
    if (m.find("produceDuration") != m.end() && !m["produceDuration"].empty()) {
      produceDuration = make_shared<long>(boost::any_cast<long>(m["produceDuration"]));
    }
    if (m.find("produceStatus") != m.end() && !m["produceStatus"].empty()) {
      produceStatus = make_shared<string>(boost::any_cast<string>(m["produceStatus"]));
    }
    if (m.find("produceTime") != m.end() && !m["produceTime"].empty()) {
      produceTime = make_shared<string>(boost::any_cast<string>(m["produceTime"]));
    }
    if (m.find("recallTime") != m.end() && !m["recallTime"].empty()) {
      recallTime = make_shared<string>(boost::any_cast<string>(m["recallTime"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
  }


  virtual ~GetTraceResponseBodyDataProducerInfoRecords() = default;
};
class GetTraceResponseBodyDataProducerInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetTraceResponseBodyDataProducerInfoRecords>> records{};

  GetTraceResponseBodyDataProducerInfo() {}

  explicit GetTraceResponseBodyDataProducerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetTraceResponseBodyDataProducerInfoRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodyDataProducerInfoRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetTraceResponseBodyDataProducerInfoRecords>>(expect1);
      }
    }
  }


  virtual ~GetTraceResponseBodyDataProducerInfo() = default;
};
class GetTraceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetTraceResponseBodyDataBrokerInfo> brokerInfo{};
  shared_ptr<vector<GetTraceResponseBodyDataConsumerInfos>> consumerInfos{};
  shared_ptr<string> instanceId{};
  shared_ptr<GetTraceResponseBodyDataMessageInfo> messageInfo{};
  shared_ptr<GetTraceResponseBodyDataProducerInfo> producerInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  GetTraceResponseBodyData() {}

  explicit GetTraceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerInfo) {
      res["brokerInfo"] = brokerInfo ? boost::any(brokerInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (consumerInfos) {
      vector<boost::any> temp1;
      for(auto item1:*consumerInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["consumerInfos"] = boost::any(temp1);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (messageInfo) {
      res["messageInfo"] = messageInfo ? boost::any(messageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (producerInfo) {
      res["producerInfo"] = producerInfo ? boost::any(producerInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("brokerInfo") != m.end() && !m["brokerInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["brokerInfo"].type()) {
        GetTraceResponseBodyDataBrokerInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["brokerInfo"]));
        brokerInfo = make_shared<GetTraceResponseBodyDataBrokerInfo>(model1);
      }
    }
    if (m.find("consumerInfos") != m.end() && !m["consumerInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["consumerInfos"].type()) {
        vector<GetTraceResponseBodyDataConsumerInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["consumerInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodyDataConsumerInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        consumerInfos = make_shared<vector<GetTraceResponseBodyDataConsumerInfos>>(expect1);
      }
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("messageInfo") != m.end() && !m["messageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["messageInfo"].type()) {
        GetTraceResponseBodyDataMessageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["messageInfo"]));
        messageInfo = make_shared<GetTraceResponseBodyDataMessageInfo>(model1);
      }
    }
    if (m.find("producerInfo") != m.end() && !m["producerInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["producerInfo"].type()) {
        GetTraceResponseBodyDataProducerInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["producerInfo"]));
        producerInfo = make_shared<GetTraceResponseBodyDataProducerInfo>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~GetTraceResponseBodyData() = default;
};
class GetTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTraceResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTraceResponseBody() {}

  explicit GetTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTraceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTraceResponseBodyData>(model1);
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


  virtual ~GetTraceResponseBody() = default;
};
class GetTraceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTraceResponseBody> body{};

  GetTraceResponse() {}

  explicit GetTraceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTraceResponseBody>(model1);
      }
    }
  }


  virtual ~GetTraceResponse() = default;
};
class ListAvailableZonesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};

  ListAvailableZonesResponseBodyData() {}

  explicit ListAvailableZonesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["zoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
    if (m.find("zoneName") != m.end() && !m["zoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["zoneName"]));
    }
  }


  virtual ~ListAvailableZonesResponseBodyData() = default;
};
class ListAvailableZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListAvailableZonesResponseBodyData>> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAvailableZonesResponseBody() {}

  explicit ListAvailableZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListAvailableZonesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableZonesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAvailableZonesResponseBodyData>>(expect1);
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


  virtual ~ListAvailableZonesResponseBody() = default;
};
class ListAvailableZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAvailableZonesResponseBody> body{};

  ListAvailableZonesResponse() {}

  explicit ListAvailableZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAvailableZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableZonesResponse() = default;
};
class ListConsumerConnectionsResponseBodyDataConnections : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> egressIp{};
  shared_ptr<string> hostname{};
  shared_ptr<string> language{};
  shared_ptr<string> messageModel{};
  shared_ptr<string> version{};

  ListConsumerConnectionsResponseBodyDataConnections() {}

  explicit ListConsumerConnectionsResponseBodyDataConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["clientId"] = boost::any(*clientId);
    }
    if (egressIp) {
      res["egressIp"] = boost::any(*egressIp);
    }
    if (hostname) {
      res["hostname"] = boost::any(*hostname);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (messageModel) {
      res["messageModel"] = boost::any(*messageModel);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientId") != m.end() && !m["clientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["clientId"]));
    }
    if (m.find("egressIp") != m.end() && !m["egressIp"].empty()) {
      egressIp = make_shared<string>(boost::any_cast<string>(m["egressIp"]));
    }
    if (m.find("hostname") != m.end() && !m["hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["hostname"]));
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("messageModel") != m.end() && !m["messageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["messageModel"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListConsumerConnectionsResponseBodyDataConnections() = default;
};
class ListConsumerConnectionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListConsumerConnectionsResponseBodyDataConnections>> connections{};
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  ListConsumerConnectionsResponseBodyData() {}

  explicit ListConsumerConnectionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      vector<boost::any> temp1;
      for(auto item1:*connections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["connections"] = boost::any(temp1);
    }
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("connections") != m.end() && !m["connections"].empty()) {
      if (typeid(vector<boost::any>) == m["connections"].type()) {
        vector<ListConsumerConnectionsResponseBodyDataConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["connections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConsumerConnectionsResponseBodyDataConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connections = make_shared<vector<ListConsumerConnectionsResponseBodyDataConnections>>(expect1);
      }
    }
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListConsumerConnectionsResponseBodyData() = default;
};
class ListConsumerConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListConsumerConnectionsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListConsumerConnectionsResponseBody() {}

  explicit ListConsumerConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConsumerConnectionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListConsumerConnectionsResponseBodyData>(model1);
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


  virtual ~ListConsumerConnectionsResponseBody() = default;
};
class ListConsumerConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConsumerConnectionsResponseBody> body{};

  ListConsumerConnectionsResponse() {}

  explicit ListConsumerConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConsumerConnectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConsumerConnectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConsumerConnectionsResponse() = default;
};
class ListConsumerGroupSubscriptionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> topicName{};

  ListConsumerGroupSubscriptionsRequest() {}

  explicit ListConsumerGroupSubscriptionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListConsumerGroupSubscriptionsRequest() = default;
};
class ListConsumerGroupSubscriptionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> consistency{};
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> filterExpression{};
  shared_ptr<string> filterExpressionType{};
  shared_ptr<string> messageModel{};
  shared_ptr<string> subscriptionStatus{};
  shared_ptr<bool> topicCreated{};
  shared_ptr<string> topicName{};

  ListConsumerGroupSubscriptionsResponseBodyData() {}

  explicit ListConsumerGroupSubscriptionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consistency) {
      res["consistency"] = boost::any(*consistency);
    }
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (filterExpression) {
      res["filterExpression"] = boost::any(*filterExpression);
    }
    if (filterExpressionType) {
      res["filterExpressionType"] = boost::any(*filterExpressionType);
    }
    if (messageModel) {
      res["messageModel"] = boost::any(*messageModel);
    }
    if (subscriptionStatus) {
      res["subscriptionStatus"] = boost::any(*subscriptionStatus);
    }
    if (topicCreated) {
      res["topicCreated"] = boost::any(*topicCreated);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consistency") != m.end() && !m["consistency"].empty()) {
      consistency = make_shared<bool>(boost::any_cast<bool>(m["consistency"]));
    }
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("filterExpression") != m.end() && !m["filterExpression"].empty()) {
      filterExpression = make_shared<string>(boost::any_cast<string>(m["filterExpression"]));
    }
    if (m.find("filterExpressionType") != m.end() && !m["filterExpressionType"].empty()) {
      filterExpressionType = make_shared<string>(boost::any_cast<string>(m["filterExpressionType"]));
    }
    if (m.find("messageModel") != m.end() && !m["messageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["messageModel"]));
    }
    if (m.find("subscriptionStatus") != m.end() && !m["subscriptionStatus"].empty()) {
      subscriptionStatus = make_shared<string>(boost::any_cast<string>(m["subscriptionStatus"]));
    }
    if (m.find("topicCreated") != m.end() && !m["topicCreated"].empty()) {
      topicCreated = make_shared<bool>(boost::any_cast<bool>(m["topicCreated"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListConsumerGroupSubscriptionsResponseBodyData() = default;
};
class ListConsumerGroupSubscriptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListConsumerGroupSubscriptionsResponseBodyData>> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListConsumerGroupSubscriptionsResponseBody() {}

  explicit ListConsumerGroupSubscriptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListConsumerGroupSubscriptionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConsumerGroupSubscriptionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListConsumerGroupSubscriptionsResponseBodyData>>(expect1);
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


  virtual ~ListConsumerGroupSubscriptionsResponseBody() = default;
};
class ListConsumerGroupSubscriptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConsumerGroupSubscriptionsResponseBody> body{};

  ListConsumerGroupSubscriptionsResponse() {}

  explicit ListConsumerGroupSubscriptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConsumerGroupSubscriptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConsumerGroupSubscriptionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConsumerGroupSubscriptionsResponse() = default;
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
  shared_ptr<long> maxReceiveTps{};
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
    if (maxReceiveTps) {
      res["maxReceiveTps"] = boost::any(*maxReceiveTps);
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
    if (m.find("maxReceiveTps") != m.end() && !m["maxReceiveTps"].empty()) {
      maxReceiveTps = make_shared<long>(boost::any_cast<long>(m["maxReceiveTps"]));
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
        ListConsumerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConsumerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConsumerGroupsResponse() = default;
};
class ListDisasterRecoveryCheckpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDisasterRecoveryCheckpointsRequest() {}

  explicit ListDisasterRecoveryCheckpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
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
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListDisasterRecoveryCheckpointsRequest() = default;
};
class ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData : public Darabonba::Model {
public:
  shared_ptr<long> consumeTimestamp{};

  ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData() {}

  explicit ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeTimestamp) {
      res["consumeTimestamp"] = boost::any(*consumeTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumeTimestamp") != m.end() && !m["consumeTimestamp"].empty()) {
      consumeTimestamp = make_shared<long>(boost::any_cast<long>(m["consumeTimestamp"]));
    }
  }


  virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData() = default;
};
class ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> lastFetchTime{};
  shared_ptr<ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData> progressData{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress() {}

  explicit ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (lastFetchTime) {
      res["lastFetchTime"] = boost::any(*lastFetchTime);
    }
    if (progressData) {
      res["progressData"] = progressData ? boost::any(progressData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("lastFetchTime") != m.end() && !m["lastFetchTime"].empty()) {
      lastFetchTime = make_shared<long>(boost::any_cast<long>(m["lastFetchTime"]));
    }
    if (m.find("progressData") != m.end() && !m["progressData"].empty()) {
      if (typeid(map<string, boost::any>) == m["progressData"].type()) {
        ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["progressData"]));
        progressData = make_shared<ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress() = default;
};
class ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgressProgressData : public Darabonba::Model {
public:
  shared_ptr<long> consumeTimestamp{};

  ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgressProgressData() {}

  explicit ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgressProgressData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeTimestamp) {
      res["consumeTimestamp"] = boost::any(*consumeTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumeTimestamp") != m.end() && !m["consumeTimestamp"].empty()) {
      consumeTimestamp = make_shared<long>(boost::any_cast<long>(m["consumeTimestamp"]));
    }
  }


  virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgressProgressData() = default;
};
class ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> lastFetchTime{};
  shared_ptr<ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgressProgressData> progressData{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress() {}

  explicit ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (lastFetchTime) {
      res["lastFetchTime"] = boost::any(*lastFetchTime);
    }
    if (progressData) {
      res["progressData"] = progressData ? boost::any(progressData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("lastFetchTime") != m.end() && !m["lastFetchTime"].empty()) {
      lastFetchTime = make_shared<long>(boost::any_cast<long>(m["lastFetchTime"]));
    }
    if (m.find("progressData") != m.end() && !m["progressData"].empty()) {
      if (typeid(map<string, boost::any>) == m["progressData"].type()) {
        ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgressProgressData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["progressData"]));
        progressData = make_shared<ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgressProgressData>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress() = default;
};
class ListDisasterRecoveryCheckpointsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> checkpointId{};
  shared_ptr<long> itemId{};
  shared_ptr<long> lastSyncTime{};
  shared_ptr<long> planId{};
  shared_ptr<ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress> sourceProgress{};
  shared_ptr<ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress> targetProgress{};

  ListDisasterRecoveryCheckpointsResponseBodyDataList() {}

  explicit ListDisasterRecoveryCheckpointsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkpointId) {
      res["checkpointId"] = boost::any(*checkpointId);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (lastSyncTime) {
      res["lastSyncTime"] = boost::any(*lastSyncTime);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (sourceProgress) {
      res["sourceProgress"] = sourceProgress ? boost::any(sourceProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetProgress) {
      res["targetProgress"] = targetProgress ? boost::any(targetProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkpointId") != m.end() && !m["checkpointId"].empty()) {
      checkpointId = make_shared<long>(boost::any_cast<long>(m["checkpointId"]));
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["itemId"]));
    }
    if (m.find("lastSyncTime") != m.end() && !m["lastSyncTime"].empty()) {
      lastSyncTime = make_shared<long>(boost::any_cast<long>(m["lastSyncTime"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("sourceProgress") != m.end() && !m["sourceProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceProgress"].type()) {
        ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceProgress"]));
        sourceProgress = make_shared<ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress>(model1);
      }
    }
    if (m.find("targetProgress") != m.end() && !m["targetProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["targetProgress"].type()) {
        ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["targetProgress"]));
        targetProgress = make_shared<ListDisasterRecoveryCheckpointsResponseBodyDataListTargetProgress>(model1);
      }
    }
  }


  virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataList() = default;
};
class ListDisasterRecoveryCheckpointsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDisasterRecoveryCheckpointsResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListDisasterRecoveryCheckpointsResponseBodyData() {}

  explicit ListDisasterRecoveryCheckpointsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListDisasterRecoveryCheckpointsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDisasterRecoveryCheckpointsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListDisasterRecoveryCheckpointsResponseBodyDataList>>(expect1);
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


  virtual ~ListDisasterRecoveryCheckpointsResponseBodyData() = default;
};
class ListDisasterRecoveryCheckpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDisasterRecoveryCheckpointsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDisasterRecoveryCheckpointsResponseBody() {}

  explicit ListDisasterRecoveryCheckpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDisasterRecoveryCheckpointsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListDisasterRecoveryCheckpointsResponseBodyData>(model1);
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


  virtual ~ListDisasterRecoveryCheckpointsResponseBody() = default;
};
class ListDisasterRecoveryCheckpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDisasterRecoveryCheckpointsResponseBody> body{};

  ListDisasterRecoveryCheckpointsResponse() {}

  explicit ListDisasterRecoveryCheckpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDisasterRecoveryCheckpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDisasterRecoveryCheckpointsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDisasterRecoveryCheckpointsResponse() = default;
};
class ListDisasterRecoveryItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> topicName{};

  ListDisasterRecoveryItemsRequest() {}

  explicit ListDisasterRecoveryItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
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
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListDisasterRecoveryItemsRequest() = default;
};
class ListDisasterRecoveryItemsResponseBodyDataListTopics : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  ListDisasterRecoveryItemsResponseBodyDataListTopics() {}

  explicit ListDisasterRecoveryItemsResponseBodyDataListTopics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (deliveryOrderType) {
      res["deliveryOrderType"] = boost::any(*deliveryOrderType);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("deliveryOrderType") != m.end() && !m["deliveryOrderType"].empty()) {
      deliveryOrderType = make_shared<string>(boost::any_cast<string>(m["deliveryOrderType"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListDisasterRecoveryItemsResponseBodyDataListTopics() = default;
};
class ListDisasterRecoveryItemsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemStatus{};
  shared_ptr<long> planId{};
  shared_ptr<vector<ListDisasterRecoveryItemsResponseBodyDataListTopics>> topics{};
  shared_ptr<string> updateTime{};

  ListDisasterRecoveryItemsResponseBodyDataList() {}

  explicit ListDisasterRecoveryItemsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (itemId) {
      res["itemId"] = boost::any(*itemId);
    }
    if (itemStatus) {
      res["itemStatus"] = boost::any(*itemStatus);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (topics) {
      vector<boost::any> temp1;
      for(auto item1:*topics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["topics"] = boost::any(temp1);
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
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["extInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("itemId") != m.end() && !m["itemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["itemId"]));
    }
    if (m.find("itemStatus") != m.end() && !m["itemStatus"].empty()) {
      itemStatus = make_shared<string>(boost::any_cast<string>(m["itemStatus"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("topics") != m.end() && !m["topics"].empty()) {
      if (typeid(vector<boost::any>) == m["topics"].type()) {
        vector<ListDisasterRecoveryItemsResponseBodyDataListTopics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["topics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDisasterRecoveryItemsResponseBodyDataListTopics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topics = make_shared<vector<ListDisasterRecoveryItemsResponseBodyDataListTopics>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListDisasterRecoveryItemsResponseBodyDataList() = default;
};
class ListDisasterRecoveryItemsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDisasterRecoveryItemsResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scrollId{};
  shared_ptr<long> totalCount{};

  ListDisasterRecoveryItemsResponseBodyData() {}

  explicit ListDisasterRecoveryItemsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scrollId) {
      res["scrollId"] = boost::any(*scrollId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListDisasterRecoveryItemsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDisasterRecoveryItemsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListDisasterRecoveryItemsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("scrollId") != m.end() && !m["scrollId"].empty()) {
      scrollId = make_shared<string>(boost::any_cast<string>(m["scrollId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListDisasterRecoveryItemsResponseBodyData() = default;
};
class ListDisasterRecoveryItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListDisasterRecoveryItemsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDisasterRecoveryItemsResponseBody() {}

  explicit ListDisasterRecoveryItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListDisasterRecoveryItemsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListDisasterRecoveryItemsResponseBodyData>(model1);
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


  virtual ~ListDisasterRecoveryItemsResponseBody() = default;
};
class ListDisasterRecoveryItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDisasterRecoveryItemsResponseBody> body{};

  ListDisasterRecoveryItemsResponse() {}

  explicit ListDisasterRecoveryItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDisasterRecoveryItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDisasterRecoveryItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDisasterRecoveryItemsResponse() = default;
};
class ListDisasterRecoveryPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDisasterRecoveryPlansRequest() {}

  explicit ListDisasterRecoveryPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["filter"] = boost::any(*filter);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
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
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListDisasterRecoveryPlansRequest() = default;
};
class ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> propertyKey{};
  shared_ptr<string> propertyValue{};

  ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty() {}

  explicit ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyKey) {
      res["propertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValue) {
      res["propertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("propertyKey") != m.end() && !m["propertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["propertyKey"]));
    }
    if (m.find("propertyValue") != m.end() && !m["propertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["propertyValue"]));
    }
  }


  virtual ~ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty() = default;
};
class ListDisasterRecoveryPlansResponseBodyDataListInstances : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> endpointUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRole{};
  shared_ptr<string> instanceType{};
  shared_ptr<ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty> messageProperty{};
  shared_ptr<string> networkType{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> username{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ListDisasterRecoveryPlansResponseBodyDataListInstances() {}

  explicit ListDisasterRecoveryPlansResponseBodyDataListInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (endpointUrl) {
      res["endpointUrl"] = boost::any(*endpointUrl);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceRole) {
      res["instanceRole"] = boost::any(*instanceRole);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (messageProperty) {
      res["messageProperty"] = messageProperty ? boost::any(messageProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("endpointUrl") != m.end() && !m["endpointUrl"].empty()) {
      endpointUrl = make_shared<string>(boost::any_cast<string>(m["endpointUrl"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceRole") != m.end() && !m["instanceRole"].empty()) {
      instanceRole = make_shared<string>(boost::any_cast<string>(m["instanceRole"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("messageProperty") != m.end() && !m["messageProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["messageProperty"].type()) {
        ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["messageProperty"]));
        messageProperty = make_shared<ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty>(model1);
      }
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ListDisasterRecoveryPlansResponseBodyDataListInstances() = default;
};
class ListDisasterRecoveryPlansResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<bool> autoSyncCheckpoint{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<vector<ListDisasterRecoveryPlansResponseBodyDataListInstances>> instances{};
  shared_ptr<string> planDesc{};
  shared_ptr<long> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> planStatus{};
  shared_ptr<string> planType{};
  shared_ptr<bool> syncCheckpointEnabled{};
  shared_ptr<string> updateTime{};

  ListDisasterRecoveryPlansResponseBodyDataList() {}

  explicit ListDisasterRecoveryPlansResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSyncCheckpoint) {
      res["autoSyncCheckpoint"] = boost::any(*autoSyncCheckpoint);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instances"] = boost::any(temp1);
    }
    if (planDesc) {
      res["planDesc"] = boost::any(*planDesc);
    }
    if (planId) {
      res["planId"] = boost::any(*planId);
    }
    if (planName) {
      res["planName"] = boost::any(*planName);
    }
    if (planStatus) {
      res["planStatus"] = boost::any(*planStatus);
    }
    if (planType) {
      res["planType"] = boost::any(*planType);
    }
    if (syncCheckpointEnabled) {
      res["syncCheckpointEnabled"] = boost::any(*syncCheckpointEnabled);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSyncCheckpoint") != m.end() && !m["autoSyncCheckpoint"].empty()) {
      autoSyncCheckpoint = make_shared<bool>(boost::any_cast<bool>(m["autoSyncCheckpoint"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["extInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<ListDisasterRecoveryPlansResponseBodyDataListInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDisasterRecoveryPlansResponseBodyDataListInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListDisasterRecoveryPlansResponseBodyDataListInstances>>(expect1);
      }
    }
    if (m.find("planDesc") != m.end() && !m["planDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["planDesc"]));
    }
    if (m.find("planId") != m.end() && !m["planId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["planId"]));
    }
    if (m.find("planName") != m.end() && !m["planName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["planName"]));
    }
    if (m.find("planStatus") != m.end() && !m["planStatus"].empty()) {
      planStatus = make_shared<string>(boost::any_cast<string>(m["planStatus"]));
    }
    if (m.find("planType") != m.end() && !m["planType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["planType"]));
    }
    if (m.find("syncCheckpointEnabled") != m.end() && !m["syncCheckpointEnabled"].empty()) {
      syncCheckpointEnabled = make_shared<bool>(boost::any_cast<bool>(m["syncCheckpointEnabled"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListDisasterRecoveryPlansResponseBodyDataList() = default;
};
class ListDisasterRecoveryPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDisasterRecoveryPlansResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scrollId{};
  shared_ptr<long> totalCount{};

  ListDisasterRecoveryPlansResponseBodyData() {}

  explicit ListDisasterRecoveryPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scrollId) {
      res["scrollId"] = boost::any(*scrollId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListDisasterRecoveryPlansResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDisasterRecoveryPlansResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListDisasterRecoveryPlansResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("scrollId") != m.end() && !m["scrollId"].empty()) {
      scrollId = make_shared<string>(boost::any_cast<string>(m["scrollId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListDisasterRecoveryPlansResponseBodyData() = default;
};
class ListDisasterRecoveryPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListDisasterRecoveryPlansResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDisasterRecoveryPlansResponseBody() {}

  explicit ListDisasterRecoveryPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListDisasterRecoveryPlansResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListDisasterRecoveryPlansResponseBodyData>(model1);
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


  virtual ~ListDisasterRecoveryPlansResponseBody() = default;
};
class ListDisasterRecoveryPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDisasterRecoveryPlansResponseBody> body{};

  ListDisasterRecoveryPlansResponse() {}

  explicit ListDisasterRecoveryPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDisasterRecoveryPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDisasterRecoveryPlansResponseBody>(model1);
      }
    }
  }


  virtual ~ListDisasterRecoveryPlansResponse() = default;
};
class ListInstanceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> username{};

  ListInstanceAccountRequest() {}

  explicit ListInstanceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["accountStatus"] = boost::any(*accountStatus);
    }
    if (accountType) {
      res["accountType"] = boost::any(*accountType);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountStatus") != m.end() && !m["accountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["accountStatus"]));
    }
    if (m.find("accountType") != m.end() && !m["accountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["accountType"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ListInstanceAccountRequest() = default;
};
class ListInstanceAccountResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> username{};

  ListInstanceAccountResponseBodyDataList() {}

  explicit ListInstanceAccountResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["accountStatus"] = boost::any(*accountStatus);
    }
    if (accountType) {
      res["accountType"] = boost::any(*accountType);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountStatus") != m.end() && !m["accountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["accountStatus"]));
    }
    if (m.find("accountType") != m.end() && !m["accountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["accountType"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ListInstanceAccountResponseBodyDataList() = default;
};
class ListInstanceAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceAccountResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListInstanceAccountResponseBodyData() {}

  explicit ListInstanceAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListInstanceAccountResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceAccountResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListInstanceAccountResponseBodyDataList>>(expect1);
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


  virtual ~ListInstanceAccountResponseBodyData() = default;
};
class ListInstanceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListInstanceAccountResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListInstanceAccountResponseBody() {}

  explicit ListInstanceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListInstanceAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListInstanceAccountResponseBodyData>(model1);
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


  virtual ~ListInstanceAccountResponseBody() = default;
};
class ListInstanceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceAccountResponseBody> body{};

  ListInstanceAccountResponse() {}

  explicit ListInstanceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceAccountResponse() = default;
};
class ListInstanceAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListInstanceAclRequest() {}

  explicit ListInstanceAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstanceAclRequest() = default;
};
class ListInstanceAclResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> aclType{};
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> decision{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> ipWhitelists{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> username{};

  ListInstanceAclResponseBodyDataList() {}

  explicit ListInstanceAclResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclType) {
      res["aclType"] = boost::any(*aclType);
    }
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (decision) {
      res["decision"] = boost::any(*decision);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aclType") != m.end() && !m["aclType"].empty()) {
      aclType = make_shared<string>(boost::any_cast<string>(m["aclType"]));
    }
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("decision") != m.end() && !m["decision"].empty()) {
      decision = make_shared<string>(boost::any_cast<string>(m["decision"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ListInstanceAclResponseBodyDataList() = default;
};
class ListInstanceAclResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceAclResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListInstanceAclResponseBodyData() {}

  explicit ListInstanceAclResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListInstanceAclResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceAclResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListInstanceAclResponseBodyDataList>>(expect1);
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


  virtual ~ListInstanceAclResponseBodyData() = default;
};
class ListInstanceAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListInstanceAclResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListInstanceAclResponseBody() {}

  explicit ListInstanceAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListInstanceAclResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListInstanceAclResponseBodyData>(model1);
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


  virtual ~ListInstanceAclResponseBody() = default;
};
class ListInstanceAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceAclResponseBody> body{};

  ListInstanceAclResponse() {}

  explicit ListInstanceAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceAclResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceAclResponse() = default;
};
class ListInstanceIpWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipWhitelist{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListInstanceIpWhitelistRequest() {}

  explicit ListInstanceIpWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipWhitelist) {
      res["ipWhitelist"] = boost::any(*ipWhitelist);
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
    if (m.find("ipWhitelist") != m.end() && !m["ipWhitelist"].empty()) {
      ipWhitelist = make_shared<string>(boost::any_cast<string>(m["ipWhitelist"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListInstanceIpWhitelistRequest() = default;
};
class ListInstanceIpWhitelistResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListInstanceIpWhitelistResponseBodyData() {}

  explicit ListInstanceIpWhitelistResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      res["list"] = boost::any(*list);
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      list = make_shared<vector<string>>(toVec1);
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


  virtual ~ListInstanceIpWhitelistResponseBodyData() = default;
};
class ListInstanceIpWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListInstanceIpWhitelistResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListInstanceIpWhitelistResponseBody() {}

  explicit ListInstanceIpWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListInstanceIpWhitelistResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListInstanceIpWhitelistResponseBodyData>(model1);
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


  virtual ~ListInstanceIpWhitelistResponseBody() = default;
};
class ListInstanceIpWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceIpWhitelistResponseBody> body{};

  ListInstanceIpWhitelistResponse() {}

  explicit ListInstanceIpWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceIpWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceIpWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceIpWhitelistResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> seriesCodes{};
  shared_ptr<string> storageSecretKey{};
  shared_ptr<string> tags{};

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
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (seriesCodes) {
      res["seriesCodes"] = boost::any(*seriesCodes);
    }
    if (storageSecretKey) {
      res["storageSecretKey"] = boost::any(*storageSecretKey);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
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
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("seriesCodes") != m.end() && !m["seriesCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["seriesCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["seriesCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      seriesCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("storageSecretKey") != m.end() && !m["storageSecretKey"].empty()) {
      storageSecretKey = make_shared<string>(boost::any_cast<string>(m["storageSecretKey"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> seriesCodesShrink{};
  shared_ptr<string> storageSecretKey{};
  shared_ptr<string> tags{};

  ListInstancesShrinkRequest() {}

  explicit ListInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (seriesCodesShrink) {
      res["seriesCodes"] = boost::any(*seriesCodesShrink);
    }
    if (storageSecretKey) {
      res["storageSecretKey"] = boost::any(*storageSecretKey);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
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
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("seriesCodes") != m.end() && !m["seriesCodes"].empty()) {
      seriesCodesShrink = make_shared<string>(boost::any_cast<string>(m["seriesCodes"]));
    }
    if (m.find("storageSecretKey") != m.end() && !m["storageSecretKey"].empty()) {
      storageSecretKey = make_shared<string>(boost::any_cast<string>(m["storageSecretKey"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
  }


  virtual ~ListInstancesShrinkRequest() = default;
};
class ListInstancesResponseBodyDataListProductInfo : public Darabonba::Model {
public:
  shared_ptr<bool> traceOn{};

  ListInstancesResponseBodyDataListProductInfo() {}

  explicit ListInstancesResponseBodyDataListProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (traceOn) {
      res["traceOn"] = boost::any(*traceOn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("traceOn") != m.end() && !m["traceOn"].empty()) {
      traceOn = make_shared<bool>(boost::any_cast<bool>(m["traceOn"]));
    }
  }


  virtual ~ListInstancesResponseBodyDataListProductInfo() = default;
};
class ListInstancesResponseBodyDataListTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesResponseBodyDataListTags() {}

  explicit ListInstancesResponseBodyDataListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListInstancesResponseBodyDataListTags() = default;
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
  shared_ptr<ListInstancesResponseBodyDataListProductInfo> productInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subSeriesCode{};
  shared_ptr<vector<ListInstancesResponseBodyDataListTags>> tags{};
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
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
    if (m.find("productInfo") != m.end() && !m["productInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["productInfo"].type()) {
        ListInstancesResponseBodyDataListProductInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productInfo"]));
        productInfo = make_shared<ListInstancesResponseBodyDataListProductInfo>(model1);
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
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListInstancesResponseBodyDataListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyDataListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListInstancesResponseBodyDataListTags>>(expect1);
      }
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListMessagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> messageId{};
  shared_ptr<string> messageKey{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scrollId{};
  shared_ptr<string> startTime{};

  ListMessagesRequest() {}

  explicit ListMessagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (messageId) {
      res["messageId"] = boost::any(*messageId);
    }
    if (messageKey) {
      res["messageKey"] = boost::any(*messageKey);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (scrollId) {
      res["scrollId"] = boost::any(*scrollId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("messageId") != m.end() && !m["messageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["messageId"]));
    }
    if (m.find("messageKey") != m.end() && !m["messageKey"].empty()) {
      messageKey = make_shared<string>(boost::any_cast<string>(m["messageKey"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("scrollId") != m.end() && !m["scrollId"].empty()) {
      scrollId = make_shared<string>(boost::any_cast<string>(m["scrollId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~ListMessagesRequest() = default;
};
class ListMessagesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<long> bodySize{};
  shared_ptr<string> bornHost{};
  shared_ptr<string> bornTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageGroup{};
  shared_ptr<string> messageId{};
  shared_ptr<vector<string>> messageKeys{};
  shared_ptr<string> messageTag{};
  shared_ptr<string> messageType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storeHost{};
  shared_ptr<string> storeTime{};
  shared_ptr<string> topicName{};
  shared_ptr<map<string, string>> userProperties{};

  ListMessagesResponseBodyDataList() {}

  explicit ListMessagesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (bodySize) {
      res["bodySize"] = boost::any(*bodySize);
    }
    if (bornHost) {
      res["bornHost"] = boost::any(*bornHost);
    }
    if (bornTime) {
      res["bornTime"] = boost::any(*bornTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (messageGroup) {
      res["messageGroup"] = boost::any(*messageGroup);
    }
    if (messageId) {
      res["messageId"] = boost::any(*messageId);
    }
    if (messageKeys) {
      res["messageKeys"] = boost::any(*messageKeys);
    }
    if (messageTag) {
      res["messageTag"] = boost::any(*messageTag);
    }
    if (messageType) {
      res["messageType"] = boost::any(*messageType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (storeHost) {
      res["storeHost"] = boost::any(*storeHost);
    }
    if (storeTime) {
      res["storeTime"] = boost::any(*storeTime);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    if (userProperties) {
      res["userProperties"] = boost::any(*userProperties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("bodySize") != m.end() && !m["bodySize"].empty()) {
      bodySize = make_shared<long>(boost::any_cast<long>(m["bodySize"]));
    }
    if (m.find("bornHost") != m.end() && !m["bornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["bornHost"]));
    }
    if (m.find("bornTime") != m.end() && !m["bornTime"].empty()) {
      bornTime = make_shared<string>(boost::any_cast<string>(m["bornTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("messageGroup") != m.end() && !m["messageGroup"].empty()) {
      messageGroup = make_shared<string>(boost::any_cast<string>(m["messageGroup"]));
    }
    if (m.find("messageId") != m.end() && !m["messageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["messageId"]));
    }
    if (m.find("messageKeys") != m.end() && !m["messageKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["messageKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["messageKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("messageTag") != m.end() && !m["messageTag"].empty()) {
      messageTag = make_shared<string>(boost::any_cast<string>(m["messageTag"]));
    }
    if (m.find("messageType") != m.end() && !m["messageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["messageType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("storeHost") != m.end() && !m["storeHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["storeHost"]));
    }
    if (m.find("storeTime") != m.end() && !m["storeTime"].empty()) {
      storeTime = make_shared<string>(boost::any_cast<string>(m["storeTime"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
    if (m.find("userProperties") != m.end() && !m["userProperties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["userProperties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userProperties = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListMessagesResponseBodyDataList() = default;
};
class ListMessagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMessagesResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scrollId{};
  shared_ptr<long> totalCount{};

  ListMessagesResponseBodyData() {}

  explicit ListMessagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scrollId) {
      res["scrollId"] = boost::any(*scrollId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListMessagesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMessagesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListMessagesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("scrollId") != m.end() && !m["scrollId"].empty()) {
      scrollId = make_shared<string>(boost::any_cast<string>(m["scrollId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListMessagesResponseBodyData() = default;
};
class ListMessagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListMessagesResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListMessagesResponseBody() {}

  explicit ListMessagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMessagesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMessagesResponseBodyData>(model1);
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


  virtual ~ListMessagesResponseBody() = default;
};
class ListMessagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMessagesResponseBody> body{};

  ListMessagesResponse() {}

  explicit ListMessagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMessagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMessagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMessagesResponse() = default;
};
class ListMetricMetaRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListMetricMetaRequest() {}

  explicit ListMetricMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListMetricMetaRequest() = default;
};
class ListMetricMetaResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> metricName{};

  ListMetricMetaResponseBodyDataList() {}

  explicit ListMetricMetaResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (metricName) {
      res["metricName"] = boost::any(*metricName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("metricName") != m.end() && !m["metricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["metricName"]));
    }
  }


  virtual ~ListMetricMetaResponseBodyDataList() = default;
};
class ListMetricMetaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListMetricMetaResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListMetricMetaResponseBodyData() {}

  explicit ListMetricMetaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListMetricMetaResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMetricMetaResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListMetricMetaResponseBodyDataList>>(expect1);
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


  virtual ~ListMetricMetaResponseBodyData() = default;
};
class ListMetricMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListMetricMetaResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListMetricMetaResponseBody() {}

  explicit ListMetricMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMetricMetaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListMetricMetaResponseBodyData>(model1);
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


  virtual ~ListMetricMetaResponseBody() = default;
};
class ListMetricMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMetricMetaResponseBody> body{};

  ListMetricMetaResponse() {}

  explicit ListMetricMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMetricMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMetricMetaResponseBody>(model1);
      }
    }
  }


  virtual ~ListMetricMetaResponse() = default;
};
class ListRegionsResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagCode{};
  shared_ptr<boost::any> tagValue{};

  ListRegionsResponseBodyDataTags() {}

  explicit ListRegionsResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagCode) {
      res["tagCode"] = boost::any(*tagCode);
    }
    if (tagValue) {
      res["tagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagCode") != m.end() && !m["tagCode"].empty()) {
      tagCode = make_shared<string>(boost::any_cast<string>(m["tagCode"]));
    }
    if (m.find("tagValue") != m.end() && !m["tagValue"].empty()) {
      tagValue = make_shared<boost::any>(boost::any_cast<boost::any>(m["tagValue"]));
    }
  }


  virtual ~ListRegionsResponseBodyDataTags() = default;
};
class ListRegionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<bool> supportRocketmqV4{};
  shared_ptr<bool> supportRocketmqV5{};
  shared_ptr<vector<ListRegionsResponseBodyDataTags>> tags{};
  shared_ptr<string> updateTime{};

  ListRegionsResponseBodyData() {}

  explicit ListRegionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["regionName"] = boost::any(*regionName);
    }
    if (supportRocketmqV4) {
      res["supportRocketmqV4"] = boost::any(*supportRocketmqV4);
    }
    if (supportRocketmqV5) {
      res["supportRocketmqV5"] = boost::any(*supportRocketmqV5);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
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
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("regionName") != m.end() && !m["regionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["regionName"]));
    }
    if (m.find("supportRocketmqV4") != m.end() && !m["supportRocketmqV4"].empty()) {
      supportRocketmqV4 = make_shared<bool>(boost::any_cast<bool>(m["supportRocketmqV4"]));
    }
    if (m.find("supportRocketmqV5") != m.end() && !m["supportRocketmqV5"].empty()) {
      supportRocketmqV5 = make_shared<bool>(boost::any_cast<bool>(m["supportRocketmqV5"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListRegionsResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListRegionsResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListRegionsResponseBodyData() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListRegionsResponseBodyData>> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListRegionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRegionsResponseBodyData>>(expect1);
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


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyDataTagResources : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> category{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyDataTagResources() {}

  explicit ListTagResourcesResponseBodyDataTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["aliUid"] = boost::any(*aliUid);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["tagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliUid") != m.end() && !m["aliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["aliUid"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValue") != m.end() && !m["tagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["tagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyDataTagResources() = default;
};
class ListTagResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyDataTagResources>> tagResources{};

  ListTagResourcesResponseBodyData() {}

  explicit ListTagResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("tagResources") != m.end() && !m["tagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["tagResources"].type()) {
        vector<ListTagResourcesResponseBodyDataTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyDataTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyDataTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyData() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTagResourcesResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListTagResourcesResponseBodyData>(model1);
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
class ListTopicSubscriptionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> consistency{};
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> filterExpression{};
  shared_ptr<string> filterExpressionType{};
  shared_ptr<string> messageModel{};
  shared_ptr<string> subscriptionStatus{};
  shared_ptr<string> topicName{};

  ListTopicSubscriptionsResponseBodyData() {}

  explicit ListTopicSubscriptionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consistency) {
      res["consistency"] = boost::any(*consistency);
    }
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (filterExpression) {
      res["filterExpression"] = boost::any(*filterExpression);
    }
    if (filterExpressionType) {
      res["filterExpressionType"] = boost::any(*filterExpressionType);
    }
    if (messageModel) {
      res["messageModel"] = boost::any(*messageModel);
    }
    if (subscriptionStatus) {
      res["subscriptionStatus"] = boost::any(*subscriptionStatus);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consistency") != m.end() && !m["consistency"].empty()) {
      consistency = make_shared<string>(boost::any_cast<string>(m["consistency"]));
    }
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("filterExpression") != m.end() && !m["filterExpression"].empty()) {
      filterExpression = make_shared<string>(boost::any_cast<string>(m["filterExpression"]));
    }
    if (m.find("filterExpressionType") != m.end() && !m["filterExpressionType"].empty()) {
      filterExpressionType = make_shared<string>(boost::any_cast<string>(m["filterExpressionType"]));
    }
    if (m.find("messageModel") != m.end() && !m["messageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["messageModel"]));
    }
    if (m.find("subscriptionStatus") != m.end() && !m["subscriptionStatus"].empty()) {
      subscriptionStatus = make_shared<string>(boost::any_cast<string>(m["subscriptionStatus"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListTopicSubscriptionsResponseBodyData() = default;
};
class ListTopicSubscriptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListTopicSubscriptionsResponseBodyData>> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTopicSubscriptionsResponseBody() {}

  explicit ListTopicSubscriptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListTopicSubscriptionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTopicSubscriptionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTopicSubscriptionsResponseBodyData>>(expect1);
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


  virtual ~ListTopicSubscriptionsResponseBody() = default;
};
class ListTopicSubscriptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTopicSubscriptionsResponseBody> body{};

  ListTopicSubscriptionsResponse() {}

  explicit ListTopicSubscriptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTopicSubscriptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTopicSubscriptionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTopicSubscriptionsResponse() = default;
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
  shared_ptr<long> maxSendTps{};
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
    if (maxSendTps) {
      res["maxSendTps"] = boost::any(*maxSendTps);
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
    if (m.find("maxSendTps") != m.end() && !m["maxSendTps"].empty()) {
      maxSendTps = make_shared<long>(boost::any_cast<long>(m["maxSendTps"]));
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
        ListTopicsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTopicsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTopicsResponse() = default;
};
class ListTracesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> messageId{};
  shared_ptr<string> messageKey{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryType{};
  shared_ptr<string> startTime{};

  ListTracesRequest() {}

  explicit ListTracesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (messageId) {
      res["messageId"] = boost::any(*messageId);
    }
    if (messageKey) {
      res["messageKey"] = boost::any(*messageKey);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (queryType) {
      res["queryType"] = boost::any(*queryType);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("messageId") != m.end() && !m["messageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["messageId"]));
    }
    if (m.find("messageKey") != m.end() && !m["messageKey"].empty()) {
      messageKey = make_shared<string>(boost::any_cast<string>(m["messageKey"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("queryType") != m.end() && !m["queryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["queryType"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~ListTracesRequest() = default;
};
class ListTracesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> bornTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageId{};
  shared_ptr<vector<string>> messageKeys{};
  shared_ptr<string> messageTag{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  ListTracesResponseBodyDataList() {}

  explicit ListTracesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bornTime) {
      res["bornTime"] = boost::any(*bornTime);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (messageId) {
      res["messageId"] = boost::any(*messageId);
    }
    if (messageKeys) {
      res["messageKeys"] = boost::any(*messageKeys);
    }
    if (messageTag) {
      res["messageTag"] = boost::any(*messageTag);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bornTime") != m.end() && !m["bornTime"].empty()) {
      bornTime = make_shared<string>(boost::any_cast<string>(m["bornTime"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("messageId") != m.end() && !m["messageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["messageId"]));
    }
    if (m.find("messageKeys") != m.end() && !m["messageKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["messageKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["messageKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("messageTag") != m.end() && !m["messageTag"].empty()) {
      messageTag = make_shared<string>(boost::any_cast<string>(m["messageTag"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~ListTracesResponseBodyDataList() = default;
};
class ListTracesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTracesResponseBodyDataList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListTracesResponseBodyData() {}

  explicit ListTracesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTracesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTracesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListTracesResponseBodyDataList>>(expect1);
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


  virtual ~ListTracesResponseBodyData() = default;
};
class ListTracesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTracesResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTracesResponseBody() {}

  explicit ListTracesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTracesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListTracesResponseBodyData>(model1);
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


  virtual ~ListTracesResponseBody() = default;
};
class ListTracesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTracesResponseBody> body{};

  ListTracesResponse() {}

  explicit ListTracesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTracesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTracesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTracesResponse() = default;
};
class ResetConsumeOffsetRequest : public Darabonba::Model {
public:
  shared_ptr<string> resetTime{};
  shared_ptr<string> resetType{};

  ResetConsumeOffsetRequest() {}

  explicit ResetConsumeOffsetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resetTime) {
      res["resetTime"] = boost::any(*resetTime);
    }
    if (resetType) {
      res["resetType"] = boost::any(*resetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resetTime") != m.end() && !m["resetTime"].empty()) {
      resetTime = make_shared<string>(boost::any_cast<string>(m["resetTime"]));
    }
    if (m.find("resetType") != m.end() && !m["resetType"].empty()) {
      resetType = make_shared<string>(boost::any_cast<string>(m["resetType"]));
    }
  }


  virtual ~ResetConsumeOffsetRequest() = default;
};
class ResetConsumeOffsetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResetConsumeOffsetResponseBody() {}

  explicit ResetConsumeOffsetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
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


  virtual ~ResetConsumeOffsetResponseBody() = default;
};
class ResetConsumeOffsetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetConsumeOffsetResponseBody> body{};

  ResetConsumeOffsetResponse() {}

  explicit ResetConsumeOffsetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetConsumeOffsetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetConsumeOffsetResponseBody>(model1);
      }
    }
  }


  virtual ~ResetConsumeOffsetResponse() = default;
};
class StartDisasterRecoveryItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartDisasterRecoveryItemResponseBody() {}

  explicit StartDisasterRecoveryItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~StartDisasterRecoveryItemResponseBody() = default;
};
class StartDisasterRecoveryItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartDisasterRecoveryItemResponseBody> body{};

  StartDisasterRecoveryItemResponse() {}

  explicit StartDisasterRecoveryItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDisasterRecoveryItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDisasterRecoveryItemResponseBody>(model1);
      }
    }
  }


  virtual ~StartDisasterRecoveryItemResponse() = default;
};
class StopDisasterRecoveryItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopDisasterRecoveryItemResponseBody() {}

  explicit StopDisasterRecoveryItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~StopDisasterRecoveryItemResponseBody() = default;
};
class StopDisasterRecoveryItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDisasterRecoveryItemResponseBody> body{};

  StopDisasterRecoveryItemResponse() {}

  explicit StopDisasterRecoveryItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDisasterRecoveryItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDisasterRecoveryItemResponseBody>(model1);
      }
    }
  }


  virtual ~StopDisasterRecoveryItemResponse() = default;
};
class SyncDisasterRecoveryCheckpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncDisasterRecoveryCheckpointResponseBody() {}

  explicit SyncDisasterRecoveryCheckpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncDisasterRecoveryCheckpointResponseBody() = default;
};
class SyncDisasterRecoveryCheckpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncDisasterRecoveryCheckpointResponseBody> body{};

  SyncDisasterRecoveryCheckpointResponse() {}

  explicit SyncDisasterRecoveryCheckpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncDisasterRecoveryCheckpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncDisasterRecoveryCheckpointResponseBody>(model1);
      }
    }
  }


  virtual ~SyncDisasterRecoveryCheckpointResponse() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["all"] = boost::any(*all);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all") != m.end() && !m["all"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["all"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UpdateConsumerGroupRequestConsumeRetryPolicy : public Darabonba::Model {
public:
  shared_ptr<string> deadLetterTargetTopic{};
  shared_ptr<long> maxRetryTimes{};
  shared_ptr<string> retryPolicy{};

  UpdateConsumerGroupRequestConsumeRetryPolicy() {}

  explicit UpdateConsumerGroupRequestConsumeRetryPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConsumerGroupRequestConsumeRetryPolicy() = default;
};
class UpdateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateConsumerGroupRequestConsumeRetryPolicy> consumeRetryPolicy{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<long> maxReceiveTps{};
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
    if (maxReceiveTps) {
      res["maxReceiveTps"] = boost::any(*maxReceiveTps);
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
    if (m.find("maxReceiveTps") != m.end() && !m["maxReceiveTps"].empty()) {
      maxReceiveTps = make_shared<long>(boost::any_cast<long>(m["maxReceiveTps"]));
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
        UpdateConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConsumerGroupResponse() = default;
};
class UpdateDisasterRecoveryItemRequestTopics : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroupId{};
  shared_ptr<string> deliveryOrderType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topicName{};

  UpdateDisasterRecoveryItemRequestTopics() {}

  explicit UpdateDisasterRecoveryItemRequestTopics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    if (deliveryOrderType) {
      res["deliveryOrderType"] = boost::any(*deliveryOrderType);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
    if (m.find("deliveryOrderType") != m.end() && !m["deliveryOrderType"].empty()) {
      deliveryOrderType = make_shared<string>(boost::any_cast<string>(m["deliveryOrderType"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
  }


  virtual ~UpdateDisasterRecoveryItemRequestTopics() = default;
};
class UpdateDisasterRecoveryItemRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateDisasterRecoveryItemRequestTopics>> topics{};

  UpdateDisasterRecoveryItemRequest() {}

  explicit UpdateDisasterRecoveryItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topics) {
      vector<boost::any> temp1;
      for(auto item1:*topics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["topics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("topics") != m.end() && !m["topics"].empty()) {
      if (typeid(vector<boost::any>) == m["topics"].type()) {
        vector<UpdateDisasterRecoveryItemRequestTopics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["topics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDisasterRecoveryItemRequestTopics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topics = make_shared<vector<UpdateDisasterRecoveryItemRequestTopics>>(expect1);
      }
    }
  }


  virtual ~UpdateDisasterRecoveryItemRequest() = default;
};
class UpdateDisasterRecoveryItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDisasterRecoveryItemResponseBody() {}

  explicit UpdateDisasterRecoveryItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDisasterRecoveryItemResponseBody() = default;
};
class UpdateDisasterRecoveryItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDisasterRecoveryItemResponseBody> body{};

  UpdateDisasterRecoveryItemResponse() {}

  explicit UpdateDisasterRecoveryItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDisasterRecoveryItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDisasterRecoveryItemResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDisasterRecoveryItemResponse() = default;
};
class UpdateDisasterRecoveryPlanRequestInstancesMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> propertyKey{};
  shared_ptr<string> propertyValue{};

  UpdateDisasterRecoveryPlanRequestInstancesMessageProperty() {}

  explicit UpdateDisasterRecoveryPlanRequestInstancesMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyKey) {
      res["propertyKey"] = boost::any(*propertyKey);
    }
    if (propertyValue) {
      res["propertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("propertyKey") != m.end() && !m["propertyKey"].empty()) {
      propertyKey = make_shared<string>(boost::any_cast<string>(m["propertyKey"]));
    }
    if (m.find("propertyValue") != m.end() && !m["propertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["propertyValue"]));
    }
  }


  virtual ~UpdateDisasterRecoveryPlanRequestInstancesMessageProperty() = default;
};
class UpdateDisasterRecoveryPlanRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> endpointUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRole{};
  shared_ptr<string> instanceType{};
  shared_ptr<UpdateDisasterRecoveryPlanRequestInstancesMessageProperty> messageProperty{};
  shared_ptr<string> networkType{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> username{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  UpdateDisasterRecoveryPlanRequestInstances() {}

  explicit UpdateDisasterRecoveryPlanRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (endpointUrl) {
      res["endpointUrl"] = boost::any(*endpointUrl);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (instanceRole) {
      res["instanceRole"] = boost::any(*instanceRole);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (messageProperty) {
      res["messageProperty"] = messageProperty ? boost::any(messageProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("endpointUrl") != m.end() && !m["endpointUrl"].empty()) {
      endpointUrl = make_shared<string>(boost::any_cast<string>(m["endpointUrl"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("instanceRole") != m.end() && !m["instanceRole"].empty()) {
      instanceRole = make_shared<string>(boost::any_cast<string>(m["instanceRole"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("messageProperty") != m.end() && !m["messageProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["messageProperty"].type()) {
        UpdateDisasterRecoveryPlanRequestInstancesMessageProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["messageProperty"]));
        messageProperty = make_shared<UpdateDisasterRecoveryPlanRequestInstancesMessageProperty>(model1);
      }
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~UpdateDisasterRecoveryPlanRequestInstances() = default;
};
class UpdateDisasterRecoveryPlanRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoSyncCheckpoint{};
  shared_ptr<vector<UpdateDisasterRecoveryPlanRequestInstances>> instances{};
  shared_ptr<string> planDesc{};
  shared_ptr<string> planName{};
  shared_ptr<string> planType{};
  shared_ptr<bool> syncCheckpointEnabled{};

  UpdateDisasterRecoveryPlanRequest() {}

  explicit UpdateDisasterRecoveryPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSyncCheckpoint) {
      res["autoSyncCheckpoint"] = boost::any(*autoSyncCheckpoint);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instances"] = boost::any(temp1);
    }
    if (planDesc) {
      res["planDesc"] = boost::any(*planDesc);
    }
    if (planName) {
      res["planName"] = boost::any(*planName);
    }
    if (planType) {
      res["planType"] = boost::any(*planType);
    }
    if (syncCheckpointEnabled) {
      res["syncCheckpointEnabled"] = boost::any(*syncCheckpointEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSyncCheckpoint") != m.end() && !m["autoSyncCheckpoint"].empty()) {
      autoSyncCheckpoint = make_shared<bool>(boost::any_cast<bool>(m["autoSyncCheckpoint"]));
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<UpdateDisasterRecoveryPlanRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDisasterRecoveryPlanRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<UpdateDisasterRecoveryPlanRequestInstances>>(expect1);
      }
    }
    if (m.find("planDesc") != m.end() && !m["planDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["planDesc"]));
    }
    if (m.find("planName") != m.end() && !m["planName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["planName"]));
    }
    if (m.find("planType") != m.end() && !m["planType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["planType"]));
    }
    if (m.find("syncCheckpointEnabled") != m.end() && !m["syncCheckpointEnabled"].empty()) {
      syncCheckpointEnabled = make_shared<bool>(boost::any_cast<bool>(m["syncCheckpointEnabled"]));
    }
  }


  virtual ~UpdateDisasterRecoveryPlanRequest() = default;
};
class UpdateDisasterRecoveryPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDisasterRecoveryPlanResponseBody() {}

  explicit UpdateDisasterRecoveryPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~UpdateDisasterRecoveryPlanResponseBody() = default;
};
class UpdateDisasterRecoveryPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDisasterRecoveryPlanResponseBody> body{};

  UpdateDisasterRecoveryPlanResponse() {}

  explicit UpdateDisasterRecoveryPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDisasterRecoveryPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDisasterRecoveryPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDisasterRecoveryPlanResponse() = default;
};
class UpdateInstanceRequestAclInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aclTypes{};
  shared_ptr<bool> defaultVpcAuthFree{};

  UpdateInstanceRequestAclInfo() {}

  explicit UpdateInstanceRequestAclInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclTypes) {
      res["aclTypes"] = boost::any(*aclTypes);
    }
    if (defaultVpcAuthFree) {
      res["defaultVpcAuthFree"] = boost::any(*defaultVpcAuthFree);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aclTypes") != m.end() && !m["aclTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["aclTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aclTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aclTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("defaultVpcAuthFree") != m.end() && !m["defaultVpcAuthFree"].empty()) {
      defaultVpcAuthFree = make_shared<bool>(boost::any_cast<bool>(m["defaultVpcAuthFree"]));
    }
  }


  virtual ~UpdateInstanceRequestAclInfo() = default;
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
  shared_ptr<bool> traceOn{};

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
    if (traceOn) {
      res["traceOn"] = boost::any(*traceOn);
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
    if (m.find("traceOn") != m.end() && !m["traceOn"].empty()) {
      traceOn = make_shared<bool>(boost::any_cast<bool>(m["traceOn"]));
    }
  }


  virtual ~UpdateInstanceRequestProductInfo() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateInstanceRequestAclInfo> aclInfo{};
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
    if (aclInfo) {
      res["aclInfo"] = aclInfo ? boost::any(aclInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("aclInfo") != m.end() && !m["aclInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["aclInfo"].type()) {
        UpdateInstanceRequestAclInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["aclInfo"]));
        aclInfo = make_shared<UpdateInstanceRequestAclInfo>(model1);
      }
    }
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
};
class UpdateInstanceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> password{};

  UpdateInstanceAccountRequest() {}

  explicit UpdateInstanceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["accountStatus"] = boost::any(*accountStatus);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountStatus") != m.end() && !m["accountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["accountStatus"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
  }


  virtual ~UpdateInstanceAccountRequest() = default;
};
class UpdateInstanceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceAccountResponseBody() {}

  explicit UpdateInstanceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~UpdateInstanceAccountResponseBody() = default;
};
class UpdateInstanceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceAccountResponseBody> body{};

  UpdateInstanceAccountResponse() {}

  explicit UpdateInstanceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceAccountResponse() = default;
};
class UpdateInstanceAclRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<string> decision{};
  shared_ptr<vector<string>> ipWhitelists{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  UpdateInstanceAclRequest() {}

  explicit UpdateInstanceAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (decision) {
      res["decision"] = boost::any(*decision);
    }
    if (ipWhitelists) {
      res["ipWhitelists"] = boost::any(*ipWhitelists);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("decision") != m.end() && !m["decision"].empty()) {
      decision = make_shared<string>(boost::any_cast<string>(m["decision"]));
    }
    if (m.find("ipWhitelists") != m.end() && !m["ipWhitelists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ipWhitelists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ipWhitelists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhitelists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~UpdateInstanceAclRequest() = default;
};
class UpdateInstanceAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceAclResponseBody() {}

  explicit UpdateInstanceAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["accessDeniedDetail"]));
    }
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


  virtual ~UpdateInstanceAclResponseBody() = default;
};
class UpdateInstanceAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceAclResponseBody> body{};

  UpdateInstanceAclResponse() {}

  explicit UpdateInstanceAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceAclResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceAclResponse() = default;
};
class UpdateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxSendTps{};
  shared_ptr<string> remark{};

  UpdateTopicRequest() {}

  explicit UpdateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxSendTps) {
      res["maxSendTps"] = boost::any(*maxSendTps);
    }
    if (remark) {
      res["remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxSendTps") != m.end() && !m["maxSendTps"].empty()) {
      maxSendTps = make_shared<long>(boost::any_cast<long>(m["maxSendTps"]));
    }
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
        UpdateTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTopicResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTopicResponse() = default;
};
class VerifyConsumeMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> consumerGroupId{};

  VerifyConsumeMessageRequest() {}

  explicit VerifyConsumeMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["clientId"] = boost::any(*clientId);
    }
    if (consumerGroupId) {
      res["consumerGroupId"] = boost::any(*consumerGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientId") != m.end() && !m["clientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["clientId"]));
    }
    if (m.find("consumerGroupId") != m.end() && !m["consumerGroupId"].empty()) {
      consumerGroupId = make_shared<string>(boost::any_cast<string>(m["consumerGroupId"]));
    }
  }


  virtual ~VerifyConsumeMessageRequest() = default;
};
class VerifyConsumeMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VerifyConsumeMessageResponseBody() {}

  explicit VerifyConsumeMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyConsumeMessageResponseBody() = default;
};
class VerifyConsumeMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyConsumeMessageResponseBody> body{};

  VerifyConsumeMessageResponse() {}

  explicit VerifyConsumeMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyConsumeMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyConsumeMessageResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyConsumeMessageResponse() = default;
};
class VerifySendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> messageKey{};
  shared_ptr<string> messageTag{};

  VerifySendMessageRequest() {}

  explicit VerifySendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (messageKey) {
      res["messageKey"] = boost::any(*messageKey);
    }
    if (messageTag) {
      res["messageTag"] = boost::any(*messageTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("messageKey") != m.end() && !m["messageKey"].empty()) {
      messageKey = make_shared<string>(boost::any_cast<string>(m["messageKey"]));
    }
    if (m.find("messageTag") != m.end() && !m["messageTag"].empty()) {
      messageTag = make_shared<string>(boost::any_cast<string>(m["messageTag"]));
    }
  }


  virtual ~VerifySendMessageRequest() = default;
};
class VerifySendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VerifySendMessageResponseBody() {}

  explicit VerifySendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifySendMessageResponseBody() = default;
};
class VerifySendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifySendMessageResponseBody> body{};

  VerifySendMessageResponse() {}

  explicit VerifySendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifySendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifySendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~VerifySendMessageResponse() = default;
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
  AddDisasterRecoveryItemResponse addDisasterRecoveryItemWithOptions(shared_ptr<string> planId,
                                                                     shared_ptr<AddDisasterRecoveryItemRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDisasterRecoveryItemResponse addDisasterRecoveryItem(shared_ptr<string> planId, shared_ptr<AddDisasterRecoveryItemRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateConsumerGroupResponse createConsumerGroupWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> consumerGroupId,
                                                             shared_ptr<CreateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsumerGroupResponse createConsumerGroup(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<CreateConsumerGroupRequest> request);
  CreateDisasterRecoveryPlanResponse createDisasterRecoveryPlanWithOptions(shared_ptr<CreateDisasterRecoveryPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDisasterRecoveryPlanResponse createDisasterRecoveryPlan(shared_ptr<CreateDisasterRecoveryPlanRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateInstanceAccountResponse createInstanceAccountWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<CreateInstanceAccountRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceAccountResponse createInstanceAccount(shared_ptr<string> instanceId, shared_ptr<CreateInstanceAccountRequest> request);
  CreateInstanceAclResponse createInstanceAclWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<string> username,
                                                         shared_ptr<CreateInstanceAclRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceAclResponse createInstanceAcl(shared_ptr<string> instanceId, shared_ptr<string> username, shared_ptr<CreateInstanceAclRequest> request);
  CreateInstanceIpWhitelistResponse createInstanceIpWhitelistWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<CreateInstanceIpWhitelistRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceIpWhitelistResponse createInstanceIpWhitelist(shared_ptr<string> instanceId, shared_ptr<CreateInstanceIpWhitelistRequest> request);
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
  DeleteConsumerGroupSubscriptionResponse deleteConsumerGroupSubscriptionWithOptions(shared_ptr<string> instanceId,
                                                                                     shared_ptr<string> consumerGroupId,
                                                                                     shared_ptr<DeleteConsumerGroupSubscriptionRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConsumerGroupSubscriptionResponse deleteConsumerGroupSubscription(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<DeleteConsumerGroupSubscriptionRequest> request);
  DeleteDisasterRecoveryItemResponse deleteDisasterRecoveryItemWithOptions(shared_ptr<string> planId,
                                                                           shared_ptr<string> itemId,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDisasterRecoveryItemResponse deleteDisasterRecoveryItem(shared_ptr<string> planId, shared_ptr<string> itemId);
  DeleteDisasterRecoveryPlanResponse deleteDisasterRecoveryPlanWithOptions(shared_ptr<string> planId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDisasterRecoveryPlanResponse deleteDisasterRecoveryPlan(shared_ptr<string> planId);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<string> instanceId);
  DeleteInstanceAccountResponse deleteInstanceAccountWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> username,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceAccountResponse deleteInstanceAccount(shared_ptr<string> instanceId, shared_ptr<string> username);
  DeleteInstanceAclResponse deleteInstanceAclWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<string> username,
                                                         shared_ptr<DeleteInstanceAclRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceAclResponse deleteInstanceAcl(shared_ptr<string> instanceId, shared_ptr<string> username, shared_ptr<DeleteInstanceAclRequest> request);
  DeleteInstanceIpWhitelistResponse deleteInstanceIpWhitelistWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<DeleteInstanceIpWhitelistRequest> tmpReq,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceIpWhitelistResponse deleteInstanceIpWhitelist(shared_ptr<string> instanceId, shared_ptr<DeleteInstanceIpWhitelistRequest> request);
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
  GetConsumerGroupLagResponse getConsumerGroupLagWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> consumerGroupId,
                                                             shared_ptr<GetConsumerGroupLagRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerGroupLagResponse getConsumerGroupLag(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<GetConsumerGroupLagRequest> request);
  GetConsumerGroupSubscriptionResponse getConsumerGroupSubscriptionWithOptions(shared_ptr<string> instanceId,
                                                                               shared_ptr<string> consumerGroupId,
                                                                               shared_ptr<string> topicName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerGroupSubscriptionResponse getConsumerGroupSubscription(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<string> topicName);
  GetConsumerStackResponse getConsumerStackWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> consumerGroupId,
                                                       shared_ptr<GetConsumerStackRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerStackResponse getConsumerStack(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<GetConsumerStackRequest> request);
  GetDisasterRecoveryItemResponse getDisasterRecoveryItemWithOptions(shared_ptr<string> planId,
                                                                     shared_ptr<string> itemId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDisasterRecoveryItemResponse getDisasterRecoveryItem(shared_ptr<string> planId, shared_ptr<string> itemId);
  GetDisasterRecoveryPlanResponse getDisasterRecoveryPlanWithOptions(shared_ptr<string> planId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDisasterRecoveryPlanResponse getDisasterRecoveryPlan(shared_ptr<string> planId);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> instanceId);
  GetInstanceAccountResponse getInstanceAccountWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<GetInstanceAccountRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceAccountResponse getInstanceAccount(shared_ptr<string> instanceId, shared_ptr<GetInstanceAccountRequest> request);
  GetInstanceAclResponse getInstanceAclWithOptions(shared_ptr<string> instanceId,
                                                   shared_ptr<string> username,
                                                   shared_ptr<GetInstanceAclRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceAclResponse getInstanceAcl(shared_ptr<string> instanceId, shared_ptr<string> username, shared_ptr<GetInstanceAclRequest> request);
  GetInstanceIpWhitelistResponse getInstanceIpWhitelistWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<GetInstanceIpWhitelistRequest> tmpReq,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceIpWhitelistResponse getInstanceIpWhitelist(shared_ptr<string> instanceId, shared_ptr<GetInstanceIpWhitelistRequest> request);
  GetMessageDetailResponse getMessageDetailWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> topicName,
                                                       shared_ptr<string> messageId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMessageDetailResponse getMessageDetail(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<string> messageId);
  GetTopicResponse getTopicWithOptions(shared_ptr<string> instanceId,
                                       shared_ptr<string> topicName,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicResponse getTopic(shared_ptr<string> instanceId, shared_ptr<string> topicName);
  GetTraceResponse getTraceWithOptions(shared_ptr<string> instanceId,
                                       shared_ptr<string> topicName,
                                       shared_ptr<string> messageId,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTraceResponse getTrace(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<string> messageId);
  ListAvailableZonesResponse listAvailableZonesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableZonesResponse listAvailableZones();
  ListConsumerConnectionsResponse listConsumerConnectionsWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> consumerGroupId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsumerConnectionsResponse listConsumerConnections(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId);
  ListConsumerGroupSubscriptionsResponse listConsumerGroupSubscriptionsWithOptions(shared_ptr<string> instanceId,
                                                                                   shared_ptr<string> consumerGroupId,
                                                                                   shared_ptr<ListConsumerGroupSubscriptionsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsumerGroupSubscriptionsResponse listConsumerGroupSubscriptions(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<ListConsumerGroupSubscriptionsRequest> request);
  ListConsumerGroupsResponse listConsumerGroupsWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<ListConsumerGroupsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsumerGroupsResponse listConsumerGroups(shared_ptr<string> instanceId, shared_ptr<ListConsumerGroupsRequest> request);
  ListDisasterRecoveryCheckpointsResponse listDisasterRecoveryCheckpointsWithOptions(shared_ptr<string> planId,
                                                                                     shared_ptr<string> itemId,
                                                                                     shared_ptr<ListDisasterRecoveryCheckpointsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDisasterRecoveryCheckpointsResponse listDisasterRecoveryCheckpoints(shared_ptr<string> planId, shared_ptr<string> itemId, shared_ptr<ListDisasterRecoveryCheckpointsRequest> request);
  ListDisasterRecoveryItemsResponse listDisasterRecoveryItemsWithOptions(shared_ptr<string> planId,
                                                                         shared_ptr<ListDisasterRecoveryItemsRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDisasterRecoveryItemsResponse listDisasterRecoveryItems(shared_ptr<string> planId, shared_ptr<ListDisasterRecoveryItemsRequest> request);
  ListDisasterRecoveryPlansResponse listDisasterRecoveryPlansWithOptions(shared_ptr<ListDisasterRecoveryPlansRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDisasterRecoveryPlansResponse listDisasterRecoveryPlans(shared_ptr<ListDisasterRecoveryPlansRequest> request);
  ListInstanceAccountResponse listInstanceAccountWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<ListInstanceAccountRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceAccountResponse listInstanceAccount(shared_ptr<string> instanceId, shared_ptr<ListInstanceAccountRequest> request);
  ListInstanceAclResponse listInstanceAclWithOptions(shared_ptr<string> instanceId,
                                                     shared_ptr<ListInstanceAclRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceAclResponse listInstanceAcl(shared_ptr<string> instanceId, shared_ptr<ListInstanceAclRequest> request);
  ListInstanceIpWhitelistResponse listInstanceIpWhitelistWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<ListInstanceIpWhitelistRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceIpWhitelistResponse listInstanceIpWhitelist(shared_ptr<string> instanceId, shared_ptr<ListInstanceIpWhitelistRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListMessagesResponse listMessagesWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<string> topicName,
                                               shared_ptr<ListMessagesRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMessagesResponse listMessages(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<ListMessagesRequest> request);
  ListMetricMetaResponse listMetricMetaWithOptions(shared_ptr<ListMetricMetaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMetricMetaResponse listMetricMeta(shared_ptr<ListMetricMetaRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTopicSubscriptionsResponse listTopicSubscriptionsWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> topicName,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTopicSubscriptionsResponse listTopicSubscriptions(shared_ptr<string> instanceId, shared_ptr<string> topicName);
  ListTopicsResponse listTopicsWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<ListTopicsRequest> tmpReq,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTopicsResponse listTopics(shared_ptr<string> instanceId, shared_ptr<ListTopicsRequest> request);
  ListTracesResponse listTracesWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<string> topicName,
                                           shared_ptr<ListTracesRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTracesResponse listTraces(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<ListTracesRequest> request);
  ResetConsumeOffsetResponse resetConsumeOffsetWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> consumerGroupId,
                                                           shared_ptr<string> topicName,
                                                           shared_ptr<ResetConsumeOffsetRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetConsumeOffsetResponse resetConsumeOffset(shared_ptr<string> instanceId,
                                                shared_ptr<string> consumerGroupId,
                                                shared_ptr<string> topicName,
                                                shared_ptr<ResetConsumeOffsetRequest> request);
  StartDisasterRecoveryItemResponse startDisasterRecoveryItemWithOptions(shared_ptr<string> planId,
                                                                         shared_ptr<string> itemId,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDisasterRecoveryItemResponse startDisasterRecoveryItem(shared_ptr<string> planId, shared_ptr<string> itemId);
  StopDisasterRecoveryItemResponse stopDisasterRecoveryItemWithOptions(shared_ptr<string> planId,
                                                                       shared_ptr<string> itemId,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDisasterRecoveryItemResponse stopDisasterRecoveryItem(shared_ptr<string> planId, shared_ptr<string> itemId);
  SyncDisasterRecoveryCheckpointResponse syncDisasterRecoveryCheckpointWithOptions(shared_ptr<string> planId,
                                                                                   shared_ptr<string> itemId,
                                                                                   shared_ptr<string> checkpointId,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncDisasterRecoveryCheckpointResponse syncDisasterRecoveryCheckpoint(shared_ptr<string> planId, shared_ptr<string> itemId, shared_ptr<string> checkpointId);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateConsumerGroupResponse updateConsumerGroupWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> consumerGroupId,
                                                             shared_ptr<UpdateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConsumerGroupResponse updateConsumerGroup(shared_ptr<string> instanceId, shared_ptr<string> consumerGroupId, shared_ptr<UpdateConsumerGroupRequest> request);
  UpdateDisasterRecoveryItemResponse updateDisasterRecoveryItemWithOptions(shared_ptr<string> planId,
                                                                           shared_ptr<string> itemId,
                                                                           shared_ptr<UpdateDisasterRecoveryItemRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDisasterRecoveryItemResponse updateDisasterRecoveryItem(shared_ptr<string> planId, shared_ptr<string> itemId, shared_ptr<UpdateDisasterRecoveryItemRequest> request);
  UpdateDisasterRecoveryPlanResponse updateDisasterRecoveryPlanWithOptions(shared_ptr<string> planId,
                                                                           shared_ptr<UpdateDisasterRecoveryPlanRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDisasterRecoveryPlanResponse updateDisasterRecoveryPlan(shared_ptr<string> planId, shared_ptr<UpdateDisasterRecoveryPlanRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<string> instanceId,
                                                   shared_ptr<UpdateInstanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<string> instanceId, shared_ptr<UpdateInstanceRequest> request);
  UpdateInstanceAccountResponse updateInstanceAccountWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> username,
                                                                 shared_ptr<UpdateInstanceAccountRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceAccountResponse updateInstanceAccount(shared_ptr<string> instanceId, shared_ptr<string> username, shared_ptr<UpdateInstanceAccountRequest> request);
  UpdateInstanceAclResponse updateInstanceAclWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<string> username,
                                                         shared_ptr<UpdateInstanceAclRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceAclResponse updateInstanceAcl(shared_ptr<string> instanceId, shared_ptr<string> username, shared_ptr<UpdateInstanceAclRequest> request);
  UpdateTopicResponse updateTopicWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> topicName,
                                             shared_ptr<UpdateTopicRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTopicResponse updateTopic(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<UpdateTopicRequest> request);
  VerifyConsumeMessageResponse verifyConsumeMessageWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<string> topicName,
                                                               shared_ptr<string> messageId,
                                                               shared_ptr<VerifyConsumeMessageRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyConsumeMessageResponse verifyConsumeMessage(shared_ptr<string> instanceId,
                                                    shared_ptr<string> topicName,
                                                    shared_ptr<string> messageId,
                                                    shared_ptr<VerifyConsumeMessageRequest> request);
  VerifySendMessageResponse verifySendMessageWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<string> topicName,
                                                         shared_ptr<VerifySendMessageRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifySendMessageResponse verifySendMessage(shared_ptr<string> instanceId, shared_ptr<string> topicName, shared_ptr<VerifySendMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_RocketMQ20220801

#endif
