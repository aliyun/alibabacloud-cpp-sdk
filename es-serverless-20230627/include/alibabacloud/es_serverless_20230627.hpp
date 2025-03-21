// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ES-SERVERLESS20230627_H_
#define ALIBABACLOUD_ES-SERVERLESS20230627_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Es-serverless20230627 {
class CancelSpecReviewTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CancelSpecReviewTaskResponseBody() {}

  explicit CancelSpecReviewTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~CancelSpecReviewTaskResponseBody() = default;
};
class CancelSpecReviewTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelSpecReviewTaskResponseBody> body{};

  CancelSpecReviewTaskResponse() {}

  explicit CancelSpecReviewTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelSpecReviewTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelSpecReviewTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelSpecReviewTaskResponse() = default;
};
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
class CreateAppRequestPrivateNetworkWhiteIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> ips{};

  CreateAppRequestPrivateNetworkWhiteIpGroup() {}

  explicit CreateAppRequestPrivateNetworkWhiteIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAppRequestPrivateNetworkWhiteIpGroup() = default;
};
class CreateAppRequestPrivateNetwork : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> pvlEndpointId{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<CreateAppRequestPrivateNetworkWhiteIpGroup>> whiteIpGroup{};

  CreateAppRequestPrivateNetwork() {}

  explicit CreateAppRequestPrivateNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (pvlEndpointId) {
      res["pvlEndpointId"] = boost::any(*pvlEndpointId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
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
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("pvlEndpointId") != m.end() && !m["pvlEndpointId"].empty()) {
      pvlEndpointId = make_shared<string>(boost::any_cast<string>(m["pvlEndpointId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
    if (m.find("whiteIpGroup") != m.end() && !m["whiteIpGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["whiteIpGroup"].type()) {
        vector<CreateAppRequestPrivateNetworkWhiteIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["whiteIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppRequestPrivateNetworkWhiteIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whiteIpGroup = make_shared<vector<CreateAppRequestPrivateNetworkWhiteIpGroup>>(expect1);
      }
    }
  }


  virtual ~CreateAppRequestPrivateNetwork() = default;
};
class CreateAppRequestQuotaInfo : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<long> cu{};
  shared_ptr<long> storage{};

  CreateAppRequestQuotaInfo() {}

  explicit CreateAppRequestQuotaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["appType"] = boost::any(*appType);
    }
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (storage) {
      res["storage"] = boost::any(*storage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appType") != m.end() && !m["appType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["appType"]));
    }
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      storage = make_shared<long>(boost::any_cast<long>(m["storage"]));
    }
  }


