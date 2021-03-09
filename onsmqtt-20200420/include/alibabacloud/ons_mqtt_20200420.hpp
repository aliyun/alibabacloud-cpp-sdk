// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ONSMQTT20200420_H_
#define ALIBABACLOUD_ONSMQTT20200420_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_OnsMqtt20200420 {
class ApplyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> resources{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> actions{};

  ApplyTokenRequest() {}

  explicit ApplyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (actions) {
      res["Actions"] = boost::any(*actions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Actions") != m.end() && !m["Actions"].empty()) {
      actions = make_shared<string>(boost::any_cast<string>(m["Actions"]));
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
  shared_ptr<ApplyTokenResponseBody> body{};

  ApplyTokenResponse() {}

  explicit ApplyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> clientIdList{};

  BatchQuerySessionByClientIdsRequest() {}

  explicit BatchQuerySessionByClientIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (clientIdList) {
      res["ClientIdList"] = boost::any(*clientIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
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
  }


  virtual ~BatchQuerySessionByClientIdsRequest() = default;
};
class BatchQuerySessionByClientIdsResponseBodyOnlineStatusList : public Darabonba::Model {
public:
  shared_ptr<bool> onlineStatus{};
  shared_ptr<string> clientId{};

  BatchQuerySessionByClientIdsResponseBodyOnlineStatusList() {}

  explicit BatchQuerySessionByClientIdsResponseBodyOnlineStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<bool>(boost::any_cast<bool>(m["OnlineStatus"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponseBodyOnlineStatusList() = default;
};
class BatchQuerySessionByClientIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<BatchQuerySessionByClientIdsResponseBodyOnlineStatusList>> onlineStatusList{};

  BatchQuerySessionByClientIdsResponseBody() {}

  explicit BatchQuerySessionByClientIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (onlineStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*onlineStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlineStatusList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~BatchQuerySessionByClientIdsResponseBody() = default;
};
class BatchQuerySessionByClientIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchQuerySessionByClientIdsResponseBody> body{};

  BatchQuerySessionByClientIdsResponse() {}

  explicit BatchQuerySessionByClientIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchQuerySessionByClientIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchQuerySessionByClientIdsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponse() = default;
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
  shared_ptr<CreateGroupIdResponseBody> body{};

  CreateGroupIdResponse() {}

  explicit CreateGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<DeleteGroupIdResponseBody> body{};

  DeleteGroupIdResponse() {}

  explicit DeleteGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupIdResponse() = default;
};
class GetDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  GetDeviceCredentialRequest() {}

  explicit GetDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDeviceCredentialRequest() = default;
};
class GetDeviceCredentialResponseBodyDeviceCredential : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<string> deviceAccessKeyId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> deviceAccessKeySecret{};
  shared_ptr<string> clientId{};

  GetDeviceCredentialResponseBodyDeviceCredential() {}

  explicit GetDeviceCredentialResponseBodyDeviceCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (deviceAccessKeyId) {
      res["DeviceAccessKeyId"] = boost::any(*deviceAccessKeyId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (deviceAccessKeySecret) {
      res["DeviceAccessKeySecret"] = boost::any(*deviceAccessKeySecret);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("DeviceAccessKeyId") != m.end() && !m["DeviceAccessKeyId"].empty()) {
      deviceAccessKeyId = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeyId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DeviceAccessKeySecret") != m.end() && !m["DeviceAccessKeySecret"].empty()) {
      deviceAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeySecret"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
  }


  virtual ~GetDeviceCredentialResponseBodyDeviceCredential() = default;
};
class GetDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDeviceCredentialResponseBodyDeviceCredential> deviceCredential{};

  GetDeviceCredentialResponseBody() {}

  explicit GetDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (deviceCredential) {
      res["DeviceCredential"] = deviceCredential ? boost::any(deviceCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DeviceCredential") != m.end() && !m["DeviceCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCredential"].type()) {
        GetDeviceCredentialResponseBodyDeviceCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCredential"]));
        deviceCredential = make_shared<GetDeviceCredentialResponseBodyDeviceCredential>(model1);
      }
    }
  }


  virtual ~GetDeviceCredentialResponseBody() = default;
};
class GetDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDeviceCredentialResponseBody> body{};

  GetDeviceCredentialResponse() {}

  explicit GetDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceCredentialResponse() = default;
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
  shared_ptr<long> updateTime{};
  shared_ptr<bool> independentNaming{};
  shared_ptr<string> groupId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};

  ListGroupIdResponseBodyData() {}

  explicit ListGroupIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (independentNaming) {
      res["IndependentNaming"] = boost::any(*independentNaming);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("IndependentNaming") != m.end() && !m["IndependentNaming"].empty()) {
      independentNaming = make_shared<bool>(boost::any_cast<bool>(m["IndependentNaming"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListGroupIdResponseBodyData() = default;
};
class ListGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListGroupIdResponseBodyData>> data{};

  ListGroupIdResponseBody() {}

  explicit ListGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~ListGroupIdResponseBody() = default;
};
class ListGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupIdResponseBody> body{};

  ListGroupIdResponse() {}

  explicit ListGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> requestId{};
  shared_ptr<bool> onlineStatus{};

  QuerySessionByClientIdResponseBody() {}

  explicit QuerySessionByClientIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<bool>(boost::any_cast<bool>(m["OnlineStatus"]));
    }
  }


  virtual ~QuerySessionByClientIdResponseBody() = default;
};
class QuerySessionByClientIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySessionByClientIdResponseBody> body{};

  QuerySessionByClientIdResponse() {}

  explicit QuerySessionByClientIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> token{};
  shared_ptr<string> instanceId{};

  QueryTokenRequest() {}

  explicit QueryTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
  shared_ptr<QueryTokenResponseBody> body{};

  QueryTokenResponse() {}

  explicit QueryTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTokenResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTokenResponse() = default;
};
class RefreshDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  RefreshDeviceCredentialRequest() {}

  explicit RefreshDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefreshDeviceCredentialRequest() = default;
};
class RefreshDeviceCredentialResponseBodyDeviceCredential : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<string> deviceAccessKeyId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> deviceAccessKeySecret{};
  shared_ptr<string> clientId{};

  RefreshDeviceCredentialResponseBodyDeviceCredential() {}

  explicit RefreshDeviceCredentialResponseBodyDeviceCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (deviceAccessKeyId) {
      res["DeviceAccessKeyId"] = boost::any(*deviceAccessKeyId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (deviceAccessKeySecret) {
      res["DeviceAccessKeySecret"] = boost::any(*deviceAccessKeySecret);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("DeviceAccessKeyId") != m.end() && !m["DeviceAccessKeyId"].empty()) {
      deviceAccessKeyId = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeyId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DeviceAccessKeySecret") != m.end() && !m["DeviceAccessKeySecret"].empty()) {
      deviceAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeySecret"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
  }


  virtual ~RefreshDeviceCredentialResponseBodyDeviceCredential() = default;
};
class RefreshDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RefreshDeviceCredentialResponseBodyDeviceCredential> deviceCredential{};

  RefreshDeviceCredentialResponseBody() {}

  explicit RefreshDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (deviceCredential) {
      res["DeviceCredential"] = deviceCredential ? boost::any(deviceCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DeviceCredential") != m.end() && !m["DeviceCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCredential"].type()) {
        RefreshDeviceCredentialResponseBodyDeviceCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCredential"]));
        deviceCredential = make_shared<RefreshDeviceCredentialResponseBodyDeviceCredential>(model1);
      }
    }
  }


  virtual ~RefreshDeviceCredentialResponseBody() = default;
};
class RefreshDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshDeviceCredentialResponseBody> body{};

  RefreshDeviceCredentialResponse() {}

  explicit RefreshDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshDeviceCredentialResponse() = default;
};
class RegisterDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  RegisterDeviceCredentialRequest() {}

  explicit RegisterDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RegisterDeviceCredentialRequest() = default;
};
class RegisterDeviceCredentialResponseBodyDeviceCredential : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<string> deviceAccessKeyId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> deviceAccessKeySecret{};
  shared_ptr<string> clientId{};

  RegisterDeviceCredentialResponseBodyDeviceCredential() {}

  explicit RegisterDeviceCredentialResponseBodyDeviceCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (deviceAccessKeyId) {
      res["DeviceAccessKeyId"] = boost::any(*deviceAccessKeyId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (deviceAccessKeySecret) {
      res["DeviceAccessKeySecret"] = boost::any(*deviceAccessKeySecret);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("DeviceAccessKeyId") != m.end() && !m["DeviceAccessKeyId"].empty()) {
      deviceAccessKeyId = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeyId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DeviceAccessKeySecret") != m.end() && !m["DeviceAccessKeySecret"].empty()) {
      deviceAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeySecret"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
  }


  virtual ~RegisterDeviceCredentialResponseBodyDeviceCredential() = default;
};
class RegisterDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RegisterDeviceCredentialResponseBodyDeviceCredential> deviceCredential{};

  RegisterDeviceCredentialResponseBody() {}

  explicit RegisterDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (deviceCredential) {
      res["DeviceCredential"] = deviceCredential ? boost::any(deviceCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DeviceCredential") != m.end() && !m["DeviceCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCredential"].type()) {
        RegisterDeviceCredentialResponseBodyDeviceCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCredential"]));
        deviceCredential = make_shared<RegisterDeviceCredentialResponseBodyDeviceCredential>(model1);
      }
    }
  }


  virtual ~RegisterDeviceCredentialResponseBody() = default;
};
class RegisterDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterDeviceCredentialResponseBody> body{};

  RegisterDeviceCredentialResponse() {}

  explicit RegisterDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDeviceCredentialResponse() = default;
};
class RevokeTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};
  shared_ptr<string> instanceId{};

  RevokeTokenRequest() {}

  explicit RevokeTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
  shared_ptr<RevokeTokenResponseBody> body{};

  RevokeTokenResponse() {}

  explicit RevokeTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> mqttTopic{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> payload{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttTopic) {
      res["MqttTopic"] = boost::any(*mqttTopic);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MqttTopic") != m.end() && !m["MqttTopic"].empty()) {
      mqttTopic = make_shared<string>(boost::any_cast<string>(m["MqttTopic"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> msgId{};

  SendMessageResponseBody() {}

  explicit SendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~SendMessageResponseBody() = default;
};
class SendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendMessageResponseBody> body{};

  SendMessageResponse() {}

  explicit SendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageResponse() = default;
};
class UnRegisterDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  UnRegisterDeviceCredentialRequest() {}

  explicit UnRegisterDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnRegisterDeviceCredentialRequest() = default;
};
class UnRegisterDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnRegisterDeviceCredentialResponseBody() {}

  explicit UnRegisterDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnRegisterDeviceCredentialResponseBody() = default;
};
class UnRegisterDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnRegisterDeviceCredentialResponseBody> body{};

  UnRegisterDeviceCredentialResponse() {}

  explicit UnRegisterDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnRegisterDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnRegisterDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~UnRegisterDeviceCredentialResponse() = default;
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
  CreateGroupIdResponse createGroupIdWithOptions(shared_ptr<CreateGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupIdResponse createGroupId(shared_ptr<CreateGroupIdRequest> request);
  DeleteGroupIdResponse deleteGroupIdWithOptions(shared_ptr<DeleteGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupIdResponse deleteGroupId(shared_ptr<DeleteGroupIdRequest> request);
  GetDeviceCredentialResponse getDeviceCredentialWithOptions(shared_ptr<GetDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceCredentialResponse getDeviceCredential(shared_ptr<GetDeviceCredentialRequest> request);
  ListGroupIdResponse listGroupIdWithOptions(shared_ptr<ListGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupIdResponse listGroupId(shared_ptr<ListGroupIdRequest> request);
  QuerySessionByClientIdResponse querySessionByClientIdWithOptions(shared_ptr<QuerySessionByClientIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySessionByClientIdResponse querySessionByClientId(shared_ptr<QuerySessionByClientIdRequest> request);
  QueryTokenResponse queryTokenWithOptions(shared_ptr<QueryTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTokenResponse queryToken(shared_ptr<QueryTokenRequest> request);
  RefreshDeviceCredentialResponse refreshDeviceCredentialWithOptions(shared_ptr<RefreshDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshDeviceCredentialResponse refreshDeviceCredential(shared_ptr<RefreshDeviceCredentialRequest> request);
  RegisterDeviceCredentialResponse registerDeviceCredentialWithOptions(shared_ptr<RegisterDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDeviceCredentialResponse registerDeviceCredential(shared_ptr<RegisterDeviceCredentialRequest> request);
  RevokeTokenResponse revokeTokenWithOptions(shared_ptr<RevokeTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeTokenResponse revokeToken(shared_ptr<RevokeTokenRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);
  UnRegisterDeviceCredentialResponse unRegisterDeviceCredentialWithOptions(shared_ptr<UnRegisterDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnRegisterDeviceCredentialResponse unRegisterDeviceCredential(shared_ptr<UnRegisterDeviceCredentialRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_OnsMqtt20200420

#endif
