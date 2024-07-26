// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYBASEAPI20170525_H_
#define ALIBABACLOUD_DYBASEAPI20170525_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Dybaseapi20170525 {
class QueryTokenForMnsQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> messageType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryTokenForMnsQueueRequest() {}

  explicit QueryTokenForMnsQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryTokenForMnsQueueRequest() = default;
};
class QueryTokenForMnsQueueResponseBodyMessageTokenDTO : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> securityToken{};

  QueryTokenForMnsQueueResponseBodyMessageTokenDTO() {}

  explicit QueryTokenForMnsQueueResponseBodyMessageTokenDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~QueryTokenForMnsQueueResponseBodyMessageTokenDTO() = default;
};
class QueryTokenForMnsQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<QueryTokenForMnsQueueResponseBodyMessageTokenDTO> messageTokenDTO{};
  shared_ptr<string> requestId{};

  QueryTokenForMnsQueueResponseBody() {}

  explicit QueryTokenForMnsQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (messageTokenDTO) {
      res["MessageTokenDTO"] = messageTokenDTO ? boost::any(messageTokenDTO->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("MessageTokenDTO") != m.end() && !m["MessageTokenDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["MessageTokenDTO"].type()) {
        QueryTokenForMnsQueueResponseBodyMessageTokenDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MessageTokenDTO"]));
        messageTokenDTO = make_shared<QueryTokenForMnsQueueResponseBodyMessageTokenDTO>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryTokenForMnsQueueResponseBody() = default;
};
class QueryTokenForMnsQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTokenForMnsQueueResponseBody> body{};

  QueryTokenForMnsQueueResponse() {}

  explicit QueryTokenForMnsQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTokenForMnsQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTokenForMnsQueueResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTokenForMnsQueueResponse() = default;
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
  QueryTokenForMnsQueueResponse queryTokenForMnsQueueWithOptions(shared_ptr<QueryTokenForMnsQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTokenForMnsQueueResponse queryTokenForMnsQueue(shared_ptr<QueryTokenForMnsQueueRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dybaseapi20170525

#endif