  virtual ~CreateAppRequestQuotaInfo() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<CreateAppRequestAuthentication> authentication{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> description{};
  shared_ptr<vector<CreateAppRequestNetwork>> network{};
  shared_ptr<vector<CreateAppRequestPrivateNetwork>> privateNetwork{};
  shared_ptr<CreateAppRequestQuotaInfo> quotaInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> version{};
  shared_ptr<bool> dryRun{};

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
    if (privateNetwork) {
      vector<boost::any> temp1;
      for(auto item1:*privateNetwork){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["privateNetwork"] = boost::any(temp1);
    }
    if (quotaInfo) {
      res["quotaInfo"] = quotaInfo ? boost::any(quotaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
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
    if (m.find("privateNetwork") != m.end() && !m["privateNetwork"].empty()) {
      if (typeid(vector<boost::any>) == m["privateNetwork"].type()) {
        vector<CreateAppRequestPrivateNetwork> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["privateNetwork"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppRequestPrivateNetwork model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateNetwork = make_shared<vector<CreateAppRequestPrivateNetwork>>(expect1);
      }
    }
    if (m.find("quotaInfo") != m.end() && !m["quotaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["quotaInfo"].type()) {
        CreateAppRequestQuotaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quotaInfo"]));
        quotaInfo = make_shared<CreateAppRequestQuotaInfo>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateEndpointRequestEndpointZones : public Darabonba::Model {
public:
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  CreateEndpointRequestEndpointZones() {}

  explicit CreateEndpointRequestEndpointZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vswitchId) {
      res["vswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vswitchId") != m.end() && !m["vswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["vswitchId"]));
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~CreateEndpointRequestEndpointZones() = default;
};
class CreateEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateEndpointRequestEndpointZones>> endpointZones{};
  shared_ptr<string> name{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> type{};

  CreateEndpointRequest() {}

  explicit CreateEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointZones) {
      vector<boost::any> temp1;
      for(auto item1:*endpointZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["endpointZones"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpointZones") != m.end() && !m["endpointZones"].empty()) {
      if (typeid(vector<boost::any>) == m["endpointZones"].type()) {
        vector<CreateEndpointRequestEndpointZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["endpointZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEndpointRequestEndpointZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointZones = make_shared<vector<CreateEndpointRequestEndpointZones>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateEndpointRequest() = default;
};
class CreateEndpointResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};

  CreateEndpointResponseBodyResult() {}

  explicit CreateEndpointResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["endpointId"] = boost::any(*endpointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpointId") != m.end() && !m["endpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["endpointId"]));
    }
  }


  virtual ~CreateEndpointResponseBodyResult() = default;
};
class CreateEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateEndpointResponseBodyResult> result{};

  CreateEndpointResponseBody() {}

  explicit CreateEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEndpointResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateEndpointResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateEndpointResponseBody() = default;
};
class CreateEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEndpointResponseBody> body{};

  CreateEndpointResponse() {}

  explicit CreateEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEndpointResponse() = default;
};
class CreateSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> indices{};
  shared_ptr<string> snapshot{};
  shared_ptr<bool> dryRun{};

  CreateSnapshotRequest() {}

  explicit CreateSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indices) {
      res["indices"] = boost::any(*indices);
    }
    if (snapshot) {
      res["snapshot"] = boost::any(*snapshot);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indices") != m.end() && !m["indices"].empty()) {
      indices = make_shared<string>(boost::any_cast<string>(m["indices"]));
    }
    if (m.find("snapshot") != m.end() && !m["snapshot"].empty()) {
      snapshot = make_shared<string>(boost::any_cast<string>(m["snapshot"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateSnapshotRequest() = default;
};
class CreateSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  CreateSnapshotResponseBody() {}

  explicit CreateSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~CreateSnapshotResponseBody() = default;
};
class CreateSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSnapshotResponseBody> body{};

  CreateSnapshotResponse() {}

  explicit CreateSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSnapshotResponse() = default;
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteDictRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DeleteDictRequest() {}

  explicit DeleteDictRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DeleteDictRequest() = default;
};
class DeleteDictResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteDictResponseBody() {}

  explicit DeleteDictResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DeleteDictResponseBody() = default;
};
class DeleteDictResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDictResponseBody> body{};

  DeleteDictResponse() {}

  explicit DeleteDictResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDictResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDictResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDictResponse() = default;
};
class DeleteEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteEndpointResponseBody() {}

  explicit DeleteEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DeleteEndpointResponseBody() = default;
};
class DeleteEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEndpointResponseBody> body{};

  DeleteEndpointResponse() {}

  explicit DeleteEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEndpointResponse() = default;
};
class DeleteSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteSnapshotResponseBody() {}

  explicit DeleteSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~DeleteSnapshotResponseBody() = default;
};
class DeleteSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSnapshotResponseBody> body{};

  DeleteSnapshotResponse() {}

  explicit DeleteSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSnapshotResponse() = default;
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
class GetAppResponseBodyResultNetworkWhiteIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> ips{};

  GetAppResponseBodyResultNetworkWhiteIpGroup() {}

