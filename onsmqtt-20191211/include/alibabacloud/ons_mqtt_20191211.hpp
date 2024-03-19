// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ONSMQTT20191211_H_
#define ALIBABACLOUD_ONSMQTT20191211_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_OnsMqtt20191211 {
class ApplyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> actions{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resources{};

  ApplyTokenRequest() {}

  explicit ApplyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["Actions"] = boost::any(*actions);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Actions") != m.end() && !m["Actions"].empty()) {
      actions = make_shared<string>(boost::any_cast<string>(m["Actions"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~ApplyTokenRequest() = default;
};
class ApplyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  ApplyTokenResponseBody() {}

  explicit ApplyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~ApplyTokenResponseBody() = default;
};
class ApplyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyTokenResponseBody> body{};

  ApplyTokenResponse() {}

  explicit ApplyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyTokenResponse() = default;
};
class BatchQuerySessionByClientIdsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clientIdList{};
  shared_ptr<string> instanceId{};

  BatchQuerySessionByClientIdsRequest() {}

  explicit BatchQuerySessionByClientIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdList) {
      res["ClientIdList"] = boost::any(*clientIdList);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIdList") != m.end() && !m["ClientIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~BatchQuerySessionByClientIdsRequest() = default;
};
class BatchQuerySessionByClientIdsResponseBodyOnlineStatusList : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<bool> onlineStatus{};

  BatchQuerySessionByClientIdsResponseBodyOnlineStatusList() {}

  explicit BatchQuerySessionByClientIdsResponseBodyOnlineStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<bool>(boost::any_cast<bool>(m["OnlineStatus"]));
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponseBodyOnlineStatusList() = default;
};
class BatchQuerySessionByClientIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<BatchQuerySessionByClientIdsResponseBodyOnlineStatusList>> onlineStatusList{};
  shared_ptr<string> requestId{};

  BatchQuerySessionByClientIdsResponseBody() {}

  explicit BatchQuerySessionByClientIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlineStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*onlineStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlineStatusList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnlineStatusList") != m.end() && !m["OnlineStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlineStatusList"].type()) {
        vector<BatchQuerySessionByClientIdsResponseBodyOnlineStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlineStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchQuerySessionByClientIdsResponseBodyOnlineStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlineStatusList = make_shared<vector<BatchQuerySessionByClientIdsResponseBodyOnlineStatusList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponseBody() = default;
};
class BatchQuerySessionByClientIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchQuerySessionByClientIdsResponseBody> body{};

  BatchQuerySessionByClientIdsResponse() {}

  explicit BatchQuerySessionByClientIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchQuerySessionByClientIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchQuerySessionByClientIdsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponse() = default;
};
class BatchSendMessagesRequestMessages : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> payload{};
  shared_ptr<string> receiptId{};
  shared_ptr<vector<string>> topics{};

  BatchSendMessagesRequestMessages() {}

  explicit BatchSendMessagesRequestMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (receiptId) {
      res["ReceiptId"] = boost::any(*receiptId);
    }
    if (topics) {
      res["Topics"] = boost::any(*topics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("ReceiptId") != m.end() && !m["ReceiptId"].empty()) {
      receiptId = make_shared<string>(boost::any_cast<string>(m["ReceiptId"]));
    }
    if (m.find("Topics") != m.end() && !m["Topics"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Topics"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Topics"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      topics = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BatchSendMessagesRequestMessages() = default;
};
class BatchSendMessagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<BatchSendMessagesRequestMessages>> messages{};

  BatchSendMessagesRequest() {}

  explicit BatchSendMessagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Messages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<BatchSendMessagesRequestMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchSendMessagesRequestMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<BatchSendMessagesRequestMessages>>(expect1);
      }
    }
  }


  virtual ~BatchSendMessagesRequest() = default;
};
class BatchSendMessagesResponseBodyResponses : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> id{};
  shared_ptr<string> msgId{};

  BatchSendMessagesResponseBodyResponses() {}

  explicit BatchSendMessagesResponseBodyResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~BatchSendMessagesResponseBodyResponses() = default;
};
class BatchSendMessagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchSendMessagesResponseBodyResponses>> responses{};

  BatchSendMessagesResponseBody() {}

  explicit BatchSendMessagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responses) {
      vector<boost::any> temp1;
      for(auto item1:*responses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Responses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Responses") != m.end() && !m["Responses"].empty()) {
      if (typeid(vector<boost::any>) == m["Responses"].type()) {
        vector<BatchSendMessagesResponseBodyResponses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Responses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchSendMessagesResponseBodyResponses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responses = make_shared<vector<BatchSendMessagesResponseBodyResponses>>(expect1);
      }
    }
  }


  virtual ~BatchSendMessagesResponseBody() = default;
};
class BatchSendMessagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchSendMessagesResponseBody> body{};

  BatchSendMessagesResponse() {}

  explicit BatchSendMessagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchSendMessagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchSendMessagesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchSendMessagesResponse() = default;
};
class CreateGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  CreateGroupIdRequest() {}

  explicit CreateGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateGroupIdRequest() = default;
};
class CreateGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateGroupIdResponseBody() {}

  explicit CreateGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateGroupIdResponseBody() = default;
};
class CreateGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupIdResponseBody> body{};

  CreateGroupIdResponse() {}

  explicit CreateGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupIdResponse() = default;
};
class DeleteGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  DeleteGroupIdRequest() {}

  explicit DeleteGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupIdRequest() = default;
};
class DeleteGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupIdResponseBody() {}

  explicit DeleteGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupIdResponseBody() = default;
};
class DeleteGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupIdResponseBody> body{};

  DeleteGroupIdResponse() {}

  explicit DeleteGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupIdResponse() = default;
};
class ListGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListGroupIdRequest() {}

  explicit ListGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListGroupIdRequest() = default;
};
class ListGroupIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> independentNaming{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> updateTime{};

