// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MNS-OPEN20220119_H_
#define ALIBABACLOUD_MNS-OPEN20220119_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Mns-open20220119 {
class EventMatchRule : public Darabonba::Model {
public:
  shared_ptr<bool> matchState{};
  shared_ptr<string> name{};
  shared_ptr<string> prefix{};
  shared_ptr<string> suffix{};

  EventMatchRule() {}

  explicit EventMatchRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchState) {
      res["MatchState"] = boost::any(*matchState);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (suffix) {
      res["Suffix"] = boost::any(*suffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchState") != m.end() && !m["MatchState"].empty()) {
      matchState = make_shared<bool>(boost::any_cast<bool>(m["MatchState"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Suffix") != m.end() && !m["Suffix"].empty()) {
      suffix = make_shared<string>(boost::any_cast<string>(m["Suffix"]));
    }
  }


  virtual ~EventMatchRule() = default;
};
class AuthorizeEndpointAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclStrategy{};
  shared_ptr<vector<string>> cidrList{};
  shared_ptr<string> endpointType{};

  AuthorizeEndpointAclRequest() {}

  explicit AuthorizeEndpointAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclStrategy) {
      res["AclStrategy"] = boost::any(*aclStrategy);
    }
    if (cidrList) {
      res["CidrList"] = boost::any(*cidrList);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclStrategy") != m.end() && !m["AclStrategy"].empty()) {
      aclStrategy = make_shared<string>(boost::any_cast<string>(m["AclStrategy"]));
    }
    if (m.find("CidrList") != m.end() && !m["CidrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CidrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CidrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~AuthorizeEndpointAclRequest() = default;
};
class AuthorizeEndpointAclShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclStrategy{};
  shared_ptr<string> cidrListShrink{};
  shared_ptr<string> endpointType{};

  AuthorizeEndpointAclShrinkRequest() {}

  explicit AuthorizeEndpointAclShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclStrategy) {
      res["AclStrategy"] = boost::any(*aclStrategy);
    }
    if (cidrListShrink) {
      res["CidrList"] = boost::any(*cidrListShrink);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclStrategy") != m.end() && !m["AclStrategy"].empty()) {
      aclStrategy = make_shared<string>(boost::any_cast<string>(m["AclStrategy"]));
    }
    if (m.find("CidrList") != m.end() && !m["CidrList"].empty()) {
      cidrListShrink = make_shared<string>(boost::any_cast<string>(m["CidrList"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~AuthorizeEndpointAclShrinkRequest() = default;
};
class AuthorizeEndpointAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  AuthorizeEndpointAclResponseBody() {}

  explicit AuthorizeEndpointAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AuthorizeEndpointAclResponseBody() = default;
};
class AuthorizeEndpointAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeEndpointAclResponseBody> body{};

  AuthorizeEndpointAclResponse() {}

  explicit AuthorizeEndpointAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeEndpointAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeEndpointAclResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeEndpointAclResponse() = default;
};
class CreateQueueRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateQueueRequestTag() {}

  explicit CreateQueueRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateQueueRequestTag() = default;
};
class CreateQueueRequest : public Darabonba::Model {
public:
  shared_ptr<long> delaySeconds{};
  shared_ptr<bool> enableLogging{};
  shared_ptr<long> maximumMessageSize{};
  shared_ptr<long> messageRetentionPeriod{};
  shared_ptr<long> pollingWaitSeconds{};
  shared_ptr<string> queueName{};
  shared_ptr<vector<CreateQueueRequestTag>> tag{};
  shared_ptr<long> visibilityTimeout{};

  CreateQueueRequest() {}

  explicit CreateQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delaySeconds) {
      res["DelaySeconds"] = boost::any(*delaySeconds);
    }
    if (enableLogging) {
      res["EnableLogging"] = boost::any(*enableLogging);
    }
    if (maximumMessageSize) {
      res["MaximumMessageSize"] = boost::any(*maximumMessageSize);
    }
    if (messageRetentionPeriod) {
      res["MessageRetentionPeriod"] = boost::any(*messageRetentionPeriod);
    }
    if (pollingWaitSeconds) {
      res["PollingWaitSeconds"] = boost::any(*pollingWaitSeconds);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (visibilityTimeout) {
      res["VisibilityTimeout"] = boost::any(*visibilityTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelaySeconds") != m.end() && !m["DelaySeconds"].empty()) {
      delaySeconds = make_shared<long>(boost::any_cast<long>(m["DelaySeconds"]));
    }
    if (m.find("EnableLogging") != m.end() && !m["EnableLogging"].empty()) {
      enableLogging = make_shared<bool>(boost::any_cast<bool>(m["EnableLogging"]));
    }
    if (m.find("MaximumMessageSize") != m.end() && !m["MaximumMessageSize"].empty()) {
      maximumMessageSize = make_shared<long>(boost::any_cast<long>(m["MaximumMessageSize"]));
    }
    if (m.find("MessageRetentionPeriod") != m.end() && !m["MessageRetentionPeriod"].empty()) {
      messageRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["MessageRetentionPeriod"]));
    }
    if (m.find("PollingWaitSeconds") != m.end() && !m["PollingWaitSeconds"].empty()) {
      pollingWaitSeconds = make_shared<long>(boost::any_cast<long>(m["PollingWaitSeconds"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateQueueRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateQueueRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateQueueRequestTag>>(expect1);
      }
    }
    if (m.find("VisibilityTimeout") != m.end() && !m["VisibilityTimeout"].empty()) {
      visibilityTimeout = make_shared<long>(boost::any_cast<long>(m["VisibilityTimeout"]));
    }
  }


  virtual ~CreateQueueRequest() = default;
};
class CreateQueueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  CreateQueueResponseBodyData() {}

  explicit CreateQueueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateQueueResponseBodyData() = default;
};
class CreateQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateQueueResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  CreateQueueResponseBody() {}

  explicit CreateQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateQueueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateQueueResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateQueueResponseBody() = default;
};
class CreateQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQueueResponseBody> body{};

  CreateQueueResponse() {}

  explicit CreateQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQueueResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQueueResponse() = default;
};
class CreateTopicRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTopicRequestTag() {}

  explicit CreateTopicRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTopicRequestTag() = default;
};
class CreateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableLogging{};
  shared_ptr<long> maxMessageSize{};
  shared_ptr<vector<CreateTopicRequestTag>> tag{};
  shared_ptr<string> topicName{};

  CreateTopicRequest() {}

  explicit CreateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableLogging) {
      res["EnableLogging"] = boost::any(*enableLogging);
    }
    if (maxMessageSize) {
      res["MaxMessageSize"] = boost::any(*maxMessageSize);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableLogging") != m.end() && !m["EnableLogging"].empty()) {
      enableLogging = make_shared<bool>(boost::any_cast<bool>(m["EnableLogging"]));
    }
    if (m.find("MaxMessageSize") != m.end() && !m["MaxMessageSize"].empty()) {
      maxMessageSize = make_shared<long>(boost::any_cast<long>(m["MaxMessageSize"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateTopicRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTopicRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateTopicRequestTag>>(expect1);
      }
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~CreateTopicRequest() = default;
};
class CreateTopicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  CreateTopicResponseBodyData() {}

  explicit CreateTopicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTopicResponseBodyData() = default;
};
class CreateTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateTopicResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  CreateTopicResponseBody() {}

  explicit CreateTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateTopicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTopicResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DeleteQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> queueName{};

  DeleteQueueRequest() {}

  explicit DeleteQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
  }


  virtual ~DeleteQueueRequest() = default;
};
class DeleteQueueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  DeleteQueueResponseBodyData() {}

  explicit DeleteQueueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteQueueResponseBodyData() = default;
};
class DeleteQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DeleteQueueResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteQueueResponseBody() {}

  explicit DeleteQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteQueueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteQueueResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteQueueResponseBody() = default;
};
class DeleteQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQueueResponseBody> body{};

  DeleteQueueResponse() {}

  explicit DeleteQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQueueResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQueueResponse() = default;
};
class DeleteTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> topicName{};

  DeleteTopicRequest() {}

  explicit DeleteTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~DeleteTopicRequest() = default;
};
class DeleteTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteTopicResponseBody() {}

  explicit DeleteTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DisableEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointType{};

  DisableEndpointRequest() {}

  explicit DisableEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~DisableEndpointRequest() = default;
};
class DisableEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DisableEndpointResponseBody() {}

  explicit DisableEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableEndpointResponseBody() = default;
};
class DisableEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableEndpointResponseBody> body{};

  DisableEndpointResponse() {}

  explicit DisableEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DisableEndpointResponse() = default;
};
class EnableEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointType{};

  EnableEndpointRequest() {}

  explicit EnableEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~EnableEndpointRequest() = default;
};
class EnableEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  EnableEndpointResponseBody() {}

  explicit EnableEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableEndpointResponseBody() = default;
};
class EnableEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableEndpointResponseBody> body{};

  EnableEndpointResponse() {}

  explicit EnableEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~EnableEndpointResponse() = default;
};
class GetEndpointAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointType{};

  GetEndpointAttributeRequest() {}

  explicit GetEndpointAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~GetEndpointAttributeRequest() = default;
};
class GetEndpointAttributeResponseBodyDataCidrList : public Darabonba::Model {
public:
  shared_ptr<string> aclStrategy{};
  shared_ptr<string> cidr{};
  shared_ptr<long> createTime{};

