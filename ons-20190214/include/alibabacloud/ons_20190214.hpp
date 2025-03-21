// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ONS20190214_H_
#define ALIBABACLOUD_ONS20190214_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ons20190214 {
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
  shared_ptr<string> instanceId{};
  shared_ptr<string> nextToken{};
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  shared_ptr<string> instanceId{};
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
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
class OnsConsumerAccumulateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> detail{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  OnsConsumerAccumulateRequest() {}

  explicit OnsConsumerAccumulateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<bool>(boost::any_cast<bool>(m["Detail"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~OnsConsumerAccumulateRequest() = default;
};
class OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo : public Darabonba::Model {
public:
  shared_ptr<long> delayTime{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<string> topic{};
  shared_ptr<long> totalDiff{};

  OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo() {}

  explicit OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
  }


  virtual ~OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo() = default;
};
class OnsConsumerAccumulateResponseBodyDataDetailInTopicList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo>> detailInTopicDo{};

  OnsConsumerAccumulateResponseBodyDataDetailInTopicList() {}

  explicit OnsConsumerAccumulateResponseBodyDataDetailInTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInTopicDo) {
      vector<boost::any> temp1;
      for(auto item1:*detailInTopicDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailInTopicDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInTopicDo") != m.end() && !m["DetailInTopicDo"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailInTopicDo"].type()) {
        vector<OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailInTopicDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailInTopicDo = make_shared<vector<OnsConsumerAccumulateResponseBodyDataDetailInTopicListDetailInTopicDo>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerAccumulateResponseBodyDataDetailInTopicList() = default;
};
class OnsConsumerAccumulateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> consumeTps{};
  shared_ptr<long> delayTime{};
  shared_ptr<OnsConsumerAccumulateResponseBodyDataDetailInTopicList> detailInTopicList{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<bool> online{};
  shared_ptr<long> totalDiff{};

  OnsConsumerAccumulateResponseBodyData() {}

  explicit OnsConsumerAccumulateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeTps) {
      res["ConsumeTps"] = boost::any(*consumeTps);
    }
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (detailInTopicList) {
      res["DetailInTopicList"] = detailInTopicList ? boost::any(detailInTopicList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumeTps") != m.end() && !m["ConsumeTps"].empty()) {
      consumeTps = make_shared<double>(boost::any_cast<double>(m["ConsumeTps"]));
    }
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("DetailInTopicList") != m.end() && !m["DetailInTopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailInTopicList"].type()) {
        OnsConsumerAccumulateResponseBodyDataDetailInTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailInTopicList"]));
        detailInTopicList = make_shared<OnsConsumerAccumulateResponseBodyDataDetailInTopicList>(model1);
      }
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
  }


  virtual ~OnsConsumerAccumulateResponseBodyData() = default;
};
class OnsConsumerAccumulateResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsConsumerAccumulateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsConsumerAccumulateResponseBody() {}

  explicit OnsConsumerAccumulateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsConsumerAccumulateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsConsumerAccumulateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsConsumerAccumulateResponseBody() = default;
};
class OnsConsumerAccumulateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsConsumerAccumulateResponseBody> body{};

  OnsConsumerAccumulateResponse() {}

  explicit OnsConsumerAccumulateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsConsumerAccumulateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsConsumerAccumulateResponseBody>(model1);
      }
    }
  }


  virtual ~OnsConsumerAccumulateResponse() = default;
};
class OnsConsumerGetConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  OnsConsumerGetConnectionRequest() {}

  explicit OnsConsumerGetConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~OnsConsumerGetConnectionRequest() = default;
};
class OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo : public Darabonba::Model {
public:
  shared_ptr<string> clientAddr{};
  shared_ptr<string> clientId{};
  shared_ptr<string> language{};
  shared_ptr<string> version{};

  OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo() {}

