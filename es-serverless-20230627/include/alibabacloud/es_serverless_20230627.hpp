// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ES-SERVERLESS20230627_H_
#define ALIBABACLOUD_ES-SERVERLESS20230627_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Es-serverless20230627 {
class CreateAppRequestAuthenticationBasicAuth : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  CreateAppRequestAuthenticationBasicAuth() {}

  explicit CreateAppRequestAuthenticationBasicAuth(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAppRequestAuthenticationBasicAuth() = default;
};
class CreateAppRequestAuthentication : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAppRequestAuthenticationBasicAuth>> basicAuth{};

  CreateAppRequestAuthentication() {}

  explicit CreateAppRequestAuthentication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicAuth) {
      vector<boost::any> temp1;
      for(auto item1:*basicAuth){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["basicAuth"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("basicAuth") != m.end() && !m["basicAuth"].empty()) {
      if (typeid(vector<boost::any>) == m["basicAuth"].type()) {
        vector<CreateAppRequestAuthenticationBasicAuth> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["basicAuth"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppRequestAuthenticationBasicAuth model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        basicAuth = make_shared<vector<CreateAppRequestAuthenticationBasicAuth>>(expect1);
      }
    }
  }


  virtual ~CreateAppRequestAuthentication() = default;
};
class CreateAppRequestNetworkWhiteIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> ips{};

  CreateAppRequestNetworkWhiteIpGroup() {}

  explicit CreateAppRequestNetworkWhiteIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (ips) {
      res["ips"] = boost::any(*ips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("ips") != m.end() && !m["ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAppRequestNetworkWhiteIpGroup() = default;
};
class CreateAppRequestNetwork : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<bool> enabled{};
  shared_ptr<long> port{};
  shared_ptr<string> type{};
  shared_ptr<vector<CreateAppRequestNetworkWhiteIpGroup>> whiteIpGroup{};

  CreateAppRequestNetwork() {}

  explicit CreateAppRequestNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (whiteIpGroup) {
      vector<boost::any> temp1;
      for(auto item1:*whiteIpGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["whiteIpGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("whiteIpGroup") != m.end() && !m["whiteIpGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["whiteIpGroup"].type()) {
        vector<CreateAppRequestNetworkWhiteIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["whiteIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppRequestNetworkWhiteIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whiteIpGroup = make_shared<vector<CreateAppRequestNetworkWhiteIpGroup>>(expect1);
      }
    }
  }


  virtual ~CreateAppRequestNetwork() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<CreateAppRequestAuthentication> authentication{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> description{};
  shared_ptr<vector<CreateAppRequestNetwork>> network{};
  shared_ptr<string> regionId{};
  shared_ptr<string> version{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (authentication) {
      res["authentication"] = authentication ? boost::any(authentication->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (network) {
      vector<boost::any> temp1;
      for(auto item1:*network){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["network"] = boost::any(temp1);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("authentication") != m.end() && !m["authentication"].empty()) {
      if (typeid(map<string, boost::any>) == m["authentication"].type()) {
        CreateAppRequestAuthentication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authentication"]));
        authentication = make_shared<CreateAppRequestAuthentication>(model1);
      }
    }
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("network") != m.end() && !m["network"].empty()) {
      if (typeid(vector<boost::any>) == m["network"].type()) {
        vector<CreateAppRequestNetwork> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["network"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppRequestNetwork model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        network = make_shared<vector<CreateAppRequestNetwork>>(expect1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instaneId{};

  CreateAppResponseBodyResult() {}

  explicit CreateAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instaneId) {
      res["instaneId"] = boost::any(*instaneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instaneId") != m.end() && !m["instaneId"].empty()) {
      instaneId = make_shared<string>(boost::any_cast<string>(m["instaneId"]));
    }
  }


  virtual ~CreateAppResponseBodyResult() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAppResponseBodyResult> result{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class DeleteAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteAppResponseBodyResult() {}

  explicit DeleteAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~DeleteAppResponseBodyResult() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteAppResponseBodyResult> result{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DeleteAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DeleteAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class GetAppRequest : public Darabonba::Model {
public:
  shared_ptr<bool> detailed{};

  GetAppRequest() {}

  explicit GetAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailed) {
      res["detailed"] = boost::any(*detailed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detailed") != m.end() && !m["detailed"].empty()) {
      detailed = make_shared<bool>(boost::any_cast<bool>(m["detailed"]));
    }
  }


  virtual ~GetAppRequest() = default;
};
class GetAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  GetAppResponseBodyResult() {}

  explicit GetAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["modifiedTime"] = boost::any(*modifiedTime);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("modifiedTime") != m.end() && !m["modifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["modifiedTime"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["ownerId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetAppResponseBodyResult() = default;
};
class GetAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAppResponseBodyResult> result{};

  GetAppResponseBody() {}

  explicit GetAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAppResponseBody() = default;
};
class GetAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppResponseBody> body{};

  GetAppResponse() {}

  explicit GetAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppResponse() = default;
};
class GetAppQuotaResponseBodyResultLimiterInfoLimiters : public Darabonba::Model {
public:
  shared_ptr<bool> immutable{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minValue{};
  shared_ptr<string> type{};

  GetAppQuotaResponseBodyResultLimiterInfoLimiters() {}

  explicit GetAppQuotaResponseBodyResultLimiterInfoLimiters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (immutable) {
      res["immutable"] = boost::any(*immutable);
    }
    if (maxValue) {
      res["maxValue"] = boost::any(*maxValue);
    }
    if (minValue) {
      res["minValue"] = boost::any(*minValue);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("immutable") != m.end() && !m["immutable"].empty()) {
      immutable = make_shared<bool>(boost::any_cast<bool>(m["immutable"]));
    }
    if (m.find("maxValue") != m.end() && !m["maxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["maxValue"]));
    }
    if (m.find("minValue") != m.end() && !m["minValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["minValue"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetAppQuotaResponseBodyResultLimiterInfoLimiters() = default;
};
class GetAppQuotaResponseBodyResultLimiterInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetAppQuotaResponseBodyResultLimiterInfoLimiters>> limiters{};

  GetAppQuotaResponseBodyResultLimiterInfo() {}

  explicit GetAppQuotaResponseBodyResultLimiterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limiters) {
      vector<boost::any> temp1;
      for(auto item1:*limiters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["limiters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limiters") != m.end() && !m["limiters"].empty()) {
      if (typeid(vector<boost::any>) == m["limiters"].type()) {
        vector<GetAppQuotaResponseBodyResultLimiterInfoLimiters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["limiters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppQuotaResponseBodyResultLimiterInfoLimiters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limiters = make_shared<vector<GetAppQuotaResponseBodyResultLimiterInfoLimiters>>(expect1);
      }
    }
  }


  virtual ~GetAppQuotaResponseBodyResultLimiterInfo() = default;
};
class GetAppQuotaResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetAppQuotaResponseBodyResultLimiterInfo> limiterInfo{};
  shared_ptr<map<string, boost::any>> quotaInfo{};

  GetAppQuotaResponseBodyResult() {}

  explicit GetAppQuotaResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limiterInfo) {
      res["limiterInfo"] = limiterInfo ? boost::any(limiterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quotaInfo) {
      res["quotaInfo"] = boost::any(*quotaInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("limiterInfo") != m.end() && !m["limiterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["limiterInfo"].type()) {
        GetAppQuotaResponseBodyResultLimiterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["limiterInfo"]));
        limiterInfo = make_shared<GetAppQuotaResponseBodyResultLimiterInfo>(model1);
      }
    }
    if (m.find("quotaInfo") != m.end() && !m["quotaInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["quotaInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      quotaInfo = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetAppQuotaResponseBodyResult() = default;
};
class GetAppQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAppQuotaResponseBodyResult> result{};

  GetAppQuotaResponseBody() {}

  explicit GetAppQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetAppQuotaResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetAppQuotaResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAppQuotaResponseBody() = default;
};
class GetAppQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppQuotaResponseBody> body{};

  GetAppQuotaResponse() {}

  explicit GetAppQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppQuotaResponse() = default;
};
class GetMonitorDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  GetMonitorDataRequest() {}

  explicit GetMonitorDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~GetMonitorDataRequest() = default;
};
class GetMonitorDataResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> dps{};
  shared_ptr<double> integrity{};
  shared_ptr<long> messageWatermark{};
  shared_ptr<string> metric{};
  shared_ptr<double> summary{};
  shared_ptr<map<string, boost::any>> tags{};

  GetMonitorDataResponseBodyResult() {}

  explicit GetMonitorDataResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dps) {
      res["dps"] = boost::any(*dps);
    }
    if (integrity) {
      res["integrity"] = boost::any(*integrity);
    }
    if (messageWatermark) {
      res["messageWatermark"] = boost::any(*messageWatermark);
    }
    if (metric) {
      res["metric"] = boost::any(*metric);
    }
    if (summary) {
      res["summary"] = boost::any(*summary);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dps") != m.end() && !m["dps"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["dps"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dps = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("integrity") != m.end() && !m["integrity"].empty()) {
      integrity = make_shared<double>(boost::any_cast<double>(m["integrity"]));
    }
    if (m.find("messageWatermark") != m.end() && !m["messageWatermark"].empty()) {
      messageWatermark = make_shared<long>(boost::any_cast<long>(m["messageWatermark"]));
    }
    if (m.find("metric") != m.end() && !m["metric"].empty()) {
      metric = make_shared<string>(boost::any_cast<string>(m["metric"]));
    }
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      summary = make_shared<double>(boost::any_cast<double>(m["summary"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetMonitorDataResponseBodyResult() = default;
};
class GetMonitorDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetMonitorDataResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  GetMonitorDataResponseBody() {}

  explicit GetMonitorDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
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
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<GetMonitorDataResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMonitorDataResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetMonitorDataResponseBodyResult>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetMonitorDataResponseBody() = default;
};
class GetMonitorDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMonitorDataResponseBody> body{};

  GetMonitorDataResponse() {}

  explicit GetMonitorDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMonitorDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMonitorDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetMonitorDataResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> orderType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (orderType) {
      res["orderType"] = boost::any(*orderType);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("orderType") != m.end() && !m["orderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["orderType"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  ListAppsResponseBodyResult() {}

  explicit ListAppsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["modifiedTime"] = boost::any(*modifiedTime);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("modifiedTime") != m.end() && !m["modifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["modifiedTime"]));
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["ownerId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListAppsResponseBodyResult() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAppsResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListAppsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListAppsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListAppsResponseBody() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppsResponseBody> body{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class UpdateAppRequestAuthenticationBasicAuth : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  UpdateAppRequestAuthenticationBasicAuth() {}

  explicit UpdateAppRequestAuthenticationBasicAuth(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAppRequestAuthenticationBasicAuth() = default;
};
class UpdateAppRequestAuthentication : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateAppRequestAuthenticationBasicAuth>> basicAuth{};

  UpdateAppRequestAuthentication() {}

  explicit UpdateAppRequestAuthentication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicAuth) {
      vector<boost::any> temp1;
      for(auto item1:*basicAuth){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["basicAuth"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("basicAuth") != m.end() && !m["basicAuth"].empty()) {
      if (typeid(vector<boost::any>) == m["basicAuth"].type()) {
        vector<UpdateAppRequestAuthenticationBasicAuth> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["basicAuth"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppRequestAuthenticationBasicAuth model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        basicAuth = make_shared<vector<UpdateAppRequestAuthenticationBasicAuth>>(expect1);
      }
    }
  }


  virtual ~UpdateAppRequestAuthentication() = default;
};
class UpdateAppRequestNetworkWhiteIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> ips{};

  UpdateAppRequestNetworkWhiteIpGroup() {}

  explicit UpdateAppRequestNetworkWhiteIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (ips) {
      res["ips"] = boost::any(*ips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("ips") != m.end() && !m["ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateAppRequestNetworkWhiteIpGroup() = default;
};
class UpdateAppRequestNetwork : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<bool> enabled{};
  shared_ptr<long> port{};
  shared_ptr<string> type{};
  shared_ptr<vector<UpdateAppRequestNetworkWhiteIpGroup>> whiteIpGroup{};

  UpdateAppRequestNetwork() {}

  explicit UpdateAppRequestNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (whiteIpGroup) {
      vector<boost::any> temp1;
      for(auto item1:*whiteIpGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["whiteIpGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("whiteIpGroup") != m.end() && !m["whiteIpGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["whiteIpGroup"].type()) {
        vector<UpdateAppRequestNetworkWhiteIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["whiteIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppRequestNetworkWhiteIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whiteIpGroup = make_shared<vector<UpdateAppRequestNetworkWhiteIpGroup>>(expect1);
      }
    }
  }


  virtual ~UpdateAppRequestNetwork() = default;
};
class UpdateAppRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateAppRequestAuthentication> authentication{};
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateAppRequestNetwork>> network{};

  UpdateAppRequest() {}

  explicit UpdateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authentication) {
      res["authentication"] = authentication ? boost::any(authentication->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (network) {
      vector<boost::any> temp1;
      for(auto item1:*network){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["network"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authentication") != m.end() && !m["authentication"].empty()) {
      if (typeid(map<string, boost::any>) == m["authentication"].type()) {
        UpdateAppRequestAuthentication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authentication"]));
        authentication = make_shared<UpdateAppRequestAuthentication>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("network") != m.end() && !m["network"].empty()) {
      if (typeid(vector<boost::any>) == m["network"].type()) {
        vector<UpdateAppRequestNetwork> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["network"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppRequestNetwork model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        network = make_shared<vector<UpdateAppRequestNetwork>>(expect1);
      }
    }
  }


  virtual ~UpdateAppRequest() = default;
};
class UpdateAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  UpdateAppResponseBodyResult() {}

  explicit UpdateAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~UpdateAppResponseBodyResult() = default;
};
class UpdateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateAppResponseBodyResult> result{};

  UpdateAppResponseBody() {}

  explicit UpdateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateAppResponseBody() = default;
};
class UpdateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppResponseBody> body{};

  UpdateAppResponse() {}

  explicit UpdateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppResponse() = default;
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
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<string> appName);
  GetAppResponse getAppWithOptions(shared_ptr<string> appName,
                                   shared_ptr<GetAppRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<string> appName, shared_ptr<GetAppRequest> request);
  GetAppQuotaResponse getAppQuotaWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppQuotaResponse getAppQuota(shared_ptr<string> appName);
  GetMonitorDataResponse getMonitorDataWithOptions(shared_ptr<GetMonitorDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMonitorDataResponse getMonitorData(shared_ptr<GetMonitorDataRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  UpdateAppResponse updateAppWithOptions(shared_ptr<string> appName,
                                         shared_ptr<UpdateAppRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppResponse updateApp(shared_ptr<string> appName, shared_ptr<UpdateAppRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Es-serverless20230627

#endif