  GetEndpointAttributeResponseBodyDataCidrList() {}

  explicit GetEndpointAttributeResponseBodyDataCidrList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclStrategy) {
      res["AclStrategy"] = boost::any(*aclStrategy);
    }
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclStrategy") != m.end() && !m["AclStrategy"].empty()) {
      aclStrategy = make_shared<string>(boost::any_cast<string>(m["AclStrategy"]));
    }
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
  }


  virtual ~GetEndpointAttributeResponseBodyDataCidrList() = default;
};
class GetEndpointAttributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetEndpointAttributeResponseBodyDataCidrList>> cidrList{};
  shared_ptr<bool> endpointEnabled{};

  GetEndpointAttributeResponseBodyData() {}

  explicit GetEndpointAttributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrList) {
      vector<boost::any> temp1;
      for(auto item1:*cidrList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CidrList"] = boost::any(temp1);
    }
    if (endpointEnabled) {
      res["EndpointEnabled"] = boost::any(*endpointEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrList") != m.end() && !m["CidrList"].empty()) {
      if (typeid(vector<boost::any>) == m["CidrList"].type()) {
        vector<GetEndpointAttributeResponseBodyDataCidrList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CidrList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEndpointAttributeResponseBodyDataCidrList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cidrList = make_shared<vector<GetEndpointAttributeResponseBodyDataCidrList>>(expect1);
      }
    }
    if (m.find("EndpointEnabled") != m.end() && !m["EndpointEnabled"].empty()) {
      endpointEnabled = make_shared<bool>(boost::any_cast<bool>(m["EndpointEnabled"]));
    }
  }


  virtual ~GetEndpointAttributeResponseBodyData() = default;
};
class GetEndpointAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetEndpointAttributeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetEndpointAttributeResponseBody() {}

  explicit GetEndpointAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetEndpointAttributeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEndpointAttributeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetEndpointAttributeResponseBody() = default;
};
class GetEndpointAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEndpointAttributeResponseBody> body{};

  GetEndpointAttributeResponse() {}

  explicit GetEndpointAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEndpointAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEndpointAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetEndpointAttributeResponse() = default;
};
class GetQueueAttributesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetQueueAttributesRequestTag() {}

  explicit GetQueueAttributesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetQueueAttributesRequestTag() = default;
};
class GetQueueAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> queueName{};
  shared_ptr<vector<GetQueueAttributesRequestTag>> tag{};

  GetQueueAttributesRequest() {}

  explicit GetQueueAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
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
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetQueueAttributesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQueueAttributesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetQueueAttributesRequestTag>>(expect1);
      }
    }
  }


  virtual ~GetQueueAttributesRequest() = default;
};
class GetQueueAttributesResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetQueueAttributesResponseBodyDataTags() {}

  explicit GetQueueAttributesResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetQueueAttributesResponseBodyDataTags() = default;
};
class GetQueueAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activeMessages{};
  shared_ptr<long> createTime{};
  shared_ptr<long> delayMessages{};
  shared_ptr<long> delaySeconds{};
  shared_ptr<long> inactiveMessages{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<bool> loggingEnabled{};
  shared_ptr<long> maximumMessageSize{};
  shared_ptr<long> messageRetentionPeriod{};
  shared_ptr<long> pollingWaitSeconds{};
  shared_ptr<string> queueName{};
  shared_ptr<vector<GetQueueAttributesResponseBodyDataTags>> tags{};
  shared_ptr<long> visibilityTimeout{};

  GetQueueAttributesResponseBodyData() {}

  explicit GetQueueAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeMessages) {
      res["ActiveMessages"] = boost::any(*activeMessages);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (delayMessages) {
      res["DelayMessages"] = boost::any(*delayMessages);
    }
    if (delaySeconds) {
      res["DelaySeconds"] = boost::any(*delaySeconds);
    }
    if (inactiveMessages) {
      res["InactiveMessages"] = boost::any(*inactiveMessages);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (loggingEnabled) {
      res["LoggingEnabled"] = boost::any(*loggingEnabled);
    }
    if (maximumMessageSize) {
      res["MaximumMessageSize"] = boost::any(*maximumMessageSize);
    }
    if (messageRetentionPeriod) {
      res["MessageRetentionPeriod"] = boost::any(*messageRetentionPeriod);
    }
    if (pollingWaitSeconds) {
      res["PollingWaitSeconds"] = boost::any(*pollingWaitSeconds);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (visibilityTimeout) {
      res["VisibilityTimeout"] = boost::any(*visibilityTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveMessages") != m.end() && !m["ActiveMessages"].empty()) {
      activeMessages = make_shared<long>(boost::any_cast<long>(m["ActiveMessages"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DelayMessages") != m.end() && !m["DelayMessages"].empty()) {
      delayMessages = make_shared<long>(boost::any_cast<long>(m["DelayMessages"]));
    }
    if (m.find("DelaySeconds") != m.end() && !m["DelaySeconds"].empty()) {
      delaySeconds = make_shared<long>(boost::any_cast<long>(m["DelaySeconds"]));
    }
    if (m.find("InactiveMessages") != m.end() && !m["InactiveMessages"].empty()) {
      inactiveMessages = make_shared<long>(boost::any_cast<long>(m["InactiveMessages"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["LastModifyTime"]));
    }
    if (m.find("LoggingEnabled") != m.end() && !m["LoggingEnabled"].empty()) {
      loggingEnabled = make_shared<bool>(boost::any_cast<bool>(m["LoggingEnabled"]));
    }
    if (m.find("MaximumMessageSize") != m.end() && !m["MaximumMessageSize"].empty()) {
      maximumMessageSize = make_shared<long>(boost::any_cast<long>(m["MaximumMessageSize"]));
    }
    if (m.find("MessageRetentionPeriod") != m.end() && !m["MessageRetentionPeriod"].empty()) {
      messageRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["MessageRetentionPeriod"]));
    }
    if (m.find("PollingWaitSeconds") != m.end() && !m["PollingWaitSeconds"].empty()) {
      pollingWaitSeconds = make_shared<long>(boost::any_cast<long>(m["PollingWaitSeconds"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetQueueAttributesResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetQueueAttributesResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetQueueAttributesResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("VisibilityTimeout") != m.end() && !m["VisibilityTimeout"].empty()) {
      visibilityTimeout = make_shared<long>(boost::any_cast<long>(m["VisibilityTimeout"]));
    }
  }


  virtual ~GetQueueAttributesResponseBodyData() = default;
};
class GetQueueAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetQueueAttributesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetQueueAttributesResponseBody() {}

  explicit GetQueueAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetQueueAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetQueueAttributesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQueueAttributesResponseBody() = default;
};
class GetQueueAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQueueAttributesResponseBody> body{};

  GetQueueAttributesResponse() {}

  explicit GetQueueAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQueueAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQueueAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~GetQueueAttributesResponse() = default;
};
class GetSubscriptionAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> topicName{};

  GetSubscriptionAttributesRequest() {}

  explicit GetSubscriptionAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionName) {
      res["SubscriptionName"] = boost::any(*subscriptionName);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscriptionName") != m.end() && !m["SubscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["SubscriptionName"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~GetSubscriptionAttributesRequest() = default;
};
class GetSubscriptionAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> filterTag{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> notifyContentFormat{};
  shared_ptr<string> notifyStrategy{};
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> topicName{};
  shared_ptr<string> topicOwner{};

  GetSubscriptionAttributesResponseBodyData() {}

  explicit GetSubscriptionAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (filterTag) {
      res["FilterTag"] = boost::any(*filterTag);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (notifyContentFormat) {
      res["NotifyContentFormat"] = boost::any(*notifyContentFormat);
    }
    if (notifyStrategy) {
      res["NotifyStrategy"] = boost::any(*notifyStrategy);
    }
    if (subscriptionName) {
      res["SubscriptionName"] = boost::any(*subscriptionName);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    if (topicOwner) {
      res["TopicOwner"] = boost::any(*topicOwner);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("FilterTag") != m.end() && !m["FilterTag"].empty()) {
      filterTag = make_shared<string>(boost::any_cast<string>(m["FilterTag"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["LastModifyTime"]));
    }
    if (m.find("NotifyContentFormat") != m.end() && !m["NotifyContentFormat"].empty()) {
      notifyContentFormat = make_shared<string>(boost::any_cast<string>(m["NotifyContentFormat"]));
    }
    if (m.find("NotifyStrategy") != m.end() && !m["NotifyStrategy"].empty()) {
      notifyStrategy = make_shared<string>(boost::any_cast<string>(m["NotifyStrategy"]));
    }
    if (m.find("SubscriptionName") != m.end() && !m["SubscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["SubscriptionName"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
    if (m.find("TopicOwner") != m.end() && !m["TopicOwner"].empty()) {
      topicOwner = make_shared<string>(boost::any_cast<string>(m["TopicOwner"]));
    }
  }


  virtual ~GetSubscriptionAttributesResponseBodyData() = default;
};
class GetSubscriptionAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetSubscriptionAttributesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetSubscriptionAttributesResponseBody() {}

  explicit GetSubscriptionAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSubscriptionAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSubscriptionAttributesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSubscriptionAttributesResponseBody() = default;
};
class GetSubscriptionAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubscriptionAttributesResponseBody> body{};

  GetSubscriptionAttributesResponse() {}

  explicit GetSubscriptionAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubscriptionAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubscriptionAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubscriptionAttributesResponse() = default;
};
class GetTopicAttributesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTopicAttributesRequestTag() {}

  explicit GetTopicAttributesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTopicAttributesRequestTag() = default;
};
class GetTopicAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetTopicAttributesRequestTag>> tag{};
  shared_ptr<string> topicName{};

  GetTopicAttributesRequest() {}

  explicit GetTopicAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetTopicAttributesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopicAttributesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetTopicAttributesRequestTag>>(expect1);
      }
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~GetTopicAttributesRequest() = default;
};
class GetTopicAttributesResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetTopicAttributesResponseBodyDataTags() {}

  explicit GetTopicAttributesResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetTopicAttributesResponseBodyDataTags() = default;
};
class GetTopicAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<bool> loggingEnabled{};
  shared_ptr<long> maxMessageSize{};
  shared_ptr<long> messageCount{};
  shared_ptr<long> messageRetentionPeriod{};
  shared_ptr<vector<GetTopicAttributesResponseBodyDataTags>> tags{};
  shared_ptr<string> topicName{};

  GetTopicAttributesResponseBodyData() {}

  explicit GetTopicAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (loggingEnabled) {
      res["LoggingEnabled"] = boost::any(*loggingEnabled);
    }
    if (maxMessageSize) {
      res["MaxMessageSize"] = boost::any(*maxMessageSize);
    }
    if (messageCount) {
      res["MessageCount"] = boost::any(*messageCount);
    }
    if (messageRetentionPeriod) {
      res["MessageRetentionPeriod"] = boost::any(*messageRetentionPeriod);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["LastModifyTime"]));
    }
    if (m.find("LoggingEnabled") != m.end() && !m["LoggingEnabled"].empty()) {
      loggingEnabled = make_shared<bool>(boost::any_cast<bool>(m["LoggingEnabled"]));
    }
    if (m.find("MaxMessageSize") != m.end() && !m["MaxMessageSize"].empty()) {
      maxMessageSize = make_shared<long>(boost::any_cast<long>(m["MaxMessageSize"]));
    }
    if (m.find("MessageCount") != m.end() && !m["MessageCount"].empty()) {
      messageCount = make_shared<long>(boost::any_cast<long>(m["MessageCount"]));
    }
    if (m.find("MessageRetentionPeriod") != m.end() && !m["MessageRetentionPeriod"].empty()) {
      messageRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["MessageRetentionPeriod"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetTopicAttributesResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopicAttributesResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetTopicAttributesResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~GetTopicAttributesResponseBodyData() = default;
};
class GetTopicAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTopicAttributesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetTopicAttributesResponseBody() {}

  explicit GetTopicAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTopicAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTopicAttributesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTopicAttributesResponseBody() = default;
};
class GetTopicAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTopicAttributesResponseBody> body{};

  GetTopicAttributesResponse() {}

  explicit GetTopicAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicAttributesResponse() = default;
};
class ListQueueRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListQueueRequestTag() {}

  explicit ListQueueRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListQueueRequestTag() = default;
};
class ListQueueRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queueName{};
  shared_ptr<vector<ListQueueRequestTag>> tag{};

  ListQueueRequest() {}

  explicit ListQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
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
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListQueueRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueueRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListQueueRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListQueueRequest() = default;
};
class ListQueueResponseBodyDataPageDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListQueueResponseBodyDataPageDataTags() {}

  explicit ListQueueResponseBodyDataPageDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListQueueResponseBodyDataPageDataTags() = default;
};
class ListQueueResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<long> activeMessages{};
  shared_ptr<long> createTime{};
  shared_ptr<long> delayMessages{};
  shared_ptr<long> delaySeconds{};
  shared_ptr<long> inactiveMessages{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<bool> loggingEnabled{};
  shared_ptr<long> maximumMessageSize{};
  shared_ptr<long> messageRetentionPeriod{};
  shared_ptr<long> pollingWaitSeconds{};
  shared_ptr<string> queueName{};
  shared_ptr<vector<ListQueueResponseBodyDataPageDataTags>> tags{};
  shared_ptr<long> visibilityTimeout{};

  ListQueueResponseBodyDataPageData() {}

  explicit ListQueueResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeMessages) {
      res["ActiveMessages"] = boost::any(*activeMessages);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (delayMessages) {
      res["DelayMessages"] = boost::any(*delayMessages);
    }
    if (delaySeconds) {
      res["DelaySeconds"] = boost::any(*delaySeconds);
    }
    if (inactiveMessages) {
      res["InactiveMessages"] = boost::any(*inactiveMessages);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (loggingEnabled) {
      res["LoggingEnabled"] = boost::any(*loggingEnabled);
    }
    if (maximumMessageSize) {
      res["MaximumMessageSize"] = boost::any(*maximumMessageSize);
    }
    if (messageRetentionPeriod) {
      res["MessageRetentionPeriod"] = boost::any(*messageRetentionPeriod);
    }
    if (pollingWaitSeconds) {
      res["PollingWaitSeconds"] = boost::any(*pollingWaitSeconds);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (visibilityTimeout) {
      res["VisibilityTimeout"] = boost::any(*visibilityTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveMessages") != m.end() && !m["ActiveMessages"].empty()) {
      activeMessages = make_shared<long>(boost::any_cast<long>(m["ActiveMessages"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DelayMessages") != m.end() && !m["DelayMessages"].empty()) {
      delayMessages = make_shared<long>(boost::any_cast<long>(m["DelayMessages"]));
    }
    if (m.find("DelaySeconds") != m.end() && !m["DelaySeconds"].empty()) {
      delaySeconds = make_shared<long>(boost::any_cast<long>(m["DelaySeconds"]));
    }
    if (m.find("InactiveMessages") != m.end() && !m["InactiveMessages"].empty()) {
      inactiveMessages = make_shared<long>(boost::any_cast<long>(m["InactiveMessages"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["LastModifyTime"]));
    }
    if (m.find("LoggingEnabled") != m.end() && !m["LoggingEnabled"].empty()) {
      loggingEnabled = make_shared<bool>(boost::any_cast<bool>(m["LoggingEnabled"]));
    }
    if (m.find("MaximumMessageSize") != m.end() && !m["MaximumMessageSize"].empty()) {
      maximumMessageSize = make_shared<long>(boost::any_cast<long>(m["MaximumMessageSize"]));
    }
    if (m.find("MessageRetentionPeriod") != m.end() && !m["MessageRetentionPeriod"].empty()) {
      messageRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["MessageRetentionPeriod"]));
    }
    if (m.find("PollingWaitSeconds") != m.end() && !m["PollingWaitSeconds"].empty()) {
      pollingWaitSeconds = make_shared<long>(boost::any_cast<long>(m["PollingWaitSeconds"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListQueueResponseBodyDataPageDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueueResponseBodyDataPageDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListQueueResponseBodyDataPageDataTags>>(expect1);
      }
    }
    if (m.find("VisibilityTimeout") != m.end() && !m["VisibilityTimeout"].empty()) {
      visibilityTimeout = make_shared<long>(boost::any_cast<long>(m["VisibilityTimeout"]));
    }
  }


  virtual ~ListQueueResponseBodyDataPageData() = default;
};
class ListQueueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListQueueResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pages{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListQueueResponseBodyData() {}

  explicit ListQueueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListQueueResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueueResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListQueueResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListQueueResponseBodyData() = default;
};
class ListQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListQueueResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListQueueResponseBody() {}

  explicit ListQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListQueueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListQueueResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListQueueResponseBody() = default;
};
class ListQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueueResponseBody> body{};

  ListQueueResponse() {}

  explicit ListQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueueResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueueResponse() = default;
};
class ListSubscriptionByTopicRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> topicName{};

  ListSubscriptionByTopicRequest() {}

  explicit ListSubscriptionByTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (subscriptionName) {
      res["SubscriptionName"] = boost::any(*subscriptionName);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SubscriptionName") != m.end() && !m["SubscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["SubscriptionName"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~ListSubscriptionByTopicRequest() = default;
};
class ListSubscriptionByTopicResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> filterTag{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> notifyContentFormat{};
  shared_ptr<string> notifyStrategy{};
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> topicName{};
  shared_ptr<string> topicOwner{};

  ListSubscriptionByTopicResponseBodyDataPageData() {}

  explicit ListSubscriptionByTopicResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (filterTag) {
      res["FilterTag"] = boost::any(*filterTag);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (notifyContentFormat) {
      res["NotifyContentFormat"] = boost::any(*notifyContentFormat);
    }
    if (notifyStrategy) {
      res["NotifyStrategy"] = boost::any(*notifyStrategy);
    }
    if (subscriptionName) {
      res["SubscriptionName"] = boost::any(*subscriptionName);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    if (topicOwner) {
      res["TopicOwner"] = boost::any(*topicOwner);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("FilterTag") != m.end() && !m["FilterTag"].empty()) {
      filterTag = make_shared<string>(boost::any_cast<string>(m["FilterTag"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["LastModifyTime"]));
    }
    if (m.find("NotifyContentFormat") != m.end() && !m["NotifyContentFormat"].empty()) {
      notifyContentFormat = make_shared<string>(boost::any_cast<string>(m["NotifyContentFormat"]));
    }
    if (m.find("NotifyStrategy") != m.end() && !m["NotifyStrategy"].empty()) {
      notifyStrategy = make_shared<string>(boost::any_cast<string>(m["NotifyStrategy"]));
    }
    if (m.find("SubscriptionName") != m.end() && !m["SubscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["SubscriptionName"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
    if (m.find("TopicOwner") != m.end() && !m["TopicOwner"].empty()) {
      topicOwner = make_shared<string>(boost::any_cast<string>(m["TopicOwner"]));
    }
  }


  virtual ~ListSubscriptionByTopicResponseBodyDataPageData() = default;
};
class ListSubscriptionByTopicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListSubscriptionByTopicResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pages{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListSubscriptionByTopicResponseBodyData() {}

  explicit ListSubscriptionByTopicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListSubscriptionByTopicResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubscriptionByTopicResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListSubscriptionByTopicResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListSubscriptionByTopicResponseBodyData() = default;
};
class ListSubscriptionByTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListSubscriptionByTopicResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListSubscriptionByTopicResponseBody() {}

  explicit ListSubscriptionByTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListSubscriptionByTopicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSubscriptionByTopicResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSubscriptionByTopicResponseBody() = default;
};
class ListSubscriptionByTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubscriptionByTopicResponseBody> body{};

  ListSubscriptionByTopicResponse() {}

  explicit ListSubscriptionByTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubscriptionByTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubscriptionByTopicResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubscriptionByTopicResponse() = default;
};
class ListTopicRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTopicRequestTag() {}

  explicit ListTopicRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTopicRequestTag() = default;
};
class ListTopicRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListTopicRequestTag>> tag{};
  shared_ptr<string> topicName{};

  ListTopicRequest() {}

  explicit ListTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTopicRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTopicRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTopicRequestTag>>(expect1);
      }
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~ListTopicRequest() = default;
};
class ListTopicResponseBodyDataPageDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTopicResponseBodyDataPageDataTags() {}

  explicit ListTopicResponseBodyDataPageDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTopicResponseBodyDataPageDataTags() = default;
};
class ListTopicResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<bool> loggingEnabled{};
  shared_ptr<long> maxMessageSize{};
  shared_ptr<long> messageCount{};
  shared_ptr<long> messageRetentionPeriod{};
  shared_ptr<vector<ListTopicResponseBodyDataPageDataTags>> tags{};
  shared_ptr<string> topicInnerUrl{};
  shared_ptr<string> topicName{};
  shared_ptr<string> topicUrl{};

  ListTopicResponseBodyDataPageData() {}

  explicit ListTopicResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (loggingEnabled) {
      res["LoggingEnabled"] = boost::any(*loggingEnabled);
    }
    if (maxMessageSize) {
      res["MaxMessageSize"] = boost::any(*maxMessageSize);
    }
    if (messageCount) {
      res["MessageCount"] = boost::any(*messageCount);
    }
    if (messageRetentionPeriod) {
      res["MessageRetentionPeriod"] = boost::any(*messageRetentionPeriod);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (topicInnerUrl) {
      res["TopicInnerUrl"] = boost::any(*topicInnerUrl);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    if (topicUrl) {
      res["TopicUrl"] = boost::any(*topicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["LastModifyTime"]));
    }
    if (m.find("LoggingEnabled") != m.end() && !m["LoggingEnabled"].empty()) {
      loggingEnabled = make_shared<bool>(boost::any_cast<bool>(m["LoggingEnabled"]));
    }
    if (m.find("MaxMessageSize") != m.end() && !m["MaxMessageSize"].empty()) {
      maxMessageSize = make_shared<long>(boost::any_cast<long>(m["MaxMessageSize"]));
    }
    if (m.find("MessageCount") != m.end() && !m["MessageCount"].empty()) {
      messageCount = make_shared<long>(boost::any_cast<long>(m["MessageCount"]));
    }
    if (m.find("MessageRetentionPeriod") != m.end() && !m["MessageRetentionPeriod"].empty()) {
      messageRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["MessageRetentionPeriod"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTopicResponseBodyDataPageDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTopicResponseBodyDataPageDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTopicResponseBodyDataPageDataTags>>(expect1);
      }
    }
    if (m.find("TopicInnerUrl") != m.end() && !m["TopicInnerUrl"].empty()) {
      topicInnerUrl = make_shared<string>(boost::any_cast<string>(m["TopicInnerUrl"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
    if (m.find("TopicUrl") != m.end() && !m["TopicUrl"].empty()) {
      topicUrl = make_shared<string>(boost::any_cast<string>(m["TopicUrl"]));
    }
  }


  virtual ~ListTopicResponseBodyDataPageData() = default;
};
class ListTopicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTopicResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListTopicResponseBodyData() {}

  explicit ListTopicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListTopicResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTopicResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListTopicResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListTopicResponseBodyData() = default;
};
class ListTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListTopicResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListTopicResponseBody() {}

  explicit ListTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTopicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTopicResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListTopicResponseBody() = default;
};
class ListTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTopicResponseBody> body{};

  ListTopicResponse() {}

  explicit ListTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTopicResponseBody>(model1);
      }
    }
  }


  virtual ~ListTopicResponse() = default;
};
class RevokeEndpointAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclStrategy{};
  shared_ptr<vector<string>> cidrList{};
  shared_ptr<string> endpointType{};

  RevokeEndpointAclRequest() {}

  explicit RevokeEndpointAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclStrategy) {
      res["AclStrategy"] = boost::any(*aclStrategy);
    }
    if (cidrList) {
      res["CidrList"] = boost::any(*cidrList);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclStrategy") != m.end() && !m["AclStrategy"].empty()) {
      aclStrategy = make_shared<string>(boost::any_cast<string>(m["AclStrategy"]));
    }
    if (m.find("CidrList") != m.end() && !m["CidrList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CidrList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CidrList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidrList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~RevokeEndpointAclRequest() = default;
};
class RevokeEndpointAclShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclStrategy{};
  shared_ptr<string> cidrListShrink{};
  shared_ptr<string> endpointType{};

  RevokeEndpointAclShrinkRequest() {}

  explicit RevokeEndpointAclShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclStrategy) {
      res["AclStrategy"] = boost::any(*aclStrategy);
    }
    if (cidrListShrink) {
      res["CidrList"] = boost::any(*cidrListShrink);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclStrategy") != m.end() && !m["AclStrategy"].empty()) {
      aclStrategy = make_shared<string>(boost::any_cast<string>(m["AclStrategy"]));
    }
    if (m.find("CidrList") != m.end() && !m["CidrList"].empty()) {
      cidrListShrink = make_shared<string>(boost::any_cast<string>(m["CidrList"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
  }


  virtual ~RevokeEndpointAclShrinkRequest() = default;
};
class RevokeEndpointAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  RevokeEndpointAclResponseBody() {}

  explicit RevokeEndpointAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RevokeEndpointAclResponseBody() = default;
};
class RevokeEndpointAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeEndpointAclResponseBody> body{};

  RevokeEndpointAclResponse() {}

  explicit RevokeEndpointAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeEndpointAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeEndpointAclResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeEndpointAclResponse() = default;
};
class SetQueueAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<long> delaySeconds{};
  shared_ptr<bool> enableLogging{};
  shared_ptr<long> maximumMessageSize{};
  shared_ptr<long> messageRetentionPeriod{};
  shared_ptr<long> pollingWaitSeconds{};
  shared_ptr<string> queueName{};
  shared_ptr<long> visibilityTimeout{};

  SetQueueAttributesRequest() {}

  explicit SetQueueAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delaySeconds) {
      res["DelaySeconds"] = boost::any(*delaySeconds);
    }
    if (enableLogging) {
      res["EnableLogging"] = boost::any(*enableLogging);
    }
    if (maximumMessageSize) {
      res["MaximumMessageSize"] = boost::any(*maximumMessageSize);
    }
    if (messageRetentionPeriod) {
      res["MessageRetentionPeriod"] = boost::any(*messageRetentionPeriod);
    }
    if (pollingWaitSeconds) {
      res["PollingWaitSeconds"] = boost::any(*pollingWaitSeconds);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (visibilityTimeout) {
      res["VisibilityTimeout"] = boost::any(*visibilityTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelaySeconds") != m.end() && !m["DelaySeconds"].empty()) {
      delaySeconds = make_shared<long>(boost::any_cast<long>(m["DelaySeconds"]));
    }
    if (m.find("EnableLogging") != m.end() && !m["EnableLogging"].empty()) {
      enableLogging = make_shared<bool>(boost::any_cast<bool>(m["EnableLogging"]));
    }
    if (m.find("MaximumMessageSize") != m.end() && !m["MaximumMessageSize"].empty()) {
      maximumMessageSize = make_shared<long>(boost::any_cast<long>(m["MaximumMessageSize"]));
    }
    if (m.find("MessageRetentionPeriod") != m.end() && !m["MessageRetentionPeriod"].empty()) {
      messageRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["MessageRetentionPeriod"]));
    }
    if (m.find("PollingWaitSeconds") != m.end() && !m["PollingWaitSeconds"].empty()) {
      pollingWaitSeconds = make_shared<long>(boost::any_cast<long>(m["PollingWaitSeconds"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("VisibilityTimeout") != m.end() && !m["VisibilityTimeout"].empty()) {
      visibilityTimeout = make_shared<long>(boost::any_cast<long>(m["VisibilityTimeout"]));
    }
  }


  virtual ~SetQueueAttributesRequest() = default;
};
class SetQueueAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  SetQueueAttributesResponseBodyData() {}

  explicit SetQueueAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetQueueAttributesResponseBodyData() = default;
};
class SetQueueAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SetQueueAttributesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SetQueueAttributesResponseBody() {}

  explicit SetQueueAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SetQueueAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SetQueueAttributesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetQueueAttributesResponseBody() = default;
};
class SetQueueAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetQueueAttributesResponseBody> body{};

  SetQueueAttributesResponse() {}

  explicit SetQueueAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetQueueAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetQueueAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~SetQueueAttributesResponse() = default;
};
class SetSubscriptionAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> notifyStrategy{};
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> topicName{};

  SetSubscriptionAttributesRequest() {}

  explicit SetSubscriptionAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyStrategy) {
      res["NotifyStrategy"] = boost::any(*notifyStrategy);
    }
    if (subscriptionName) {
      res["SubscriptionName"] = boost::any(*subscriptionName);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotifyStrategy") != m.end() && !m["NotifyStrategy"].empty()) {
      notifyStrategy = make_shared<string>(boost::any_cast<string>(m["NotifyStrategy"]));
    }
    if (m.find("SubscriptionName") != m.end() && !m["SubscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["SubscriptionName"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~SetSubscriptionAttributesRequest() = default;
};
class SetSubscriptionAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  SetSubscriptionAttributesResponseBodyData() {}

  explicit SetSubscriptionAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetSubscriptionAttributesResponseBodyData() = default;
};
class SetSubscriptionAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SetSubscriptionAttributesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SetSubscriptionAttributesResponseBody() {}

  explicit SetSubscriptionAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SetSubscriptionAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SetSubscriptionAttributesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetSubscriptionAttributesResponseBody() = default;
};
class SetSubscriptionAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSubscriptionAttributesResponseBody> body{};

  SetSubscriptionAttributesResponse() {}

  explicit SetSubscriptionAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetSubscriptionAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSubscriptionAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~SetSubscriptionAttributesResponse() = default;
};
class SetTopicAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableLogging{};
  shared_ptr<long> maxMessageSize{};
  shared_ptr<string> topicName{};

  SetTopicAttributesRequest() {}

  explicit SetTopicAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableLogging) {
      res["EnableLogging"] = boost::any(*enableLogging);
    }
    if (maxMessageSize) {
      res["MaxMessageSize"] = boost::any(*maxMessageSize);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableLogging") != m.end() && !m["EnableLogging"].empty()) {
      enableLogging = make_shared<bool>(boost::any_cast<bool>(m["EnableLogging"]));
    }
    if (m.find("MaxMessageSize") != m.end() && !m["MaxMessageSize"].empty()) {
      maxMessageSize = make_shared<long>(boost::any_cast<long>(m["MaxMessageSize"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~SetTopicAttributesRequest() = default;
};
class SetTopicAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  SetTopicAttributesResponseBodyData() {}

  explicit SetTopicAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetTopicAttributesResponseBodyData() = default;
};
class SetTopicAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SetTopicAttributesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SetTopicAttributesResponseBody() {}

  explicit SetTopicAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SetTopicAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SetTopicAttributesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetTopicAttributesResponseBody() = default;
};
class SetTopicAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetTopicAttributesResponseBody> body{};

  SetTopicAttributesResponse() {}

  explicit SetTopicAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetTopicAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetTopicAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~SetTopicAttributesResponse() = default;
};
class SubscribeRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> messageTag{};
  shared_ptr<string> notifyContentFormat{};
  shared_ptr<string> notifyStrategy{};
  shared_ptr<string> pushType{};
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> topicName{};

  SubscribeRequest() {}

  explicit SubscribeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (messageTag) {
      res["MessageTag"] = boost::any(*messageTag);
    }
    if (notifyContentFormat) {
      res["NotifyContentFormat"] = boost::any(*notifyContentFormat);
    }
    if (notifyStrategy) {
      res["NotifyStrategy"] = boost::any(*notifyStrategy);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    if (subscriptionName) {
      res["SubscriptionName"] = boost::any(*subscriptionName);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("MessageTag") != m.end() && !m["MessageTag"].empty()) {
      messageTag = make_shared<string>(boost::any_cast<string>(m["MessageTag"]));
    }
    if (m.find("NotifyContentFormat") != m.end() && !m["NotifyContentFormat"].empty()) {
      notifyContentFormat = make_shared<string>(boost::any_cast<string>(m["NotifyContentFormat"]));
    }
    if (m.find("NotifyStrategy") != m.end() && !m["NotifyStrategy"].empty()) {
      notifyStrategy = make_shared<string>(boost::any_cast<string>(m["NotifyStrategy"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
    if (m.find("SubscriptionName") != m.end() && !m["SubscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["SubscriptionName"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~SubscribeRequest() = default;
};
class SubscribeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SubscribeResponseBody() {}

  explicit SubscribeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubscribeResponseBody() = default;
};
class SubscribeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubscribeResponseBody> body{};

  SubscribeResponse() {}

  explicit SubscribeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubscribeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubscribeResponseBody>(model1);
      }
    }
  }


  virtual ~SubscribeResponse() = default;
};
class UnsubscribeRequest : public Darabonba::Model {
public:
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> topicName{};

  UnsubscribeRequest() {}

  explicit UnsubscribeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionName) {
      res["SubscriptionName"] = boost::any(*subscriptionName);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscriptionName") != m.end() && !m["SubscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["SubscriptionName"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~UnsubscribeRequest() = default;
};
class UnsubscribeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  UnsubscribeResponseBodyData() {}

  explicit UnsubscribeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnsubscribeResponseBodyData() = default;
};
class UnsubscribeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<UnsubscribeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  UnsubscribeResponseBody() {}

  explicit UnsubscribeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UnsubscribeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UnsubscribeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnsubscribeResponseBody() = default;
};
class UnsubscribeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnsubscribeResponseBody> body{};

  UnsubscribeResponse() {}

  explicit UnsubscribeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnsubscribeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnsubscribeResponseBody>(model1);
      }
    }
  }


  virtual ~UnsubscribeResponse() = default;
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
  AuthorizeEndpointAclResponse authorizeEndpointAclWithOptions(shared_ptr<AuthorizeEndpointAclRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeEndpointAclResponse authorizeEndpointAcl(shared_ptr<AuthorizeEndpointAclRequest> request);
  CreateQueueResponse createQueueWithOptions(shared_ptr<CreateQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQueueResponse createQueue(shared_ptr<CreateQueueRequest> request);
  CreateTopicResponse createTopicWithOptions(shared_ptr<CreateTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTopicResponse createTopic(shared_ptr<CreateTopicRequest> request);
  DeleteQueueResponse deleteQueueWithOptions(shared_ptr<DeleteQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQueueResponse deleteQueue(shared_ptr<DeleteQueueRequest> request);
  DeleteTopicResponse deleteTopicWithOptions(shared_ptr<DeleteTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTopicResponse deleteTopic(shared_ptr<DeleteTopicRequest> request);
  DisableEndpointResponse disableEndpointWithOptions(shared_ptr<DisableEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableEndpointResponse disableEndpoint(shared_ptr<DisableEndpointRequest> request);
  EnableEndpointResponse enableEndpointWithOptions(shared_ptr<EnableEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableEndpointResponse enableEndpoint(shared_ptr<EnableEndpointRequest> request);
  GetEndpointAttributeResponse getEndpointAttributeWithOptions(shared_ptr<GetEndpointAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEndpointAttributeResponse getEndpointAttribute(shared_ptr<GetEndpointAttributeRequest> request);
  GetQueueAttributesResponse getQueueAttributesWithOptions(shared_ptr<GetQueueAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQueueAttributesResponse getQueueAttributes(shared_ptr<GetQueueAttributesRequest> request);
  GetSubscriptionAttributesResponse getSubscriptionAttributesWithOptions(shared_ptr<GetSubscriptionAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubscriptionAttributesResponse getSubscriptionAttributes(shared_ptr<GetSubscriptionAttributesRequest> request);
  GetTopicAttributesResponse getTopicAttributesWithOptions(shared_ptr<GetTopicAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicAttributesResponse getTopicAttributes(shared_ptr<GetTopicAttributesRequest> request);
  ListQueueResponse listQueueWithOptions(shared_ptr<ListQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueueResponse listQueue(shared_ptr<ListQueueRequest> request);
  ListSubscriptionByTopicResponse listSubscriptionByTopicWithOptions(shared_ptr<ListSubscriptionByTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubscriptionByTopicResponse listSubscriptionByTopic(shared_ptr<ListSubscriptionByTopicRequest> request);
  ListTopicResponse listTopicWithOptions(shared_ptr<ListTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTopicResponse listTopic(shared_ptr<ListTopicRequest> request);
  RevokeEndpointAclResponse revokeEndpointAclWithOptions(shared_ptr<RevokeEndpointAclRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeEndpointAclResponse revokeEndpointAcl(shared_ptr<RevokeEndpointAclRequest> request);
  SetQueueAttributesResponse setQueueAttributesWithOptions(shared_ptr<SetQueueAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetQueueAttributesResponse setQueueAttributes(shared_ptr<SetQueueAttributesRequest> request);
  SetSubscriptionAttributesResponse setSubscriptionAttributesWithOptions(shared_ptr<SetSubscriptionAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSubscriptionAttributesResponse setSubscriptionAttributes(shared_ptr<SetSubscriptionAttributesRequest> request);
  SetTopicAttributesResponse setTopicAttributesWithOptions(shared_ptr<SetTopicAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetTopicAttributesResponse setTopicAttributes(shared_ptr<SetTopicAttributesRequest> request);
  SubscribeResponse subscribeWithOptions(shared_ptr<SubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubscribeResponse subscribe(shared_ptr<SubscribeRequest> request);
  UnsubscribeResponse unsubscribeWithOptions(shared_ptr<UnsubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnsubscribeResponse unsubscribe(shared_ptr<UnsubscribeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mns-open20220119

#endif