  explicit OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientAddr) {
      res["ClientAddr"] = boost::any(*clientAddr);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientAddr") != m.end() && !m["ClientAddr"].empty()) {
      clientAddr = make_shared<string>(boost::any_cast<string>(m["ClientAddr"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo() = default;
};
class OnsConsumerGetConnectionResponseBodyDataConnectionList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo>> connectionDo{};

  OnsConsumerGetConnectionResponseBodyDataConnectionList() {}

  explicit OnsConsumerGetConnectionResponseBodyDataConnectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDo) {
      vector<boost::any> temp1;
      for(auto item1:*connectionDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDo") != m.end() && !m["ConnectionDo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionDo"].type()) {
        vector<OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionDo = make_shared<vector<OnsConsumerGetConnectionResponseBodyDataConnectionListConnectionDo>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerGetConnectionResponseBodyDataConnectionList() = default;
};
class OnsConsumerGetConnectionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<OnsConsumerGetConnectionResponseBodyDataConnectionList> connectionList{};
  shared_ptr<string> messageModel{};

  OnsConsumerGetConnectionResponseBodyData() {}

  explicit OnsConsumerGetConnectionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionList) {
      res["ConnectionList"] = connectionList ? boost::any(connectionList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (messageModel) {
      res["MessageModel"] = boost::any(*messageModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionList") != m.end() && !m["ConnectionList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectionList"].type()) {
        OnsConsumerGetConnectionResponseBodyDataConnectionList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectionList"]));
        connectionList = make_shared<OnsConsumerGetConnectionResponseBodyDataConnectionList>(model1);
      }
    }
    if (m.find("MessageModel") != m.end() && !m["MessageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["MessageModel"]));
    }
  }


  virtual ~OnsConsumerGetConnectionResponseBodyData() = default;
};
class OnsConsumerGetConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsConsumerGetConnectionResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsConsumerGetConnectionResponseBody() {}

  explicit OnsConsumerGetConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsConsumerGetConnectionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsConsumerGetConnectionResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsConsumerGetConnectionResponseBody() = default;
};
class OnsConsumerGetConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsConsumerGetConnectionResponseBody> body{};

  OnsConsumerGetConnectionResponse() {}

  explicit OnsConsumerGetConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsConsumerGetConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsConsumerGetConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~OnsConsumerGetConnectionResponse() = default;
};
class OnsConsumerResetOffsetRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> resetTimestamp{};
  shared_ptr<string> topic{};
  shared_ptr<long> type{};

  OnsConsumerResetOffsetRequest() {}

  explicit OnsConsumerResetOffsetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resetTimestamp) {
      res["ResetTimestamp"] = boost::any(*resetTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResetTimestamp") != m.end() && !m["ResetTimestamp"].empty()) {
      resetTimestamp = make_shared<long>(boost::any_cast<long>(m["ResetTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~OnsConsumerResetOffsetRequest() = default;
};
class OnsConsumerResetOffsetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsConsumerResetOffsetResponseBody() {}

  explicit OnsConsumerResetOffsetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsConsumerResetOffsetResponseBody() = default;
};
class OnsConsumerResetOffsetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsConsumerResetOffsetResponseBody> body{};

  OnsConsumerResetOffsetResponse() {}

  explicit OnsConsumerResetOffsetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsConsumerResetOffsetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsConsumerResetOffsetResponseBody>(model1);
      }
    }
  }


  virtual ~OnsConsumerResetOffsetResponse() = default;
};
class OnsConsumerStatusRequest : public Darabonba::Model {
public:
  shared_ptr<bool> detail{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> needJstack{};

  OnsConsumerStatusRequest() {}

  explicit OnsConsumerStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (needJstack) {
      res["NeedJstack"] = boost::any(*needJstack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<bool>(boost::any_cast<bool>(m["Detail"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NeedJstack") != m.end() && !m["NeedJstack"].empty()) {
      needJstack = make_shared<bool>(boost::any_cast<bool>(m["NeedJstack"]));
    }
  }


  virtual ~OnsConsumerStatusRequest() = default;
};
class OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo : public Darabonba::Model {
public:
  shared_ptr<string> clientAddr{};
  shared_ptr<string> clientId{};
  shared_ptr<string> language{};
  shared_ptr<string> remoteIP{};
  shared_ptr<string> version{};

  OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo() {}

  explicit OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientAddr) {
      res["ClientAddr"] = boost::any(*clientAddr);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (remoteIP) {
      res["RemoteIP"] = boost::any(*remoteIP);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientAddr") != m.end() && !m["ClientAddr"].empty()) {
      clientAddr = make_shared<string>(boost::any_cast<string>(m["ClientAddr"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("RemoteIP") != m.end() && !m["RemoteIP"].empty()) {
      remoteIP = make_shared<string>(boost::any_cast<string>(m["RemoteIP"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo() = default;
};
class OnsConsumerStatusResponseBodyDataConnectionSet : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo>> connectionDo{};

  OnsConsumerStatusResponseBodyDataConnectionSet() {}

  explicit OnsConsumerStatusResponseBodyDataConnectionSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDo) {
      vector<boost::any> temp1;
      for(auto item1:*connectionDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDo") != m.end() && !m["ConnectionDo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionDo"].type()) {
        vector<OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionDo = make_shared<vector<OnsConsumerStatusResponseBodyDataConnectionSetConnectionDo>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConnectionSet() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDoTrackList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> track{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDoTrackList() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDoTrackList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (track) {
      res["Track"] = boost::any(*track);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Track") != m.end() && !m["Track"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Track"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Track"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      track = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDoTrackList() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo : public Darabonba::Model {
public:
  shared_ptr<string> thread{};
  shared_ptr<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDoTrackList> trackList{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thread) {
      res["Thread"] = boost::any(*thread);
    }
    if (trackList) {
      res["TrackList"] = trackList ? boost::any(trackList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Thread") != m.end() && !m["Thread"].empty()) {
      thread = make_shared<string>(boost::any_cast<string>(m["Thread"]));
    }
    if (m.find("TrackList") != m.end() && !m["TrackList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrackList"].type()) {
        OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDoTrackList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrackList"]));
        trackList = make_shared<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDoTrackList>(model1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstack : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo>> threadTrackDo{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstack() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (threadTrackDo) {
      vector<boost::any> temp1;
      for(auto item1:*threadTrackDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ThreadTrackDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ThreadTrackDo") != m.end() && !m["ThreadTrackDo"].empty()) {
      if (typeid(vector<boost::any>) == m["ThreadTrackDo"].type()) {
        vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ThreadTrackDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        threadTrackDo = make_shared<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstackThreadTrackDo>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstack() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo : public Darabonba::Model {
public:
  shared_ptr<long> failedCountPerHour{};
  shared_ptr<double> failedTps{};
  shared_ptr<double> okTps{};
  shared_ptr<double> rt{};
  shared_ptr<string> topic{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedCountPerHour) {
      res["FailedCountPerHour"] = boost::any(*failedCountPerHour);
    }
    if (failedTps) {
      res["FailedTps"] = boost::any(*failedTps);
    }
    if (okTps) {
      res["OkTps"] = boost::any(*okTps);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedCountPerHour") != m.end() && !m["FailedCountPerHour"].empty()) {
      failedCountPerHour = make_shared<long>(boost::any_cast<long>(m["FailedCountPerHour"]));
    }
    if (m.find("FailedTps") != m.end() && !m["FailedTps"].empty()) {
      failedTps = make_shared<double>(boost::any_cast<double>(m["FailedTps"]));
    }
    if (m.find("OkTps") != m.end() && !m["OkTps"].empty()) {
      okTps = make_shared<double>(boost::any_cast<double>(m["OkTps"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<double>(boost::any_cast<double>(m["Rt"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo>> consumerRunningDataDo{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataList() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerRunningDataDo) {
      vector<boost::any> temp1;
      for(auto item1:*consumerRunningDataDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConsumerRunningDataDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerRunningDataDo") != m.end() && !m["ConsumerRunningDataDo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConsumerRunningDataDo"].type()) {
        vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConsumerRunningDataDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        consumerRunningDataDo = make_shared<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataListConsumerRunningDataDo>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataList() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionDataTagsSet : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tag{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionDataTagsSet() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionDataTagsSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tag = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionDataTagsSet() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData : public Darabonba::Model {
public:
  shared_ptr<string> subString{};
  shared_ptr<long> subVersion{};
  shared_ptr<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionDataTagsSet> tagsSet{};
  shared_ptr<string> topic{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subString) {
      res["SubString"] = boost::any(*subString);
    }
    if (subVersion) {
      res["SubVersion"] = boost::any(*subVersion);
    }
    if (tagsSet) {
      res["TagsSet"] = tagsSet ? boost::any(tagsSet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubString") != m.end() && !m["SubString"].empty()) {
      subString = make_shared<string>(boost::any_cast<string>(m["SubString"]));
    }
    if (m.find("SubVersion") != m.end() && !m["SubVersion"].empty()) {
      subVersion = make_shared<long>(boost::any_cast<long>(m["SubVersion"]));
    }
    if (m.find("TagsSet") != m.end() && !m["TagsSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagsSet"].type()) {
        OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionDataTagsSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagsSet"]));
        tagsSet = make_shared<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionDataTagsSet>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSet : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData>> subscriptionData{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSet() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionData) {
      vector<boost::any> temp1;
      for(auto item1:*subscriptionData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscriptionData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscriptionData") != m.end() && !m["SubscriptionData"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscriptionData"].type()) {
        vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscriptionData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscriptionData = make_shared<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSetSubscriptionData>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSet() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> connection{};
  shared_ptr<string> consumeModel{};
  shared_ptr<string> consumeType{};
  shared_ptr<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstack> jstack{};
  shared_ptr<string> language{};
  shared_ptr<long> lastTimeStamp{};
  shared_ptr<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataList> runningDataList{};
  shared_ptr<long> startTimeStamp{};
  shared_ptr<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSet> subscriptionSet{};
  shared_ptr<long> threadCount{};
  shared_ptr<string> version{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (connection) {
      res["Connection"] = boost::any(*connection);
    }
    if (consumeModel) {
      res["ConsumeModel"] = boost::any(*consumeModel);
    }
    if (consumeType) {
      res["ConsumeType"] = boost::any(*consumeType);
    }
    if (jstack) {
      res["Jstack"] = jstack ? boost::any(jstack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (lastTimeStamp) {
      res["LastTimeStamp"] = boost::any(*lastTimeStamp);
    }
    if (runningDataList) {
      res["RunningDataList"] = runningDataList ? boost::any(runningDataList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTimeStamp) {
      res["StartTimeStamp"] = boost::any(*startTimeStamp);
    }
    if (subscriptionSet) {
      res["SubscriptionSet"] = subscriptionSet ? boost::any(subscriptionSet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (threadCount) {
      res["ThreadCount"] = boost::any(*threadCount);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("Connection") != m.end() && !m["Connection"].empty()) {
      connection = make_shared<string>(boost::any_cast<string>(m["Connection"]));
    }
    if (m.find("ConsumeModel") != m.end() && !m["ConsumeModel"].empty()) {
      consumeModel = make_shared<string>(boost::any_cast<string>(m["ConsumeModel"]));
    }
    if (m.find("ConsumeType") != m.end() && !m["ConsumeType"].empty()) {
      consumeType = make_shared<string>(boost::any_cast<string>(m["ConsumeType"]));
    }
    if (m.find("Jstack") != m.end() && !m["Jstack"].empty()) {
      if (typeid(map<string, boost::any>) == m["Jstack"].type()) {
        OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Jstack"]));
        jstack = make_shared<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoJstack>(model1);
      }
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LastTimeStamp") != m.end() && !m["LastTimeStamp"].empty()) {
      lastTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastTimeStamp"]));
    }
    if (m.find("RunningDataList") != m.end() && !m["RunningDataList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunningDataList"].type()) {
        OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunningDataList"]));
        runningDataList = make_shared<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoRunningDataList>(model1);
      }
    }
    if (m.find("StartTimeStamp") != m.end() && !m["StartTimeStamp"].empty()) {
      startTimeStamp = make_shared<long>(boost::any_cast<long>(m["StartTimeStamp"]));
    }
    if (m.find("SubscriptionSet") != m.end() && !m["SubscriptionSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionSet"].type()) {
        OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionSet"]));
        subscriptionSet = make_shared<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDoSubscriptionSet>(model1);
      }
    }
    if (m.find("ThreadCount") != m.end() && !m["ThreadCount"].empty()) {
      threadCount = make_shared<long>(boost::any_cast<long>(m["ThreadCount"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo() = default;
};
class OnsConsumerStatusResponseBodyDataConsumerConnectionInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo>> consumerConnectionInfoDo{};

  OnsConsumerStatusResponseBodyDataConsumerConnectionInfoList() {}

  explicit OnsConsumerStatusResponseBodyDataConsumerConnectionInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerConnectionInfoDo) {
      vector<boost::any> temp1;
      for(auto item1:*consumerConnectionInfoDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConsumerConnectionInfoDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerConnectionInfoDo") != m.end() && !m["ConsumerConnectionInfoDo"].empty()) {
      if (typeid(vector<boost::any>) == m["ConsumerConnectionInfoDo"].type()) {
        vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConsumerConnectionInfoDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        consumerConnectionInfoDo = make_shared<vector<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoListConsumerConnectionInfoDo>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataConsumerConnectionInfoList() = default;
};
class OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo : public Darabonba::Model {
public:
  shared_ptr<long> delayTime{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<string> topic{};
  shared_ptr<long> totalDiff{};

  OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo() {}

  explicit OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo() = default;
};
class OnsConsumerStatusResponseBodyDataDetailInTopicList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo>> detailInTopicDo{};

  OnsConsumerStatusResponseBodyDataDetailInTopicList() {}

  explicit OnsConsumerStatusResponseBodyDataDetailInTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInTopicDo) {
      vector<boost::any> temp1;
      for(auto item1:*detailInTopicDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailInTopicDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInTopicDo") != m.end() && !m["DetailInTopicDo"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailInTopicDo"].type()) {
        vector<OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailInTopicDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailInTopicDo = make_shared<vector<OnsConsumerStatusResponseBodyDataDetailInTopicListDetailInTopicDo>>(expect1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponseBodyDataDetailInTopicList() = default;
};
class OnsConsumerStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<OnsConsumerStatusResponseBodyDataConnectionSet> connectionSet{};
  shared_ptr<string> consumeModel{};
  shared_ptr<double> consumeTps{};
  shared_ptr<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoList> consumerConnectionInfoList{};
  shared_ptr<long> delayTime{};
  shared_ptr<OnsConsumerStatusResponseBodyDataDetailInTopicList> detailInTopicList{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<bool> online{};
  shared_ptr<bool> rebalanceOK{};
  shared_ptr<bool> subscriptionSame{};
  shared_ptr<long> totalDiff{};

  OnsConsumerStatusResponseBodyData() {}

  explicit OnsConsumerStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionSet) {
      res["ConnectionSet"] = connectionSet ? boost::any(connectionSet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (consumeModel) {
      res["ConsumeModel"] = boost::any(*consumeModel);
    }
    if (consumeTps) {
      res["ConsumeTps"] = boost::any(*consumeTps);
    }
    if (consumerConnectionInfoList) {
      res["ConsumerConnectionInfoList"] = consumerConnectionInfoList ? boost::any(consumerConnectionInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (detailInTopicList) {
      res["DetailInTopicList"] = detailInTopicList ? boost::any(detailInTopicList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (rebalanceOK) {
      res["RebalanceOK"] = boost::any(*rebalanceOK);
    }
    if (subscriptionSame) {
      res["SubscriptionSame"] = boost::any(*subscriptionSame);
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionSet") != m.end() && !m["ConnectionSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectionSet"].type()) {
        OnsConsumerStatusResponseBodyDataConnectionSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectionSet"]));
        connectionSet = make_shared<OnsConsumerStatusResponseBodyDataConnectionSet>(model1);
      }
    }
    if (m.find("ConsumeModel") != m.end() && !m["ConsumeModel"].empty()) {
      consumeModel = make_shared<string>(boost::any_cast<string>(m["ConsumeModel"]));
    }
    if (m.find("ConsumeTps") != m.end() && !m["ConsumeTps"].empty()) {
      consumeTps = make_shared<double>(boost::any_cast<double>(m["ConsumeTps"]));
    }
    if (m.find("ConsumerConnectionInfoList") != m.end() && !m["ConsumerConnectionInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsumerConnectionInfoList"].type()) {
        OnsConsumerStatusResponseBodyDataConsumerConnectionInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsumerConnectionInfoList"]));
        consumerConnectionInfoList = make_shared<OnsConsumerStatusResponseBodyDataConsumerConnectionInfoList>(model1);
      }
    }
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("DetailInTopicList") != m.end() && !m["DetailInTopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailInTopicList"].type()) {
        OnsConsumerStatusResponseBodyDataDetailInTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailInTopicList"]));
        detailInTopicList = make_shared<OnsConsumerStatusResponseBodyDataDetailInTopicList>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("RebalanceOK") != m.end() && !m["RebalanceOK"].empty()) {
      rebalanceOK = make_shared<bool>(boost::any_cast<bool>(m["RebalanceOK"]));
    }
    if (m.find("SubscriptionSame") != m.end() && !m["SubscriptionSame"].empty()) {
      subscriptionSame = make_shared<bool>(boost::any_cast<bool>(m["SubscriptionSame"]));
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
  }


  virtual ~OnsConsumerStatusResponseBodyData() = default;
};
class OnsConsumerStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsConsumerStatusResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsConsumerStatusResponseBody() {}

  explicit OnsConsumerStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsConsumerStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsConsumerStatusResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsConsumerStatusResponseBody() = default;
};
class OnsConsumerStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsConsumerStatusResponseBody> body{};

  OnsConsumerStatusResponse() {}

  explicit OnsConsumerStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsConsumerStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsConsumerStatusResponseBody>(model1);
      }
    }
  }


  virtual ~OnsConsumerStatusResponse() = default;
};
class OnsConsumerTimeSpanRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};

  OnsConsumerTimeSpanRequest() {}

  explicit OnsConsumerTimeSpanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsConsumerTimeSpanRequest() = default;
};
class OnsConsumerTimeSpanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> consumeTimeStamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxTimeStamp{};
  shared_ptr<long> minTimeStamp{};
  shared_ptr<string> topic{};

  OnsConsumerTimeSpanResponseBodyData() {}

  explicit OnsConsumerTimeSpanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumeTimeStamp) {
      res["ConsumeTimeStamp"] = boost::any(*consumeTimeStamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxTimeStamp) {
      res["MaxTimeStamp"] = boost::any(*maxTimeStamp);
    }
    if (minTimeStamp) {
      res["MinTimeStamp"] = boost::any(*minTimeStamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumeTimeStamp") != m.end() && !m["ConsumeTimeStamp"].empty()) {
      consumeTimeStamp = make_shared<long>(boost::any_cast<long>(m["ConsumeTimeStamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxTimeStamp") != m.end() && !m["MaxTimeStamp"].empty()) {
      maxTimeStamp = make_shared<long>(boost::any_cast<long>(m["MaxTimeStamp"]));
    }
    if (m.find("MinTimeStamp") != m.end() && !m["MinTimeStamp"].empty()) {
      minTimeStamp = make_shared<long>(boost::any_cast<long>(m["MinTimeStamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsConsumerTimeSpanResponseBodyData() = default;
};
class OnsConsumerTimeSpanResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsConsumerTimeSpanResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsConsumerTimeSpanResponseBody() {}

  explicit OnsConsumerTimeSpanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsConsumerTimeSpanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsConsumerTimeSpanResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsConsumerTimeSpanResponseBody() = default;
};
class OnsConsumerTimeSpanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsConsumerTimeSpanResponseBody> body{};

  OnsConsumerTimeSpanResponse() {}

  explicit OnsConsumerTimeSpanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsConsumerTimeSpanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsConsumerTimeSpanResponseBody>(model1);
      }
    }
  }


  virtual ~OnsConsumerTimeSpanResponse() = default;
};
class OnsDLQMessageGetByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};

  OnsDLQMessageGetByIdRequest() {}

  explicit OnsDLQMessageGetByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~OnsDLQMessageGetByIdRequest() = default;
};
class OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty() {}

  explicit OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty() = default;
};
class OnsDLQMessageGetByIdResponseBodyDataPropertyList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty>> messageProperty{};

  OnsDLQMessageGetByIdResponseBodyDataPropertyList() {}

  explicit OnsDLQMessageGetByIdResponseBodyDataPropertyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageProperty) {
      vector<boost::any> temp1;
      for(auto item1:*messageProperty){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageProperty"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageProperty") != m.end() && !m["MessageProperty"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageProperty"].type()) {
        vector<OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageProperty"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageProperty = make_shared<vector<OnsDLQMessageGetByIdResponseBodyDataPropertyListMessageProperty>>(expect1);
      }
    }
  }


  virtual ~OnsDLQMessageGetByIdResponseBodyDataPropertyList() = default;
};
class OnsDLQMessageGetByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bodyCRC{};
  shared_ptr<string> bornHost{};
  shared_ptr<long> bornTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<OnsDLQMessageGetByIdResponseBodyDataPropertyList> propertyList{};
  shared_ptr<long> reconsumeTimes{};
  shared_ptr<string> storeHost{};
  shared_ptr<long> storeSize{};
  shared_ptr<long> storeTimestamp{};
  shared_ptr<string> topic{};

  OnsDLQMessageGetByIdResponseBodyData() {}

  explicit OnsDLQMessageGetByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyCRC) {
      res["BodyCRC"] = boost::any(*bodyCRC);
    }
    if (bornHost) {
      res["BornHost"] = boost::any(*bornHost);
    }
    if (bornTimestamp) {
      res["BornTimestamp"] = boost::any(*bornTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (propertyList) {
      res["PropertyList"] = propertyList ? boost::any(propertyList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reconsumeTimes) {
      res["ReconsumeTimes"] = boost::any(*reconsumeTimes);
    }
    if (storeHost) {
      res["StoreHost"] = boost::any(*storeHost);
    }
    if (storeSize) {
      res["StoreSize"] = boost::any(*storeSize);
    }
    if (storeTimestamp) {
      res["StoreTimestamp"] = boost::any(*storeTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyCRC") != m.end() && !m["BodyCRC"].empty()) {
      bodyCRC = make_shared<long>(boost::any_cast<long>(m["BodyCRC"]));
    }
    if (m.find("BornHost") != m.end() && !m["BornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["BornHost"]));
    }
    if (m.find("BornTimestamp") != m.end() && !m["BornTimestamp"].empty()) {
      bornTimestamp = make_shared<long>(boost::any_cast<long>(m["BornTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("PropertyList") != m.end() && !m["PropertyList"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyList"].type()) {
        OnsDLQMessageGetByIdResponseBodyDataPropertyList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyList"]));
        propertyList = make_shared<OnsDLQMessageGetByIdResponseBodyDataPropertyList>(model1);
      }
    }
    if (m.find("ReconsumeTimes") != m.end() && !m["ReconsumeTimes"].empty()) {
      reconsumeTimes = make_shared<long>(boost::any_cast<long>(m["ReconsumeTimes"]));
    }
    if (m.find("StoreHost") != m.end() && !m["StoreHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["StoreHost"]));
    }
    if (m.find("StoreSize") != m.end() && !m["StoreSize"].empty()) {
      storeSize = make_shared<long>(boost::any_cast<long>(m["StoreSize"]));
    }
    if (m.find("StoreTimestamp") != m.end() && !m["StoreTimestamp"].empty()) {
      storeTimestamp = make_shared<long>(boost::any_cast<long>(m["StoreTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsDLQMessageGetByIdResponseBodyData() = default;
};
class OnsDLQMessageGetByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsDLQMessageGetByIdResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsDLQMessageGetByIdResponseBody() {}

  explicit OnsDLQMessageGetByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsDLQMessageGetByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsDLQMessageGetByIdResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsDLQMessageGetByIdResponseBody() = default;
};
class OnsDLQMessageGetByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsDLQMessageGetByIdResponseBody> body{};

  OnsDLQMessageGetByIdResponse() {}

  explicit OnsDLQMessageGetByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsDLQMessageGetByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsDLQMessageGetByIdResponseBody>(model1);
      }
    }
  }


  virtual ~OnsDLQMessageGetByIdResponse() = default;
};
class OnsDLQMessagePageQueryByGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskId{};

  OnsDLQMessagePageQueryByGroupIdRequest() {}

  explicit OnsDLQMessagePageQueryByGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdRequest() = default;
};
class OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty() {}

  explicit OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty() = default;
};
class OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty>> messageProperty{};

  OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList() {}

  explicit OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageProperty) {
      vector<boost::any> temp1;
      for(auto item1:*messageProperty){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageProperty"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageProperty") != m.end() && !m["MessageProperty"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageProperty"].type()) {
        vector<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageProperty"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageProperty = make_shared<vector<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty>>(expect1);
      }
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList() = default;
};
class OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo : public Darabonba::Model {
public:
  shared_ptr<long> bodyCRC{};
  shared_ptr<string> bornHost{};
  shared_ptr<long> bornTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList> propertyList{};
  shared_ptr<long> reconsumeTimes{};
  shared_ptr<string> storeHost{};
  shared_ptr<long> storeSize{};
  shared_ptr<long> storeTimestamp{};
  shared_ptr<string> topic{};

  OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo() {}

  explicit OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyCRC) {
      res["BodyCRC"] = boost::any(*bodyCRC);
    }
    if (bornHost) {
      res["BornHost"] = boost::any(*bornHost);
    }
    if (bornTimestamp) {
      res["BornTimestamp"] = boost::any(*bornTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (propertyList) {
      res["PropertyList"] = propertyList ? boost::any(propertyList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reconsumeTimes) {
      res["ReconsumeTimes"] = boost::any(*reconsumeTimes);
    }
    if (storeHost) {
      res["StoreHost"] = boost::any(*storeHost);
    }
    if (storeSize) {
      res["StoreSize"] = boost::any(*storeSize);
    }
    if (storeTimestamp) {
      res["StoreTimestamp"] = boost::any(*storeTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyCRC") != m.end() && !m["BodyCRC"].empty()) {
      bodyCRC = make_shared<long>(boost::any_cast<long>(m["BodyCRC"]));
    }
    if (m.find("BornHost") != m.end() && !m["BornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["BornHost"]));
    }
    if (m.find("BornTimestamp") != m.end() && !m["BornTimestamp"].empty()) {
      bornTimestamp = make_shared<long>(boost::any_cast<long>(m["BornTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("PropertyList") != m.end() && !m["PropertyList"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyList"].type()) {
        OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyList"]));
        propertyList = make_shared<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList>(model1);
      }
    }
    if (m.find("ReconsumeTimes") != m.end() && !m["ReconsumeTimes"].empty()) {
      reconsumeTimes = make_shared<long>(boost::any_cast<long>(m["ReconsumeTimes"]));
    }
    if (m.find("StoreHost") != m.end() && !m["StoreHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["StoreHost"]));
    }
    if (m.find("StoreSize") != m.end() && !m["StoreSize"].empty()) {
      storeSize = make_shared<long>(boost::any_cast<long>(m["StoreSize"]));
    }
    if (m.find("StoreTimestamp") != m.end() && !m["StoreTimestamp"].empty()) {
      storeTimestamp = make_shared<long>(boost::any_cast<long>(m["StoreTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo() = default;
};
class OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo>> onsRestMessageDo{};

  OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundList() {}

  explicit OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onsRestMessageDo) {
      vector<boost::any> temp1;
      for(auto item1:*onsRestMessageDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnsRestMessageDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnsRestMessageDo") != m.end() && !m["OnsRestMessageDo"].empty()) {
      if (typeid(vector<boost::any>) == m["OnsRestMessageDo"].type()) {
        vector<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnsRestMessageDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onsRestMessageDo = make_shared<vector<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo>>(expect1);
      }
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundList() = default;
};
class OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> maxPageCount{};
  shared_ptr<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundList> msgFoundList{};
  shared_ptr<string> taskId{};

  OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDo() {}

  explicit OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (maxPageCount) {
      res["MaxPageCount"] = boost::any(*maxPageCount);
    }
    if (msgFoundList) {
      res["MsgFoundList"] = msgFoundList ? boost::any(msgFoundList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("MaxPageCount") != m.end() && !m["MaxPageCount"].empty()) {
      maxPageCount = make_shared<long>(boost::any_cast<long>(m["MaxPageCount"]));
    }
    if (m.find("MsgFoundList") != m.end() && !m["MsgFoundList"].empty()) {
      if (typeid(map<string, boost::any>) == m["MsgFoundList"].type()) {
        OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MsgFoundList"]));
        msgFoundList = make_shared<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDoMsgFoundList>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDo() = default;
};
class OnsDLQMessagePageQueryByGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDo> msgFoundDo{};
  shared_ptr<string> requestId{};

  OnsDLQMessagePageQueryByGroupIdResponseBody() {}

  explicit OnsDLQMessagePageQueryByGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgFoundDo) {
      res["MsgFoundDo"] = msgFoundDo ? boost::any(msgFoundDo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgFoundDo") != m.end() && !m["MsgFoundDo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MsgFoundDo"].type()) {
        OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MsgFoundDo"]));
        msgFoundDo = make_shared<OnsDLQMessagePageQueryByGroupIdResponseBodyMsgFoundDo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdResponseBody() = default;
};
class OnsDLQMessagePageQueryByGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsDLQMessagePageQueryByGroupIdResponseBody> body{};

  OnsDLQMessagePageQueryByGroupIdResponse() {}

  explicit OnsDLQMessagePageQueryByGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsDLQMessagePageQueryByGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsDLQMessagePageQueryByGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~OnsDLQMessagePageQueryByGroupIdResponse() = default;
};
class OnsDLQMessageResendByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};

  OnsDLQMessageResendByIdRequest() {}

  explicit OnsDLQMessageResendByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~OnsDLQMessageResendByIdRequest() = default;
};
class OnsDLQMessageResendByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> msgId{};

  OnsDLQMessageResendByIdResponseBodyData() {}

  explicit OnsDLQMessageResendByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MsgId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MsgId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      msgId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OnsDLQMessageResendByIdResponseBodyData() = default;
};
class OnsDLQMessageResendByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsDLQMessageResendByIdResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsDLQMessageResendByIdResponseBody() {}

  explicit OnsDLQMessageResendByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsDLQMessageResendByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsDLQMessageResendByIdResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsDLQMessageResendByIdResponseBody() = default;
};
class OnsDLQMessageResendByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsDLQMessageResendByIdResponseBody> body{};

  OnsDLQMessageResendByIdResponse() {}

  explicit OnsDLQMessageResendByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsDLQMessageResendByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsDLQMessageResendByIdResponseBody>(model1);
      }
    }
  }


  virtual ~OnsDLQMessageResendByIdResponse() = default;
};
class OnsGroupConsumerUpdateRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> readEnable{};

  OnsGroupConsumerUpdateRequest() {}

  explicit OnsGroupConsumerUpdateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (readEnable) {
      res["ReadEnable"] = boost::any(*readEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ReadEnable") != m.end() && !m["ReadEnable"].empty()) {
      readEnable = make_shared<bool>(boost::any_cast<bool>(m["ReadEnable"]));
    }
  }


  virtual ~OnsGroupConsumerUpdateRequest() = default;
};
class OnsGroupConsumerUpdateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsGroupConsumerUpdateResponseBody() {}

  explicit OnsGroupConsumerUpdateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsGroupConsumerUpdateResponseBody() = default;
};
class OnsGroupConsumerUpdateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsGroupConsumerUpdateResponseBody> body{};

  OnsGroupConsumerUpdateResponse() {}

  explicit OnsGroupConsumerUpdateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsGroupConsumerUpdateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsGroupConsumerUpdateResponseBody>(model1);
      }
    }
  }


  virtual ~OnsGroupConsumerUpdateResponse() = default;
};
class OnsGroupCreateRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> remark{};

  OnsGroupCreateRequest() {}

  explicit OnsGroupCreateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~OnsGroupCreateRequest() = default;
};
class OnsGroupCreateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsGroupCreateResponseBody() {}

  explicit OnsGroupCreateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsGroupCreateResponseBody() = default;
};
class OnsGroupCreateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsGroupCreateResponseBody> body{};

  OnsGroupCreateResponse() {}

  explicit OnsGroupCreateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsGroupCreateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsGroupCreateResponseBody>(model1);
      }
    }
  }


  virtual ~OnsGroupCreateResponse() = default;
};
class OnsGroupDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  OnsGroupDeleteRequest() {}

  explicit OnsGroupDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~OnsGroupDeleteRequest() = default;
};
class OnsGroupDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsGroupDeleteResponseBody() {}

  explicit OnsGroupDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsGroupDeleteResponseBody() = default;
};
class OnsGroupDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsGroupDeleteResponseBody> body{};

  OnsGroupDeleteResponse() {}

  explicit OnsGroupDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsGroupDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsGroupDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~OnsGroupDeleteResponse() = default;
};
class OnsGroupListRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  OnsGroupListRequestTag() {}

  explicit OnsGroupListRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsGroupListRequestTag() = default;
};
class OnsGroupListRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupType{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<OnsGroupListRequestTag>> tag{};

  OnsGroupListRequest() {}

  explicit OnsGroupListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<OnsGroupListRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsGroupListRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<OnsGroupListRequestTag>>(expect1);
      }
    }
  }


  virtual ~OnsGroupListRequest() = default;
};
class OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag() {}

  explicit OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag() = default;
};
class OnsGroupListResponseBodyDataSubscribeInfoDoTags : public Darabonba::Model {
public:
  shared_ptr<vector<OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag>> tag{};

  OnsGroupListResponseBodyDataSubscribeInfoDoTags() {}

  explicit OnsGroupListResponseBodyDataSubscribeInfoDoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<OnsGroupListResponseBodyDataSubscribeInfoDoTagsTag>>(expect1);
      }
    }
  }


  virtual ~OnsGroupListResponseBodyDataSubscribeInfoDoTags() = default;
};
class OnsGroupListResponseBodyDataSubscribeInfoDo : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupType{};
  shared_ptr<bool> independentNaming{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> owner{};
  shared_ptr<string> remark{};
  shared_ptr<OnsGroupListResponseBodyDataSubscribeInfoDoTags> tags{};
  shared_ptr<long> updateTime{};

  OnsGroupListResponseBodyDataSubscribeInfoDo() {}

  explicit OnsGroupListResponseBodyDataSubscribeInfoDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (independentNaming) {
      res["IndependentNaming"] = boost::any(*independentNaming);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("IndependentNaming") != m.end() && !m["IndependentNaming"].empty()) {
      independentNaming = make_shared<bool>(boost::any_cast<bool>(m["IndependentNaming"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        OnsGroupListResponseBodyDataSubscribeInfoDoTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<OnsGroupListResponseBodyDataSubscribeInfoDoTags>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~OnsGroupListResponseBodyDataSubscribeInfoDo() = default;
};
class OnsGroupListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OnsGroupListResponseBodyDataSubscribeInfoDo>> subscribeInfoDo{};

  OnsGroupListResponseBodyData() {}

  explicit OnsGroupListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscribeInfoDo) {
      vector<boost::any> temp1;
      for(auto item1:*subscribeInfoDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscribeInfoDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscribeInfoDo") != m.end() && !m["SubscribeInfoDo"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscribeInfoDo"].type()) {
        vector<OnsGroupListResponseBodyDataSubscribeInfoDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscribeInfoDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsGroupListResponseBodyDataSubscribeInfoDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscribeInfoDo = make_shared<vector<OnsGroupListResponseBodyDataSubscribeInfoDo>>(expect1);
      }
    }
  }


  virtual ~OnsGroupListResponseBodyData() = default;
};
class OnsGroupListResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsGroupListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsGroupListResponseBody() {}

  explicit OnsGroupListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsGroupListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsGroupListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsGroupListResponseBody() = default;
};
class OnsGroupListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsGroupListResponseBody> body{};

  OnsGroupListResponse() {}

  explicit OnsGroupListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsGroupListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsGroupListResponseBody>(model1);
      }
    }
  }


  virtual ~OnsGroupListResponse() = default;
};
class OnsGroupSubDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  OnsGroupSubDetailRequest() {}

  explicit OnsGroupSubDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~OnsGroupSubDetailRequest() = default;
};
class OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList : public Darabonba::Model {
public:
  shared_ptr<string> subString{};
  shared_ptr<string> topic{};

  OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList() {}

  explicit OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subString) {
      res["SubString"] = boost::any(*subString);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubString") != m.end() && !m["SubString"].empty()) {
      subString = make_shared<string>(boost::any_cast<string>(m["SubString"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList() = default;
};
class OnsGroupSubDetailResponseBodyDataSubscriptionDataList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList>> subscriptionDataList{};

  OnsGroupSubDetailResponseBodyDataSubscriptionDataList() {}

  explicit OnsGroupSubDetailResponseBodyDataSubscriptionDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionDataList) {
      vector<boost::any> temp1;
      for(auto item1:*subscriptionDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscriptionDataList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscriptionDataList") != m.end() && !m["SubscriptionDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscriptionDataList"].type()) {
        vector<OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscriptionDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscriptionDataList = make_shared<vector<OnsGroupSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList>>(expect1);
      }
    }
  }


  virtual ~OnsGroupSubDetailResponseBodyDataSubscriptionDataList() = default;
};
class OnsGroupSubDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> messageModel{};
  shared_ptr<bool> online{};
  shared_ptr<OnsGroupSubDetailResponseBodyDataSubscriptionDataList> subscriptionDataList{};

  OnsGroupSubDetailResponseBodyData() {}

  explicit OnsGroupSubDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (messageModel) {
      res["MessageModel"] = boost::any(*messageModel);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (subscriptionDataList) {
      res["SubscriptionDataList"] = subscriptionDataList ? boost::any(subscriptionDataList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("MessageModel") != m.end() && !m["MessageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["MessageModel"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("SubscriptionDataList") != m.end() && !m["SubscriptionDataList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionDataList"].type()) {
        OnsGroupSubDetailResponseBodyDataSubscriptionDataList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionDataList"]));
        subscriptionDataList = make_shared<OnsGroupSubDetailResponseBodyDataSubscriptionDataList>(model1);
      }
    }
  }


  virtual ~OnsGroupSubDetailResponseBodyData() = default;
};
class OnsGroupSubDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsGroupSubDetailResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsGroupSubDetailResponseBody() {}

  explicit OnsGroupSubDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsGroupSubDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsGroupSubDetailResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsGroupSubDetailResponseBody() = default;
};
class OnsGroupSubDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsGroupSubDetailResponseBody> body{};

  OnsGroupSubDetailResponse() {}

  explicit OnsGroupSubDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsGroupSubDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsGroupSubDetailResponseBody>(model1);
      }
    }
  }


  virtual ~OnsGroupSubDetailResponse() = default;
};
class OnsInstanceBaseInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OnsInstanceBaseInfoRequest() {}

  explicit OnsInstanceBaseInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsInstanceBaseInfoRequest() = default;
};
class OnsInstanceBaseInfoResponseBodyInstanceBaseInfoEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> httpInternalEndpoint{};
  shared_ptr<string> httpInternetEndpoint{};
  shared_ptr<string> httpInternetSecureEndpoint{};
  shared_ptr<string> tcpEndpoint{};
  shared_ptr<string> tcpInternetEndpoint{};

  OnsInstanceBaseInfoResponseBodyInstanceBaseInfoEndpoints() {}

  explicit OnsInstanceBaseInfoResponseBodyInstanceBaseInfoEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpInternalEndpoint) {
      res["HttpInternalEndpoint"] = boost::any(*httpInternalEndpoint);
    }
    if (httpInternetEndpoint) {
      res["HttpInternetEndpoint"] = boost::any(*httpInternetEndpoint);
    }
    if (httpInternetSecureEndpoint) {
      res["HttpInternetSecureEndpoint"] = boost::any(*httpInternetSecureEndpoint);
    }
    if (tcpEndpoint) {
      res["TcpEndpoint"] = boost::any(*tcpEndpoint);
    }
    if (tcpInternetEndpoint) {
      res["TcpInternetEndpoint"] = boost::any(*tcpInternetEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpInternalEndpoint") != m.end() && !m["HttpInternalEndpoint"].empty()) {
      httpInternalEndpoint = make_shared<string>(boost::any_cast<string>(m["HttpInternalEndpoint"]));
    }
    if (m.find("HttpInternetEndpoint") != m.end() && !m["HttpInternetEndpoint"].empty()) {
      httpInternetEndpoint = make_shared<string>(boost::any_cast<string>(m["HttpInternetEndpoint"]));
    }
    if (m.find("HttpInternetSecureEndpoint") != m.end() && !m["HttpInternetSecureEndpoint"].empty()) {
      httpInternetSecureEndpoint = make_shared<string>(boost::any_cast<string>(m["HttpInternetSecureEndpoint"]));
    }
    if (m.find("TcpEndpoint") != m.end() && !m["TcpEndpoint"].empty()) {
      tcpEndpoint = make_shared<string>(boost::any_cast<string>(m["TcpEndpoint"]));
    }
    if (m.find("TcpInternetEndpoint") != m.end() && !m["TcpInternetEndpoint"].empty()) {
      tcpInternetEndpoint = make_shared<string>(boost::any_cast<string>(m["TcpInternetEndpoint"]));
    }
  }


  virtual ~OnsInstanceBaseInfoResponseBodyInstanceBaseInfoEndpoints() = default;
};
class OnsInstanceBaseInfoResponseBodyInstanceBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<OnsInstanceBaseInfoResponseBodyInstanceBaseInfoEndpoints> endpoints{};
  shared_ptr<bool> independentNaming{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> instanceStatus{};
  shared_ptr<long> instanceType{};
  shared_ptr<long> maxTps{};
  shared_ptr<long> releaseTime{};
  shared_ptr<string> remark{};
  shared_ptr<long> topicCapacity{};
  shared_ptr<string> spInstanceId{};
  shared_ptr<long> spInstanceType{};

  OnsInstanceBaseInfoResponseBodyInstanceBaseInfo() {}

  explicit OnsInstanceBaseInfoResponseBodyInstanceBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (independentNaming) {
      res["IndependentNaming"] = boost::any(*independentNaming);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (maxTps) {
      res["MaxTps"] = boost::any(*maxTps);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (topicCapacity) {
      res["TopicCapacity"] = boost::any(*topicCapacity);
    }
    if (spInstanceId) {
      res["spInstanceId"] = boost::any(*spInstanceId);
    }
    if (spInstanceType) {
      res["spInstanceType"] = boost::any(*spInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        OnsInstanceBaseInfoResponseBodyInstanceBaseInfoEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<OnsInstanceBaseInfoResponseBodyInstanceBaseInfoEndpoints>(model1);
      }
    }
    if (m.find("IndependentNaming") != m.end() && !m["IndependentNaming"].empty()) {
      independentNaming = make_shared<bool>(boost::any_cast<bool>(m["IndependentNaming"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<long>(boost::any_cast<long>(m["InstanceStatus"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<long>(boost::any_cast<long>(m["InstanceType"]));
    }
    if (m.find("MaxTps") != m.end() && !m["MaxTps"].empty()) {
      maxTps = make_shared<long>(boost::any_cast<long>(m["MaxTps"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<long>(boost::any_cast<long>(m["ReleaseTime"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("TopicCapacity") != m.end() && !m["TopicCapacity"].empty()) {
      topicCapacity = make_shared<long>(boost::any_cast<long>(m["TopicCapacity"]));
    }
    if (m.find("spInstanceId") != m.end() && !m["spInstanceId"].empty()) {
      spInstanceId = make_shared<string>(boost::any_cast<string>(m["spInstanceId"]));
    }
    if (m.find("spInstanceType") != m.end() && !m["spInstanceType"].empty()) {
      spInstanceType = make_shared<long>(boost::any_cast<long>(m["spInstanceType"]));
    }
  }


  virtual ~OnsInstanceBaseInfoResponseBodyInstanceBaseInfo() = default;
};
class OnsInstanceBaseInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsInstanceBaseInfoResponseBodyInstanceBaseInfo> instanceBaseInfo{};
  shared_ptr<string> requestId{};

  OnsInstanceBaseInfoResponseBody() {}

  explicit OnsInstanceBaseInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceBaseInfo) {
      res["InstanceBaseInfo"] = instanceBaseInfo ? boost::any(instanceBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceBaseInfo") != m.end() && !m["InstanceBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceBaseInfo"].type()) {
        OnsInstanceBaseInfoResponseBodyInstanceBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceBaseInfo"]));
        instanceBaseInfo = make_shared<OnsInstanceBaseInfoResponseBodyInstanceBaseInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsInstanceBaseInfoResponseBody() = default;
};
class OnsInstanceBaseInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsInstanceBaseInfoResponseBody> body{};

  OnsInstanceBaseInfoResponse() {}

  explicit OnsInstanceBaseInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsInstanceBaseInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsInstanceBaseInfoResponseBody>(model1);
      }
    }
  }


  virtual ~OnsInstanceBaseInfoResponse() = default;
};
class OnsInstanceCreateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> remark{};

  OnsInstanceCreateRequest() {}

  explicit OnsInstanceCreateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~OnsInstanceCreateRequest() = default;
};
class OnsInstanceCreateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceType{};

  OnsInstanceCreateResponseBodyData() {}

  explicit OnsInstanceCreateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<long>(boost::any_cast<long>(m["InstanceType"]));
    }
  }


  virtual ~OnsInstanceCreateResponseBodyData() = default;
};
class OnsInstanceCreateResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsInstanceCreateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsInstanceCreateResponseBody() {}

  explicit OnsInstanceCreateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsInstanceCreateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsInstanceCreateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsInstanceCreateResponseBody() = default;
};
class OnsInstanceCreateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsInstanceCreateResponseBody> body{};

  OnsInstanceCreateResponse() {}

  explicit OnsInstanceCreateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsInstanceCreateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsInstanceCreateResponseBody>(model1);
      }
    }
  }


  virtual ~OnsInstanceCreateResponse() = default;
};
class OnsInstanceDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OnsInstanceDeleteRequest() {}

  explicit OnsInstanceDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsInstanceDeleteRequest() = default;
};
class OnsInstanceDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsInstanceDeleteResponseBody() {}

  explicit OnsInstanceDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsInstanceDeleteResponseBody() = default;
};
class OnsInstanceDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsInstanceDeleteResponseBody> body{};

  OnsInstanceDeleteResponse() {}

  explicit OnsInstanceDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsInstanceDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsInstanceDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~OnsInstanceDeleteResponse() = default;
};
class OnsInstanceInServiceListRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  OnsInstanceInServiceListRequestTag() {}

  explicit OnsInstanceInServiceListRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsInstanceInServiceListRequestTag() = default;
};
class OnsInstanceInServiceListRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needResourceInfo{};
  shared_ptr<vector<OnsInstanceInServiceListRequestTag>> tag{};

  OnsInstanceInServiceListRequest() {}

  explicit OnsInstanceInServiceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needResourceInfo) {
      res["NeedResourceInfo"] = boost::any(*needResourceInfo);
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
    if (m.find("NeedResourceInfo") != m.end() && !m["NeedResourceInfo"].empty()) {
      needResourceInfo = make_shared<bool>(boost::any_cast<bool>(m["NeedResourceInfo"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<OnsInstanceInServiceListRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsInstanceInServiceListRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<OnsInstanceInServiceListRequestTag>>(expect1);
      }
    }
  }


  virtual ~OnsInstanceInServiceListRequest() = default;
};
class OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag() {}

  explicit OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag() = default;
};
class OnsInstanceInServiceListResponseBodyDataInstanceVOTags : public Darabonba::Model {
public:
  shared_ptr<vector<OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag>> tag{};