  ListGroupIdResponseBodyData() {}

  explicit ListGroupIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (independentNaming) {
      res["IndependentNaming"] = boost::any(*independentNaming);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("IndependentNaming") != m.end() && !m["IndependentNaming"].empty()) {
      independentNaming = make_shared<bool>(boost::any_cast<bool>(m["IndependentNaming"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListGroupIdResponseBodyData() = default;
};
class ListGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupIdResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListGroupIdResponseBody() {}

  explicit ListGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListGroupIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListGroupIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGroupIdResponseBody() = default;
};
class ListGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupIdResponseBody> body{};

  ListGroupIdResponse() {}

  explicit ListGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupIdResponse() = default;
};
class QuerySessionByClientIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  QuerySessionByClientIdRequest() {}

  explicit QuerySessionByClientIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~QuerySessionByClientIdRequest() = default;
};
class QuerySessionByClientIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> onlineStatus{};
  shared_ptr<string> requestId{};

  QuerySessionByClientIdResponseBody() {}

  explicit QuerySessionByClientIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<bool>(boost::any_cast<bool>(m["OnlineStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QuerySessionByClientIdResponseBody() = default;
};
class QuerySessionByClientIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySessionByClientIdResponseBody> body{};

  QuerySessionByClientIdResponse() {}

  explicit QuerySessionByClientIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySessionByClientIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySessionByClientIdResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySessionByClientIdResponse() = default;
};
class QueryTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> token{};

  QueryTokenRequest() {}

  explicit QueryTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~QueryTokenRequest() = default;
};
class QueryTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> tokenStatus{};

  QueryTokenResponseBody() {}

  explicit QueryTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tokenStatus) {
      res["TokenStatus"] = boost::any(*tokenStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TokenStatus") != m.end() && !m["TokenStatus"].empty()) {
      tokenStatus = make_shared<bool>(boost::any_cast<bool>(m["TokenStatus"]));
    }
  }


  virtual ~QueryTokenResponseBody() = default;
};
class QueryTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTokenResponseBody> body{};

  QueryTokenResponse() {}

  explicit QueryTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTokenResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTokenResponse() = default;
};
class RevokeTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> token{};

  RevokeTokenRequest() {}

  explicit RevokeTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~RevokeTokenRequest() = default;
};
class RevokeTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeTokenResponseBody() {}

  explicit RevokeTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeTokenResponseBody() = default;
};
class RevokeTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeTokenResponseBody> body{};

  RevokeTokenResponse() {}

  explicit RevokeTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeTokenResponse() = default;
};
class SendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> mqttTopic{};
  shared_ptr<string> payload{};
  shared_ptr<string> receiptId{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mqttTopic) {
      res["MqttTopic"] = boost::any(*mqttTopic);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (receiptId) {
      res["ReceiptId"] = boost::any(*receiptId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MqttTopic") != m.end() && !m["MqttTopic"].empty()) {
      mqttTopic = make_shared<string>(boost::any_cast<string>(m["MqttTopic"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("ReceiptId") != m.end() && !m["ReceiptId"].empty()) {
      receiptId = make_shared<string>(boost::any_cast<string>(m["ReceiptId"]));
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};
  shared_ptr<string> requestId{};

  SendMessageResponseBody() {}

  explicit SendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendMessageResponseBody() = default;
};
class SendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageResponseBody> body{};

  SendMessageResponse() {}

  explicit SendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageResponse() = default;
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
  ApplyTokenResponse applyTokenWithOptions(shared_ptr<ApplyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyTokenResponse applyToken(shared_ptr<ApplyTokenRequest> request);
  BatchQuerySessionByClientIdsResponse batchQuerySessionByClientIdsWithOptions(shared_ptr<BatchQuerySessionByClientIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchQuerySessionByClientIdsResponse batchQuerySessionByClientIds(shared_ptr<BatchQuerySessionByClientIdsRequest> request);
  BatchSendMessagesResponse batchSendMessagesWithOptions(shared_ptr<BatchSendMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSendMessagesResponse batchSendMessages(shared_ptr<BatchSendMessagesRequest> request);
  CreateGroupIdResponse createGroupIdWithOptions(shared_ptr<CreateGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupIdResponse createGroupId(shared_ptr<CreateGroupIdRequest> request);
  DeleteGroupIdResponse deleteGroupIdWithOptions(shared_ptr<DeleteGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupIdResponse deleteGroupId(shared_ptr<DeleteGroupIdRequest> request);
  ListGroupIdResponse listGroupIdWithOptions(shared_ptr<ListGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupIdResponse listGroupId(shared_ptr<ListGroupIdRequest> request);
  QuerySessionByClientIdResponse querySessionByClientIdWithOptions(shared_ptr<QuerySessionByClientIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySessionByClientIdResponse querySessionByClientId(shared_ptr<QuerySessionByClientIdRequest> request);
  QueryTokenResponse queryTokenWithOptions(shared_ptr<QueryTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTokenResponse queryToken(shared_ptr<QueryTokenRequest> request);
  RevokeTokenResponse revokeTokenWithOptions(shared_ptr<RevokeTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeTokenResponse revokeToken(shared_ptr<RevokeTokenRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_OnsMqtt20191211

#endif
