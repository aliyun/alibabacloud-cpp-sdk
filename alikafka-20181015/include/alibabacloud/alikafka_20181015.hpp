// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIKAFKA20181015_H_
#define ALIBABACLOUD_ALIKAFKA20181015_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Alikafka20181015 {
class CreateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  CreateConsumerGroupRequest() {}

  explicit CreateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateConsumerGroupRequest() = default;
};
class CreateConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class CreateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> topic{};

  CreateTopicRequest() {}

  explicit CreateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~CreateTopicRequest() = default;
};
class CreateTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
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
class DeleteConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DeleteConsumerGroupRequest() {}

  explicit DeleteConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteConsumerGroupRequest() = default;
};
class DeleteConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DeleteTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  DeleteTopicRequest() {}

  explicit DeleteTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~DeleteTopicRequest() = default;
};
class DeleteTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
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
class GetConsumerListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetConsumerListRequest() {}

  explicit GetConsumerListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConsumerListRequest() = default;
};
class GetConsumerListResponseBodyConsumerListConsumerVO : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetConsumerListResponseBodyConsumerListConsumerVO() {}

  explicit GetConsumerListResponseBodyConsumerListConsumerVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConsumerListResponseBodyConsumerListConsumerVO() = default;
};
class GetConsumerListResponseBodyConsumerList : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerListResponseBodyConsumerListConsumerVO>> consumerVO{};

  GetConsumerListResponseBodyConsumerList() {}

  explicit GetConsumerListResponseBodyConsumerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerVO) {
      vector<boost::any> temp1;
      for(auto item1:*consumerVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConsumerVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerVO") != m.end() && !m["ConsumerVO"].empty()) {
      if (typeid(vector<boost::any>) == m["ConsumerVO"].type()) {
        vector<GetConsumerListResponseBodyConsumerListConsumerVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConsumerVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerListResponseBodyConsumerListConsumerVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        consumerVO = make_shared<vector<GetConsumerListResponseBodyConsumerListConsumerVO>>(expect1);
      }
    }
  }


  virtual ~GetConsumerListResponseBodyConsumerList() = default;
};
class GetConsumerListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetConsumerListResponseBodyConsumerList> consumerList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsumerListResponseBody() {}

  explicit GetConsumerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (consumerList) {
      res["ConsumerList"] = consumerList ? boost::any(consumerList->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("ConsumerList") != m.end() && !m["ConsumerList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsumerList"].type()) {
        GetConsumerListResponseBodyConsumerList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsumerList"]));
        consumerList = make_shared<GetConsumerListResponseBodyConsumerList>(model1);
      }
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


  virtual ~GetConsumerListResponseBody() = default;
};
class GetConsumerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerListResponseBody> body{};

  GetConsumerListResponse() {}

  explicit GetConsumerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerListResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerListResponse() = default;
};
class GetConsumerProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetConsumerProgressRequest() {}

  explicit GetConsumerProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConsumerProgressRequest() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList : public Darabonba::Model {
public:
  shared_ptr<long> brokerOffset{};
  shared_ptr<long> consumerOffset{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<long> partition{};

  GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerOffset) {
      res["BrokerOffset"] = boost::any(*brokerOffset);
    }
    if (consumerOffset) {
      res["ConsumerOffset"] = boost::any(*consumerOffset);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerOffset") != m.end() && !m["BrokerOffset"].empty()) {
      brokerOffset = make_shared<long>(boost::any_cast<long>(m["BrokerOffset"]));
    }
    if (m.find("ConsumerOffset") != m.end() && !m["ConsumerOffset"].empty()) {
      consumerOffset = make_shared<long>(boost::any_cast<long>(m["ConsumerOffset"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["Partition"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList>> offsetList{};

  GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offsetList) {
      vector<boost::any> temp1;
      for(auto item1:*offsetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OffsetList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OffsetList") != m.end() && !m["OffsetList"].empty()) {
      if (typeid(vector<boost::any>) == m["OffsetList"].type()) {
        vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OffsetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        offsetList = make_shared<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList>>(expect1);
      }
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList : public Darabonba::Model {
public:
  shared_ptr<long> lastTimestamp{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList> offsetList{};
  shared_ptr<string> topic{};
  shared_ptr<long> totalDiff{};

  GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (offsetList) {
      res["OffsetList"] = offsetList ? boost::any(offsetList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("OffsetList") != m.end() && !m["OffsetList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OffsetList"].type()) {
        GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OffsetList"]));
        offsetList = make_shared<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicList : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList>> topicList{};

  GetConsumerProgressResponseBodyConsumerProgressTopicList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicList) {
      vector<boost::any> temp1;
      for(auto item1:*topicList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopicList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(vector<boost::any>) == m["TopicList"].type()) {
        vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topicList = make_shared<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList>>(expect1);
      }
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgress : public Darabonba::Model {
public:
  shared_ptr<long> lastTimestamp{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgressTopicList> topicList{};
  shared_ptr<long> totalDiff{};
  shared_ptr<string> state{};

  GetConsumerProgressResponseBodyConsumerProgress() {}

  explicit GetConsumerProgressResponseBodyConsumerProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (topicList) {
      res["TopicList"] = topicList ? boost::any(topicList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicList"].type()) {
        GetConsumerProgressResponseBodyConsumerProgressTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicList"]));
        topicList = make_shared<GetConsumerProgressResponseBodyConsumerProgressTopicList>(model1);
      }
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgress() = default;
};
class GetConsumerProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgress> consumerProgress{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsumerProgressResponseBody() {}

  explicit GetConsumerProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (consumerProgress) {
      res["ConsumerProgress"] = consumerProgress ? boost::any(consumerProgress->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("ConsumerProgress") != m.end() && !m["ConsumerProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsumerProgress"].type()) {
        GetConsumerProgressResponseBodyConsumerProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsumerProgress"]));
        consumerProgress = make_shared<GetConsumerProgressResponseBodyConsumerProgress>(model1);
      }
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


  virtual ~GetConsumerProgressResponseBody() = default;
};
class GetConsumerProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerProgressResponseBody> body{};

  GetConsumerProgressResponse() {}

  explicit GetConsumerProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerProgressResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerProgressResponse() = default;
};
class GetInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetInstanceListRequest() {}

  explicit GetInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetInstanceListRequest() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO : public Darabonba::Model {
public:
  shared_ptr<string> current2OpenSourceVersion{};

  GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current2OpenSourceVersion) {
      res["Current2OpenSourceVersion"] = boost::any(*current2OpenSourceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current2OpenSourceVersion") != m.end() && !m["Current2OpenSourceVersion"].empty()) {
      current2OpenSourceVersion = make_shared<string>(boost::any_cast<string>(m["Current2OpenSourceVersion"]));
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO>> upgradeServiceDetailInfoVO{};

  GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (upgradeServiceDetailInfoVO) {
      vector<boost::any> temp1;
      for(auto item1:*upgradeServiceDetailInfoVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpgradeServiceDetailInfoVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpgradeServiceDetailInfoVO") != m.end() && !m["UpgradeServiceDetailInfoVO"].empty()) {
      if (typeid(vector<boost::any>) == m["UpgradeServiceDetailInfoVO"].type()) {
        vector<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpgradeServiceDetailInfoVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upgradeServiceDetailInfoVO = make_shared<vector<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfoUpgradeServiceDetailInfoVO>>(expect1);
      }
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVO : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> deployType{};
  shared_ptr<string> endPoint{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<long> serviceStatus{};
  shared_ptr<string> sslEndPoint{};
  shared_ptr<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo> upgradeServiceDetailInfo{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  GetInstanceListResponseBodyInstanceListInstanceVO() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (sslEndPoint) {
      res["SslEndPoint"] = boost::any(*sslEndPoint);
    }
    if (upgradeServiceDetailInfo) {
      res["UpgradeServiceDetailInfo"] = upgradeServiceDetailInfo ? boost::any(upgradeServiceDetailInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<long>(boost::any_cast<long>(m["ServiceStatus"]));
    }
    if (m.find("SslEndPoint") != m.end() && !m["SslEndPoint"].empty()) {
      sslEndPoint = make_shared<string>(boost::any_cast<string>(m["SslEndPoint"]));
    }
    if (m.find("UpgradeServiceDetailInfo") != m.end() && !m["UpgradeServiceDetailInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpgradeServiceDetailInfo"].type()) {
        GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpgradeServiceDetailInfo"]));
        upgradeServiceDetailInfo = make_shared<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVO() = default;
};
class GetInstanceListResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceListResponseBodyInstanceListInstanceVO>> instanceVO{};

  GetInstanceListResponseBodyInstanceList() {}

  explicit GetInstanceListResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<GetInstanceListResponseBodyInstanceListInstanceVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceListResponseBodyInstanceListInstanceVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceVO = make_shared<vector<GetInstanceListResponseBodyInstanceListInstanceVO>>(expect1);
      }
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceList() = default;
};
class GetInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetInstanceListResponseBodyInstanceList> instanceList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceListResponseBody() {}

  explicit GetInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceList) {
      res["InstanceList"] = instanceList ? boost::any(instanceList->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceList"].type()) {
        GetInstanceListResponseBodyInstanceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceList"]));
        instanceList = make_shared<GetInstanceListResponseBodyInstanceList>(model1);
      }
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


  virtual ~GetInstanceListResponseBody() = default;
};
class GetInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceListResponseBody> body{};

  GetInstanceListResponse() {}

  explicit GetInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceListResponse() = default;
};
class GetTopicListRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionId{};

  GetTopicListRequest() {}

  explicit GetTopicListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetTopicListRequest() = default;
};
class GetTopicListResponseBodyTopicListTopicVO : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<string> topic{};

  GetTopicListResponseBodyTopicListTopicVO() {}

  explicit GetTopicListResponseBodyTopicListTopicVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicListResponseBodyTopicListTopicVO() = default;
};
class GetTopicListResponseBodyTopicList : public Darabonba::Model {
public:
  shared_ptr<vector<GetTopicListResponseBodyTopicListTopicVO>> topicVO{};

  GetTopicListResponseBodyTopicList() {}

  explicit GetTopicListResponseBodyTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicVO) {
      vector<boost::any> temp1;
      for(auto item1:*topicVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopicVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicVO") != m.end() && !m["TopicVO"].empty()) {
      if (typeid(vector<boost::any>) == m["TopicVO"].type()) {
        vector<GetTopicListResponseBodyTopicListTopicVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopicVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopicListResponseBodyTopicListTopicVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topicVO = make_shared<vector<GetTopicListResponseBodyTopicListTopicVO>>(expect1);
      }
    }
  }


  virtual ~GetTopicListResponseBodyTopicList() = default;
};
class GetTopicListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetTopicListResponseBodyTopicList> topicList{};
  shared_ptr<long> total{};

  GetTopicListResponseBody() {}

  explicit GetTopicListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (topicList) {
      res["TopicList"] = topicList ? boost::any(topicList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicList"].type()) {
        GetTopicListResponseBodyTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicList"]));
        topicList = make_shared<GetTopicListResponseBodyTopicList>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetTopicListResponseBody() = default;
};
class GetTopicListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTopicListResponseBody> body{};

  GetTopicListResponse() {}

  explicit GetTopicListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicListResponse() = default;
};
class GetTopicStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  GetTopicStatusRequest() {}

  explicit GetTopicStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicStatusRequest() = default;
};
class GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable : public Darabonba::Model {
public:
  shared_ptr<long> lastUpdateTimestamp{};
  shared_ptr<long> maxOffset{};
  shared_ptr<long> minOffset{};
  shared_ptr<long> partition{};
  shared_ptr<string> topic{};

  GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable() {}

  explicit GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastUpdateTimestamp) {
      res["LastUpdateTimestamp"] = boost::any(*lastUpdateTimestamp);
    }
    if (maxOffset) {
      res["MaxOffset"] = boost::any(*maxOffset);
    }
    if (minOffset) {
      res["MinOffset"] = boost::any(*minOffset);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastUpdateTimestamp") != m.end() && !m["LastUpdateTimestamp"].empty()) {
      lastUpdateTimestamp = make_shared<long>(boost::any_cast<long>(m["LastUpdateTimestamp"]));
    }
    if (m.find("MaxOffset") != m.end() && !m["MaxOffset"].empty()) {
      maxOffset = make_shared<long>(boost::any_cast<long>(m["MaxOffset"]));
    }
    if (m.find("MinOffset") != m.end() && !m["MinOffset"].empty()) {
      minOffset = make_shared<long>(boost::any_cast<long>(m["MinOffset"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["Partition"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable() = default;
};
class GetTopicStatusResponseBodyTopicStatusOffsetTable : public Darabonba::Model {
public:
  shared_ptr<vector<GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable>> offsetTable{};

  GetTopicStatusResponseBodyTopicStatusOffsetTable() {}

  explicit GetTopicStatusResponseBodyTopicStatusOffsetTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offsetTable) {
      vector<boost::any> temp1;
      for(auto item1:*offsetTable){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OffsetTable"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OffsetTable") != m.end() && !m["OffsetTable"].empty()) {
      if (typeid(vector<boost::any>) == m["OffsetTable"].type()) {
        vector<GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OffsetTable"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        offsetTable = make_shared<vector<GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable>>(expect1);
      }
    }
  }


  virtual ~GetTopicStatusResponseBodyTopicStatusOffsetTable() = default;
};
class GetTopicStatusResponseBodyTopicStatus : public Darabonba::Model {
public:
  shared_ptr<long> lastTimeStamp{};
  shared_ptr<GetTopicStatusResponseBodyTopicStatusOffsetTable> offsetTable{};
  shared_ptr<long> totalCount{};

  GetTopicStatusResponseBodyTopicStatus() {}

  explicit GetTopicStatusResponseBodyTopicStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTimeStamp) {
      res["LastTimeStamp"] = boost::any(*lastTimeStamp);
    }
    if (offsetTable) {
      res["OffsetTable"] = offsetTable ? boost::any(offsetTable->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("OffsetTable") != m.end() && !m["OffsetTable"].empty()) {
      if (typeid(map<string, boost::any>) == m["OffsetTable"].type()) {
        GetTopicStatusResponseBodyTopicStatusOffsetTable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OffsetTable"]));
        offsetTable = make_shared<GetTopicStatusResponseBodyTopicStatusOffsetTable>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetTopicStatusResponseBodyTopicStatus() = default;
};
class GetTopicStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetTopicStatusResponseBodyTopicStatus> topicStatus{};

  GetTopicStatusResponseBody() {}

  explicit GetTopicStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (topicStatus) {
      res["TopicStatus"] = topicStatus ? boost::any(topicStatus->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TopicStatus") != m.end() && !m["TopicStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicStatus"].type()) {
        GetTopicStatusResponseBodyTopicStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicStatus"]));
        topicStatus = make_shared<GetTopicStatusResponseBodyTopicStatus>(model1);
      }
    }
  }


  virtual ~GetTopicStatusResponseBody() = default;
};
class GetTopicStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTopicStatusResponseBody> body{};

  GetTopicStatusResponse() {}

  explicit GetTopicStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicStatusResponse() = default;
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
  CreateConsumerGroupResponse createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsumerGroupResponse createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request);
  CreateTopicResponse createTopicWithOptions(shared_ptr<CreateTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTopicResponse createTopic(shared_ptr<CreateTopicRequest> request);
  DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(shared_ptr<DeleteConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConsumerGroupResponse deleteConsumerGroup(shared_ptr<DeleteConsumerGroupRequest> request);
  DeleteTopicResponse deleteTopicWithOptions(shared_ptr<DeleteTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTopicResponse deleteTopic(shared_ptr<DeleteTopicRequest> request);
  GetConsumerListResponse getConsumerListWithOptions(shared_ptr<GetConsumerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerListResponse getConsumerList(shared_ptr<GetConsumerListRequest> request);
  GetConsumerProgressResponse getConsumerProgressWithOptions(shared_ptr<GetConsumerProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerProgressResponse getConsumerProgress(shared_ptr<GetConsumerProgressRequest> request);
  GetInstanceListResponse getInstanceListWithOptions(shared_ptr<GetInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceListResponse getInstanceList(shared_ptr<GetInstanceListRequest> request);
  GetTopicListResponse getTopicListWithOptions(shared_ptr<GetTopicListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicListResponse getTopicList(shared_ptr<GetTopicListRequest> request);
  GetTopicStatusResponse getTopicStatusWithOptions(shared_ptr<GetTopicStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicStatusResponse getTopicStatus(shared_ptr<GetTopicStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alikafka20181015

#endif