  OnsInstanceInServiceListResponseBodyDataInstanceVOTags() {}

  explicit OnsInstanceInServiceListResponseBodyDataInstanceVOTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<OnsInstanceInServiceListResponseBodyDataInstanceVOTagsTag>>(expect1);
      }
    }
  }


  virtual ~OnsInstanceInServiceListResponseBodyDataInstanceVOTags() = default;
};
class OnsInstanceInServiceListResponseBodyDataInstanceVO : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> groupCount{};
  shared_ptr<bool> independentNaming{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> instanceStatus{};
  shared_ptr<long> instanceType{};
  shared_ptr<long> releaseTime{};
  shared_ptr<OnsInstanceInServiceListResponseBodyDataInstanceVOTags> tags{};
  shared_ptr<long> topicCount{};

  OnsInstanceInServiceListResponseBodyDataInstanceVO() {}

  explicit OnsInstanceInServiceListResponseBodyDataInstanceVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (groupCount) {
      res["GroupCount"] = boost::any(*groupCount);
    }
    if (independentNaming) {
      res["IndependentNaming"] = boost::any(*independentNaming);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topicCount) {
      res["TopicCount"] = boost::any(*topicCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("GroupCount") != m.end() && !m["GroupCount"].empty()) {
      groupCount = make_shared<long>(boost::any_cast<long>(m["GroupCount"]));
    }
    if (m.find("IndependentNaming") != m.end() && !m["IndependentNaming"].empty()) {
      independentNaming = make_shared<bool>(boost::any_cast<bool>(m["IndependentNaming"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<long>(boost::any_cast<long>(m["InstanceStatus"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<long>(boost::any_cast<long>(m["InstanceType"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<long>(boost::any_cast<long>(m["ReleaseTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        OnsInstanceInServiceListResponseBodyDataInstanceVOTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<OnsInstanceInServiceListResponseBodyDataInstanceVOTags>(model1);
      }
    }
    if (m.find("TopicCount") != m.end() && !m["TopicCount"].empty()) {
      topicCount = make_shared<long>(boost::any_cast<long>(m["TopicCount"]));
    }
  }


  virtual ~OnsInstanceInServiceListResponseBodyDataInstanceVO() = default;
};
class OnsInstanceInServiceListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OnsInstanceInServiceListResponseBodyDataInstanceVO>> instanceVO{};

  OnsInstanceInServiceListResponseBodyData() {}

  explicit OnsInstanceInServiceListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceVO) {
      vector<boost::any> temp1;
      for(auto item1:*instanceVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceVO") != m.end() && !m["InstanceVO"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceVO"].type()) {
        vector<OnsInstanceInServiceListResponseBodyDataInstanceVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsInstanceInServiceListResponseBodyDataInstanceVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceVO = make_shared<vector<OnsInstanceInServiceListResponseBodyDataInstanceVO>>(expect1);
      }
    }
  }


  virtual ~OnsInstanceInServiceListResponseBodyData() = default;
};
class OnsInstanceInServiceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsInstanceInServiceListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsInstanceInServiceListResponseBody() {}

  explicit OnsInstanceInServiceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsInstanceInServiceListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsInstanceInServiceListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsInstanceInServiceListResponseBody() = default;
};
class OnsInstanceInServiceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsInstanceInServiceListResponseBody> body{};

  OnsInstanceInServiceListResponse() {}

  explicit OnsInstanceInServiceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsInstanceInServiceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsInstanceInServiceListResponseBody>(model1);
      }
    }
  }


  virtual ~OnsInstanceInServiceListResponse() = default;
};
class OnsInstanceUpdateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> remark{};

  OnsInstanceUpdateRequest() {}

  explicit OnsInstanceUpdateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~OnsInstanceUpdateRequest() = default;
};
class OnsInstanceUpdateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsInstanceUpdateResponseBody() {}

  explicit OnsInstanceUpdateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsInstanceUpdateResponseBody() = default;
};
class OnsInstanceUpdateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsInstanceUpdateResponseBody> body{};

  OnsInstanceUpdateResponse() {}

  explicit OnsInstanceUpdateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsInstanceUpdateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsInstanceUpdateResponseBody>(model1);
      }
    }
  }


  virtual ~OnsInstanceUpdateResponse() = default;
};
class OnsMessageDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> topic{};

  OnsMessageDetailRequest() {}

  explicit OnsMessageDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessageDetailRequest() = default;
};
class OnsMessageDetailResponseBodyDataPropertyList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  OnsMessageDetailResponseBodyDataPropertyList() {}

  explicit OnsMessageDetailResponseBodyDataPropertyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~OnsMessageDetailResponseBodyDataPropertyList() = default;
};
class OnsMessageDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<long> bodyCRC{};
  shared_ptr<string> bodyStr{};
  shared_ptr<string> bornHost{};
  shared_ptr<long> bornTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<vector<OnsMessageDetailResponseBodyDataPropertyList>> propertyList{};
  shared_ptr<long> reconsumeTimes{};
  shared_ptr<string> storeHost{};
  shared_ptr<long> storeSize{};
  shared_ptr<long> storeTimestamp{};
  shared_ptr<string> topic{};

  OnsMessageDetailResponseBodyData() {}

  explicit OnsMessageDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (bodyCRC) {
      res["BodyCRC"] = boost::any(*bodyCRC);
    }
    if (bodyStr) {
      res["BodyStr"] = boost::any(*bodyStr);
    }
    if (bornHost) {
      res["BornHost"] = boost::any(*bornHost);
    }
    if (bornTimestamp) {
      res["BornTimestamp"] = boost::any(*bornTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (propertyList) {
      vector<boost::any> temp1;
      for(auto item1:*propertyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyList"] = boost::any(temp1);
    }
    if (reconsumeTimes) {
      res["ReconsumeTimes"] = boost::any(*reconsumeTimes);
    }
    if (storeHost) {
      res["StoreHost"] = boost::any(*storeHost);
    }
    if (storeSize) {
      res["StoreSize"] = boost::any(*storeSize);
    }
    if (storeTimestamp) {
      res["StoreTimestamp"] = boost::any(*storeTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("BodyCRC") != m.end() && !m["BodyCRC"].empty()) {
      bodyCRC = make_shared<long>(boost::any_cast<long>(m["BodyCRC"]));
    }
    if (m.find("BodyStr") != m.end() && !m["BodyStr"].empty()) {
      bodyStr = make_shared<string>(boost::any_cast<string>(m["BodyStr"]));
    }
    if (m.find("BornHost") != m.end() && !m["BornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["BornHost"]));
    }
    if (m.find("BornTimestamp") != m.end() && !m["BornTimestamp"].empty()) {
      bornTimestamp = make_shared<long>(boost::any_cast<long>(m["BornTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("PropertyList") != m.end() && !m["PropertyList"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyList"].type()) {
        vector<OnsMessageDetailResponseBodyDataPropertyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsMessageDetailResponseBodyDataPropertyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyList = make_shared<vector<OnsMessageDetailResponseBodyDataPropertyList>>(expect1);
      }
    }
    if (m.find("ReconsumeTimes") != m.end() && !m["ReconsumeTimes"].empty()) {
      reconsumeTimes = make_shared<long>(boost::any_cast<long>(m["ReconsumeTimes"]));
    }
    if (m.find("StoreHost") != m.end() && !m["StoreHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["StoreHost"]));
    }
    if (m.find("StoreSize") != m.end() && !m["StoreSize"].empty()) {
      storeSize = make_shared<long>(boost::any_cast<long>(m["StoreSize"]));
    }
    if (m.find("StoreTimestamp") != m.end() && !m["StoreTimestamp"].empty()) {
      storeTimestamp = make_shared<long>(boost::any_cast<long>(m["StoreTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessageDetailResponseBodyData() = default;
};
class OnsMessageDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsMessageDetailResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsMessageDetailResponseBody() {}

  explicit OnsMessageDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsMessageDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsMessageDetailResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsMessageDetailResponseBody() = default;
};
class OnsMessageDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsMessageDetailResponseBody> body{};

  OnsMessageDetailResponse() {}

  explicit OnsMessageDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsMessageDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsMessageDetailResponseBody>(model1);
      }
    }
  }


  virtual ~OnsMessageDetailResponse() = default;
};
class OnsMessageGetByKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> key{};
  shared_ptr<string> topic{};

  OnsMessageGetByKeyRequest() {}

  explicit OnsMessageGetByKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessageGetByKeyRequest() = default;
};
class OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty() {}

  explicit OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty() = default;
};
class OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty>> messageProperty{};

  OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyList() {}

  explicit OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageProperty) {
      vector<boost::any> temp1;
      for(auto item1:*messageProperty){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageProperty"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageProperty") != m.end() && !m["MessageProperty"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageProperty"].type()) {
        vector<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageProperty"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageProperty = make_shared<vector<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyListMessageProperty>>(expect1);
      }
    }
  }


  virtual ~OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyList() = default;
};
class OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo : public Darabonba::Model {
public:
  shared_ptr<long> bodyCRC{};
  shared_ptr<string> bornHost{};
  shared_ptr<long> bornTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyList> propertyList{};
  shared_ptr<long> reconsumeTimes{};
  shared_ptr<string> storeHost{};
  shared_ptr<long> storeSize{};
  shared_ptr<long> storeTimestamp{};
  shared_ptr<string> topic{};

  OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo() {}

  explicit OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyCRC) {
      res["BodyCRC"] = boost::any(*bodyCRC);
    }
    if (bornHost) {
      res["BornHost"] = boost::any(*bornHost);
    }
    if (bornTimestamp) {
      res["BornTimestamp"] = boost::any(*bornTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (propertyList) {
      res["PropertyList"] = propertyList ? boost::any(propertyList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reconsumeTimes) {
      res["ReconsumeTimes"] = boost::any(*reconsumeTimes);
    }
    if (storeHost) {
      res["StoreHost"] = boost::any(*storeHost);
    }
    if (storeSize) {
      res["StoreSize"] = boost::any(*storeSize);
    }
    if (storeTimestamp) {
      res["StoreTimestamp"] = boost::any(*storeTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyCRC") != m.end() && !m["BodyCRC"].empty()) {
      bodyCRC = make_shared<long>(boost::any_cast<long>(m["BodyCRC"]));
    }
    if (m.find("BornHost") != m.end() && !m["BornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["BornHost"]));
    }
    if (m.find("BornTimestamp") != m.end() && !m["BornTimestamp"].empty()) {
      bornTimestamp = make_shared<long>(boost::any_cast<long>(m["BornTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("PropertyList") != m.end() && !m["PropertyList"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyList"].type()) {
        OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyList"]));
        propertyList = make_shared<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDoPropertyList>(model1);
      }
    }
    if (m.find("ReconsumeTimes") != m.end() && !m["ReconsumeTimes"].empty()) {
      reconsumeTimes = make_shared<long>(boost::any_cast<long>(m["ReconsumeTimes"]));
    }
    if (m.find("StoreHost") != m.end() && !m["StoreHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["StoreHost"]));
    }
    if (m.find("StoreSize") != m.end() && !m["StoreSize"].empty()) {
      storeSize = make_shared<long>(boost::any_cast<long>(m["StoreSize"]));
    }
    if (m.find("StoreTimestamp") != m.end() && !m["StoreTimestamp"].empty()) {
      storeTimestamp = make_shared<long>(boost::any_cast<long>(m["StoreTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo() = default;
};
class OnsMessageGetByKeyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo>> onsRestMessageDo{};

  OnsMessageGetByKeyResponseBodyData() {}

  explicit OnsMessageGetByKeyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onsRestMessageDo) {
      vector<boost::any> temp1;
      for(auto item1:*onsRestMessageDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnsRestMessageDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnsRestMessageDo") != m.end() && !m["OnsRestMessageDo"].empty()) {
      if (typeid(vector<boost::any>) == m["OnsRestMessageDo"].type()) {
        vector<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnsRestMessageDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onsRestMessageDo = make_shared<vector<OnsMessageGetByKeyResponseBodyDataOnsRestMessageDo>>(expect1);
      }
    }
  }


  virtual ~OnsMessageGetByKeyResponseBodyData() = default;
};
class OnsMessageGetByKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsMessageGetByKeyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsMessageGetByKeyResponseBody() {}

  explicit OnsMessageGetByKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsMessageGetByKeyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsMessageGetByKeyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsMessageGetByKeyResponseBody() = default;
};
class OnsMessageGetByKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsMessageGetByKeyResponseBody> body{};

  OnsMessageGetByKeyResponse() {}

  explicit OnsMessageGetByKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsMessageGetByKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsMessageGetByKeyResponseBody>(model1);
      }
    }
  }


  virtual ~OnsMessageGetByKeyResponse() = default;
};
class OnsMessageGetByMsgIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> topic{};

  OnsMessageGetByMsgIdRequest() {}

  explicit OnsMessageGetByMsgIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessageGetByMsgIdRequest() = default;
};
class OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty() {}

  explicit OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty() = default;
};
class OnsMessageGetByMsgIdResponseBodyDataPropertyList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty>> messageProperty{};

  OnsMessageGetByMsgIdResponseBodyDataPropertyList() {}

  explicit OnsMessageGetByMsgIdResponseBodyDataPropertyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageProperty) {
      vector<boost::any> temp1;
      for(auto item1:*messageProperty){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageProperty"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageProperty") != m.end() && !m["MessageProperty"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageProperty"].type()) {
        vector<OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageProperty"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageProperty = make_shared<vector<OnsMessageGetByMsgIdResponseBodyDataPropertyListMessageProperty>>(expect1);
      }
    }
  }


  virtual ~OnsMessageGetByMsgIdResponseBodyDataPropertyList() = default;
};
class OnsMessageGetByMsgIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bodyCRC{};
  shared_ptr<string> bornHost{};
  shared_ptr<long> bornTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<OnsMessageGetByMsgIdResponseBodyDataPropertyList> propertyList{};
  shared_ptr<long> reconsumeTimes{};
  shared_ptr<string> storeHost{};
  shared_ptr<long> storeSize{};
  shared_ptr<long> storeTimestamp{};
  shared_ptr<string> topic{};

  OnsMessageGetByMsgIdResponseBodyData() {}

  explicit OnsMessageGetByMsgIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyCRC) {
      res["BodyCRC"] = boost::any(*bodyCRC);
    }
    if (bornHost) {
      res["BornHost"] = boost::any(*bornHost);
    }
    if (bornTimestamp) {
      res["BornTimestamp"] = boost::any(*bornTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (propertyList) {
      res["PropertyList"] = propertyList ? boost::any(propertyList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reconsumeTimes) {
      res["ReconsumeTimes"] = boost::any(*reconsumeTimes);
    }
    if (storeHost) {
      res["StoreHost"] = boost::any(*storeHost);
    }
    if (storeSize) {
      res["StoreSize"] = boost::any(*storeSize);
    }
    if (storeTimestamp) {
      res["StoreTimestamp"] = boost::any(*storeTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyCRC") != m.end() && !m["BodyCRC"].empty()) {
      bodyCRC = make_shared<long>(boost::any_cast<long>(m["BodyCRC"]));
    }
    if (m.find("BornHost") != m.end() && !m["BornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["BornHost"]));
    }
    if (m.find("BornTimestamp") != m.end() && !m["BornTimestamp"].empty()) {
      bornTimestamp = make_shared<long>(boost::any_cast<long>(m["BornTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("PropertyList") != m.end() && !m["PropertyList"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyList"].type()) {
        OnsMessageGetByMsgIdResponseBodyDataPropertyList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyList"]));
        propertyList = make_shared<OnsMessageGetByMsgIdResponseBodyDataPropertyList>(model1);
      }
    }
    if (m.find("ReconsumeTimes") != m.end() && !m["ReconsumeTimes"].empty()) {
      reconsumeTimes = make_shared<long>(boost::any_cast<long>(m["ReconsumeTimes"]));
    }
    if (m.find("StoreHost") != m.end() && !m["StoreHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["StoreHost"]));
    }
    if (m.find("StoreSize") != m.end() && !m["StoreSize"].empty()) {
      storeSize = make_shared<long>(boost::any_cast<long>(m["StoreSize"]));
    }
    if (m.find("StoreTimestamp") != m.end() && !m["StoreTimestamp"].empty()) {
      storeTimestamp = make_shared<long>(boost::any_cast<long>(m["StoreTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessageGetByMsgIdResponseBodyData() = default;
};
class OnsMessageGetByMsgIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsMessageGetByMsgIdResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsMessageGetByMsgIdResponseBody() {}

  explicit OnsMessageGetByMsgIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsMessageGetByMsgIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsMessageGetByMsgIdResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsMessageGetByMsgIdResponseBody() = default;
};
class OnsMessageGetByMsgIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsMessageGetByMsgIdResponseBody> body{};

  OnsMessageGetByMsgIdResponse() {}

  explicit OnsMessageGetByMsgIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsMessageGetByMsgIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsMessageGetByMsgIdResponseBody>(model1);
      }
    }
  }


  virtual ~OnsMessageGetByMsgIdResponse() = default;
};
class OnsMessagePageQueryByTopicRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskId{};
  shared_ptr<string> topic{};

  OnsMessagePageQueryByTopicRequest() {}

  explicit OnsMessagePageQueryByTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessagePageQueryByTopicRequest() = default;
};
class OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty() {}

  explicit OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty() = default;
};
class OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty>> messageProperty{};

  OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList() {}

  explicit OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageProperty) {
      vector<boost::any> temp1;
      for(auto item1:*messageProperty){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageProperty"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageProperty") != m.end() && !m["MessageProperty"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageProperty"].type()) {
        vector<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageProperty"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageProperty = make_shared<vector<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyListMessageProperty>>(expect1);
      }
    }
  }


  virtual ~OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList() = default;
};
class OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo : public Darabonba::Model {
public:
  shared_ptr<long> bodyCRC{};
  shared_ptr<string> bornHost{};
  shared_ptr<long> bornTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList> propertyList{};
  shared_ptr<long> reconsumeTimes{};
  shared_ptr<string> storeHost{};
  shared_ptr<long> storeSize{};
  shared_ptr<long> storeTimestamp{};
  shared_ptr<string> topic{};

  OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo() {}