  explicit GetAppResponseBodyResultNetworkWhiteIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAppResponseBodyResultNetworkWhiteIpGroup() = default;
};
class GetAppResponseBodyResultNetwork : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<bool> enabled{};
  shared_ptr<long> port{};
  shared_ptr<string> type{};
  shared_ptr<vector<GetAppResponseBodyResultNetworkWhiteIpGroup>> whiteIpGroup{};

  GetAppResponseBodyResultNetwork() {}

  explicit GetAppResponseBodyResultNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<GetAppResponseBodyResultNetworkWhiteIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["whiteIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyResultNetworkWhiteIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whiteIpGroup = make_shared<vector<GetAppResponseBodyResultNetworkWhiteIpGroup>>(expect1);
      }
    }
  }


  virtual ~GetAppResponseBodyResultNetwork() = default;
};
class GetAppResponseBodyResultPrivateNetworkWhiteIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> ips{};

  GetAppResponseBodyResultPrivateNetworkWhiteIpGroup() {}

  explicit GetAppResponseBodyResultPrivateNetworkWhiteIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAppResponseBodyResultPrivateNetworkWhiteIpGroup() = default;
};
class GetAppResponseBodyResultPrivateNetwork : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<bool> enabled{};
  shared_ptr<long> port{};
  shared_ptr<string> pvlEndpointId{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<GetAppResponseBodyResultPrivateNetworkWhiteIpGroup>> whiteIpGroup{};

  GetAppResponseBodyResultPrivateNetwork() {}

  explicit GetAppResponseBodyResultPrivateNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pvlEndpointId) {
      res["pvlEndpointId"] = boost::any(*pvlEndpointId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
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
    if (m.find("pvlEndpointId") != m.end() && !m["pvlEndpointId"].empty()) {
      pvlEndpointId = make_shared<string>(boost::any_cast<string>(m["pvlEndpointId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
    if (m.find("whiteIpGroup") != m.end() && !m["whiteIpGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["whiteIpGroup"].type()) {
        vector<GetAppResponseBodyResultPrivateNetworkWhiteIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["whiteIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyResultPrivateNetworkWhiteIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whiteIpGroup = make_shared<vector<GetAppResponseBodyResultPrivateNetworkWhiteIpGroup>>(expect1);
      }
    }
  }


  virtual ~GetAppResponseBodyResultPrivateNetwork() = default;
};
class GetAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<vector<GetAppResponseBodyResultNetwork>> network{};
  shared_ptr<string> ownerId{};
  shared_ptr<vector<GetAppResponseBodyResultPrivateNetwork>> privateNetwork{};
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
    if (appType) {
      res["appType"] = boost::any(*appType);
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
    if (network) {
      vector<boost::any> temp1;
      for(auto item1:*network){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["network"] = boost::any(temp1);
    }
    if (ownerId) {
      res["ownerId"] = boost::any(*ownerId);
    }
    if (privateNetwork) {
      vector<boost::any> temp1;
      for(auto item1:*privateNetwork){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["privateNetwork"] = boost::any(temp1);
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
    if (m.find("appType") != m.end() && !m["appType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["appType"]));
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
    if (m.find("network") != m.end() && !m["network"].empty()) {
      if (typeid(vector<boost::any>) == m["network"].type()) {
        vector<GetAppResponseBodyResultNetwork> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["network"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyResultNetwork model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        network = make_shared<vector<GetAppResponseBodyResultNetwork>>(expect1);
      }
    }
    if (m.find("ownerId") != m.end() && !m["ownerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["ownerId"]));
    }
    if (m.find("privateNetwork") != m.end() && !m["privateNetwork"].empty()) {
      if (typeid(vector<boost::any>) == m["privateNetwork"].type()) {
        vector<GetAppResponseBodyResultPrivateNetwork> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["privateNetwork"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyResultPrivateNetwork model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateNetwork = make_shared<vector<GetAppResponseBodyResultPrivateNetwork>>(expect1);
      }
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
        GetMonitorDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMonitorDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetMonitorDataResponse() = default;
};
class GetSnapshotSettingResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> quartzRegex{};

  GetSnapshotSettingResponseBodyResult() {}

  explicit GetSnapshotSettingResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (quartzRegex) {
      res["quartzRegex"] = boost::any(*quartzRegex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("quartzRegex") != m.end() && !m["quartzRegex"].empty()) {
      quartzRegex = make_shared<string>(boost::any_cast<string>(m["quartzRegex"]));
    }
  }


  virtual ~GetSnapshotSettingResponseBodyResult() = default;
};
class GetSnapshotSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSnapshotSettingResponseBodyResult> result{};

  GetSnapshotSettingResponseBody() {}

  explicit GetSnapshotSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSnapshotSettingResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetSnapshotSettingResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetSnapshotSettingResponseBody() = default;
};
class GetSnapshotSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSnapshotSettingResponseBody> body{};

  GetSnapshotSettingResponse() {}

  explicit GetSnapshotSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSnapshotSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSnapshotSettingResponseBody>(model1);
      }
    }
  }


  virtual ~GetSnapshotSettingResponse() = default;
};
class GetSpecReviewTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> appName{};
  shared_ptr<map<string, boost::any>> applyLimiter{};
  shared_ptr<map<string, boost::any>> applyQuota{};
  shared_ptr<string> applyReason{};
  shared_ptr<map<string, boost::any>> effectiveLimiter{};
  shared_ptr<map<string, boost::any>> effectiveQuota{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, boost::any>> oldLimiter{};
  shared_ptr<map<string, boost::any>> oldQuota{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetSpecReviewTaskResponseBodyResult() {}

  explicit GetSpecReviewTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (applyLimiter) {
      res["applyLimiter"] = boost::any(*applyLimiter);
    }
    if (applyQuota) {
      res["applyQuota"] = boost::any(*applyQuota);
    }
    if (applyReason) {
      res["applyReason"] = boost::any(*applyReason);
    }
    if (effectiveLimiter) {
      res["effectiveLimiter"] = boost::any(*effectiveLimiter);
    }
    if (effectiveQuota) {
      res["effectiveQuota"] = boost::any(*effectiveQuota);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (oldLimiter) {
      res["oldLimiter"] = boost::any(*oldLimiter);
    }
    if (oldQuota) {
      res["oldQuota"] = boost::any(*oldQuota);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("applyLimiter") != m.end() && !m["applyLimiter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["applyLimiter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      applyLimiter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("applyQuota") != m.end() && !m["applyQuota"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["applyQuota"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      applyQuota = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("applyReason") != m.end() && !m["applyReason"].empty()) {
      applyReason = make_shared<string>(boost::any_cast<string>(m["applyReason"]));
    }
    if (m.find("effectiveLimiter") != m.end() && !m["effectiveLimiter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["effectiveLimiter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      effectiveLimiter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("effectiveQuota") != m.end() && !m["effectiveQuota"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["effectiveQuota"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      effectiveQuota = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("oldLimiter") != m.end() && !m["oldLimiter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["oldLimiter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      oldLimiter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("oldQuota") != m.end() && !m["oldQuota"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["oldQuota"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      oldQuota = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetSpecReviewTaskResponseBodyResult() = default;
};
class GetSpecReviewTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSpecReviewTaskResponseBodyResult> result{};

  GetSpecReviewTaskResponseBody() {}

  explicit GetSpecReviewTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSpecReviewTaskResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetSpecReviewTaskResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetSpecReviewTaskResponseBody() = default;
};
class GetSpecReviewTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSpecReviewTaskResponseBody> body{};

  GetSpecReviewTaskResponse() {}

  explicit GetSpecReviewTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSpecReviewTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSpecReviewTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetSpecReviewTaskResponse() = default;
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
  shared_ptr<string> appType{};
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
    if (appType) {
      res["appType"] = boost::any(*appType);
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
    if (m.find("appType") != m.end() && !m["appType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["appType"]));
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListDictsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDictsRequest() {}

  explicit ListDictsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListDictsRequest() = default;
};
class ListDictsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> type{};

  ListDictsResponseBodyResult() {}

  explicit ListDictsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadUrl) {
      res["downloadUrl"] = boost::any(*downloadUrl);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("downloadUrl") != m.end() && !m["downloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["downloadUrl"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListDictsResponseBodyResult() = default;
};
class ListDictsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDictsResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListDictsResponseBody() {}

  explicit ListDictsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListDictsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDictsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDictsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListDictsResponseBody() = default;
};
class ListDictsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDictsResponseBody> body{};

  ListDictsResponse() {}

  explicit ListDictsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDictsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDictsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDictsResponse() = default;
};
class ListEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};

  ListEndpointsRequest() {}

  explicit ListEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
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
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ListEndpointsRequest() = default;
};
class ListEndpointsResponseBodyResultEndpointZones : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  ListEndpointsResponseBodyResultEndpointZones() {}

  explicit ListEndpointsResponseBodyResultEndpointZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListEndpointsResponseBodyResultEndpointZones() = default;
};
class ListEndpointsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> connectionStatus{};
  shared_ptr<long> created{};
  shared_ptr<string> domain{};
  shared_ptr<string> endpointId{};
  shared_ptr<vector<ListEndpointsResponseBodyResultEndpointZones>> endpointZones{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceId{};
  shared_ptr<vector<string>> securityGroupIds{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};
  shared_ptr<string> vpcId{};

  ListEndpointsResponseBodyResult() {}

  explicit ListEndpointsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStatus) {
      res["connectionStatus"] = boost::any(*connectionStatus);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (endpointId) {
      res["endpointId"] = boost::any(*endpointId);
    }
    if (endpointZones) {
      vector<boost::any> temp1;
      for(auto item1:*endpointZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["endpointZones"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (securityGroupIds) {
      res["securityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("connectionStatus") != m.end() && !m["connectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["connectionStatus"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("endpointId") != m.end() && !m["endpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["endpointId"]));
    }
    if (m.find("endpointZones") != m.end() && !m["endpointZones"].empty()) {
      if (typeid(vector<boost::any>) == m["endpointZones"].type()) {
        vector<ListEndpointsResponseBodyResultEndpointZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["endpointZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEndpointsResponseBodyResultEndpointZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointZones = make_shared<vector<ListEndpointsResponseBodyResultEndpointZones>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("securityGroupIds") != m.end() && !m["securityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["securityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["securityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ListEndpointsResponseBodyResult() = default;
};
class ListEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListEndpointsResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListEndpointsResponseBody() {}

  explicit ListEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListEndpointsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEndpointsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListEndpointsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListEndpointsResponseBody() = default;
};
class ListEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEndpointsResponseBody> body{};

  ListEndpointsResponse() {}

  explicit ListEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEndpointsResponse() = default;
};
class ListIndicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<boost::any>> result{};

  ListIndicesResponseBody() {}

  explicit ListIndicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      result = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~ListIndicesResponseBody() = default;
};
class ListIndicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIndicesResponseBody> body{};

  ListIndicesResponse() {}

  explicit ListIndicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndicesResponse() = default;
};
class ListSnapshotRepositoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};

  ListSnapshotRepositoriesResponseBody() {}

  explicit ListSnapshotRepositoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListSnapshotRepositoriesResponseBody() = default;
};
class ListSnapshotRepositoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSnapshotRepositoriesResponseBody> body{};

  ListSnapshotRepositoriesResponse() {}

  explicit ListSnapshotRepositoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSnapshotRepositoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSnapshotRepositoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSnapshotRepositoriesResponse() = default;
};
class ListSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repository{};
  shared_ptr<string> snapshot{};

  ListSnapshotsRequest() {}

  explicit ListSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (repository) {
      res["repository"] = boost::any(*repository);
    }
    if (snapshot) {
      res["snapshot"] = boost::any(*snapshot);
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
    if (m.find("repository") != m.end() && !m["repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["repository"]));
    }
    if (m.find("snapshot") != m.end() && !m["snapshot"].empty()) {
      snapshot = make_shared<string>(boost::any_cast<string>(m["snapshot"]));
    }
  }


  virtual ~ListSnapshotsRequest() = default;
};
class ListSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};
  shared_ptr<long> totalCount{};

  ListSnapshotsResponseBody() {}

  explicit ListSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
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
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListSnapshotsResponseBody() = default;
};
class ListSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSnapshotsResponseBody> body{};

  ListSnapshotsResponse() {}

  explicit ListSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSnapshotsResponse() = default;
};
class ListSpecReviewTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListSpecReviewTasksRequest() {}

  explicit ListSpecReviewTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListSpecReviewTasksRequest() = default;
};
class ListSpecReviewTasksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> appName{};
  shared_ptr<string> applyReason{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListSpecReviewTasksResponseBodyResult() {}

  explicit ListSpecReviewTasksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (applyReason) {
      res["applyReason"] = boost::any(*applyReason);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("applyReason") != m.end() && !m["applyReason"].empty()) {
      applyReason = make_shared<string>(boost::any_cast<string>(m["applyReason"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListSpecReviewTasksResponseBodyResult() = default;
};
class ListSpecReviewTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSpecReviewTasksResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListSpecReviewTasksResponseBody() {}

  explicit ListSpecReviewTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListSpecReviewTasksResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpecReviewTasksResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListSpecReviewTasksResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListSpecReviewTasksResponseBody() = default;
};
class ListSpecReviewTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSpecReviewTasksResponseBody> body{};

  ListSpecReviewTasksResponse() {}

  explicit ListSpecReviewTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSpecReviewTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSpecReviewTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListSpecReviewTasksResponse() = default;
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
class UpdateAppRequestLimiterInfoLimiters : public Darabonba::Model {
public:
  shared_ptr<long> maxValue{};
  shared_ptr<long> minValue{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> values{};

  UpdateAppRequestLimiterInfoLimiters() {}

  explicit UpdateAppRequestLimiterInfoLimiters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxValue) {
      res["maxValue"] = boost::any(*maxValue);
    }
    if (minValue) {
      res["minValue"] = boost::any(*minValue);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxValue") != m.end() && !m["maxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["maxValue"]));
    }
    if (m.find("minValue") != m.end() && !m["minValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["minValue"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateAppRequestLimiterInfoLimiters() = default;
};
class UpdateAppRequestLimiterInfo : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateAppRequestLimiterInfoLimiters>> limiters{};

  UpdateAppRequestLimiterInfo() {}

  explicit UpdateAppRequestLimiterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<UpdateAppRequestLimiterInfoLimiters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["limiters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppRequestLimiterInfoLimiters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limiters = make_shared<vector<UpdateAppRequestLimiterInfoLimiters>>(expect1);
      }
    }
  }


  virtual ~UpdateAppRequestLimiterInfo() = default;
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
class UpdateAppRequestPrivateNetworkWhiteIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> ips{};

  UpdateAppRequestPrivateNetworkWhiteIpGroup() {}

  explicit UpdateAppRequestPrivateNetworkWhiteIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAppRequestPrivateNetworkWhiteIpGroup() = default;
};
class UpdateAppRequestPrivateNetwork : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> pvlEndpointId{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<UpdateAppRequestPrivateNetworkWhiteIpGroup>> whiteIpGroup{};

  UpdateAppRequestPrivateNetwork() {}

  explicit UpdateAppRequestPrivateNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (pvlEndpointId) {
      res["pvlEndpointId"] = boost::any(*pvlEndpointId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
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
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("pvlEndpointId") != m.end() && !m["pvlEndpointId"].empty()) {
      pvlEndpointId = make_shared<string>(boost::any_cast<string>(m["pvlEndpointId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
    if (m.find("whiteIpGroup") != m.end() && !m["whiteIpGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["whiteIpGroup"].type()) {
        vector<UpdateAppRequestPrivateNetworkWhiteIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["whiteIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppRequestPrivateNetworkWhiteIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whiteIpGroup = make_shared<vector<UpdateAppRequestPrivateNetworkWhiteIpGroup>>(expect1);
      }
    }
  }


  virtual ~UpdateAppRequestPrivateNetwork() = default;
};
class UpdateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyReason{};
  shared_ptr<UpdateAppRequestAuthentication> authentication{};
  shared_ptr<string> contactInfo{};
  shared_ptr<string> description{};
  shared_ptr<UpdateAppRequestLimiterInfo> limiterInfo{};
  shared_ptr<vector<UpdateAppRequestNetwork>> network{};
  shared_ptr<vector<UpdateAppRequestPrivateNetwork>> privateNetwork{};

  UpdateAppRequest() {}

  explicit UpdateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyReason) {
      res["applyReason"] = boost::any(*applyReason);
    }
    if (authentication) {
      res["authentication"] = authentication ? boost::any(authentication->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contactInfo) {
      res["contactInfo"] = boost::any(*contactInfo);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (limiterInfo) {
      res["limiterInfo"] = limiterInfo ? boost::any(limiterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      vector<boost::any> temp1;
      for(auto item1:*network){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["network"] = boost::any(temp1);
    }
    if (privateNetwork) {
      vector<boost::any> temp1;
      for(auto item1:*privateNetwork){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["privateNetwork"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyReason") != m.end() && !m["applyReason"].empty()) {
      applyReason = make_shared<string>(boost::any_cast<string>(m["applyReason"]));
    }
    if (m.find("authentication") != m.end() && !m["authentication"].empty()) {
      if (typeid(map<string, boost::any>) == m["authentication"].type()) {
        UpdateAppRequestAuthentication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authentication"]));
        authentication = make_shared<UpdateAppRequestAuthentication>(model1);
      }
    }
    if (m.find("contactInfo") != m.end() && !m["contactInfo"].empty()) {
      contactInfo = make_shared<string>(boost::any_cast<string>(m["contactInfo"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("limiterInfo") != m.end() && !m["limiterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["limiterInfo"].type()) {
        UpdateAppRequestLimiterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["limiterInfo"]));
        limiterInfo = make_shared<UpdateAppRequestLimiterInfo>(model1);
      }
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
    if (m.find("privateNetwork") != m.end() && !m["privateNetwork"].empty()) {
      if (typeid(vector<boost::any>) == m["privateNetwork"].type()) {
        vector<UpdateAppRequestPrivateNetwork> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["privateNetwork"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppRequestPrivateNetwork model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateNetwork = make_shared<vector<UpdateAppRequestPrivateNetwork>>(expect1);
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
        UpdateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppResponse() = default;
};
class UpdateDictRequestFilesOssObject : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> key{};

  UpdateDictRequestFilesOssObject() {}

  explicit UpdateDictRequestFilesOssObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~UpdateDictRequestFilesOssObject() = default;
};
class UpdateDictRequestFiles : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<UpdateDictRequestFilesOssObject> ossObject{};

  UpdateDictRequestFiles() {}

  explicit UpdateDictRequestFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ossObject) {
      res["ossObject"] = ossObject ? boost::any(ossObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ossObject") != m.end() && !m["ossObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ossObject"].type()) {
        UpdateDictRequestFilesOssObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ossObject"]));
        ossObject = make_shared<UpdateDictRequestFilesOssObject>(model1);
      }
    }
  }


  virtual ~UpdateDictRequestFiles() = default;
};
class UpdateDictRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowCover{};
  shared_ptr<vector<UpdateDictRequestFiles>> files{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> type{};
  shared_ptr<bool> dryRun{};

  UpdateDictRequest() {}

  explicit UpdateDictRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCover) {
      res["allowCover"] = boost::any(*allowCover);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["files"] = boost::any(temp1);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowCover") != m.end() && !m["allowCover"].empty()) {
      allowCover = make_shared<bool>(boost::any_cast<bool>(m["allowCover"]));
    }
    if (m.find("files") != m.end() && !m["files"].empty()) {
      if (typeid(vector<boost::any>) == m["files"].type()) {
        vector<UpdateDictRequestFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDictRequestFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<UpdateDictRequestFiles>>(expect1);
      }
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~UpdateDictRequest() = default;
};
class UpdateDictResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  UpdateDictResponseBody() {}

  explicit UpdateDictResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~UpdateDictResponseBody() = default;
};
class UpdateDictResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDictResponseBody> body{};

  UpdateDictResponse() {}

  explicit UpdateDictResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDictResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDictResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDictResponse() = default;
};
class UpdateEndpointRequestEndpointZones : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  UpdateEndpointRequestEndpointZones() {}

  explicit UpdateEndpointRequestEndpointZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEndpointRequestEndpointZones() = default;
};
class UpdateEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateEndpointRequestEndpointZones>> endpointZones{};
  shared_ptr<string> name{};

  UpdateEndpointRequest() {}

  explicit UpdateEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointZones) {
      vector<boost::any> temp1;
      for(auto item1:*endpointZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["endpointZones"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpointZones") != m.end() && !m["endpointZones"].empty()) {
      if (typeid(vector<boost::any>) == m["endpointZones"].type()) {
        vector<UpdateEndpointRequestEndpointZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["endpointZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEndpointRequestEndpointZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointZones = make_shared<vector<UpdateEndpointRequestEndpointZones>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdateEndpointRequest() = default;
};
class UpdateEndpointResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};

  UpdateEndpointResponseBodyResult() {}

  explicit UpdateEndpointResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["endpointId"] = boost::any(*endpointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpointId") != m.end() && !m["endpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["endpointId"]));
    }
  }


  virtual ~UpdateEndpointResponseBodyResult() = default;
};
class UpdateEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateEndpointResponseBodyResult> result{};

  UpdateEndpointResponseBody() {}

  explicit UpdateEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEndpointResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateEndpointResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateEndpointResponseBody() = default;
};
class UpdateEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEndpointResponseBody> body{};

  UpdateEndpointResponse() {}

  explicit UpdateEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEndpointResponse() = default;
};
class UpdateSnapshotSettingRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> quartzRegex{};

  UpdateSnapshotSettingRequest() {}

  explicit UpdateSnapshotSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (quartzRegex) {
      res["quartzRegex"] = boost::any(*quartzRegex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("quartzRegex") != m.end() && !m["quartzRegex"].empty()) {
      quartzRegex = make_shared<string>(boost::any_cast<string>(m["quartzRegex"]));
    }
  }


  virtual ~UpdateSnapshotSettingRequest() = default;
};
class UpdateSnapshotSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  UpdateSnapshotSettingResponseBody() {}

  explicit UpdateSnapshotSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateSnapshotSettingResponseBody() = default;
};
class UpdateSnapshotSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSnapshotSettingResponseBody> body{};

  UpdateSnapshotSettingResponse() {}

  explicit UpdateSnapshotSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSnapshotSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSnapshotSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSnapshotSettingResponse() = default;
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
  CancelSpecReviewTaskResponse cancelSpecReviewTaskWithOptions(shared_ptr<string> appName,
                                                               shared_ptr<string> taskId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelSpecReviewTaskResponse cancelSpecReviewTask(shared_ptr<string> appName, shared_ptr<string> taskId);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateEndpointResponse createEndpointWithOptions(shared_ptr<CreateEndpointRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEndpointResponse createEndpoint(shared_ptr<CreateEndpointRequest> request);
  CreateSnapshotResponse createSnapshotWithOptions(shared_ptr<string> appName,
                                                   shared_ptr<string> repository,
                                                   shared_ptr<CreateSnapshotRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSnapshotResponse createSnapshot(shared_ptr<string> appName, shared_ptr<string> repository, shared_ptr<CreateSnapshotRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<string> appName);
  DeleteDictResponse deleteDictWithOptions(shared_ptr<string> appName,
                                           shared_ptr<DeleteDictRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDictResponse deleteDict(shared_ptr<string> appName, shared_ptr<DeleteDictRequest> request);
  DeleteEndpointResponse deleteEndpointWithOptions(shared_ptr<string> endpointId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEndpointResponse deleteEndpoint(shared_ptr<string> endpointId);
  DeleteSnapshotResponse deleteSnapshotWithOptions(shared_ptr<string> appName,
                                                   shared_ptr<string> repository,
                                                   shared_ptr<string> snapshot,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSnapshotResponse deleteSnapshot(shared_ptr<string> appName, shared_ptr<string> repository, shared_ptr<string> snapshot);
  GetAppResponse getAppWithOptions(shared_ptr<string> appName,
                                   shared_ptr<GetAppRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<string> appName, shared_ptr<GetAppRequest> request);
  GetAppQuotaResponse getAppQuotaWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppQuotaResponse getAppQuota(shared_ptr<string> appName);
  GetMonitorDataResponse getMonitorDataWithOptions(shared_ptr<GetMonitorDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMonitorDataResponse getMonitorData(shared_ptr<GetMonitorDataRequest> request);
  GetSnapshotSettingResponse getSnapshotSettingWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSnapshotSettingResponse getSnapshotSetting(shared_ptr<string> appName);
  GetSpecReviewTaskResponse getSpecReviewTaskWithOptions(shared_ptr<string> appName,
                                                         shared_ptr<string> taskId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSpecReviewTaskResponse getSpecReviewTask(shared_ptr<string> appName, shared_ptr<string> taskId);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListDictsResponse listDictsWithOptions(shared_ptr<string> appName,
                                         shared_ptr<ListDictsRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDictsResponse listDicts(shared_ptr<string> appName, shared_ptr<ListDictsRequest> request);
  ListEndpointsResponse listEndpointsWithOptions(shared_ptr<ListEndpointsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEndpointsResponse listEndpoints(shared_ptr<ListEndpointsRequest> request);
  ListIndicesResponse listIndicesWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndicesResponse listIndices(shared_ptr<string> appName);
  ListSnapshotRepositoriesResponse listSnapshotRepositoriesWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSnapshotRepositoriesResponse listSnapshotRepositories(shared_ptr<string> appName);
  ListSnapshotsResponse listSnapshotsWithOptions(shared_ptr<string> appName,
                                                 shared_ptr<ListSnapshotsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSnapshotsResponse listSnapshots(shared_ptr<string> appName, shared_ptr<ListSnapshotsRequest> request);
  ListSpecReviewTasksResponse listSpecReviewTasksWithOptions(shared_ptr<string> appName,
                                                             shared_ptr<ListSpecReviewTasksRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSpecReviewTasksResponse listSpecReviewTasks(shared_ptr<string> appName, shared_ptr<ListSpecReviewTasksRequest> request);
  UpdateAppResponse updateAppWithOptions(shared_ptr<string> appName,
                                         shared_ptr<UpdateAppRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppResponse updateApp(shared_ptr<string> appName, shared_ptr<UpdateAppRequest> request);
  UpdateDictResponse updateDictWithOptions(shared_ptr<string> appName,
                                           shared_ptr<UpdateDictRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDictResponse updateDict(shared_ptr<string> appName, shared_ptr<UpdateDictRequest> request);
  UpdateEndpointResponse updateEndpointWithOptions(shared_ptr<string> endpointId,
                                                   shared_ptr<UpdateEndpointRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEndpointResponse updateEndpoint(shared_ptr<string> endpointId, shared_ptr<UpdateEndpointRequest> request);
  UpdateSnapshotSettingResponse updateSnapshotSettingWithOptions(shared_ptr<string> appName,
                                                                 shared_ptr<UpdateSnapshotSettingRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSnapshotSettingResponse updateSnapshotSetting(shared_ptr<string> appName, shared_ptr<UpdateSnapshotSettingRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Es-serverless20230627

#endif