  explicit OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyCRC) {
      res["BodyCRC"] = boost::any(*bodyCRC);
    }
    if (bornHost) {
      res["BornHost"] = boost::any(*bornHost);
    }
    if (bornTimestamp) {
      res["BornTimestamp"] = boost::any(*bornTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (propertyList) {
      res["PropertyList"] = propertyList ? boost::any(propertyList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reconsumeTimes) {
      res["ReconsumeTimes"] = boost::any(*reconsumeTimes);
    }
    if (storeHost) {
      res["StoreHost"] = boost::any(*storeHost);
    }
    if (storeSize) {
      res["StoreSize"] = boost::any(*storeSize);
    }
    if (storeTimestamp) {
      res["StoreTimestamp"] = boost::any(*storeTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyCRC") != m.end() && !m["BodyCRC"].empty()) {
      bodyCRC = make_shared<long>(boost::any_cast<long>(m["BodyCRC"]));
    }
    if (m.find("BornHost") != m.end() && !m["BornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["BornHost"]));
    }
    if (m.find("BornTimestamp") != m.end() && !m["BornTimestamp"].empty()) {
      bornTimestamp = make_shared<long>(boost::any_cast<long>(m["BornTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("PropertyList") != m.end() && !m["PropertyList"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyList"].type()) {
        OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyList"]));
        propertyList = make_shared<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDoPropertyList>(model1);
      }
    }
    if (m.find("ReconsumeTimes") != m.end() && !m["ReconsumeTimes"].empty()) {
      reconsumeTimes = make_shared<long>(boost::any_cast<long>(m["ReconsumeTimes"]));
    }
    if (m.find("StoreHost") != m.end() && !m["StoreHost"].empty()) {
      storeHost = make_shared<string>(boost::any_cast<string>(m["StoreHost"]));
    }
    if (m.find("StoreSize") != m.end() && !m["StoreSize"].empty()) {
      storeSize = make_shared<long>(boost::any_cast<long>(m["StoreSize"]));
    }
    if (m.find("StoreTimestamp") != m.end() && !m["StoreTimestamp"].empty()) {
      storeTimestamp = make_shared<long>(boost::any_cast<long>(m["StoreTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo() = default;
};
class OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo>> onsRestMessageDo{};

  OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundList() {}

  explicit OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onsRestMessageDo) {
      vector<boost::any> temp1;
      for(auto item1:*onsRestMessageDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnsRestMessageDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnsRestMessageDo") != m.end() && !m["OnsRestMessageDo"].empty()) {
      if (typeid(vector<boost::any>) == m["OnsRestMessageDo"].type()) {
        vector<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnsRestMessageDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onsRestMessageDo = make_shared<vector<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundListOnsRestMessageDo>>(expect1);
      }
    }
  }


  virtual ~OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundList() = default;
};
class OnsMessagePageQueryByTopicResponseBodyMsgFoundDo : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> maxPageCount{};
  shared_ptr<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundList> msgFoundList{};
  shared_ptr<string> taskId{};

  OnsMessagePageQueryByTopicResponseBodyMsgFoundDo() {}

  explicit OnsMessagePageQueryByTopicResponseBodyMsgFoundDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (maxPageCount) {
      res["MaxPageCount"] = boost::any(*maxPageCount);
    }
    if (msgFoundList) {
      res["MsgFoundList"] = msgFoundList ? boost::any(msgFoundList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("MaxPageCount") != m.end() && !m["MaxPageCount"].empty()) {
      maxPageCount = make_shared<long>(boost::any_cast<long>(m["MaxPageCount"]));
    }
    if (m.find("MsgFoundList") != m.end() && !m["MsgFoundList"].empty()) {
      if (typeid(map<string, boost::any>) == m["MsgFoundList"].type()) {
        OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MsgFoundList"]));
        msgFoundList = make_shared<OnsMessagePageQueryByTopicResponseBodyMsgFoundDoMsgFoundList>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~OnsMessagePageQueryByTopicResponseBodyMsgFoundDo() = default;
};
class OnsMessagePageQueryByTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsMessagePageQueryByTopicResponseBodyMsgFoundDo> msgFoundDo{};
  shared_ptr<string> requestId{};

  OnsMessagePageQueryByTopicResponseBody() {}

  explicit OnsMessagePageQueryByTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgFoundDo) {
      res["MsgFoundDo"] = msgFoundDo ? boost::any(msgFoundDo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgFoundDo") != m.end() && !m["MsgFoundDo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MsgFoundDo"].type()) {
        OnsMessagePageQueryByTopicResponseBodyMsgFoundDo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MsgFoundDo"]));
        msgFoundDo = make_shared<OnsMessagePageQueryByTopicResponseBodyMsgFoundDo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsMessagePageQueryByTopicResponseBody() = default;
};
class OnsMessagePageQueryByTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsMessagePageQueryByTopicResponseBody> body{};

  OnsMessagePageQueryByTopicResponse() {}

  explicit OnsMessagePageQueryByTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsMessagePageQueryByTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsMessagePageQueryByTopicResponseBody>(model1);
      }
    }
  }


  virtual ~OnsMessagePageQueryByTopicResponse() = default;
};
class OnsMessagePushRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> topic{};

  OnsMessagePushRequest() {}

  explicit OnsMessagePushRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessagePushRequest() = default;
};
class OnsMessagePushResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsMessagePushResponseBody() {}

  explicit OnsMessagePushResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsMessagePushResponseBody() = default;
};
class OnsMessagePushResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsMessagePushResponseBody> body{};

  OnsMessagePushResponse() {}

  explicit OnsMessagePushResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsMessagePushResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsMessagePushResponseBody>(model1);
      }
    }
  }


  virtual ~OnsMessagePushResponse() = default;
};
class OnsMessageTraceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> topic{};

  OnsMessageTraceRequest() {}

  explicit OnsMessageTraceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsMessageTraceRequest() = default;
};
class OnsMessageTraceResponseBodyDataMessageTrack : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> trackType{};

  OnsMessageTraceResponseBodyDataMessageTrack() {}

  explicit OnsMessageTraceResponseBodyDataMessageTrack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (trackType) {
      res["TrackType"] = boost::any(*trackType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TrackType") != m.end() && !m["TrackType"].empty()) {
      trackType = make_shared<string>(boost::any_cast<string>(m["TrackType"]));
    }
  }


  virtual ~OnsMessageTraceResponseBodyDataMessageTrack() = default;
};
class OnsMessageTraceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OnsMessageTraceResponseBodyDataMessageTrack>> messageTrack{};

  OnsMessageTraceResponseBodyData() {}

  explicit OnsMessageTraceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageTrack) {
      vector<boost::any> temp1;
      for(auto item1:*messageTrack){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageTrack"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageTrack") != m.end() && !m["MessageTrack"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageTrack"].type()) {
        vector<OnsMessageTraceResponseBodyDataMessageTrack> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageTrack"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsMessageTraceResponseBodyDataMessageTrack model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageTrack = make_shared<vector<OnsMessageTraceResponseBodyDataMessageTrack>>(expect1);
      }
    }
  }


  virtual ~OnsMessageTraceResponseBodyData() = default;
};
class OnsMessageTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsMessageTraceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsMessageTraceResponseBody() {}

  explicit OnsMessageTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsMessageTraceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsMessageTraceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsMessageTraceResponseBody() = default;
};
class OnsMessageTraceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsMessageTraceResponseBody> body{};

  OnsMessageTraceResponse() {}

  explicit OnsMessageTraceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsMessageTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsMessageTraceResponseBody>(model1);
      }
    }
  }


  virtual ~OnsMessageTraceResponse() = default;
};
class OnsRegionListResponseBodyDataRegionDo : public Darabonba::Model {
public:
  shared_ptr<string> channelName{};
  shared_ptr<long> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> onsRegionId{};
  shared_ptr<string> regionName{};
  shared_ptr<long> updateTime{};

  OnsRegionListResponseBodyDataRegionDo() {}

  explicit OnsRegionListResponseBodyDataRegionDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelName) {
      res["ChannelName"] = boost::any(*channelName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (onsRegionId) {
      res["OnsRegionId"] = boost::any(*onsRegionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelName") != m.end() && !m["ChannelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["ChannelName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OnsRegionId") != m.end() && !m["OnsRegionId"].empty()) {
      onsRegionId = make_shared<string>(boost::any_cast<string>(m["OnsRegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~OnsRegionListResponseBodyDataRegionDo() = default;
};
class OnsRegionListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OnsRegionListResponseBodyDataRegionDo>> regionDo{};

  OnsRegionListResponseBodyData() {}

  explicit OnsRegionListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionDo) {
      vector<boost::any> temp1;
      for(auto item1:*regionDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionDo") != m.end() && !m["RegionDo"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionDo"].type()) {
        vector<OnsRegionListResponseBodyDataRegionDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsRegionListResponseBodyDataRegionDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionDo = make_shared<vector<OnsRegionListResponseBodyDataRegionDo>>(expect1);
      }
    }
  }


  virtual ~OnsRegionListResponseBodyData() = default;
};
class OnsRegionListResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsRegionListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsRegionListResponseBody() {}

  explicit OnsRegionListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsRegionListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsRegionListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsRegionListResponseBody() = default;
};
class OnsRegionListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsRegionListResponseBody> body{};

  OnsRegionListResponse() {}

  explicit OnsRegionListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsRegionListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsRegionListResponseBody>(model1);
      }
    }
  }


  virtual ~OnsRegionListResponse() = default;
};
class OnsTopicCreateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> messageType{};
  shared_ptr<string> remark{};
  shared_ptr<string> topic{};

  OnsTopicCreateRequest() {}

  explicit OnsTopicCreateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<long>(boost::any_cast<long>(m["MessageType"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTopicCreateRequest() = default;
};
class OnsTopicCreateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsTopicCreateResponseBody() {}

  explicit OnsTopicCreateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsTopicCreateResponseBody() = default;
};
class OnsTopicCreateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTopicCreateResponseBody> body{};

  OnsTopicCreateResponse() {}

  explicit OnsTopicCreateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTopicCreateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTopicCreateResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTopicCreateResponse() = default;
};
class OnsTopicDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};

  OnsTopicDeleteRequest() {}

  explicit OnsTopicDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTopicDeleteRequest() = default;
};
class OnsTopicDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsTopicDeleteResponseBody() {}

  explicit OnsTopicDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsTopicDeleteResponseBody() = default;
};
class OnsTopicDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTopicDeleteResponseBody> body{};

  OnsTopicDeleteResponse() {}

  explicit OnsTopicDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTopicDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTopicDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTopicDeleteResponse() = default;
};
class OnsTopicListRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  OnsTopicListRequestTag() {}

  explicit OnsTopicListRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsTopicListRequestTag() = default;
};
class OnsTopicListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<OnsTopicListRequestTag>> tag{};
  shared_ptr<string> topic{};
  shared_ptr<string> userId{};

  OnsTopicListRequest() {}

  explicit OnsTopicListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<OnsTopicListRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTopicListRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<OnsTopicListRequestTag>>(expect1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~OnsTopicListRequest() = default;
};
class OnsTopicListResponseBodyDataPublishInfoDoTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  OnsTopicListResponseBodyDataPublishInfoDoTagsTag() {}

  explicit OnsTopicListResponseBodyDataPublishInfoDoTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsTopicListResponseBodyDataPublishInfoDoTagsTag() = default;
};
class OnsTopicListResponseBodyDataPublishInfoDoTags : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTopicListResponseBodyDataPublishInfoDoTagsTag>> tag{};

  OnsTopicListResponseBodyDataPublishInfoDoTags() {}

  explicit OnsTopicListResponseBodyDataPublishInfoDoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<OnsTopicListResponseBodyDataPublishInfoDoTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTopicListResponseBodyDataPublishInfoDoTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<OnsTopicListResponseBodyDataPublishInfoDoTagsTag>>(expect1);
      }
    }
  }


  virtual ~OnsTopicListResponseBodyDataPublishInfoDoTags() = default;
};
class OnsTopicListResponseBodyDataPublishInfoDo : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<bool> independentNaming{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> messageType{};
  shared_ptr<string> owner{};
  shared_ptr<long> relation{};
  shared_ptr<string> relationName{};
  shared_ptr<string> remark{};
  shared_ptr<long> serviceStatus{};
  shared_ptr<OnsTopicListResponseBodyDataPublishInfoDoTags> tags{};
  shared_ptr<string> topic{};

  OnsTopicListResponseBodyDataPublishInfoDo() {}

  explicit OnsTopicListResponseBodyDataPublishInfoDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (independentNaming) {
      res["IndependentNaming"] = boost::any(*independentNaming);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (relationName) {
      res["RelationName"] = boost::any(*relationName);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("IndependentNaming") != m.end() && !m["IndependentNaming"].empty()) {
      independentNaming = make_shared<bool>(boost::any_cast<bool>(m["IndependentNaming"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<long>(boost::any_cast<long>(m["MessageType"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<long>(boost::any_cast<long>(m["Relation"]));
    }
    if (m.find("RelationName") != m.end() && !m["RelationName"].empty()) {
      relationName = make_shared<string>(boost::any_cast<string>(m["RelationName"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<long>(boost::any_cast<long>(m["ServiceStatus"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        OnsTopicListResponseBodyDataPublishInfoDoTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<OnsTopicListResponseBodyDataPublishInfoDoTags>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTopicListResponseBodyDataPublishInfoDo() = default;
};
class OnsTopicListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTopicListResponseBodyDataPublishInfoDo>> publishInfoDo{};

  OnsTopicListResponseBodyData() {}

  explicit OnsTopicListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publishInfoDo) {
      vector<boost::any> temp1;
      for(auto item1:*publishInfoDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PublishInfoDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PublishInfoDo") != m.end() && !m["PublishInfoDo"].empty()) {
      if (typeid(vector<boost::any>) == m["PublishInfoDo"].type()) {
        vector<OnsTopicListResponseBodyDataPublishInfoDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublishInfoDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTopicListResponseBodyDataPublishInfoDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publishInfoDo = make_shared<vector<OnsTopicListResponseBodyDataPublishInfoDo>>(expect1);
      }
    }
  }


  virtual ~OnsTopicListResponseBodyData() = default;
};
class OnsTopicListResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsTopicListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsTopicListResponseBody() {}

  explicit OnsTopicListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsTopicListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsTopicListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsTopicListResponseBody() = default;
};
class OnsTopicListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTopicListResponseBody> body{};

  OnsTopicListResponse() {}

  explicit OnsTopicListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTopicListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTopicListResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTopicListResponse() = default;
};
class OnsTopicStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};

  OnsTopicStatusRequest() {}

  explicit OnsTopicStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTopicStatusRequest() = default;
};
class OnsTopicStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> lastTimeStamp{};
  shared_ptr<long> perm{};
  shared_ptr<long> totalCount{};

  OnsTopicStatusResponseBodyData() {}

  explicit OnsTopicStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTimeStamp) {
      res["LastTimeStamp"] = boost::any(*lastTimeStamp);
    }
    if (perm) {
      res["Perm"] = boost::any(*perm);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTimeStamp") != m.end() && !m["LastTimeStamp"].empty()) {
      lastTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastTimeStamp"]));
    }
    if (m.find("Perm") != m.end() && !m["Perm"].empty()) {
      perm = make_shared<long>(boost::any_cast<long>(m["Perm"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~OnsTopicStatusResponseBodyData() = default;
};
class OnsTopicStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsTopicStatusResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsTopicStatusResponseBody() {}

  explicit OnsTopicStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsTopicStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsTopicStatusResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsTopicStatusResponseBody() = default;
};
class OnsTopicStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTopicStatusResponseBody> body{};

  OnsTopicStatusResponse() {}

  explicit OnsTopicStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTopicStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTopicStatusResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTopicStatusResponse() = default;
};
class OnsTopicSubDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};

  OnsTopicSubDetailRequest() {}

  explicit OnsTopicSubDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTopicSubDetailRequest() = default;
};
class OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> messageModel{};
  shared_ptr<string> online{};
  shared_ptr<string> subString{};

  OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList() {}

  explicit OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (messageModel) {
      res["MessageModel"] = boost::any(*messageModel);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (subString) {
      res["SubString"] = boost::any(*subString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("MessageModel") != m.end() && !m["MessageModel"].empty()) {
      messageModel = make_shared<string>(boost::any_cast<string>(m["MessageModel"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<string>(boost::any_cast<string>(m["Online"]));
    }
    if (m.find("SubString") != m.end() && !m["SubString"].empty()) {
      subString = make_shared<string>(boost::any_cast<string>(m["SubString"]));
    }
  }


  virtual ~OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList() = default;
};
class OnsTopicSubDetailResponseBodyDataSubscriptionDataList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList>> subscriptionDataList{};

  OnsTopicSubDetailResponseBodyDataSubscriptionDataList() {}

  explicit OnsTopicSubDetailResponseBodyDataSubscriptionDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionDataList) {
      vector<boost::any> temp1;
      for(auto item1:*subscriptionDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscriptionDataList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscriptionDataList") != m.end() && !m["SubscriptionDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscriptionDataList"].type()) {
        vector<OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscriptionDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscriptionDataList = make_shared<vector<OnsTopicSubDetailResponseBodyDataSubscriptionDataListSubscriptionDataList>>(expect1);
      }
    }
  }


  virtual ~OnsTopicSubDetailResponseBodyDataSubscriptionDataList() = default;
};
class OnsTopicSubDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<OnsTopicSubDetailResponseBodyDataSubscriptionDataList> subscriptionDataList{};
  shared_ptr<string> topic{};

  OnsTopicSubDetailResponseBodyData() {}

  explicit OnsTopicSubDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionDataList) {
      res["SubscriptionDataList"] = subscriptionDataList ? boost::any(subscriptionDataList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscriptionDataList") != m.end() && !m["SubscriptionDataList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionDataList"].type()) {
        OnsTopicSubDetailResponseBodyDataSubscriptionDataList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionDataList"]));
        subscriptionDataList = make_shared<OnsTopicSubDetailResponseBodyDataSubscriptionDataList>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTopicSubDetailResponseBodyData() = default;
};
class OnsTopicSubDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsTopicSubDetailResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsTopicSubDetailResponseBody() {}

  explicit OnsTopicSubDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsTopicSubDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsTopicSubDetailResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsTopicSubDetailResponseBody() = default;
};
class OnsTopicSubDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTopicSubDetailResponseBody> body{};

  OnsTopicSubDetailResponse() {}

  explicit OnsTopicSubDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTopicSubDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTopicSubDetailResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTopicSubDetailResponse() = default;
};
class OnsTopicUpdateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> perm{};
  shared_ptr<string> topic{};

  OnsTopicUpdateRequest() {}

  explicit OnsTopicUpdateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (perm) {
      res["Perm"] = boost::any(*perm);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Perm") != m.end() && !m["Perm"].empty()) {
      perm = make_shared<long>(boost::any_cast<long>(m["Perm"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTopicUpdateRequest() = default;
};
class OnsTopicUpdateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnsTopicUpdateResponseBody() {}

  explicit OnsTopicUpdateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnsTopicUpdateResponseBody() = default;
};
class OnsTopicUpdateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTopicUpdateResponseBody> body{};

  OnsTopicUpdateResponse() {}

  explicit OnsTopicUpdateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTopicUpdateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTopicUpdateResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTopicUpdateResponse() = default;
};
class OnsTraceGetResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queryId{};
  shared_ptr<string> topic{};

  OnsTraceGetResultRequest() {}

  explicit OnsTraceGetResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTraceGetResultRequest() = default;
};
class OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo : public Darabonba::Model {
public:
  shared_ptr<string> clientHost{};
  shared_ptr<long> costTime{};
  shared_ptr<long> reconsumeTimes{};
  shared_ptr<string> status{};
  shared_ptr<string> subGroupName{};
  shared_ptr<long> subTime{};

  OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo() {}

  explicit OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientHost) {
      res["ClientHost"] = boost::any(*clientHost);
    }
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (reconsumeTimes) {
      res["ReconsumeTimes"] = boost::any(*reconsumeTimes);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subGroupName) {
      res["SubGroupName"] = boost::any(*subGroupName);
    }
    if (subTime) {
      res["SubTime"] = boost::any(*subTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientHost") != m.end() && !m["ClientHost"].empty()) {
      clientHost = make_shared<string>(boost::any_cast<string>(m["ClientHost"]));
    }
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("ReconsumeTimes") != m.end() && !m["ReconsumeTimes"].empty()) {
      reconsumeTimes = make_shared<long>(boost::any_cast<long>(m["ReconsumeTimes"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubGroupName") != m.end() && !m["SubGroupName"].empty()) {
      subGroupName = make_shared<string>(boost::any_cast<string>(m["SubGroupName"]));
    }
    if (m.find("SubTime") != m.end() && !m["SubTime"].empty()) {
      subTime = make_shared<long>(boost::any_cast<long>(m["SubTime"]));
    }
  }


  virtual ~OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo() = default;
};
class OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo>> subClientInfoDo{};

  OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientList() {}

  explicit OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subClientInfoDo) {
      vector<boost::any> temp1;
      for(auto item1:*subClientInfoDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubClientInfoDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubClientInfoDo") != m.end() && !m["SubClientInfoDo"].empty()) {
      if (typeid(vector<boost::any>) == m["SubClientInfoDo"].type()) {
        vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubClientInfoDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subClientInfoDo = make_shared<vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientListSubClientInfoDo>>(expect1);
      }
    }
  }


  virtual ~OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientList() = default;
};
class OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo : public Darabonba::Model {
public:
  shared_ptr<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientList> clientList{};
  shared_ptr<long> failCount{};
  shared_ptr<string> subGroupName{};
  shared_ptr<long> successCount{};

  OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo() {}

  explicit OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientList) {
      res["ClientList"] = clientList ? boost::any(clientList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (subGroupName) {
      res["SubGroupName"] = boost::any(*subGroupName);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientList") != m.end() && !m["ClientList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientList"].type()) {
        OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientList"]));
        clientList = make_shared<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDoClientList>(model1);
      }
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("SubGroupName") != m.end() && !m["SubGroupName"].empty()) {
      subGroupName = make_shared<string>(boost::any_cast<string>(m["SubGroupName"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
  }


  virtual ~OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo() = default;
};
class OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo>> subMapDo{};

  OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubList() {}

  explicit OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subMapDo) {
      vector<boost::any> temp1;
      for(auto item1:*subMapDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubMapDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubMapDo") != m.end() && !m["SubMapDo"].empty()) {
      if (typeid(vector<boost::any>) == m["SubMapDo"].type()) {
        vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubMapDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subMapDo = make_shared<vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubListSubMapDo>>(expect1);
      }
    }
  }


  virtual ~OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubList() = default;
};
class OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo : public Darabonba::Model {
public:
  shared_ptr<string> bornHost{};
  shared_ptr<long> costTime{};
  shared_ptr<string> msgId{};
  shared_ptr<string> msgKey{};
  shared_ptr<string> pubGroupName{};
  shared_ptr<long> pubTime{};
  shared_ptr<string> status{};
  shared_ptr<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubList> subList{};
  shared_ptr<string> tag{};
  shared_ptr<string> topic{};

  OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo() {}

  explicit OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bornHost) {
      res["BornHost"] = boost::any(*bornHost);
    }
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (msgKey) {
      res["MsgKey"] = boost::any(*msgKey);
    }
    if (pubGroupName) {
      res["PubGroupName"] = boost::any(*pubGroupName);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subList) {
      res["SubList"] = subList ? boost::any(subList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BornHost") != m.end() && !m["BornHost"].empty()) {
      bornHost = make_shared<string>(boost::any_cast<string>(m["BornHost"]));
    }
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<long>(boost::any_cast<long>(m["CostTime"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("MsgKey") != m.end() && !m["MsgKey"].empty()) {
      msgKey = make_shared<string>(boost::any_cast<string>(m["MsgKey"]));
    }
    if (m.find("PubGroupName") != m.end() && !m["PubGroupName"].empty()) {
      pubGroupName = make_shared<string>(boost::any_cast<string>(m["PubGroupName"]));
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<long>(boost::any_cast<long>(m["PubTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubList") != m.end() && !m["SubList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubList"].type()) {
        OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubList"]));
        subList = make_shared<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDoSubList>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo() = default;
};
class OnsTraceGetResultResponseBodyTraceDataTraceList : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo>> traceMapDo{};

  OnsTraceGetResultResponseBodyTraceDataTraceList() {}

  explicit OnsTraceGetResultResponseBodyTraceDataTraceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (traceMapDo) {
      vector<boost::any> temp1;
      for(auto item1:*traceMapDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceMapDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TraceMapDo") != m.end() && !m["TraceMapDo"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceMapDo"].type()) {
        vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceMapDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceMapDo = make_shared<vector<OnsTraceGetResultResponseBodyTraceDataTraceListTraceMapDo>>(expect1);
      }
    }
  }


  virtual ~OnsTraceGetResultResponseBodyTraceDataTraceList() = default;
};
class OnsTraceGetResultResponseBodyTraceData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> msgKey{};
  shared_ptr<string> queryId{};
  shared_ptr<string> status{};
  shared_ptr<string> topic{};
  shared_ptr<OnsTraceGetResultResponseBodyTraceDataTraceList> traceList{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  OnsTraceGetResultResponseBodyTraceData() {}

  explicit OnsTraceGetResultResponseBodyTraceData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (msgKey) {
      res["MsgKey"] = boost::any(*msgKey);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (traceList) {
      res["TraceList"] = traceList ? boost::any(traceList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("MsgKey") != m.end() && !m["MsgKey"].empty()) {
      msgKey = make_shared<string>(boost::any_cast<string>(m["MsgKey"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("TraceList") != m.end() && !m["TraceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceList"].type()) {
        OnsTraceGetResultResponseBodyTraceDataTraceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceList"]));
        traceList = make_shared<OnsTraceGetResultResponseBodyTraceDataTraceList>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~OnsTraceGetResultResponseBodyTraceData() = default;
};
class OnsTraceGetResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<OnsTraceGetResultResponseBodyTraceData> traceData{};

  OnsTraceGetResultResponseBody() {}

  explicit OnsTraceGetResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceData) {
      res["TraceData"] = traceData ? boost::any(traceData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceData") != m.end() && !m["TraceData"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceData"].type()) {
        OnsTraceGetResultResponseBodyTraceData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceData"]));
        traceData = make_shared<OnsTraceGetResultResponseBodyTraceData>(model1);
      }
    }
  }


  virtual ~OnsTraceGetResultResponseBody() = default;
};
class OnsTraceGetResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTraceGetResultResponseBody> body{};

  OnsTraceGetResultResponse() {}

  explicit OnsTraceGetResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTraceGetResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTraceGetResultResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTraceGetResultResponse() = default;
};
class OnsTraceQueryByMsgIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> topic{};

  OnsTraceQueryByMsgIdRequest() {}

  explicit OnsTraceQueryByMsgIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTraceQueryByMsgIdRequest() = default;
};
class OnsTraceQueryByMsgIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> queryId{};
  shared_ptr<string> requestId{};

  OnsTraceQueryByMsgIdResponseBody() {}

  explicit OnsTraceQueryByMsgIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsTraceQueryByMsgIdResponseBody() = default;
};
class OnsTraceQueryByMsgIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTraceQueryByMsgIdResponseBody> body{};

  OnsTraceQueryByMsgIdResponse() {}

  explicit OnsTraceQueryByMsgIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTraceQueryByMsgIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTraceQueryByMsgIdResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTraceQueryByMsgIdResponse() = default;
};
class OnsTraceQueryByMsgKeyRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> msgKey{};
  shared_ptr<string> topic{};

  OnsTraceQueryByMsgKeyRequest() {}

  explicit OnsTraceQueryByMsgKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (msgKey) {
      res["MsgKey"] = boost::any(*msgKey);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MsgKey") != m.end() && !m["MsgKey"].empty()) {
      msgKey = make_shared<string>(boost::any_cast<string>(m["MsgKey"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~OnsTraceQueryByMsgKeyRequest() = default;
};
class OnsTraceQueryByMsgKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> queryId{};
  shared_ptr<string> requestId{};

  OnsTraceQueryByMsgKeyResponseBody() {}

  explicit OnsTraceQueryByMsgKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsTraceQueryByMsgKeyResponseBody() = default;
};
class OnsTraceQueryByMsgKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTraceQueryByMsgKeyResponseBody> body{};

  OnsTraceQueryByMsgKeyResponse() {}

  explicit OnsTraceQueryByMsgKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTraceQueryByMsgKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTraceQueryByMsgKeyResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTraceQueryByMsgKeyResponse() = default;
};
class OnsTrendGroupOutputTpsRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> period{};
  shared_ptr<string> topic{};
  shared_ptr<long> type{};

  OnsTrendGroupOutputTpsRequest() {}

  explicit OnsTrendGroupOutputTpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~OnsTrendGroupOutputTpsRequest() = default;
};
class OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<double> y{};

  OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo() {}

  explicit OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo() = default;
};
class OnsTrendGroupOutputTpsResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo>> statsDataDo{};

  OnsTrendGroupOutputTpsResponseBodyDataRecords() {}

  explicit OnsTrendGroupOutputTpsResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statsDataDo) {
      vector<boost::any> temp1;
      for(auto item1:*statsDataDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatsDataDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StatsDataDo") != m.end() && !m["StatsDataDo"].empty()) {
      if (typeid(vector<boost::any>) == m["StatsDataDo"].type()) {
        vector<OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatsDataDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statsDataDo = make_shared<vector<OnsTrendGroupOutputTpsResponseBodyDataRecordsStatsDataDo>>(expect1);
      }
    }
  }


  virtual ~OnsTrendGroupOutputTpsResponseBodyDataRecords() = default;
};
class OnsTrendGroupOutputTpsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<OnsTrendGroupOutputTpsResponseBodyDataRecords> records{};
  shared_ptr<string> title{};
  shared_ptr<string> XUnit{};
  shared_ptr<string> YUnit{};

  OnsTrendGroupOutputTpsResponseBodyData() {}

  explicit OnsTrendGroupOutputTpsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      res["Records"] = records ? boost::any(records->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (XUnit) {
      res["XUnit"] = boost::any(*XUnit);
    }
    if (YUnit) {
      res["YUnit"] = boost::any(*YUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(map<string, boost::any>) == m["Records"].type()) {
        OnsTrendGroupOutputTpsResponseBodyDataRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Records"]));
        records = make_shared<OnsTrendGroupOutputTpsResponseBodyDataRecords>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("XUnit") != m.end() && !m["XUnit"].empty()) {
      XUnit = make_shared<string>(boost::any_cast<string>(m["XUnit"]));
    }
    if (m.find("YUnit") != m.end() && !m["YUnit"].empty()) {
      YUnit = make_shared<string>(boost::any_cast<string>(m["YUnit"]));
    }
  }


  virtual ~OnsTrendGroupOutputTpsResponseBodyData() = default;
};
class OnsTrendGroupOutputTpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsTrendGroupOutputTpsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsTrendGroupOutputTpsResponseBody() {}

  explicit OnsTrendGroupOutputTpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsTrendGroupOutputTpsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsTrendGroupOutputTpsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsTrendGroupOutputTpsResponseBody() = default;
};
class OnsTrendGroupOutputTpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTrendGroupOutputTpsResponseBody> body{};

  OnsTrendGroupOutputTpsResponse() {}

  explicit OnsTrendGroupOutputTpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTrendGroupOutputTpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTrendGroupOutputTpsResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTrendGroupOutputTpsResponse() = default;
};
class OnsTrendTopicInputTpsRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> period{};
  shared_ptr<string> topic{};
  shared_ptr<long> type{};

  OnsTrendTopicInputTpsRequest() {}

  explicit OnsTrendTopicInputTpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~OnsTrendTopicInputTpsRequest() = default;
};
class OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<double> y{};

  OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo() {}

  explicit OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo() = default;
};
class OnsTrendTopicInputTpsResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<vector<OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo>> statsDataDo{};

  OnsTrendTopicInputTpsResponseBodyDataRecords() {}

  explicit OnsTrendTopicInputTpsResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statsDataDo) {
      vector<boost::any> temp1;
      for(auto item1:*statsDataDo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatsDataDo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StatsDataDo") != m.end() && !m["StatsDataDo"].empty()) {
      if (typeid(vector<boost::any>) == m["StatsDataDo"].type()) {
        vector<OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatsDataDo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statsDataDo = make_shared<vector<OnsTrendTopicInputTpsResponseBodyDataRecordsStatsDataDo>>(expect1);
      }
    }
  }


  virtual ~OnsTrendTopicInputTpsResponseBodyDataRecords() = default;
};
class OnsTrendTopicInputTpsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<OnsTrendTopicInputTpsResponseBodyDataRecords> records{};
  shared_ptr<string> title{};
  shared_ptr<string> XUnit{};
  shared_ptr<string> YUnit{};

  OnsTrendTopicInputTpsResponseBodyData() {}

  explicit OnsTrendTopicInputTpsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      res["Records"] = records ? boost::any(records->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (XUnit) {
      res["XUnit"] = boost::any(*XUnit);
    }
    if (YUnit) {
      res["YUnit"] = boost::any(*YUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(map<string, boost::any>) == m["Records"].type()) {
        OnsTrendTopicInputTpsResponseBodyDataRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Records"]));
        records = make_shared<OnsTrendTopicInputTpsResponseBodyDataRecords>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("XUnit") != m.end() && !m["XUnit"].empty()) {
      XUnit = make_shared<string>(boost::any_cast<string>(m["XUnit"]));
    }
    if (m.find("YUnit") != m.end() && !m["YUnit"].empty()) {
      YUnit = make_shared<string>(boost::any_cast<string>(m["YUnit"]));
    }
  }


  virtual ~OnsTrendTopicInputTpsResponseBodyData() = default;
};
class OnsTrendTopicInputTpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<OnsTrendTopicInputTpsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  OnsTrendTopicInputTpsResponseBody() {}

  explicit OnsTrendTopicInputTpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        OnsTrendTopicInputTpsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<OnsTrendTopicInputTpsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OnsTrendTopicInputTpsResponseBody() = default;
};
class OnsTrendTopicInputTpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnsTrendTopicInputTpsResponseBody> body{};

  OnsTrendTopicInputTpsResponse() {}

  explicit OnsTrendTopicInputTpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnsTrendTopicInputTpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnsTrendTopicInputTpsResponseBody>(model1);
      }
    }
  }


  virtual ~OnsTrendTopicInputTpsResponse() = default;
};
class OpenOnsServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenOnsServiceResponseBody() {}

  explicit OpenOnsServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenOnsServiceResponseBody() = default;
};
class OpenOnsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenOnsServiceResponseBody> body{};

  OpenOnsServiceResponse() {}

  explicit OpenOnsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenOnsServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenOnsServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenOnsServiceResponse() = default;
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
  shared_ptr<string> instanceId{};
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> instanceId{};
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  OnsConsumerAccumulateResponse onsConsumerAccumulateWithOptions(shared_ptr<OnsConsumerAccumulateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsConsumerAccumulateResponse onsConsumerAccumulate(shared_ptr<OnsConsumerAccumulateRequest> request);
  OnsConsumerGetConnectionResponse onsConsumerGetConnectionWithOptions(shared_ptr<OnsConsumerGetConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsConsumerGetConnectionResponse onsConsumerGetConnection(shared_ptr<OnsConsumerGetConnectionRequest> request);
  OnsConsumerResetOffsetResponse onsConsumerResetOffsetWithOptions(shared_ptr<OnsConsumerResetOffsetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsConsumerResetOffsetResponse onsConsumerResetOffset(shared_ptr<OnsConsumerResetOffsetRequest> request);
  OnsConsumerStatusResponse onsConsumerStatusWithOptions(shared_ptr<OnsConsumerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsConsumerStatusResponse onsConsumerStatus(shared_ptr<OnsConsumerStatusRequest> request);
  OnsConsumerTimeSpanResponse onsConsumerTimeSpanWithOptions(shared_ptr<OnsConsumerTimeSpanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsConsumerTimeSpanResponse onsConsumerTimeSpan(shared_ptr<OnsConsumerTimeSpanRequest> request);
  OnsDLQMessageGetByIdResponse onsDLQMessageGetByIdWithOptions(shared_ptr<OnsDLQMessageGetByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsDLQMessageGetByIdResponse onsDLQMessageGetById(shared_ptr<OnsDLQMessageGetByIdRequest> request);
  OnsDLQMessagePageQueryByGroupIdResponse onsDLQMessagePageQueryByGroupIdWithOptions(shared_ptr<OnsDLQMessagePageQueryByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsDLQMessagePageQueryByGroupIdResponse onsDLQMessagePageQueryByGroupId(shared_ptr<OnsDLQMessagePageQueryByGroupIdRequest> request);
  OnsDLQMessageResendByIdResponse onsDLQMessageResendByIdWithOptions(shared_ptr<OnsDLQMessageResendByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsDLQMessageResendByIdResponse onsDLQMessageResendById(shared_ptr<OnsDLQMessageResendByIdRequest> request);
  OnsGroupConsumerUpdateResponse onsGroupConsumerUpdateWithOptions(shared_ptr<OnsGroupConsumerUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsGroupConsumerUpdateResponse onsGroupConsumerUpdate(shared_ptr<OnsGroupConsumerUpdateRequest> request);
  OnsGroupCreateResponse onsGroupCreateWithOptions(shared_ptr<OnsGroupCreateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsGroupCreateResponse onsGroupCreate(shared_ptr<OnsGroupCreateRequest> request);
  OnsGroupDeleteResponse onsGroupDeleteWithOptions(shared_ptr<OnsGroupDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsGroupDeleteResponse onsGroupDelete(shared_ptr<OnsGroupDeleteRequest> request);
  OnsGroupListResponse onsGroupListWithOptions(shared_ptr<OnsGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsGroupListResponse onsGroupList(shared_ptr<OnsGroupListRequest> request);
  OnsGroupSubDetailResponse onsGroupSubDetailWithOptions(shared_ptr<OnsGroupSubDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsGroupSubDetailResponse onsGroupSubDetail(shared_ptr<OnsGroupSubDetailRequest> request);
  OnsInstanceBaseInfoResponse onsInstanceBaseInfoWithOptions(shared_ptr<OnsInstanceBaseInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsInstanceBaseInfoResponse onsInstanceBaseInfo(shared_ptr<OnsInstanceBaseInfoRequest> request);
  OnsInstanceCreateResponse onsInstanceCreateWithOptions(shared_ptr<OnsInstanceCreateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsInstanceCreateResponse onsInstanceCreate(shared_ptr<OnsInstanceCreateRequest> request);
  OnsInstanceDeleteResponse onsInstanceDeleteWithOptions(shared_ptr<OnsInstanceDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsInstanceDeleteResponse onsInstanceDelete(shared_ptr<OnsInstanceDeleteRequest> request);
  OnsInstanceInServiceListResponse onsInstanceInServiceListWithOptions(shared_ptr<OnsInstanceInServiceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsInstanceInServiceListResponse onsInstanceInServiceList(shared_ptr<OnsInstanceInServiceListRequest> request);
  OnsInstanceUpdateResponse onsInstanceUpdateWithOptions(shared_ptr<OnsInstanceUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsInstanceUpdateResponse onsInstanceUpdate(shared_ptr<OnsInstanceUpdateRequest> request);
  OnsMessageDetailResponse onsMessageDetailWithOptions(shared_ptr<OnsMessageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsMessageDetailResponse onsMessageDetail(shared_ptr<OnsMessageDetailRequest> request);
  OnsMessageGetByKeyResponse onsMessageGetByKeyWithOptions(shared_ptr<OnsMessageGetByKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsMessageGetByKeyResponse onsMessageGetByKey(shared_ptr<OnsMessageGetByKeyRequest> request);
  OnsMessageGetByMsgIdResponse onsMessageGetByMsgIdWithOptions(shared_ptr<OnsMessageGetByMsgIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsMessageGetByMsgIdResponse onsMessageGetByMsgId(shared_ptr<OnsMessageGetByMsgIdRequest> request);
  OnsMessagePageQueryByTopicResponse onsMessagePageQueryByTopicWithOptions(shared_ptr<OnsMessagePageQueryByTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsMessagePageQueryByTopicResponse onsMessagePageQueryByTopic(shared_ptr<OnsMessagePageQueryByTopicRequest> request);
  OnsMessagePushResponse onsMessagePushWithOptions(shared_ptr<OnsMessagePushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsMessagePushResponse onsMessagePush(shared_ptr<OnsMessagePushRequest> request);
  OnsMessageTraceResponse onsMessageTraceWithOptions(shared_ptr<OnsMessageTraceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsMessageTraceResponse onsMessageTrace(shared_ptr<OnsMessageTraceRequest> request);
  OnsRegionListResponse onsRegionListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsRegionListResponse onsRegionList();
  OnsTopicCreateResponse onsTopicCreateWithOptions(shared_ptr<OnsTopicCreateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTopicCreateResponse onsTopicCreate(shared_ptr<OnsTopicCreateRequest> request);
  OnsTopicDeleteResponse onsTopicDeleteWithOptions(shared_ptr<OnsTopicDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTopicDeleteResponse onsTopicDelete(shared_ptr<OnsTopicDeleteRequest> request);
  OnsTopicListResponse onsTopicListWithOptions(shared_ptr<OnsTopicListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTopicListResponse onsTopicList(shared_ptr<OnsTopicListRequest> request);
  OnsTopicStatusResponse onsTopicStatusWithOptions(shared_ptr<OnsTopicStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTopicStatusResponse onsTopicStatus(shared_ptr<OnsTopicStatusRequest> request);
  OnsTopicSubDetailResponse onsTopicSubDetailWithOptions(shared_ptr<OnsTopicSubDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTopicSubDetailResponse onsTopicSubDetail(shared_ptr<OnsTopicSubDetailRequest> request);
  OnsTopicUpdateResponse onsTopicUpdateWithOptions(shared_ptr<OnsTopicUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTopicUpdateResponse onsTopicUpdate(shared_ptr<OnsTopicUpdateRequest> request);
  OnsTraceGetResultResponse onsTraceGetResultWithOptions(shared_ptr<OnsTraceGetResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTraceGetResultResponse onsTraceGetResult(shared_ptr<OnsTraceGetResultRequest> request);
  OnsTraceQueryByMsgIdResponse onsTraceQueryByMsgIdWithOptions(shared_ptr<OnsTraceQueryByMsgIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTraceQueryByMsgIdResponse onsTraceQueryByMsgId(shared_ptr<OnsTraceQueryByMsgIdRequest> request);
  OnsTraceQueryByMsgKeyResponse onsTraceQueryByMsgKeyWithOptions(shared_ptr<OnsTraceQueryByMsgKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTraceQueryByMsgKeyResponse onsTraceQueryByMsgKey(shared_ptr<OnsTraceQueryByMsgKeyRequest> request);
  OnsTrendGroupOutputTpsResponse onsTrendGroupOutputTpsWithOptions(shared_ptr<OnsTrendGroupOutputTpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTrendGroupOutputTpsResponse onsTrendGroupOutputTps(shared_ptr<OnsTrendGroupOutputTpsRequest> request);
  OnsTrendTopicInputTpsResponse onsTrendTopicInputTpsWithOptions(shared_ptr<OnsTrendTopicInputTpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnsTrendTopicInputTpsResponse onsTrendTopicInputTps(shared_ptr<OnsTrendTopicInputTpsRequest> request);
  OpenOnsServiceResponse openOnsServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenOnsServiceResponse openOnsService();
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ons20190214

#endif
