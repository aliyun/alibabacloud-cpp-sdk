// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DDOSCOO20171228_H_
#define ALIBABACLOUD_DDOSCOO20171228_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ddoscoo20171228 {
class AddLayer7CCRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> act{};
  shared_ptr<long> count{};
  shared_ptr<string> domain{};
  shared_ptr<long> interval{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> ttl{};
  shared_ptr<string> uri{};

  AddLayer7CCRuleRequest() {}

  explicit AddLayer7CCRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (act) {
      res["Act"] = boost::any(*act);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Act") != m.end() && !m["Act"].empty()) {
      act = make_shared<string>(boost::any_cast<string>(m["Act"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~AddLayer7CCRuleRequest() = default;
};
class AddLayer7CCRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddLayer7CCRuleResponseBody() {}

  explicit AddLayer7CCRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddLayer7CCRuleResponseBody() = default;
};
class AddLayer7CCRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddLayer7CCRuleResponseBody> body{};

  AddLayer7CCRuleResponse() {}

  explicit AddLayer7CCRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddLayer7CCRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddLayer7CCRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AddLayer7CCRuleResponse() = default;
};
class CloseDomainSlsConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  CloseDomainSlsConfigRequest() {}

  explicit CloseDomainSlsConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~CloseDomainSlsConfigRequest() = default;
};
class CloseDomainSlsConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CloseDomainSlsConfigResponseBody() {}

  explicit CloseDomainSlsConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseDomainSlsConfigResponseBody() = default;
};
class CloseDomainSlsConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseDomainSlsConfigResponseBody> body{};

  CloseDomainSlsConfigResponse() {}

  explicit CloseDomainSlsConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseDomainSlsConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseDomainSlsConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CloseDomainSlsConfigResponse() = default;
};
class ConfigHealthCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> forwardProtocol{};
  shared_ptr<long> frontendPort{};
  shared_ptr<string> healthCheck{};
  shared_ptr<string> instanceId{};

  ConfigHealthCheckRequest() {}

  explicit ConfigHealthCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardProtocol) {
      res["ForwardProtocol"] = boost::any(*forwardProtocol);
    }
    if (frontendPort) {
      res["FrontendPort"] = boost::any(*frontendPort);
    }
    if (healthCheck) {
      res["HealthCheck"] = boost::any(*healthCheck);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardProtocol") != m.end() && !m["ForwardProtocol"].empty()) {
      forwardProtocol = make_shared<string>(boost::any_cast<string>(m["ForwardProtocol"]));
    }
    if (m.find("FrontendPort") != m.end() && !m["FrontendPort"].empty()) {
      frontendPort = make_shared<long>(boost::any_cast<long>(m["FrontendPort"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      healthCheck = make_shared<string>(boost::any_cast<string>(m["HealthCheck"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ConfigHealthCheckRequest() = default;
};
class ConfigHealthCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigHealthCheckResponseBody() {}

  explicit ConfigHealthCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigHealthCheckResponseBody() = default;
};
class ConfigHealthCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigHealthCheckResponseBody> body{};

  ConfigHealthCheckResponse() {}

  explicit ConfigHealthCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigHealthCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigHealthCheckResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigHealthCheckResponse() = default;
};
class ConfigLayer4RuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> listeners{};
  shared_ptr<long> proxyEnable{};

  ConfigLayer4RuleRequest() {}

  explicit ConfigLayer4RuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = boost::any(*listeners);
    }
    if (proxyEnable) {
      res["ProxyEnable"] = boost::any(*proxyEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      listeners = make_shared<string>(boost::any_cast<string>(m["Listeners"]));
    }
    if (m.find("ProxyEnable") != m.end() && !m["ProxyEnable"].empty()) {
      proxyEnable = make_shared<long>(boost::any_cast<long>(m["ProxyEnable"]));
    }
  }


  virtual ~ConfigLayer4RuleRequest() = default;
};
class ConfigLayer4RuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigLayer4RuleResponseBody() {}

  explicit ConfigLayer4RuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigLayer4RuleResponseBody() = default;
};
class ConfigLayer4RuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigLayer4RuleResponseBody> body{};

  ConfigLayer4RuleResponse() {}

  explicit ConfigLayer4RuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigLayer4RuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigLayer4RuleResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigLayer4RuleResponse() = default;
};
class ConfigLayer4RuleAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> forwardProtocol{};
  shared_ptr<long> frontendPort{};
  shared_ptr<string> instanceId{};

  ConfigLayer4RuleAttributeRequest() {}

  explicit ConfigLayer4RuleAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (forwardProtocol) {
      res["ForwardProtocol"] = boost::any(*forwardProtocol);
    }
    if (frontendPort) {
      res["FrontendPort"] = boost::any(*frontendPort);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ForwardProtocol") != m.end() && !m["ForwardProtocol"].empty()) {
      forwardProtocol = make_shared<string>(boost::any_cast<string>(m["ForwardProtocol"]));
    }
    if (m.find("FrontendPort") != m.end() && !m["FrontendPort"].empty()) {
      frontendPort = make_shared<long>(boost::any_cast<long>(m["FrontendPort"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ConfigLayer4RuleAttributeRequest() = default;
};
class ConfigLayer4RuleAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigLayer4RuleAttributeResponseBody() {}

  explicit ConfigLayer4RuleAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigLayer4RuleAttributeResponseBody() = default;
};
class ConfigLayer4RuleAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigLayer4RuleAttributeResponseBody> body{};

  ConfigLayer4RuleAttributeResponse() {}

  explicit ConfigLayer4RuleAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigLayer4RuleAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigLayer4RuleAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigLayer4RuleAttributeResponse() = default;
};
class ConfigLayer7BlackWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> blackList{};
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> whiteList{};

  ConfigLayer7BlackWhiteListRequest() {}

  explicit ConfigLayer7BlackWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackList) {
      res["BlackList"] = boost::any(*blackList);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackList") != m.end() && !m["BlackList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BlackList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      blackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigLayer7BlackWhiteListRequest() = default;
};
class ConfigLayer7BlackWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigLayer7BlackWhiteListResponseBody() {}

  explicit ConfigLayer7BlackWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigLayer7BlackWhiteListResponseBody() = default;
};
class ConfigLayer7BlackWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigLayer7BlackWhiteListResponseBody> body{};

  ConfigLayer7BlackWhiteListResponse() {}

  explicit ConfigLayer7BlackWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigLayer7BlackWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigLayer7BlackWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigLayer7BlackWhiteListResponse() = default;
};
class ConfigLayer7CCRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> act{};
  shared_ptr<long> count{};
  shared_ptr<string> domain{};
  shared_ptr<long> interval{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> ttl{};
  shared_ptr<string> uri{};

  ConfigLayer7CCRuleRequest() {}

  explicit ConfigLayer7CCRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (act) {
      res["Act"] = boost::any(*act);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Act") != m.end() && !m["Act"].empty()) {
      act = make_shared<string>(boost::any_cast<string>(m["Act"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~ConfigLayer7CCRuleRequest() = default;
};
class ConfigLayer7CCRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigLayer7CCRuleResponseBody() {}

  explicit ConfigLayer7CCRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigLayer7CCRuleResponseBody() = default;
};
class ConfigLayer7CCRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigLayer7CCRuleResponseBody> body{};

  ConfigLayer7CCRuleResponse() {}

  explicit ConfigLayer7CCRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigLayer7CCRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigLayer7CCRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigLayer7CCRuleResponse() = default;
};
class ConfigLayer7CCTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> template_{};

  ConfigLayer7CCTemplateRequest() {}

  explicit ConfigLayer7CCTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
  }


  virtual ~ConfigLayer7CCTemplateRequest() = default;
};
class ConfigLayer7CCTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigLayer7CCTemplateResponseBody() {}

  explicit ConfigLayer7CCTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigLayer7CCTemplateResponseBody() = default;
};
class ConfigLayer7CCTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigLayer7CCTemplateResponseBody> body{};

  ConfigLayer7CCTemplateResponse() {}

  explicit ConfigLayer7CCTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigLayer7CCTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigLayer7CCTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigLayer7CCTemplateResponse() = default;
};
class ConfigLayer7CertRequest : public Darabonba::Model {
public:
  shared_ptr<string> cert{};
  shared_ptr<long> certId{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> certRegion{};
  shared_ptr<string> domain{};
  shared_ptr<string> key{};
  shared_ptr<string> resourceGroupId{};

  ConfigLayer7CertRequest() {}

  explicit ConfigLayer7CertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certRegion) {
      res["CertRegion"] = boost::any(*certRegion);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertRegion") != m.end() && !m["CertRegion"].empty()) {
      certRegion = make_shared<string>(boost::any_cast<string>(m["CertRegion"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ConfigLayer7CertRequest() = default;
};
class ConfigLayer7CertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigLayer7CertResponseBody() {}

  explicit ConfigLayer7CertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigLayer7CertResponseBody() = default;
};
class ConfigLayer7CertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigLayer7CertResponseBody> body{};

  ConfigLayer7CertResponse() {}

  explicit ConfigLayer7CertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigLayer7CertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigLayer7CertResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigLayer7CertResponse() = default;
};
class ConfigLayer7RuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> proxyTypeList{};
  shared_ptr<vector<string>> proxyTypes{};
  shared_ptr<vector<string>> realServers{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> rsType{};

  ConfigLayer7RuleRequest() {}

  explicit ConfigLayer7RuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (proxyTypeList) {
      res["ProxyTypeList"] = boost::any(*proxyTypeList);
    }
    if (proxyTypes) {
      res["ProxyTypes"] = boost::any(*proxyTypes);
    }
    if (realServers) {
      res["RealServers"] = boost::any(*realServers);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (rsType) {
      res["RsType"] = boost::any(*rsType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProxyTypeList") != m.end() && !m["ProxyTypeList"].empty()) {
      proxyTypeList = make_shared<string>(boost::any_cast<string>(m["ProxyTypeList"]));
    }
    if (m.find("ProxyTypes") != m.end() && !m["ProxyTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProxyTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProxyTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      proxyTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RealServers") != m.end() && !m["RealServers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RealServers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RealServers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      realServers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RsType") != m.end() && !m["RsType"].empty()) {
      rsType = make_shared<long>(boost::any_cast<long>(m["RsType"]));
    }
  }


  virtual ~ConfigLayer7RuleRequest() = default;
};
class ConfigLayer7RuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigLayer7RuleResponseBody() {}

  explicit ConfigLayer7RuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigLayer7RuleResponseBody() = default;
};
class ConfigLayer7RuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigLayer7RuleResponseBody> body{};

  ConfigLayer7RuleResponse() {}

  explicit ConfigLayer7RuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigLayer7RuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigLayer7RuleResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigLayer7RuleResponse() = default;
};
class CreateAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> taskParams{};
  shared_ptr<long> taskType{};

  CreateAsyncTaskRequest() {}

  explicit CreateAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
  }


  virtual ~CreateAsyncTaskRequest() = default;
};
class CreateAsyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAsyncTaskResponseBody() {}

  explicit CreateAsyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAsyncTaskResponseBody() = default;
};
class CreateAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAsyncTaskResponseBody> body{};

  CreateAsyncTaskResponse() {}

  explicit CreateAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAsyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAsyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAsyncTaskResponse() = default;
};
class CreateLayer4RuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> listeners{};
  shared_ptr<long> proxyEnable{};

  CreateLayer4RuleRequest() {}

  explicit CreateLayer4RuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = boost::any(*listeners);
    }
    if (proxyEnable) {
      res["ProxyEnable"] = boost::any(*proxyEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      listeners = make_shared<string>(boost::any_cast<string>(m["Listeners"]));
    }
    if (m.find("ProxyEnable") != m.end() && !m["ProxyEnable"].empty()) {
      proxyEnable = make_shared<long>(boost::any_cast<long>(m["ProxyEnable"]));
    }
  }


  virtual ~CreateLayer4RuleRequest() = default;
};
class CreateLayer4RuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLayer4RuleResponseBody() {}

  explicit CreateLayer4RuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLayer4RuleResponseBody() = default;
};
class CreateLayer4RuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLayer4RuleResponseBody> body{};

  CreateLayer4RuleResponse() {}

  explicit CreateLayer4RuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLayer4RuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLayer4RuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLayer4RuleResponse() = default;
};
class CreateLayer7RuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> rsType{};
  shared_ptr<string> rules{};

  CreateLayer7RuleRequest() {}

  explicit CreateLayer7RuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (rsType) {
      res["RsType"] = boost::any(*rsType);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RsType") != m.end() && !m["RsType"].empty()) {
      rsType = make_shared<long>(boost::any_cast<long>(m["RsType"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rules = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
  }


  virtual ~CreateLayer7RuleRequest() = default;
};
class CreateLayer7RuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateLayer7RuleResponseBody() {}

  explicit CreateLayer7RuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLayer7RuleResponseBody() = default;
};
class CreateLayer7RuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLayer7RuleResponseBody> body{};

  CreateLayer7RuleResponse() {}

  explicit CreateLayer7RuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLayer7RuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLayer7RuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLayer7RuleResponse() = default;
};
class DeleteAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> taskId{};

  DeleteAsyncTaskRequest() {}

  explicit DeleteAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DeleteAsyncTaskRequest() = default;
};
class DeleteAsyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAsyncTaskResponseBody() {}

  explicit DeleteAsyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAsyncTaskResponseBody() = default;
};
class DeleteAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAsyncTaskResponseBody> body{};

  DeleteAsyncTaskResponse() {}

  explicit DeleteAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAsyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAsyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAsyncTaskResponse() = default;
};
class DeleteLayer4RuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> listeners{};

  DeleteLayer4RuleRequest() {}

  explicit DeleteLayer4RuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = boost::any(*listeners);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      listeners = make_shared<string>(boost::any_cast<string>(m["Listeners"]));
    }
  }


  virtual ~DeleteLayer4RuleRequest() = default;
};
class DeleteLayer4RuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLayer4RuleResponseBody() {}

  explicit DeleteLayer4RuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLayer4RuleResponseBody() = default;
};
class DeleteLayer4RuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLayer4RuleResponseBody> body{};

  DeleteLayer4RuleResponse() {}

  explicit DeleteLayer4RuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLayer4RuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLayer4RuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLayer4RuleResponse() = default;
};
class DeleteLayer7CCRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};

  DeleteLayer7CCRuleRequest() {}

  explicit DeleteLayer7CCRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteLayer7CCRuleRequest() = default;
};
class DeleteLayer7CCRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLayer7CCRuleResponseBody() {}

  explicit DeleteLayer7CCRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLayer7CCRuleResponseBody() = default;
};
class DeleteLayer7CCRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLayer7CCRuleResponseBody> body{};

  DeleteLayer7CCRuleResponse() {}

  explicit DeleteLayer7CCRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLayer7CCRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLayer7CCRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLayer7CCRuleResponse() = default;
};
class DeleteLayer7RuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};

  DeleteLayer7RuleRequest() {}

  explicit DeleteLayer7RuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteLayer7RuleRequest() = default;
};
class DeleteLayer7RuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLayer7RuleResponseBody() {}

  explicit DeleteLayer7RuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLayer7RuleResponseBody() = default;
};
class DeleteLayer7RuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLayer7RuleResponseBody> body{};

  DeleteLayer7RuleResponse() {}

  explicit DeleteLayer7RuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLayer7RuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLayer7RuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLayer7RuleResponse() = default;
};
class DescribeBackSourceCidrRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipVersion{};
  shared_ptr<string> line{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeBackSourceCidrRequest() {}

  explicit DescribeBackSourceCidrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<string>(boost::any_cast<string>(m["Line"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeBackSourceCidrRequest() = default;
};
class DescribeBackSourceCidrResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cidrList{};
  shared_ptr<string> requestId{};

  DescribeBackSourceCidrResponseBody() {}

  explicit DescribeBackSourceCidrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrList) {
      res["CidrList"] = boost::any(*cidrList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackSourceCidrResponseBody() = default;
};
class DescribeBackSourceCidrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackSourceCidrResponseBody> body{};

  DescribeBackSourceCidrResponse() {}

  explicit DescribeBackSourceCidrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackSourceCidrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackSourceCidrResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackSourceCidrResponse() = default;
};
class DescribeBatchSlsDispatchStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeBatchSlsDispatchStatusRequest() {}

  explicit DescribeBatchSlsDispatchStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeBatchSlsDispatchStatusRequest() = default;
};
class DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<bool> enable{};

  DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList() {}

  explicit DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList() = default;
};
class DescribeBatchSlsDispatchStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList>> slsConfigStatusList{};
  shared_ptr<long> totalCount{};

  DescribeBatchSlsDispatchStatusResponseBody() {}

  explicit DescribeBatchSlsDispatchStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsConfigStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*slsConfigStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlsConfigStatusList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsConfigStatusList") != m.end() && !m["SlsConfigStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["SlsConfigStatusList"].type()) {
        vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlsConfigStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slsConfigStatusList = make_shared<vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeBatchSlsDispatchStatusResponseBody() = default;
};
class DescribeBatchSlsDispatchStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBatchSlsDispatchStatusResponseBody> body{};

  DescribeBatchSlsDispatchStatusResponse() {}

  explicit DescribeBatchSlsDispatchStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBatchSlsDispatchStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBatchSlsDispatchStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBatchSlsDispatchStatusResponse() = default;
};
class DescribeDDoSEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eip{};
  shared_ptr<long> endTime{};
  shared_ptr<long> offset{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeDDoSEventsRequest() {}

  explicit DescribeDDoSEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eip) {
      res["Eip"] = boost::any(*eip);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Eip") != m.end() && !m["Eip"].empty()) {
      eip = make_shared<string>(boost::any_cast<string>(m["Eip"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDDoSEventsRequest() = default;
};
class DescribeDDoSEventsResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  DescribeDDoSEventsResponseBodyEvents() {}

  explicit DescribeDDoSEventsResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDDoSEventsResponseBodyEvents() = default;
};
class DescribeDDoSEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDDoSEventsResponseBodyEvents>> events{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeDDoSEventsResponseBody() {}

  explicit DescribeDDoSEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeDDoSEventsResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDDoSEventsResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeDDoSEventsResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeDDoSEventsResponseBody() = default;
};
class DescribeDDoSEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDDoSEventsResponseBody> body{};

  DescribeDDoSEventsResponse() {}

  explicit DescribeDDoSEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDDoSEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDDoSEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDDoSEventsResponse() = default;
};
class DescribeDDoSTrafficRequest : public Darabonba::Model {
public:
  shared_ptr<string> eip{};
  shared_ptr<long> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeDDoSTrafficRequest() {}

  explicit DescribeDDoSTrafficRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eip) {
      res["Eip"] = boost::any(*eip);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Eip") != m.end() && !m["Eip"].empty()) {
      eip = make_shared<string>(boost::any_cast<string>(m["Eip"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDDoSTrafficRequest() = default;
};
class DescribeDDoSTrafficResponseBodyDDoSTrafficPoints : public Darabonba::Model {
public:
  shared_ptr<long> defenseMaxInBps{};
  shared_ptr<long> sourceMaxInBps{};
  shared_ptr<long> time{};

  DescribeDDoSTrafficResponseBodyDDoSTrafficPoints() {}

  explicit DescribeDDoSTrafficResponseBodyDDoSTrafficPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseMaxInBps) {
      res["DefenseMaxInBps"] = boost::any(*defenseMaxInBps);
    }
    if (sourceMaxInBps) {
      res["SourceMaxInBps"] = boost::any(*sourceMaxInBps);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseMaxInBps") != m.end() && !m["DefenseMaxInBps"].empty()) {
      defenseMaxInBps = make_shared<long>(boost::any_cast<long>(m["DefenseMaxInBps"]));
    }
    if (m.find("SourceMaxInBps") != m.end() && !m["SourceMaxInBps"].empty()) {
      sourceMaxInBps = make_shared<long>(boost::any_cast<long>(m["SourceMaxInBps"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~DescribeDDoSTrafficResponseBodyDDoSTrafficPoints() = default;
};
class DescribeDDoSTrafficResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints>> DDoSTrafficPoints{};
  shared_ptr<long> defenseInBytes{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sourceInBytes{};

  DescribeDDoSTrafficResponseBody() {}

  explicit DescribeDDoSTrafficResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DDoSTrafficPoints) {
      vector<boost::any> temp1;
      for(auto item1:*DDoSTrafficPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DDoSTrafficPoints"] = boost::any(temp1);
    }
    if (defenseInBytes) {
      res["DefenseInBytes"] = boost::any(*defenseInBytes);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceInBytes) {
      res["SourceInBytes"] = boost::any(*sourceInBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DDoSTrafficPoints") != m.end() && !m["DDoSTrafficPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["DDoSTrafficPoints"].type()) {
        vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DDoSTrafficPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDDoSTrafficResponseBodyDDoSTrafficPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DDoSTrafficPoints = make_shared<vector<DescribeDDoSTrafficResponseBodyDDoSTrafficPoints>>(expect1);
      }
    }
    if (m.find("DefenseInBytes") != m.end() && !m["DefenseInBytes"].empty()) {
      defenseInBytes = make_shared<long>(boost::any_cast<long>(m["DefenseInBytes"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceInBytes") != m.end() && !m["SourceInBytes"].empty()) {
      sourceInBytes = make_shared<long>(boost::any_cast<long>(m["SourceInBytes"]));
    }
  }


  virtual ~DescribeDDoSTrafficResponseBody() = default;
};
class DescribeDDoSTrafficResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDDoSTrafficResponseBody> body{};

  DescribeDDoSTrafficResponse() {}

  explicit DescribeDDoSTrafficResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDDoSTrafficResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDDoSTrafficResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDDoSTrafficResponse() = default;
};
class DescribeDefenseCountStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeDefenseCountStatisticsRequest() {}

  explicit DescribeDefenseCountStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeDefenseCountStatisticsRequest() = default;
};
class DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics : public Darabonba::Model {
public:
  shared_ptr<long> defenseCountTotalUsageOfCurrentMonth{};
  shared_ptr<long> flowPackCountRemain{};
  shared_ptr<long> maxUsableDefenseCountCurrentMonth{};

  DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics() {}

  explicit DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseCountTotalUsageOfCurrentMonth) {
      res["DefenseCountTotalUsageOfCurrentMonth"] = boost::any(*defenseCountTotalUsageOfCurrentMonth);
    }
    if (flowPackCountRemain) {
      res["FlowPackCountRemain"] = boost::any(*flowPackCountRemain);
    }
    if (maxUsableDefenseCountCurrentMonth) {
      res["MaxUsableDefenseCountCurrentMonth"] = boost::any(*maxUsableDefenseCountCurrentMonth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseCountTotalUsageOfCurrentMonth") != m.end() && !m["DefenseCountTotalUsageOfCurrentMonth"].empty()) {
      defenseCountTotalUsageOfCurrentMonth = make_shared<long>(boost::any_cast<long>(m["DefenseCountTotalUsageOfCurrentMonth"]));
    }
    if (m.find("FlowPackCountRemain") != m.end() && !m["FlowPackCountRemain"].empty()) {
      flowPackCountRemain = make_shared<long>(boost::any_cast<long>(m["FlowPackCountRemain"]));
    }
    if (m.find("MaxUsableDefenseCountCurrentMonth") != m.end() && !m["MaxUsableDefenseCountCurrentMonth"].empty()) {
      maxUsableDefenseCountCurrentMonth = make_shared<long>(boost::any_cast<long>(m["MaxUsableDefenseCountCurrentMonth"]));
    }
  }


  virtual ~DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics() = default;
};
class DescribeDefenseCountStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics> defenseCountStatistics{};
  shared_ptr<string> requestId{};

  DescribeDefenseCountStatisticsResponseBody() {}

  explicit DescribeDefenseCountStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseCountStatistics) {
      res["DefenseCountStatistics"] = defenseCountStatistics ? boost::any(defenseCountStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseCountStatistics") != m.end() && !m["DefenseCountStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefenseCountStatistics"].type()) {
        DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefenseCountStatistics"]));
        defenseCountStatistics = make_shared<DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDefenseCountStatisticsResponseBody() = default;
};
class DescribeDefenseCountStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseCountStatisticsResponseBody> body{};

  DescribeDefenseCountStatisticsResponse() {}

  explicit DescribeDefenseCountStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseCountStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseCountStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseCountStatisticsResponse() = default;
};
class DescribeDomainAccessModeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainList{};
  shared_ptr<string> sourceIp{};

  DescribeDomainAccessModeRequest() {}

  explicit DescribeDomainAccessModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainList) {
      res["DomainList"] = boost::any(*domainList);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeDomainAccessModeRequest() = default;
};
class DescribeDomainAccessModeResponseBodyDomainModeList : public Darabonba::Model {
public:
  shared_ptr<long> accessMode{};
  shared_ptr<string> domain{};

  DescribeDomainAccessModeResponseBodyDomainModeList() {}

  explicit DescribeDomainAccessModeResponseBodyDomainModeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessMode) {
      res["AccessMode"] = boost::any(*accessMode);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessMode") != m.end() && !m["AccessMode"].empty()) {
      accessMode = make_shared<long>(boost::any_cast<long>(m["AccessMode"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~DescribeDomainAccessModeResponseBodyDomainModeList() = default;
};
class DescribeDomainAccessModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainAccessModeResponseBodyDomainModeList>> domainModeList{};
  shared_ptr<string> requestId{};

  DescribeDomainAccessModeResponseBody() {}

  explicit DescribeDomainAccessModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainModeList) {
      vector<boost::any> temp1;
      for(auto item1:*domainModeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainModeList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainModeList") != m.end() && !m["DomainModeList"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainModeList"].type()) {
        vector<DescribeDomainAccessModeResponseBodyDomainModeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainModeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainAccessModeResponseBodyDomainModeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainModeList = make_shared<vector<DescribeDomainAccessModeResponseBodyDomainModeList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainAccessModeResponseBody() = default;
};
class DescribeDomainAccessModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainAccessModeResponseBody> body{};

  DescribeDomainAccessModeResponse() {}

  explicit DescribeDomainAccessModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainAccessModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainAccessModeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainAccessModeResponse() = default;
};
class DescribeDomainAttackEventListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeDomainAttackEventListRequest() {}

  explicit DescribeDomainAttackEventListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainAttackEventListRequest() = default;
};
class DescribeDomainAttackEventListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<long> maxQps{};
  shared_ptr<long> startTime{};

  DescribeDomainAttackEventListResponseBodyDataList() {}

  explicit DescribeDomainAttackEventListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxQps) {
      res["MaxQps"] = boost::any(*maxQps);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MaxQps") != m.end() && !m["MaxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["MaxQps"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainAttackEventListResponseBodyDataList() = default;
};
class DescribeDomainAttackEventListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainAttackEventListResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeDomainAttackEventListResponseBody() {}

  explicit DescribeDomainAttackEventListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeDomainAttackEventListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainAttackEventListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeDomainAttackEventListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeDomainAttackEventListResponseBody() = default;
};
class DescribeDomainAttackEventListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainAttackEventListResponseBody> body{};

  DescribeDomainAttackEventListResponse() {}

  explicit DescribeDomainAttackEventListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainAttackEventListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainAttackEventListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainAttackEventListResponse() = default;
};
class DescribeDomainAttackMaxQpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeDomainAttackMaxQpsRequest() {}

  explicit DescribeDomainAttackMaxQpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainAttackMaxQpsRequest() = default;
};
class DescribeDomainAttackMaxQpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> qps{};
  shared_ptr<string> requestId{};

  DescribeDomainAttackMaxQpsResponseBody() {}

  explicit DescribeDomainAttackMaxQpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainAttackMaxQpsResponseBody() = default;
};
class DescribeDomainAttackMaxQpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainAttackMaxQpsResponseBody> body{};

  DescribeDomainAttackMaxQpsResponse() {}

  explicit DescribeDomainAttackMaxQpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainAttackMaxQpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainAttackMaxQpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainAttackMaxQpsResponse() = default;
};
class DescribeDomainOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeDomainOverviewRequest() {}

  explicit DescribeDomainOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainOverviewRequest() = default;
};
class DescribeDomainOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxHttp{};
  shared_ptr<long> maxHttps{};
  shared_ptr<string> requestId{};

  DescribeDomainOverviewResponseBody() {}

  explicit DescribeDomainOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxHttp) {
      res["MaxHttp"] = boost::any(*maxHttp);
    }
    if (maxHttps) {
      res["MaxHttps"] = boost::any(*maxHttps);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxHttp") != m.end() && !m["MaxHttp"].empty()) {
      maxHttp = make_shared<long>(boost::any_cast<long>(m["MaxHttp"]));
    }
    if (m.find("MaxHttps") != m.end() && !m["MaxHttps"].empty()) {
      maxHttps = make_shared<long>(boost::any_cast<long>(m["MaxHttps"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainOverviewResponseBody() = default;
};
class DescribeDomainOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainOverviewResponseBody> body{};

  DescribeDomainOverviewResponse() {}

  explicit DescribeDomainOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainOverviewResponse() = default;
};
class DescribeDomainQpsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeDomainQpsListRequest() {}

  explicit DescribeDomainQpsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainQpsListRequest() = default;
};
class DescribeDomainQpsListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> attackQps{};
  shared_ptr<long> cacheHits{};
  shared_ptr<long> index{};
  shared_ptr<long> maxAttackQps{};
  shared_ptr<long> maxNormalQps{};
  shared_ptr<long> maxQps{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalQps{};

  DescribeDomainQpsListResponseBodyDataList() {}

  explicit DescribeDomainQpsListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attackQps) {
      res["AttackQps"] = boost::any(*attackQps);
    }
    if (cacheHits) {
      res["CacheHits"] = boost::any(*cacheHits);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (maxAttackQps) {
      res["MaxAttackQps"] = boost::any(*maxAttackQps);
    }
    if (maxNormalQps) {
      res["MaxNormalQps"] = boost::any(*maxNormalQps);
    }
    if (maxQps) {
      res["MaxQps"] = boost::any(*maxQps);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalQps) {
      res["TotalQps"] = boost::any(*totalQps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttackQps") != m.end() && !m["AttackQps"].empty()) {
      attackQps = make_shared<long>(boost::any_cast<long>(m["AttackQps"]));
    }
    if (m.find("CacheHits") != m.end() && !m["CacheHits"].empty()) {
      cacheHits = make_shared<long>(boost::any_cast<long>(m["CacheHits"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("MaxAttackQps") != m.end() && !m["MaxAttackQps"].empty()) {
      maxAttackQps = make_shared<long>(boost::any_cast<long>(m["MaxAttackQps"]));
    }
    if (m.find("MaxNormalQps") != m.end() && !m["MaxNormalQps"].empty()) {
      maxNormalQps = make_shared<long>(boost::any_cast<long>(m["MaxNormalQps"]));
    }
    if (m.find("MaxQps") != m.end() && !m["MaxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["MaxQps"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalQps") != m.end() && !m["TotalQps"].empty()) {
      totalQps = make_shared<long>(boost::any_cast<long>(m["TotalQps"]));
    }
  }


  virtual ~DescribeDomainQpsListResponseBodyDataList() = default;
};
class DescribeDomainQpsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainQpsListResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};

  DescribeDomainQpsListResponseBody() {}

  explicit DescribeDomainQpsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeDomainQpsListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainQpsListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeDomainQpsListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainQpsListResponseBody() = default;
};
class DescribeDomainQpsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainQpsListResponseBody> body{};

  DescribeDomainQpsListResponse() {}

  explicit DescribeDomainQpsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainQpsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainQpsListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainQpsListResponse() = default;
};
class DescribeDomainQpsWithCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeDomainQpsWithCacheRequest() {}

  explicit DescribeDomainQpsWithCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainQpsWithCacheRequest() = default;
};
class DescribeDomainQpsWithCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> blocks{};
  shared_ptr<vector<string>> cacheHits{};
  shared_ptr<vector<string>> ccBlockQps{};
  shared_ptr<vector<string>> ccJsQps{};
  shared_ptr<long> interval{};
  shared_ptr<vector<string>> ipBlockQps{};
  shared_ptr<vector<string>> preciseBlocks{};
  shared_ptr<vector<string>> preciseJsQps{};
  shared_ptr<vector<string>> regionBlocks{};
  shared_ptr<string> requestId{};
  shared_ptr<long> startTime{};
  shared_ptr<vector<string>> totals{};

  DescribeDomainQpsWithCacheResponseBody() {}

  explicit DescribeDomainQpsWithCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blocks) {
      res["Blocks"] = boost::any(*blocks);
    }
    if (cacheHits) {
      res["CacheHits"] = boost::any(*cacheHits);
    }
    if (ccBlockQps) {
      res["CcBlockQps"] = boost::any(*ccBlockQps);
    }
    if (ccJsQps) {
      res["CcJsQps"] = boost::any(*ccJsQps);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ipBlockQps) {
      res["IpBlockQps"] = boost::any(*ipBlockQps);
    }
    if (preciseBlocks) {
      res["PreciseBlocks"] = boost::any(*preciseBlocks);
    }
    if (preciseJsQps) {
      res["PreciseJsQps"] = boost::any(*preciseJsQps);
    }
    if (regionBlocks) {
      res["RegionBlocks"] = boost::any(*regionBlocks);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totals) {
      res["Totals"] = boost::any(*totals);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Blocks") != m.end() && !m["Blocks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Blocks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Blocks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      blocks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CacheHits") != m.end() && !m["CacheHits"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CacheHits"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CacheHits"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cacheHits = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CcBlockQps") != m.end() && !m["CcBlockQps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CcBlockQps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CcBlockQps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ccBlockQps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CcJsQps") != m.end() && !m["CcJsQps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CcJsQps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CcJsQps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ccJsQps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("IpBlockQps") != m.end() && !m["IpBlockQps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpBlockQps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpBlockQps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipBlockQps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PreciseBlocks") != m.end() && !m["PreciseBlocks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreciseBlocks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreciseBlocks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preciseBlocks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PreciseJsQps") != m.end() && !m["PreciseJsQps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PreciseJsQps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PreciseJsQps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      preciseJsQps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionBlocks") != m.end() && !m["RegionBlocks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionBlocks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionBlocks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionBlocks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Totals") != m.end() && !m["Totals"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Totals"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Totals"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      totals = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDomainQpsWithCacheResponseBody() = default;
};
class DescribeDomainQpsWithCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainQpsWithCacheResponseBody> body{};

  DescribeDomainQpsWithCacheResponse() {}

  explicit DescribeDomainQpsWithCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainQpsWithCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainQpsWithCacheResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainQpsWithCacheResponse() = default;
};
class DescribeDomainSlsStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeDomainSlsStatusRequest() {}

  explicit DescribeDomainSlsStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeDomainSlsStatusRequest() = default;
};
class DescribeDomainSlsStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> slsLogstore{};
  shared_ptr<string> slsProject{};
  shared_ptr<bool> slsStatus{};

  DescribeDomainSlsStatusResponseBody() {}

  explicit DescribeDomainSlsStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsLogstore) {
      res["SlsLogstore"] = boost::any(*slsLogstore);
    }
    if (slsProject) {
      res["SlsProject"] = boost::any(*slsProject);
    }
    if (slsStatus) {
      res["SlsStatus"] = boost::any(*slsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsLogstore") != m.end() && !m["SlsLogstore"].empty()) {
      slsLogstore = make_shared<string>(boost::any_cast<string>(m["SlsLogstore"]));
    }
    if (m.find("SlsProject") != m.end() && !m["SlsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["SlsProject"]));
    }
    if (m.find("SlsStatus") != m.end() && !m["SlsStatus"].empty()) {
      slsStatus = make_shared<bool>(boost::any_cast<bool>(m["SlsStatus"]));
    }
  }


  virtual ~DescribeDomainSlsStatusResponseBody() = default;
};
class DescribeDomainSlsStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainSlsStatusResponseBody> body{};

  DescribeDomainSlsStatusResponse() {}

  explicit DescribeDomainSlsStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainSlsStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainSlsStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainSlsStatusResponse() = default;
};
class DescribeDomainStatusCodeListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<string> queryType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> startTime{};

  DescribeDomainStatusCodeListRequest() {}

  explicit DescribeDomainStatusCodeListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainStatusCodeListRequest() = default;
};
class DescribeDomainStatusCodeListResponseBodyStatusCodeList : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> status200{};
  shared_ptr<long> status2XX{};
  shared_ptr<long> status3XX{};
  shared_ptr<long> status403{};
  shared_ptr<long> status404{};
  shared_ptr<long> status405{};
  shared_ptr<long> status410{};
  shared_ptr<long> status499{};
  shared_ptr<long> status4XX{};
  shared_ptr<long> status501{};
  shared_ptr<long> status502{};
  shared_ptr<long> status503{};
  shared_ptr<long> status504{};
  shared_ptr<long> status5XX{};

  DescribeDomainStatusCodeListResponseBodyStatusCodeList() {}

  explicit DescribeDomainStatusCodeListResponseBodyStatusCodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (status200) {
      res["Status200"] = boost::any(*status200);
    }
    if (status2XX) {
      res["Status2XX"] = boost::any(*status2XX);
    }
    if (status3XX) {
      res["Status3XX"] = boost::any(*status3XX);
    }
    if (status403) {
      res["Status403"] = boost::any(*status403);
    }
    if (status404) {
      res["Status404"] = boost::any(*status404);
    }
    if (status405) {
      res["Status405"] = boost::any(*status405);
    }
    if (status410) {
      res["Status410"] = boost::any(*status410);
    }
    if (status499) {
      res["Status499"] = boost::any(*status499);
    }
    if (status4XX) {
      res["Status4XX"] = boost::any(*status4XX);
    }
    if (status501) {
      res["Status501"] = boost::any(*status501);
    }
    if (status502) {
      res["Status502"] = boost::any(*status502);
    }
    if (status503) {
      res["Status503"] = boost::any(*status503);
    }
    if (status504) {
      res["Status504"] = boost::any(*status504);
    }
    if (status5XX) {
      res["Status5XX"] = boost::any(*status5XX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Status200") != m.end() && !m["Status200"].empty()) {
      status200 = make_shared<long>(boost::any_cast<long>(m["Status200"]));
    }
    if (m.find("Status2XX") != m.end() && !m["Status2XX"].empty()) {
      status2XX = make_shared<long>(boost::any_cast<long>(m["Status2XX"]));
    }
    if (m.find("Status3XX") != m.end() && !m["Status3XX"].empty()) {
      status3XX = make_shared<long>(boost::any_cast<long>(m["Status3XX"]));
    }
    if (m.find("Status403") != m.end() && !m["Status403"].empty()) {
      status403 = make_shared<long>(boost::any_cast<long>(m["Status403"]));
    }
    if (m.find("Status404") != m.end() && !m["Status404"].empty()) {
      status404 = make_shared<long>(boost::any_cast<long>(m["Status404"]));
    }
    if (m.find("Status405") != m.end() && !m["Status405"].empty()) {
      status405 = make_shared<long>(boost::any_cast<long>(m["Status405"]));
    }
    if (m.find("Status410") != m.end() && !m["Status410"].empty()) {
      status410 = make_shared<long>(boost::any_cast<long>(m["Status410"]));
    }
    if (m.find("Status499") != m.end() && !m["Status499"].empty()) {
      status499 = make_shared<long>(boost::any_cast<long>(m["Status499"]));
    }
    if (m.find("Status4XX") != m.end() && !m["Status4XX"].empty()) {
      status4XX = make_shared<long>(boost::any_cast<long>(m["Status4XX"]));
    }
    if (m.find("Status501") != m.end() && !m["Status501"].empty()) {
      status501 = make_shared<long>(boost::any_cast<long>(m["Status501"]));
    }
    if (m.find("Status502") != m.end() && !m["Status502"].empty()) {
      status502 = make_shared<long>(boost::any_cast<long>(m["Status502"]));
    }
    if (m.find("Status503") != m.end() && !m["Status503"].empty()) {
      status503 = make_shared<long>(boost::any_cast<long>(m["Status503"]));
    }
    if (m.find("Status504") != m.end() && !m["Status504"].empty()) {
      status504 = make_shared<long>(boost::any_cast<long>(m["Status504"]));
    }
    if (m.find("Status5XX") != m.end() && !m["Status5XX"].empty()) {
      status5XX = make_shared<long>(boost::any_cast<long>(m["Status5XX"]));
    }
  }


  virtual ~DescribeDomainStatusCodeListResponseBodyStatusCodeList() = default;
};
class DescribeDomainStatusCodeListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList>> statusCodeList{};

  DescribeDomainStatusCodeListResponseBody() {}

  explicit DescribeDomainStatusCodeListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statusCodeList) {
      vector<boost::any> temp1;
      for(auto item1:*statusCodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatusCodeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusCodeList") != m.end() && !m["StatusCodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["StatusCodeList"].type()) {
        vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatusCodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainStatusCodeListResponseBodyStatusCodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statusCodeList = make_shared<vector<DescribeDomainStatusCodeListResponseBodyStatusCodeList>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainStatusCodeListResponseBody() = default;
};
class DescribeDomainStatusCodeListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainStatusCodeListResponseBody> body{};

  DescribeDomainStatusCodeListResponse() {}

  explicit DescribeDomainStatusCodeListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainStatusCodeListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainStatusCodeListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainStatusCodeListResponse() = default;
};
class DescribeDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> offset{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> queryDomainPattern{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeDomainsRequest() {}

  explicit DescribeDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryDomainPattern) {
      res["QueryDomainPattern"] = boost::any(*queryDomainPattern);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("QueryDomainPattern") != m.end() && !m["QueryDomainPattern"].empty()) {
      queryDomainPattern = make_shared<string>(boost::any_cast<string>(m["QueryDomainPattern"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeDomainsRequest() = default;
};
class DescribeDomainsResponseBodyDomainsProxyTypeList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> proxyPorts{};
  shared_ptr<string> proxyType{};

  DescribeDomainsResponseBodyDomainsProxyTypeList() {}

  explicit DescribeDomainsResponseBodyDomainsProxyTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (proxyPorts) {
      res["ProxyPorts"] = boost::any(*proxyPorts);
    }
    if (proxyType) {
      res["ProxyType"] = boost::any(*proxyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProxyPorts") != m.end() && !m["ProxyPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProxyPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProxyPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      proxyPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProxyType") != m.end() && !m["ProxyType"].empty()) {
      proxyType = make_shared<string>(boost::any_cast<string>(m["ProxyType"]));
    }
  }


  virtual ~DescribeDomainsResponseBodyDomainsProxyTypeList() = default;
};
class DescribeDomainsResponseBodyDomainsRealServers : public Darabonba::Model {
public:
  shared_ptr<string> realServer{};
  shared_ptr<long> rsType{};

  DescribeDomainsResponseBodyDomainsRealServers() {}

  explicit DescribeDomainsResponseBodyDomainsRealServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (realServer) {
      res["RealServer"] = boost::any(*realServer);
    }
    if (rsType) {
      res["RsType"] = boost::any(*rsType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RealServer") != m.end() && !m["RealServer"].empty()) {
      realServer = make_shared<string>(boost::any_cast<string>(m["RealServer"]));
    }
    if (m.find("RsType") != m.end() && !m["RsType"].empty()) {
      rsType = make_shared<long>(boost::any_cast<long>(m["RsType"]));
    }
  }


  virtual ~DescribeDomainsResponseBodyDomainsRealServers() = default;
};
class DescribeDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<vector<string>> blackList{};
  shared_ptr<bool> ccEnabled{};
  shared_ptr<bool> ccRuleEnabled{};
  shared_ptr<string> ccTemplate{};
  shared_ptr<string> certName{};
  shared_ptr<string> certRegion{};
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};
  shared_ptr<bool> http2Enable{};
  shared_ptr<vector<DescribeDomainsResponseBodyDomainsProxyTypeList>> proxyTypeList{};
  shared_ptr<vector<DescribeDomainsResponseBodyDomainsRealServers>> realServers{};
  shared_ptr<string> sslCiphers{};
  shared_ptr<string> sslProtocols{};
  shared_ptr<vector<string>> whiteList{};

  DescribeDomainsResponseBodyDomains() {}

  explicit DescribeDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackList) {
      res["BlackList"] = boost::any(*blackList);
    }
    if (ccEnabled) {
      res["CcEnabled"] = boost::any(*ccEnabled);
    }
    if (ccRuleEnabled) {
      res["CcRuleEnabled"] = boost::any(*ccRuleEnabled);
    }
    if (ccTemplate) {
      res["CcTemplate"] = boost::any(*ccTemplate);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certRegion) {
      res["CertRegion"] = boost::any(*certRegion);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (http2Enable) {
      res["Http2Enable"] = boost::any(*http2Enable);
    }
    if (proxyTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*proxyTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProxyTypeList"] = boost::any(temp1);
    }
    if (realServers) {
      vector<boost::any> temp1;
      for(auto item1:*realServers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RealServers"] = boost::any(temp1);
    }
    if (sslCiphers) {
      res["SslCiphers"] = boost::any(*sslCiphers);
    }
    if (sslProtocols) {
      res["SslProtocols"] = boost::any(*sslProtocols);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackList") != m.end() && !m["BlackList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BlackList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      blackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CcEnabled") != m.end() && !m["CcEnabled"].empty()) {
      ccEnabled = make_shared<bool>(boost::any_cast<bool>(m["CcEnabled"]));
    }
    if (m.find("CcRuleEnabled") != m.end() && !m["CcRuleEnabled"].empty()) {
      ccRuleEnabled = make_shared<bool>(boost::any_cast<bool>(m["CcRuleEnabled"]));
    }
    if (m.find("CcTemplate") != m.end() && !m["CcTemplate"].empty()) {
      ccTemplate = make_shared<string>(boost::any_cast<string>(m["CcTemplate"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertRegion") != m.end() && !m["CertRegion"].empty()) {
      certRegion = make_shared<string>(boost::any_cast<string>(m["CertRegion"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Http2Enable") != m.end() && !m["Http2Enable"].empty()) {
      http2Enable = make_shared<bool>(boost::any_cast<bool>(m["Http2Enable"]));
    }
    if (m.find("ProxyTypeList") != m.end() && !m["ProxyTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProxyTypeList"].type()) {
        vector<DescribeDomainsResponseBodyDomainsProxyTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProxyTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsResponseBodyDomainsProxyTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        proxyTypeList = make_shared<vector<DescribeDomainsResponseBodyDomainsProxyTypeList>>(expect1);
      }
    }
    if (m.find("RealServers") != m.end() && !m["RealServers"].empty()) {
      if (typeid(vector<boost::any>) == m["RealServers"].type()) {
        vector<DescribeDomainsResponseBodyDomainsRealServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RealServers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsResponseBodyDomainsRealServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        realServers = make_shared<vector<DescribeDomainsResponseBodyDomainsRealServers>>(expect1);
      }
    }
    if (m.find("SslCiphers") != m.end() && !m["SslCiphers"].empty()) {
      sslCiphers = make_shared<string>(boost::any_cast<string>(m["SslCiphers"]));
    }
    if (m.find("SslProtocols") != m.end() && !m["SslProtocols"].empty()) {
      sslProtocols = make_shared<string>(boost::any_cast<string>(m["SslProtocols"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDomainsResponseBodyDomains() = default;
};
class DescribeDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainsResponseBodyDomains>> domains{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeDomainsResponseBody() {}

  explicit DescribeDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domains"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<DescribeDomainsResponseBodyDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsResponseBodyDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<DescribeDomainsResponseBodyDomains>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeDomainsResponseBody() = default;
};
class DescribeDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainsResponseBody> body{};

  DescribeDomainsResponse() {}

  explicit DescribeDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainsResponse() = default;
};
class DescribeElasticBandwidthSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> sourceIp{};

  DescribeElasticBandwidthSpecRequest() {}

  explicit DescribeElasticBandwidthSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeElasticBandwidthSpecRequest() = default;
};
class DescribeElasticBandwidthSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> elasticBandwidthSpec{};
  shared_ptr<string> requestId{};

  DescribeElasticBandwidthSpecResponseBody() {}

  explicit DescribeElasticBandwidthSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticBandwidthSpec) {
      res["ElasticBandwidthSpec"] = boost::any(*elasticBandwidthSpec);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticBandwidthSpec") != m.end() && !m["ElasticBandwidthSpec"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ElasticBandwidthSpec"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ElasticBandwidthSpec"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      elasticBandwidthSpec = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeElasticBandwidthSpecResponseBody() = default;
};
class DescribeElasticBandwidthSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeElasticBandwidthSpecResponseBody> body{};

  DescribeElasticBandwidthSpecResponse() {}

  explicit DescribeElasticBandwidthSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeElasticBandwidthSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticBandwidthSpecResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticBandwidthSpecResponse() = default;
};
class DescribeHealthCheckListRequest : public Darabonba::Model {
public:
  shared_ptr<string> listeners{};
  shared_ptr<string> sourceIp{};

  DescribeHealthCheckListRequest() {}

  explicit DescribeHealthCheckListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = boost::any(*listeners);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      listeners = make_shared<string>(boost::any_cast<string>(m["Listeners"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeHealthCheckListRequest() = default;
};
class DescribeHealthCheckListResponseBodyListenersHealthCheck : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> down{};
  shared_ptr<long> interval{};
  shared_ptr<long> port{};
  shared_ptr<long> timeout{};
  shared_ptr<string> type{};
  shared_ptr<long> up{};
  shared_ptr<string> uri{};

  DescribeHealthCheckListResponseBodyListenersHealthCheck() {}

  explicit DescribeHealthCheckListResponseBodyListenersHealthCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (down) {
      res["Down"] = boost::any(*down);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (up) {
      res["Up"] = boost::any(*up);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Down") != m.end() && !m["Down"].empty()) {
      down = make_shared<long>(boost::any_cast<long>(m["Down"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Up") != m.end() && !m["Up"].empty()) {
      up = make_shared<long>(boost::any_cast<long>(m["Up"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~DescribeHealthCheckListResponseBodyListenersHealthCheck() = default;
};
class DescribeHealthCheckListResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<long> frontendPort{};
  shared_ptr<DescribeHealthCheckListResponseBodyListenersHealthCheck> healthCheck{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> protocol{};

  DescribeHealthCheckListResponseBodyListeners() {}

  explicit DescribeHealthCheckListResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frontendPort) {
      res["FrontendPort"] = boost::any(*frontendPort);
    }
    if (healthCheck) {
      res["HealthCheck"] = healthCheck ? boost::any(healthCheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrontendPort") != m.end() && !m["FrontendPort"].empty()) {
      frontendPort = make_shared<long>(boost::any_cast<long>(m["FrontendPort"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheck"].type()) {
        DescribeHealthCheckListResponseBodyListenersHealthCheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheck"]));
        healthCheck = make_shared<DescribeHealthCheckListResponseBodyListenersHealthCheck>(model1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeHealthCheckListResponseBodyListeners() = default;
};
class DescribeHealthCheckListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHealthCheckListResponseBodyListeners>> listeners{};
  shared_ptr<string> requestId{};

  DescribeHealthCheckListResponseBody() {}

  explicit DescribeHealthCheckListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<DescribeHealthCheckListResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHealthCheckListResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<DescribeHealthCheckListResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHealthCheckListResponseBody() = default;
};
class DescribeHealthCheckListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHealthCheckListResponseBody> body{};

  DescribeHealthCheckListResponse() {}

  explicit DescribeHealthCheckListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHealthCheckListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHealthCheckListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHealthCheckListResponse() = default;
};
class DescribeHealthCheckStatusListRequest : public Darabonba::Model {
public:
  shared_ptr<string> listeners{};
  shared_ptr<string> sourceIp{};

  DescribeHealthCheckStatusListRequest() {}

  explicit DescribeHealthCheckStatusListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = boost::any(*listeners);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      listeners = make_shared<string>(boost::any_cast<string>(m["Listeners"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeHealthCheckStatusListRequest() = default;
};
class DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> status{};

  DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList() {}

  explicit DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList() = default;
};
class DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList : public Darabonba::Model {
public:
  shared_ptr<long> frontendPort{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> protocol{};
  shared_ptr<vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList>> realServerStatusList{};
  shared_ptr<string> status{};

  DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList() {}

  explicit DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frontendPort) {
      res["FrontendPort"] = boost::any(*frontendPort);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (realServerStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*realServerStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RealServerStatusList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrontendPort") != m.end() && !m["FrontendPort"].empty()) {
      frontendPort = make_shared<long>(boost::any_cast<long>(m["FrontendPort"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RealServerStatusList") != m.end() && !m["RealServerStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["RealServerStatusList"].type()) {
        vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RealServerStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        realServerStatusList = make_shared<vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList() = default;
};
class DescribeHealthCheckStatusListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList>> healthCheckStatusList{};
  shared_ptr<string> requestId{};

  DescribeHealthCheckStatusListResponseBody() {}

  explicit DescribeHealthCheckStatusListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*healthCheckStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HealthCheckStatusList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckStatusList") != m.end() && !m["HealthCheckStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["HealthCheckStatusList"].type()) {
        vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HealthCheckStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        healthCheckStatusList = make_shared<vector<DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHealthCheckStatusListResponseBody() = default;
};
class DescribeHealthCheckStatusListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHealthCheckStatusListResponseBody> body{};

  DescribeHealthCheckStatusListResponse() {}

  explicit DescribeHealthCheckStatusListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHealthCheckStatusListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHealthCheckStatusListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHealthCheckStatusListResponse() = default;
};
class DescribeInstanceDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};
  shared_ptr<string> sourceIp{};

  DescribeInstanceDetailsRequest() {}

  explicit DescribeInstanceDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeInstanceDetailsRequest() = default;
};
class DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList : public Darabonba::Model {
public:
  shared_ptr<string> eip{};
  shared_ptr<string> status{};

  DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList() {}

  explicit DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eip) {
      res["Eip"] = boost::any(*eip);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Eip") != m.end() && !m["Eip"].empty()) {
      eip = make_shared<string>(boost::any_cast<string>(m["Eip"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList() = default;
};
class DescribeInstanceDetailsResponseBodyInstanceDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList>> eipInfoList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> line{};

  DescribeInstanceDetailsResponseBodyInstanceDetails() {}

  explicit DescribeInstanceDetailsResponseBodyInstanceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eipInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*eipInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EipInfoList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EipInfoList") != m.end() && !m["EipInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["EipInfoList"].type()) {
        vector<DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EipInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eipInfoList = make_shared<vector<DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<string>(boost::any_cast<string>(m["Line"]));
    }
  }


  virtual ~DescribeInstanceDetailsResponseBodyInstanceDetails() = default;
};
class DescribeInstanceDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceDetailsResponseBodyInstanceDetails>> instanceDetails{};
  shared_ptr<string> requestId{};

  DescribeInstanceDetailsResponseBody() {}

  explicit DescribeInstanceDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*instanceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceDetails") != m.end() && !m["InstanceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceDetails"].type()) {
        vector<DescribeInstanceDetailsResponseBodyInstanceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceDetailsResponseBodyInstanceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceDetails = make_shared<vector<DescribeInstanceDetailsResponseBodyInstanceDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceDetailsResponseBody() = default;
};
class DescribeInstanceDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceDetailsResponseBody> body{};

  DescribeInstanceDetailsResponse() {}

  explicit DescribeInstanceDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceDetailsResponse() = default;
};
class DescribeInstanceSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};
  shared_ptr<string> sourceIp{};

  DescribeInstanceSpecsRequest() {}

  explicit DescribeInstanceSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeInstanceSpecsRequest() = default;
};
class DescribeInstanceSpecsResponseBodyInstanceSpecs : public Darabonba::Model {
public:
  shared_ptr<long> bandwidthMbps{};
  shared_ptr<long> baseBandwidth{};
  shared_ptr<long> defenseCount{};
  shared_ptr<long> domainLimit{};
  shared_ptr<long> elasticBandwidth{};
  shared_ptr<string> functionVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> portLimit{};
  shared_ptr<long> qpsLimit{};
  shared_ptr<long> siteLimit{};

  DescribeInstanceSpecsResponseBodyInstanceSpecs() {}

  explicit DescribeInstanceSpecsResponseBodyInstanceSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthMbps) {
      res["BandwidthMbps"] = boost::any(*bandwidthMbps);
    }
    if (baseBandwidth) {
      res["BaseBandwidth"] = boost::any(*baseBandwidth);
    }
    if (defenseCount) {
      res["DefenseCount"] = boost::any(*defenseCount);
    }
    if (domainLimit) {
      res["DomainLimit"] = boost::any(*domainLimit);
    }
    if (elasticBandwidth) {
      res["ElasticBandwidth"] = boost::any(*elasticBandwidth);
    }
    if (functionVersion) {
      res["FunctionVersion"] = boost::any(*functionVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (portLimit) {
      res["PortLimit"] = boost::any(*portLimit);
    }
    if (qpsLimit) {
      res["QpsLimit"] = boost::any(*qpsLimit);
    }
    if (siteLimit) {
      res["SiteLimit"] = boost::any(*siteLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthMbps") != m.end() && !m["BandwidthMbps"].empty()) {
      bandwidthMbps = make_shared<long>(boost::any_cast<long>(m["BandwidthMbps"]));
    }
    if (m.find("BaseBandwidth") != m.end() && !m["BaseBandwidth"].empty()) {
      baseBandwidth = make_shared<long>(boost::any_cast<long>(m["BaseBandwidth"]));
    }
    if (m.find("DefenseCount") != m.end() && !m["DefenseCount"].empty()) {
      defenseCount = make_shared<long>(boost::any_cast<long>(m["DefenseCount"]));
    }
    if (m.find("DomainLimit") != m.end() && !m["DomainLimit"].empty()) {
      domainLimit = make_shared<long>(boost::any_cast<long>(m["DomainLimit"]));
    }
    if (m.find("ElasticBandwidth") != m.end() && !m["ElasticBandwidth"].empty()) {
      elasticBandwidth = make_shared<long>(boost::any_cast<long>(m["ElasticBandwidth"]));
    }
    if (m.find("FunctionVersion") != m.end() && !m["FunctionVersion"].empty()) {
      functionVersion = make_shared<string>(boost::any_cast<string>(m["FunctionVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PortLimit") != m.end() && !m["PortLimit"].empty()) {
      portLimit = make_shared<long>(boost::any_cast<long>(m["PortLimit"]));
    }
    if (m.find("QpsLimit") != m.end() && !m["QpsLimit"].empty()) {
      qpsLimit = make_shared<long>(boost::any_cast<long>(m["QpsLimit"]));
    }
    if (m.find("SiteLimit") != m.end() && !m["SiteLimit"].empty()) {
      siteLimit = make_shared<long>(boost::any_cast<long>(m["SiteLimit"]));
    }
  }


  virtual ~DescribeInstanceSpecsResponseBodyInstanceSpecs() = default;
};
class DescribeInstanceSpecsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceSpecsResponseBodyInstanceSpecs>> instanceSpecs{};
  shared_ptr<string> requestId{};

  DescribeInstanceSpecsResponseBody() {}

  explicit DescribeInstanceSpecsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*instanceSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceSpecs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSpecs") != m.end() && !m["InstanceSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceSpecs"].type()) {
        vector<DescribeInstanceSpecsResponseBodyInstanceSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceSpecsResponseBodyInstanceSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceSpecs = make_shared<vector<DescribeInstanceSpecsResponseBodyInstanceSpecs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceSpecsResponseBody() = default;
};
class DescribeInstanceSpecsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceSpecsResponseBody> body{};

  DescribeInstanceSpecsResponse() {}

  explicit DescribeInstanceSpecsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceSpecsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSpecsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSpecsResponse() = default;
};
class DescribeInstanceStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};
  shared_ptr<string> sourceIp{};

  DescribeInstanceStatisticsRequest() {}

  explicit DescribeInstanceStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeInstanceStatisticsRequest() = default;
};
class DescribeInstanceStatisticsResponseBodyInstanceStatistics : public Darabonba::Model {
public:
  shared_ptr<long> defenseCountUsage{};
  shared_ptr<long> domainUsage{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> portUsage{};
  shared_ptr<long> siteUsage{};

  DescribeInstanceStatisticsResponseBodyInstanceStatistics() {}

  explicit DescribeInstanceStatisticsResponseBodyInstanceStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseCountUsage) {
      res["DefenseCountUsage"] = boost::any(*defenseCountUsage);
    }
    if (domainUsage) {
      res["DomainUsage"] = boost::any(*domainUsage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (portUsage) {
      res["PortUsage"] = boost::any(*portUsage);
    }
    if (siteUsage) {
      res["SiteUsage"] = boost::any(*siteUsage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseCountUsage") != m.end() && !m["DefenseCountUsage"].empty()) {
      defenseCountUsage = make_shared<long>(boost::any_cast<long>(m["DefenseCountUsage"]));
    }
    if (m.find("DomainUsage") != m.end() && !m["DomainUsage"].empty()) {
      domainUsage = make_shared<long>(boost::any_cast<long>(m["DomainUsage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PortUsage") != m.end() && !m["PortUsage"].empty()) {
      portUsage = make_shared<long>(boost::any_cast<long>(m["PortUsage"]));
    }
    if (m.find("SiteUsage") != m.end() && !m["SiteUsage"].empty()) {
      siteUsage = make_shared<long>(boost::any_cast<long>(m["SiteUsage"]));
    }
  }


  virtual ~DescribeInstanceStatisticsResponseBodyInstanceStatistics() = default;
};
class DescribeInstanceStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics>> instanceStatistics{};
  shared_ptr<string> requestId{};

  DescribeInstanceStatisticsResponseBody() {}

  explicit DescribeInstanceStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceStatistics) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStatistics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStatistics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceStatistics") != m.end() && !m["InstanceStatistics"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStatistics"].type()) {
        vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStatistics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceStatisticsResponseBodyInstanceStatistics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStatistics = make_shared<vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceStatisticsResponseBody() = default;
};
class DescribeInstanceStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceStatisticsResponseBody> body{};

  DescribeInstanceStatisticsResponse() {}

  explicit DescribeInstanceStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceStatisticsResponse() = default;
};
class DescribeInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesRequestTag() {}

  explicit DescribeInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesRequestTag() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> edition{};
  shared_ptr<long> enabled{};
  shared_ptr<long> expireEndTime{};
  shared_ptr<long> expireStartTime{};
  shared_ptr<string> instanceIds{};
  shared_ptr<string> ip{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<vector<long>> status{};
  shared_ptr<vector<DescribeInstancesRequestTag>> tag{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (expireEndTime) {
      res["ExpireEndTime"] = boost::any(*expireEndTime);
    }
    if (expireStartTime) {
      res["ExpireStartTime"] = boost::any(*expireStartTime);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<long>(boost::any_cast<long>(m["Edition"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<long>(boost::any_cast<long>(m["Enabled"]));
    }
    if (m.find("ExpireEndTime") != m.end() && !m["ExpireEndTime"].empty()) {
      expireEndTime = make_shared<long>(boost::any_cast<long>(m["ExpireEndTime"]));
    }
    if (m.find("ExpireStartTime") != m.end() && !m["ExpireStartTime"].empty()) {
      expireStartTime = make_shared<long>(boost::any_cast<long>(m["ExpireStartTime"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      status = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<long> debtStatus{};
  shared_ptr<long> edition{};
  shared_ptr<long> enabled{};
  shared_ptr<long> expireTime{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debtStatus) {
      res["DebtStatus"] = boost::any(*debtStatus);
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebtStatus") != m.end() && !m["DebtStatus"].empty()) {
      debtStatus = make_shared<long>(boost::any_cast<long>(m["DebtStatus"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<long>(boost::any_cast<long>(m["Edition"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<long>(boost::any_cast<long>(m["Enabled"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeIpTrafficRequest : public Darabonba::Model {
public:
  shared_ptr<string> eip{};
  shared_ptr<long> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<long> port{};
  shared_ptr<string> queryProtocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeIpTrafficRequest() {}

  explicit DescribeIpTrafficRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eip) {
      res["Eip"] = boost::any(*eip);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (queryProtocol) {
      res["QueryProtocol"] = boost::any(*queryProtocol);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Eip") != m.end() && !m["Eip"].empty()) {
      eip = make_shared<string>(boost::any_cast<string>(m["Eip"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("QueryProtocol") != m.end() && !m["QueryProtocol"].empty()) {
      queryProtocol = make_shared<string>(boost::any_cast<string>(m["QueryProtocol"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeIpTrafficRequest() = default;
};
class DescribeIpTrafficResponseBodyIpTrafficPoints : public Darabonba::Model {
public:
  shared_ptr<long> actConns{};
  shared_ptr<long> cps{};
  shared_ptr<long> inactConns{};
  shared_ptr<long> maxInbps{};
  shared_ptr<long> maxOutbps{};
  shared_ptr<long> time{};

  DescribeIpTrafficResponseBodyIpTrafficPoints() {}

  explicit DescribeIpTrafficResponseBodyIpTrafficPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actConns) {
      res["ActConns"] = boost::any(*actConns);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (inactConns) {
      res["InactConns"] = boost::any(*inactConns);
    }
    if (maxInbps) {
      res["MaxInbps"] = boost::any(*maxInbps);
    }
    if (maxOutbps) {
      res["MaxOutbps"] = boost::any(*maxOutbps);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActConns") != m.end() && !m["ActConns"].empty()) {
      actConns = make_shared<long>(boost::any_cast<long>(m["ActConns"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("InactConns") != m.end() && !m["InactConns"].empty()) {
      inactConns = make_shared<long>(boost::any_cast<long>(m["InactConns"]));
    }
    if (m.find("MaxInbps") != m.end() && !m["MaxInbps"].empty()) {
      maxInbps = make_shared<long>(boost::any_cast<long>(m["MaxInbps"]));
    }
    if (m.find("MaxOutbps") != m.end() && !m["MaxOutbps"].empty()) {
      maxOutbps = make_shared<long>(boost::any_cast<long>(m["MaxOutbps"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~DescribeIpTrafficResponseBodyIpTrafficPoints() = default;
};
class DescribeIpTrafficResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> avgInBps{};
  shared_ptr<long> avgOutBps{};
  shared_ptr<vector<DescribeIpTrafficResponseBodyIpTrafficPoints>> ipTrafficPoints{};
  shared_ptr<long> maxInBps{};
  shared_ptr<long> maxOutBps{};
  shared_ptr<string> requestId{};

  DescribeIpTrafficResponseBody() {}

  explicit DescribeIpTrafficResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgInBps) {
      res["AvgInBps"] = boost::any(*avgInBps);
    }
    if (avgOutBps) {
      res["AvgOutBps"] = boost::any(*avgOutBps);
    }
    if (ipTrafficPoints) {
      vector<boost::any> temp1;
      for(auto item1:*ipTrafficPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpTrafficPoints"] = boost::any(temp1);
    }
    if (maxInBps) {
      res["MaxInBps"] = boost::any(*maxInBps);
    }
    if (maxOutBps) {
      res["MaxOutBps"] = boost::any(*maxOutBps);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgInBps") != m.end() && !m["AvgInBps"].empty()) {
      avgInBps = make_shared<long>(boost::any_cast<long>(m["AvgInBps"]));
    }
    if (m.find("AvgOutBps") != m.end() && !m["AvgOutBps"].empty()) {
      avgOutBps = make_shared<long>(boost::any_cast<long>(m["AvgOutBps"]));
    }
    if (m.find("IpTrafficPoints") != m.end() && !m["IpTrafficPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["IpTrafficPoints"].type()) {
        vector<DescribeIpTrafficResponseBodyIpTrafficPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpTrafficPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIpTrafficResponseBodyIpTrafficPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipTrafficPoints = make_shared<vector<DescribeIpTrafficResponseBodyIpTrafficPoints>>(expect1);
      }
    }
    if (m.find("MaxInBps") != m.end() && !m["MaxInBps"].empty()) {
      maxInBps = make_shared<long>(boost::any_cast<long>(m["MaxInBps"]));
    }
    if (m.find("MaxOutBps") != m.end() && !m["MaxOutBps"].empty()) {
      maxOutBps = make_shared<long>(boost::any_cast<long>(m["MaxOutBps"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIpTrafficResponseBody() = default;
};
class DescribeIpTrafficResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIpTrafficResponseBody> body{};

  DescribeIpTrafficResponse() {}

  explicit DescribeIpTrafficResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIpTrafficResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpTrafficResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpTrafficResponse() = default;
};
class DescribeLayer4RuleAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> listeners{};
  shared_ptr<string> sourceIp{};

  DescribeLayer4RuleAttributesRequest() {}

  explicit DescribeLayer4RuleAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      res["Listeners"] = boost::any(*listeners);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      listeners = make_shared<string>(boost::any_cast<string>(m["Listeners"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesRequest() = default;
};
class DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack : public Darabonba::Model {
public:
  shared_ptr<long> cnt{};
  shared_ptr<long> during{};
  shared_ptr<long> expires{};
  shared_ptr<long> type{};

  DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack() {}

  explicit DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnt) {
      res["Cnt"] = boost::any(*cnt);
    }
    if (during) {
      res["During"] = boost::any(*during);
    }
    if (expires) {
      res["Expires"] = boost::any(*expires);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cnt") != m.end() && !m["Cnt"].empty()) {
      cnt = make_shared<long>(boost::any_cast<long>(m["Cnt"]));
    }
    if (m.find("During") != m.end() && !m["During"].empty()) {
      during = make_shared<long>(boost::any_cast<long>(m["During"]));
    }
    if (m.find("Expires") != m.end() && !m["Expires"].empty()) {
      expires = make_shared<long>(boost::any_cast<long>(m["Expires"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack() = default;
};
class DescribeLayer4RuleAttributesResponseBodyListenersConfigCc : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack>> sblack{};

  DescribeLayer4RuleAttributesResponseBodyListenersConfigCc() {}

  explicit DescribeLayer4RuleAttributesResponseBodyListenersConfigCc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sblack) {
      vector<boost::any> temp1;
      for(auto item1:*sblack){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sblack"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sblack") != m.end() && !m["Sblack"].empty()) {
      if (typeid(vector<boost::any>) == m["Sblack"].type()) {
        vector<DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sblack"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sblack = make_shared<vector<DescribeLayer4RuleAttributesResponseBodyListenersConfigCcSblack>>(expect1);
      }
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigCc() = default;
};
class DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen : public Darabonba::Model {
public:
  shared_ptr<long> max{};
  shared_ptr<long> min{};

  DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen() {}

  explicit DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (max) {
      res["Max"] = boost::any(*max);
    }
    if (min) {
      res["Min"] = boost::any(*min);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Max") != m.end() && !m["Max"].empty()) {
      max = make_shared<long>(boost::any_cast<long>(m["Max"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      min = make_shared<long>(boost::any_cast<long>(m["Min"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen() = default;
};
class DescribeLayer4RuleAttributesResponseBodyListenersConfigSla : public Darabonba::Model {
public:
  shared_ptr<long> cps{};
  shared_ptr<long> cpsEnable{};
  shared_ptr<long> maxconn{};
  shared_ptr<long> maxconnEnable{};

  DescribeLayer4RuleAttributesResponseBodyListenersConfigSla() {}

  explicit DescribeLayer4RuleAttributesResponseBodyListenersConfigSla(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (cpsEnable) {
      res["CpsEnable"] = boost::any(*cpsEnable);
    }
    if (maxconn) {
      res["Maxconn"] = boost::any(*maxconn);
    }
    if (maxconnEnable) {
      res["MaxconnEnable"] = boost::any(*maxconnEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("CpsEnable") != m.end() && !m["CpsEnable"].empty()) {
      cpsEnable = make_shared<long>(boost::any_cast<long>(m["CpsEnable"]));
    }
    if (m.find("Maxconn") != m.end() && !m["Maxconn"].empty()) {
      maxconn = make_shared<long>(boost::any_cast<long>(m["Maxconn"]));
    }
    if (m.find("MaxconnEnable") != m.end() && !m["MaxconnEnable"].empty()) {
      maxconnEnable = make_shared<long>(boost::any_cast<long>(m["MaxconnEnable"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigSla() = default;
};
class DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<long> cps{};
  shared_ptr<long> cpsEnable{};
  shared_ptr<long> cpsMode{};
  shared_ptr<long> maxconn{};
  shared_ptr<long> maxconnEnable{};
  shared_ptr<long> pps{};

  DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit() {}

  explicit DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (cpsEnable) {
      res["CpsEnable"] = boost::any(*cpsEnable);
    }
    if (cpsMode) {
      res["CpsMode"] = boost::any(*cpsMode);
    }
    if (maxconn) {
      res["Maxconn"] = boost::any(*maxconn);
    }
    if (maxconnEnable) {
      res["MaxconnEnable"] = boost::any(*maxconnEnable);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("CpsEnable") != m.end() && !m["CpsEnable"].empty()) {
      cpsEnable = make_shared<long>(boost::any_cast<long>(m["CpsEnable"]));
    }
    if (m.find("CpsMode") != m.end() && !m["CpsMode"].empty()) {
      cpsMode = make_shared<long>(boost::any_cast<long>(m["CpsMode"]));
    }
    if (m.find("Maxconn") != m.end() && !m["Maxconn"].empty()) {
      maxconn = make_shared<long>(boost::any_cast<long>(m["Maxconn"]));
    }
    if (m.find("MaxconnEnable") != m.end() && !m["MaxconnEnable"].empty()) {
      maxconnEnable = make_shared<long>(boost::any_cast<long>(m["MaxconnEnable"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit() = default;
};
class DescribeLayer4RuleAttributesResponseBodyListenersConfig : public Darabonba::Model {
public:
  shared_ptr<DescribeLayer4RuleAttributesResponseBodyListenersConfigCc> cc{};
  shared_ptr<string> nodataConn{};
  shared_ptr<DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen> payloadLen{};
  shared_ptr<long> persistenceTimeout{};
  shared_ptr<DescribeLayer4RuleAttributesResponseBodyListenersConfigSla> sla{};
  shared_ptr<DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit> slimit{};
  shared_ptr<string> synproxy{};

  DescribeLayer4RuleAttributesResponseBodyListenersConfig() {}

  explicit DescribeLayer4RuleAttributesResponseBodyListenersConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cc) {
      res["Cc"] = cc ? boost::any(cc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodataConn) {
      res["NodataConn"] = boost::any(*nodataConn);
    }
    if (payloadLen) {
      res["PayloadLen"] = payloadLen ? boost::any(payloadLen->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (persistenceTimeout) {
      res["PersistenceTimeout"] = boost::any(*persistenceTimeout);
    }
    if (sla) {
      res["Sla"] = sla ? boost::any(sla->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (slimit) {
      res["Slimit"] = slimit ? boost::any(slimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (synproxy) {
      res["Synproxy"] = boost::any(*synproxy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cc") != m.end() && !m["Cc"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cc"].type()) {
        DescribeLayer4RuleAttributesResponseBodyListenersConfigCc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cc"]));
        cc = make_shared<DescribeLayer4RuleAttributesResponseBodyListenersConfigCc>(model1);
      }
    }
    if (m.find("NodataConn") != m.end() && !m["NodataConn"].empty()) {
      nodataConn = make_shared<string>(boost::any_cast<string>(m["NodataConn"]));
    }
    if (m.find("PayloadLen") != m.end() && !m["PayloadLen"].empty()) {
      if (typeid(map<string, boost::any>) == m["PayloadLen"].type()) {
        DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PayloadLen"]));
        payloadLen = make_shared<DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen>(model1);
      }
    }
    if (m.find("PersistenceTimeout") != m.end() && !m["PersistenceTimeout"].empty()) {
      persistenceTimeout = make_shared<long>(boost::any_cast<long>(m["PersistenceTimeout"]));
    }
    if (m.find("Sla") != m.end() && !m["Sla"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sla"].type()) {
        DescribeLayer4RuleAttributesResponseBodyListenersConfigSla model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sla"]));
        sla = make_shared<DescribeLayer4RuleAttributesResponseBodyListenersConfigSla>(model1);
      }
    }
    if (m.find("Slimit") != m.end() && !m["Slimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Slimit"].type()) {
        DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Slimit"]));
        slimit = make_shared<DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit>(model1);
      }
    }
    if (m.find("Synproxy") != m.end() && !m["Synproxy"].empty()) {
      synproxy = make_shared<string>(boost::any_cast<string>(m["Synproxy"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfig() = default;
};
class DescribeLayer4RuleAttributesResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<DescribeLayer4RuleAttributesResponseBodyListenersConfig> config{};
  shared_ptr<long> frontendPort{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> protocol{};

  DescribeLayer4RuleAttributesResponseBodyListeners() {}

  explicit DescribeLayer4RuleAttributesResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (frontendPort) {
      res["FrontendPort"] = boost::any(*frontendPort);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        DescribeLayer4RuleAttributesResponseBodyListenersConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<DescribeLayer4RuleAttributesResponseBodyListenersConfig>(model1);
      }
    }
    if (m.find("FrontendPort") != m.end() && !m["FrontendPort"].empty()) {
      frontendPort = make_shared<long>(boost::any_cast<long>(m["FrontendPort"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBodyListeners() = default;
};
class DescribeLayer4RuleAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLayer4RuleAttributesResponseBodyListeners>> listeners{};
  shared_ptr<string> requestId{};

  DescribeLayer4RuleAttributesResponseBody() {}

  explicit DescribeLayer4RuleAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<DescribeLayer4RuleAttributesResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLayer4RuleAttributesResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<DescribeLayer4RuleAttributesResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponseBody() = default;
};
class DescribeLayer4RuleAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLayer4RuleAttributesResponseBody> body{};

  DescribeLayer4RuleAttributesResponse() {}

  explicit DescribeLayer4RuleAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLayer4RuleAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLayer4RuleAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLayer4RuleAttributesResponse() = default;
};
class DescribeLayer4RulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> forwardProtocol{};
  shared_ptr<long> frontendPort{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> offset{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sourceIp{};

  DescribeLayer4RulesRequest() {}

  explicit DescribeLayer4RulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardProtocol) {
      res["ForwardProtocol"] = boost::any(*forwardProtocol);
    }
    if (frontendPort) {
      res["FrontendPort"] = boost::any(*frontendPort);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardProtocol") != m.end() && !m["ForwardProtocol"].empty()) {
      forwardProtocol = make_shared<string>(boost::any_cast<string>(m["ForwardProtocol"]));
    }
    if (m.find("FrontendPort") != m.end() && !m["FrontendPort"].empty()) {
      frontendPort = make_shared<long>(boost::any_cast<long>(m["FrontendPort"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeLayer4RulesRequest() = default;
};
class DescribeLayer4RulesResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<long> backendPort{};
  shared_ptr<long> bakMode{};
  shared_ptr<long> currentIndex{};
  shared_ptr<string> eip{};
  shared_ptr<long> frontendPort{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isAutoCreate{};
  shared_ptr<long> payloadRuleEnable{};
  shared_ptr<string> protocol{};
  shared_ptr<long> proxyEnable{};
  shared_ptr<string> proxyStatus{};
  shared_ptr<vector<string>> realServers{};
  shared_ptr<string> remark{};

  DescribeLayer4RulesResponseBodyListeners() {}

  explicit DescribeLayer4RulesResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendPort) {
      res["BackendPort"] = boost::any(*backendPort);
    }
    if (bakMode) {
      res["BakMode"] = boost::any(*bakMode);
    }
    if (currentIndex) {
      res["CurrentIndex"] = boost::any(*currentIndex);
    }
    if (eip) {
      res["Eip"] = boost::any(*eip);
    }
    if (frontendPort) {
      res["FrontendPort"] = boost::any(*frontendPort);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isAutoCreate) {
      res["IsAutoCreate"] = boost::any(*isAutoCreate);
    }
    if (payloadRuleEnable) {
      res["PayloadRuleEnable"] = boost::any(*payloadRuleEnable);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (proxyEnable) {
      res["ProxyEnable"] = boost::any(*proxyEnable);
    }
    if (proxyStatus) {
      res["ProxyStatus"] = boost::any(*proxyStatus);
    }
    if (realServers) {
      res["RealServers"] = boost::any(*realServers);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendPort") != m.end() && !m["BackendPort"].empty()) {
      backendPort = make_shared<long>(boost::any_cast<long>(m["BackendPort"]));
    }
    if (m.find("BakMode") != m.end() && !m["BakMode"].empty()) {
      bakMode = make_shared<long>(boost::any_cast<long>(m["BakMode"]));
    }
    if (m.find("CurrentIndex") != m.end() && !m["CurrentIndex"].empty()) {
      currentIndex = make_shared<long>(boost::any_cast<long>(m["CurrentIndex"]));
    }
    if (m.find("Eip") != m.end() && !m["Eip"].empty()) {
      eip = make_shared<string>(boost::any_cast<string>(m["Eip"]));
    }
    if (m.find("FrontendPort") != m.end() && !m["FrontendPort"].empty()) {
      frontendPort = make_shared<long>(boost::any_cast<long>(m["FrontendPort"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsAutoCreate") != m.end() && !m["IsAutoCreate"].empty()) {
      isAutoCreate = make_shared<bool>(boost::any_cast<bool>(m["IsAutoCreate"]));
    }
    if (m.find("PayloadRuleEnable") != m.end() && !m["PayloadRuleEnable"].empty()) {
      payloadRuleEnable = make_shared<long>(boost::any_cast<long>(m["PayloadRuleEnable"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ProxyEnable") != m.end() && !m["ProxyEnable"].empty()) {
      proxyEnable = make_shared<long>(boost::any_cast<long>(m["ProxyEnable"]));
    }
    if (m.find("ProxyStatus") != m.end() && !m["ProxyStatus"].empty()) {
      proxyStatus = make_shared<string>(boost::any_cast<string>(m["ProxyStatus"]));
    }
    if (m.find("RealServers") != m.end() && !m["RealServers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RealServers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RealServers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      realServers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~DescribeLayer4RulesResponseBodyListeners() = default;
};
class DescribeLayer4RulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLayer4RulesResponseBodyListeners>> listeners{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeLayer4RulesResponseBody() {}

  explicit DescribeLayer4RulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<DescribeLayer4RulesResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLayer4RulesResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<DescribeLayer4RulesResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeLayer4RulesResponseBody() = default;
};
class DescribeLayer4RulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLayer4RulesResponseBody> body{};

  DescribeLayer4RulesResponse() {}

  explicit DescribeLayer4RulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLayer4RulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLayer4RulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLayer4RulesResponse() = default;
};
class DescribeLayer7CCRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> offset{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeLayer7CCRulesRequest() {}

  explicit DescribeLayer7CCRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeLayer7CCRulesRequest() = default;
};
class DescribeLayer7CCRulesResponseBodyLayer7CCRules : public Darabonba::Model {
public:
  shared_ptr<string> act{};
  shared_ptr<long> count{};
  shared_ptr<long> interval{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<long> ttl{};
  shared_ptr<string> uri{};

  DescribeLayer7CCRulesResponseBodyLayer7CCRules() {}

  explicit DescribeLayer7CCRulesResponseBodyLayer7CCRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (act) {
      res["Act"] = boost::any(*act);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Act") != m.end() && !m["Act"].empty()) {
      act = make_shared<string>(boost::any_cast<string>(m["Act"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~DescribeLayer7CCRulesResponseBodyLayer7CCRules() = default;
};
class DescribeLayer7CCRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules>> layer7CCRules{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeLayer7CCRulesResponseBody() {}

  explicit DescribeLayer7CCRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layer7CCRules) {
      vector<boost::any> temp1;
      for(auto item1:*layer7CCRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layer7CCRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layer7CCRules") != m.end() && !m["Layer7CCRules"].empty()) {
      if (typeid(vector<boost::any>) == m["Layer7CCRules"].type()) {
        vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layer7CCRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLayer7CCRulesResponseBodyLayer7CCRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layer7CCRules = make_shared<vector<DescribeLayer7CCRulesResponseBodyLayer7CCRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeLayer7CCRulesResponseBody() = default;
};
class DescribeLayer7CCRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLayer7CCRulesResponseBody> body{};

  DescribeLayer7CCRulesResponse() {}

  explicit DescribeLayer7CCRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLayer7CCRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLayer7CCRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLayer7CCRulesResponse() = default;
};
class DescribeLogStoreExistStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeLogStoreExistStatusRequest() {}

  explicit DescribeLogStoreExistStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeLogStoreExistStatusRequest() = default;
};
class DescribeLogStoreExistStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> existStatus{};
  shared_ptr<string> requestId{};

  DescribeLogStoreExistStatusResponseBody() {}

  explicit DescribeLogStoreExistStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (existStatus) {
      res["ExistStatus"] = boost::any(*existStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExistStatus") != m.end() && !m["ExistStatus"].empty()) {
      existStatus = make_shared<bool>(boost::any_cast<bool>(m["ExistStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLogStoreExistStatusResponseBody() = default;
};
class DescribeLogStoreExistStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogStoreExistStatusResponseBody> body{};

  DescribeLogStoreExistStatusResponse() {}

  explicit DescribeLogStoreExistStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogStoreExistStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogStoreExistStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogStoreExistStatusResponse() = default;
};
class DescribeOpEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> entityObject{};
  shared_ptr<long> entityType{};
  shared_ptr<long> opAction{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> startTime{};

  DescribeOpEntitiesRequest() {}

  explicit DescribeOpEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityObject) {
      res["EntityObject"] = boost::any(*entityObject);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (opAction) {
      res["OpAction"] = boost::any(*opAction);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EntityObject") != m.end() && !m["EntityObject"].empty()) {
      entityObject = make_shared<string>(boost::any_cast<string>(m["EntityObject"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<long>(boost::any_cast<long>(m["EntityType"]));
    }
    if (m.find("OpAction") != m.end() && !m["OpAction"].empty()) {
      opAction = make_shared<long>(boost::any_cast<long>(m["OpAction"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeOpEntitiesRequest() = default;
};
class DescribeOpEntitiesResponseBodyOpEntities : public Darabonba::Model {
public:
  shared_ptr<string> entityObject{};
  shared_ptr<long> entityType{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> opAccount{};
  shared_ptr<long> opAction{};
  shared_ptr<string> opDesc{};

  DescribeOpEntitiesResponseBodyOpEntities() {}

  explicit DescribeOpEntitiesResponseBodyOpEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityObject) {
      res["EntityObject"] = boost::any(*entityObject);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (opAccount) {
      res["OpAccount"] = boost::any(*opAccount);
    }
    if (opAction) {
      res["OpAction"] = boost::any(*opAction);
    }
    if (opDesc) {
      res["OpDesc"] = boost::any(*opDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityObject") != m.end() && !m["EntityObject"].empty()) {
      entityObject = make_shared<string>(boost::any_cast<string>(m["EntityObject"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<long>(boost::any_cast<long>(m["EntityType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("OpAccount") != m.end() && !m["OpAccount"].empty()) {
      opAccount = make_shared<string>(boost::any_cast<string>(m["OpAccount"]));
    }
    if (m.find("OpAction") != m.end() && !m["OpAction"].empty()) {
      opAction = make_shared<long>(boost::any_cast<long>(m["OpAction"]));
    }
    if (m.find("OpDesc") != m.end() && !m["OpDesc"].empty()) {
      opDesc = make_shared<string>(boost::any_cast<string>(m["OpDesc"]));
    }
  }


  virtual ~DescribeOpEntitiesResponseBodyOpEntities() = default;
};
class DescribeOpEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOpEntitiesResponseBodyOpEntities>> opEntities{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeOpEntitiesResponseBody() {}

  explicit DescribeOpEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opEntities) {
      vector<boost::any> temp1;
      for(auto item1:*opEntities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpEntities"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpEntities") != m.end() && !m["OpEntities"].empty()) {
      if (typeid(vector<boost::any>) == m["OpEntities"].type()) {
        vector<DescribeOpEntitiesResponseBodyOpEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpEntities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOpEntitiesResponseBodyOpEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        opEntities = make_shared<vector<DescribeOpEntitiesResponseBodyOpEntities>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeOpEntitiesResponseBody() = default;
};
class DescribeOpEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOpEntitiesResponseBody> body{};

  DescribeOpEntitiesResponse() {}

  explicit DescribeOpEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOpEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOpEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOpEntitiesResponse() = default;
};
class DescribeSimpleDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeSimpleDomainsRequest() {}

  explicit DescribeSimpleDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeSimpleDomainsRequest() = default;
};
class DescribeSimpleDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainList{};
  shared_ptr<string> requestId{};

  DescribeSimpleDomainsResponseBody() {}

  explicit DescribeSimpleDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainList) {
      res["DomainList"] = boost::any(*domainList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSimpleDomainsResponseBody() = default;
};
class DescribeSimpleDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSimpleDomainsResponseBody> body{};

  DescribeSimpleDomainsResponse() {}

  explicit DescribeSimpleDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSimpleDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSimpleDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSimpleDomainsResponse() = default;
};
class DescribeSlsAuthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeSlsAuthStatusRequest() {}

  explicit DescribeSlsAuthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeSlsAuthStatusRequest() = default;
};
class DescribeSlsAuthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> slsAuthStatus{};

  DescribeSlsAuthStatusResponseBody() {}

  explicit DescribeSlsAuthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsAuthStatus) {
      res["SlsAuthStatus"] = boost::any(*slsAuthStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsAuthStatus") != m.end() && !m["SlsAuthStatus"].empty()) {
      slsAuthStatus = make_shared<bool>(boost::any_cast<bool>(m["SlsAuthStatus"]));
    }
  }


  virtual ~DescribeSlsAuthStatusResponseBody() = default;
};
class DescribeSlsAuthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlsAuthStatusResponseBody> body{};

  DescribeSlsAuthStatusResponse() {}

  explicit DescribeSlsAuthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlsAuthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlsAuthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlsAuthStatusResponse() = default;
};
class DescribeSlsEmptyCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeSlsEmptyCountRequest() {}

  explicit DescribeSlsEmptyCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeSlsEmptyCountRequest() = default;
};
class DescribeSlsEmptyCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> availableCount{};
  shared_ptr<string> requestId{};

  DescribeSlsEmptyCountResponseBody() {}

  explicit DescribeSlsEmptyCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableCount) {
      res["AvailableCount"] = boost::any(*availableCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableCount") != m.end() && !m["AvailableCount"].empty()) {
      availableCount = make_shared<long>(boost::any_cast<long>(m["AvailableCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSlsEmptyCountResponseBody() = default;
};
class DescribeSlsEmptyCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlsEmptyCountResponseBody> body{};

  DescribeSlsEmptyCountResponse() {}

  explicit DescribeSlsEmptyCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlsEmptyCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlsEmptyCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlsEmptyCountResponse() = default;
};
class DescribeSlsLogstoreInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeSlsLogstoreInfoRequest() {}

  explicit DescribeSlsLogstoreInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeSlsLogstoreInfoRequest() = default;
};
class DescribeSlsLogstoreInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logStore{};
  shared_ptr<string> project{};
  shared_ptr<long> quota{};
  shared_ptr<string> requestId{};
  shared_ptr<long> ttl{};
  shared_ptr<long> used{};

  DescribeSlsLogstoreInfoResponseBody() {}

  explicit DescribeSlsLogstoreInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<long>(boost::any_cast<long>(m["Used"]));
    }
  }


  virtual ~DescribeSlsLogstoreInfoResponseBody() = default;
};
class DescribeSlsLogstoreInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlsLogstoreInfoResponseBody> body{};

  DescribeSlsLogstoreInfoResponse() {}

  explicit DescribeSlsLogstoreInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlsLogstoreInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlsLogstoreInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlsLogstoreInfoResponse() = default;
};
class DescribeSlsOpenStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeSlsOpenStatusRequest() {}

  explicit DescribeSlsOpenStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeSlsOpenStatusRequest() = default;
};
class DescribeSlsOpenStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> slsOpenStatus{};

  DescribeSlsOpenStatusResponseBody() {}

  explicit DescribeSlsOpenStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsOpenStatus) {
      res["SlsOpenStatus"] = boost::any(*slsOpenStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsOpenStatus") != m.end() && !m["SlsOpenStatus"].empty()) {
      slsOpenStatus = make_shared<bool>(boost::any_cast<bool>(m["SlsOpenStatus"]));
    }
  }


  virtual ~DescribeSlsOpenStatusResponseBody() = default;
};
class DescribeSlsOpenStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlsOpenStatusResponseBody> body{};

  DescribeSlsOpenStatusResponse() {}

  explicit DescribeSlsOpenStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlsOpenStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlsOpenStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlsOpenStatusResponse() = default;
};
class DescribleCertListRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribleCertListRequest() {}

  explicit DescribleCertListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribleCertListRequest() = default;
};
class DescribleCertListResponseBodyCertList : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> common{};
  shared_ptr<bool> domainRelated{};
  shared_ptr<string> endDate{};
  shared_ptr<long> id{};
  shared_ptr<string> issuer{};
  shared_ptr<string> name{};
  shared_ptr<string> startDate{};

  DescribleCertListResponseBodyCertList() {}

  explicit DescribleCertListResponseBodyCertList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (domainRelated) {
      res["DomainRelated"] = boost::any(*domainRelated);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<string>(boost::any_cast<string>(m["Common"]));
    }
    if (m.find("DomainRelated") != m.end() && !m["DomainRelated"].empty()) {
      domainRelated = make_shared<bool>(boost::any_cast<bool>(m["DomainRelated"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribleCertListResponseBodyCertList() = default;
};
class DescribleCertListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribleCertListResponseBodyCertList>> certList{};
  shared_ptr<string> requestId{};

  DescribleCertListResponseBody() {}

  explicit DescribleCertListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certList) {
      vector<boost::any> temp1;
      for(auto item1:*certList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertList") != m.end() && !m["CertList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertList"].type()) {
        vector<DescribleCertListResponseBodyCertList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribleCertListResponseBodyCertList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certList = make_shared<vector<DescribleCertListResponseBodyCertList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribleCertListResponseBody() = default;
};
class DescribleCertListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribleCertListResponseBody> body{};

  DescribleCertListResponse() {}

  explicit DescribleCertListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribleCertListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribleCertListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribleCertListResponse() = default;
};
class DescribleLayer7InstanceRelationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainList{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribleLayer7InstanceRelationsRequest() {}

  explicit DescribleLayer7InstanceRelationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainList) {
      res["DomainList"] = boost::any(*domainList);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainList") != m.end() && !m["DomainList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DomainList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DomainList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribleLayer7InstanceRelationsRequest() = default;
};
class DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails : public Darabonba::Model {
public:
  shared_ptr<vector<string>> eipList{};
  shared_ptr<string> functionVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipMode{};
  shared_ptr<string> ipVersion{};

  DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails() {}

  explicit DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eipList) {
      res["EipList"] = boost::any(*eipList);
    }
    if (functionVersion) {
      res["FunctionVersion"] = boost::any(*functionVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipMode) {
      res["IpMode"] = boost::any(*ipMode);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EipList") != m.end() && !m["EipList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EipList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EipList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      eipList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FunctionVersion") != m.end() && !m["FunctionVersion"].empty()) {
      functionVersion = make_shared<string>(boost::any_cast<string>(m["FunctionVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpMode") != m.end() && !m["IpMode"].empty()) {
      ipMode = make_shared<string>(boost::any_cast<string>(m["IpMode"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
  }


  virtual ~DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails() = default;
};
class DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails>> instanceDetails{};

  DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations() {}

  explicit DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*instanceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceDetails") != m.end() && !m["InstanceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceDetails"].type()) {
        vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceDetails = make_shared<vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelationsInstanceDetails>>(expect1);
      }
    }
  }


  virtual ~DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations() = default;
};
class DescribleLayer7InstanceRelationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations>> layer7InstanceRelations{};
  shared_ptr<string> requestId{};

  DescribleLayer7InstanceRelationsResponseBody() {}

  explicit DescribleLayer7InstanceRelationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layer7InstanceRelations) {
      vector<boost::any> temp1;
      for(auto item1:*layer7InstanceRelations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layer7InstanceRelations"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layer7InstanceRelations") != m.end() && !m["Layer7InstanceRelations"].empty()) {
      if (typeid(vector<boost::any>) == m["Layer7InstanceRelations"].type()) {
        vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layer7InstanceRelations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layer7InstanceRelations = make_shared<vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribleLayer7InstanceRelationsResponseBody() = default;
};
class DescribleLayer7InstanceRelationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribleLayer7InstanceRelationsResponseBody> body{};

  DescribleLayer7InstanceRelationsResponse() {}

  explicit DescribleLayer7InstanceRelationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribleLayer7InstanceRelationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribleLayer7InstanceRelationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribleLayer7InstanceRelationsResponse() = default;
};
class DisableLayer7CCRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DisableLayer7CCRequest() {}

  explicit DisableLayer7CCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DisableLayer7CCRequest() = default;
};
class DisableLayer7CCResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableLayer7CCResponseBody() {}

  explicit DisableLayer7CCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableLayer7CCResponseBody() = default;
};
class DisableLayer7CCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableLayer7CCResponseBody> body{};

  DisableLayer7CCResponse() {}

  explicit DisableLayer7CCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableLayer7CCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableLayer7CCResponseBody>(model1);
      }
    }
  }


  virtual ~DisableLayer7CCResponse() = default;
};
class DisableLayer7CCRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  DisableLayer7CCRuleRequest() {}

  explicit DisableLayer7CCRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DisableLayer7CCRuleRequest() = default;
};
class DisableLayer7CCRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableLayer7CCRuleResponseBody() {}

  explicit DisableLayer7CCRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableLayer7CCRuleResponseBody() = default;
};
class DisableLayer7CCRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableLayer7CCRuleResponseBody> body{};

  DisableLayer7CCRuleResponse() {}

  explicit DisableLayer7CCRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableLayer7CCRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableLayer7CCRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DisableLayer7CCRuleResponse() = default;
};
class EmptySlsLogstoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  EmptySlsLogstoreRequest() {}

  explicit EmptySlsLogstoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~EmptySlsLogstoreRequest() = default;
};
class EmptySlsLogstoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EmptySlsLogstoreResponseBody() {}

  explicit EmptySlsLogstoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EmptySlsLogstoreResponseBody() = default;
};
class EmptySlsLogstoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EmptySlsLogstoreResponseBody> body{};

  EmptySlsLogstoreResponse() {}

  explicit EmptySlsLogstoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EmptySlsLogstoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EmptySlsLogstoreResponseBody>(model1);
      }
    }
  }


  virtual ~EmptySlsLogstoreResponse() = default;
};
class EnableLayer7CCRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  EnableLayer7CCRequest() {}

  explicit EnableLayer7CCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~EnableLayer7CCRequest() = default;
};
class EnableLayer7CCResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableLayer7CCResponseBody() {}

  explicit EnableLayer7CCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableLayer7CCResponseBody() = default;
};
class EnableLayer7CCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableLayer7CCResponseBody> body{};

  EnableLayer7CCResponse() {}

  explicit EnableLayer7CCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableLayer7CCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableLayer7CCResponseBody>(model1);
      }
    }
  }


  virtual ~EnableLayer7CCResponse() = default;
};
class EnableLayer7CCRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  EnableLayer7CCRuleRequest() {}

  explicit EnableLayer7CCRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~EnableLayer7CCRuleRequest() = default;
};
class EnableLayer7CCRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableLayer7CCRuleResponseBody() {}

  explicit EnableLayer7CCRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableLayer7CCRuleResponseBody() = default;
};
class EnableLayer7CCRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableLayer7CCRuleResponseBody> body{};

  EnableLayer7CCRuleResponse() {}

  explicit EnableLayer7CCRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableLayer7CCRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableLayer7CCRuleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableLayer7CCRuleResponse() = default;
};
class ListAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  ListAsyncTaskRequest() {}

  explicit ListAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ListAsyncTaskRequest() = default;
};
class ListAsyncTaskResponseBodyAsyncTasks : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<long> taskId{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskResult{};
  shared_ptr<long> taskStatus{};
  shared_ptr<long> taskType{};

  ListAsyncTaskResponseBodyAsyncTasks() {}

  explicit ListAsyncTaskResponseBodyAsyncTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskResult) {
      res["TaskResult"] = boost::any(*taskResult);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      taskResult = make_shared<string>(boost::any_cast<string>(m["TaskResult"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
  }


  virtual ~ListAsyncTaskResponseBodyAsyncTasks() = default;
};
class ListAsyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAsyncTaskResponseBodyAsyncTasks>> asyncTasks{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListAsyncTaskResponseBody() {}

  explicit ListAsyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncTasks) {
      vector<boost::any> temp1;
      for(auto item1:*asyncTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AsyncTasks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsyncTasks") != m.end() && !m["AsyncTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["AsyncTasks"].type()) {
        vector<ListAsyncTaskResponseBodyAsyncTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AsyncTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAsyncTaskResponseBodyAsyncTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        asyncTasks = make_shared<vector<ListAsyncTaskResponseBodyAsyncTasks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListAsyncTaskResponseBody() = default;
};
class ListAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAsyncTaskResponseBody> body{};

  ListAsyncTaskResponse() {}

  explicit ListAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAsyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAsyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListAsyncTaskResponse() = default;
};
class ListLayer7CustomPortsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  ListLayer7CustomPortsRequest() {}

  explicit ListLayer7CustomPortsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ListLayer7CustomPortsRequest() = default;
};
class ListLayer7CustomPortsResponseBodyLayer7CustomPorts : public Darabonba::Model {
public:
  shared_ptr<string> flag{};
  shared_ptr<vector<string>> proxyPorts{};
  shared_ptr<string> proxyType{};

  ListLayer7CustomPortsResponseBodyLayer7CustomPorts() {}

  explicit ListLayer7CustomPortsResponseBodyLayer7CustomPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flag) {
      res["Flag"] = boost::any(*flag);
    }
    if (proxyPorts) {
      res["ProxyPorts"] = boost::any(*proxyPorts);
    }
    if (proxyType) {
      res["ProxyType"] = boost::any(*proxyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Flag") != m.end() && !m["Flag"].empty()) {
      flag = make_shared<string>(boost::any_cast<string>(m["Flag"]));
    }
    if (m.find("ProxyPorts") != m.end() && !m["ProxyPorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProxyPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProxyPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      proxyPorts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProxyType") != m.end() && !m["ProxyType"].empty()) {
      proxyType = make_shared<string>(boost::any_cast<string>(m["ProxyType"]));
    }
  }


  virtual ~ListLayer7CustomPortsResponseBodyLayer7CustomPorts() = default;
};
class ListLayer7CustomPortsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts>> layer7CustomPorts{};
  shared_ptr<string> requestId{};

  ListLayer7CustomPortsResponseBody() {}

  explicit ListLayer7CustomPortsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layer7CustomPorts) {
      vector<boost::any> temp1;
      for(auto item1:*layer7CustomPorts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layer7CustomPorts"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layer7CustomPorts") != m.end() && !m["Layer7CustomPorts"].empty()) {
      if (typeid(vector<boost::any>) == m["Layer7CustomPorts"].type()) {
        vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layer7CustomPorts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLayer7CustomPortsResponseBodyLayer7CustomPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layer7CustomPorts = make_shared<vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListLayer7CustomPortsResponseBody() = default;
};
class ListLayer7CustomPortsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLayer7CustomPortsResponseBody> body{};

  ListLayer7CustomPortsResponse() {}

  explicit ListLayer7CustomPortsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLayer7CustomPortsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLayer7CustomPortsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLayer7CustomPortsResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceType{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyTagKeys : public Darabonba::Model {
public:
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagKey{};

  ListTagKeysResponseBodyTagKeys() {}

  explicit ListTagKeysResponseBodyTagKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagKeysResponseBodyTagKeys() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagKeysResponseBodyTagKeys>> tagKeys{};
  shared_ptr<long> totalCount{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagKeys) {
      vector<boost::any> temp1;
      for(auto item1:*tagKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagKeys"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<ListTagKeysResponseBodyTagKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagKeysResponseBodyTagKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagKeys = make_shared<vector<ListTagKeysResponseBodyTagKeys>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
};
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
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

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
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
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
class ListValueAddedRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  ListValueAddedRequest() {}

  explicit ListValueAddedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ListValueAddedRequest() = default;
};
class ListValueAddedResponseBodyValueAddedList : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> logSize{};
  shared_ptr<long> status{};
  shared_ptr<string> storeRegion{};

  ListValueAddedResponseBodyValueAddedList() {}

  explicit ListValueAddedResponseBodyValueAddedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (logSize) {
      res["LogSize"] = boost::any(*logSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storeRegion) {
      res["StoreRegion"] = boost::any(*storeRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LogSize") != m.end() && !m["LogSize"].empty()) {
      logSize = make_shared<long>(boost::any_cast<long>(m["LogSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StoreRegion") != m.end() && !m["StoreRegion"].empty()) {
      storeRegion = make_shared<string>(boost::any_cast<string>(m["StoreRegion"]));
    }
  }


  virtual ~ListValueAddedResponseBodyValueAddedList() = default;
};
class ListValueAddedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListValueAddedResponseBodyValueAddedList>> valueAddedList{};

  ListValueAddedResponseBody() {}

  explicit ListValueAddedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (valueAddedList) {
      vector<boost::any> temp1;
      for(auto item1:*valueAddedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ValueAddedList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ValueAddedList") != m.end() && !m["ValueAddedList"].empty()) {
      if (typeid(vector<boost::any>) == m["ValueAddedList"].type()) {
        vector<ListValueAddedResponseBodyValueAddedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ValueAddedList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListValueAddedResponseBodyValueAddedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valueAddedList = make_shared<vector<ListValueAddedResponseBodyValueAddedList>>(expect1);
      }
    }
  }


  virtual ~ListValueAddedResponseBody() = default;
};
class ListValueAddedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListValueAddedResponseBody> body{};

  ListValueAddedResponse() {}

  explicit ListValueAddedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListValueAddedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListValueAddedResponseBody>(model1);
      }
    }
  }


  virtual ~ListValueAddedResponse() = default;
};
class ModifyElasticBandWidthRequest : public Darabonba::Model {
public:
  shared_ptr<long> elasticBandwidth{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sourceIp{};

  ModifyElasticBandWidthRequest() {}

  explicit ModifyElasticBandWidthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticBandwidth) {
      res["ElasticBandwidth"] = boost::any(*elasticBandwidth);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticBandwidth") != m.end() && !m["ElasticBandwidth"].empty()) {
      elasticBandwidth = make_shared<long>(boost::any_cast<long>(m["ElasticBandwidth"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ModifyElasticBandWidthRequest() = default;
};
class ModifyElasticBandWidthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyElasticBandWidthResponseBody() {}

  explicit ModifyElasticBandWidthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyElasticBandWidthResponseBody() = default;
};
class ModifyElasticBandWidthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyElasticBandWidthResponseBody> body{};

  ModifyElasticBandWidthResponse() {}

  explicit ModifyElasticBandWidthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyElasticBandWidthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyElasticBandWidthResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyElasticBandWidthResponse() = default;
};
class ModifyFullLogTtlRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> ttl{};

  ModifyFullLogTtlRequest() {}

  explicit ModifyFullLogTtlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~ModifyFullLogTtlRequest() = default;
};
class ModifyFullLogTtlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyFullLogTtlResponseBody() {}

  explicit ModifyFullLogTtlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyFullLogTtlResponseBody() = default;
};
class ModifyFullLogTtlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFullLogTtlResponseBody> body{};

  ModifyFullLogTtlResponse() {}

  explicit ModifyFullLogTtlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyFullLogTtlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFullLogTtlResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFullLogTtlResponse() = default;
};
class ModifyInstanceRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> remark{};
  shared_ptr<string> sourceIp{};

  ModifyInstanceRemarkRequest() {}

  explicit ModifyInstanceRemarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ModifyInstanceRemarkRequest() = default;
};
class ModifyInstanceRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceRemarkResponseBody() {}

  explicit ModifyInstanceRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceRemarkResponseBody() = default;
};
class ModifyInstanceRemarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceRemarkResponseBody> body{};

  ModifyInstanceRemarkResponse() {}

  explicit ModifyInstanceRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceRemarkResponse() = default;
};
class OpenDomainSlsConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> lang{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIp{};

  OpenDomainSlsConfigRequest() {}

  explicit OpenDomainSlsConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~OpenDomainSlsConfigRequest() = default;
};
class OpenDomainSlsConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenDomainSlsConfigResponseBody() {}

  explicit OpenDomainSlsConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenDomainSlsConfigResponseBody() = default;
};
class OpenDomainSlsConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenDomainSlsConfigResponseBody> body{};

  OpenDomainSlsConfigResponse() {}

  explicit OpenDomainSlsConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenDomainSlsConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenDomainSlsConfigResponseBody>(model1);
      }
    }
  }


  virtual ~OpenDomainSlsConfigResponse() = default;
};
class ReleaseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> sourceIp{};

  ReleaseInstanceRequest() {}

  explicit ReleaseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ReleaseInstanceRequest() = default;
};
class ReleaseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseInstanceResponseBody() {}

  explicit ReleaseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseInstanceResponseBody() = default;
};
class ReleaseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstanceResponseBody> body{};

  ReleaseInstanceResponse() {}

  explicit ReleaseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstanceResponse() = default;
};
class ReleaseValueAddedRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> sourceIp{};

  ReleaseValueAddedRequest() {}

  explicit ReleaseValueAddedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ReleaseValueAddedRequest() = default;
};
class ReleaseValueAddedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseValueAddedResponseBody() {}

  explicit ReleaseValueAddedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseValueAddedResponseBody() = default;
};
class ReleaseValueAddedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseValueAddedResponseBody> body{};

  ReleaseValueAddedResponse() {}

  explicit ReleaseValueAddedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseValueAddedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseValueAddedResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseValueAddedResponse() = default;
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  AddLayer7CCRuleResponse addLayer7CCRuleWithOptions(shared_ptr<AddLayer7CCRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddLayer7CCRuleResponse addLayer7CCRule(shared_ptr<AddLayer7CCRuleRequest> request);
  CloseDomainSlsConfigResponse closeDomainSlsConfigWithOptions(shared_ptr<CloseDomainSlsConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseDomainSlsConfigResponse closeDomainSlsConfig(shared_ptr<CloseDomainSlsConfigRequest> request);
  ConfigHealthCheckResponse configHealthCheckWithOptions(shared_ptr<ConfigHealthCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigHealthCheckResponse configHealthCheck(shared_ptr<ConfigHealthCheckRequest> request);
  ConfigLayer4RuleResponse configLayer4RuleWithOptions(shared_ptr<ConfigLayer4RuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigLayer4RuleResponse configLayer4Rule(shared_ptr<ConfigLayer4RuleRequest> request);
  ConfigLayer4RuleAttributeResponse configLayer4RuleAttributeWithOptions(shared_ptr<ConfigLayer4RuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigLayer4RuleAttributeResponse configLayer4RuleAttribute(shared_ptr<ConfigLayer4RuleAttributeRequest> request);
  ConfigLayer7BlackWhiteListResponse configLayer7BlackWhiteListWithOptions(shared_ptr<ConfigLayer7BlackWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigLayer7BlackWhiteListResponse configLayer7BlackWhiteList(shared_ptr<ConfigLayer7BlackWhiteListRequest> request);
  ConfigLayer7CCRuleResponse configLayer7CCRuleWithOptions(shared_ptr<ConfigLayer7CCRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigLayer7CCRuleResponse configLayer7CCRule(shared_ptr<ConfigLayer7CCRuleRequest> request);
  ConfigLayer7CCTemplateResponse configLayer7CCTemplateWithOptions(shared_ptr<ConfigLayer7CCTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigLayer7CCTemplateResponse configLayer7CCTemplate(shared_ptr<ConfigLayer7CCTemplateRequest> request);
  ConfigLayer7CertResponse configLayer7CertWithOptions(shared_ptr<ConfigLayer7CertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigLayer7CertResponse configLayer7Cert(shared_ptr<ConfigLayer7CertRequest> request);
  ConfigLayer7RuleResponse configLayer7RuleWithOptions(shared_ptr<ConfigLayer7RuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigLayer7RuleResponse configLayer7Rule(shared_ptr<ConfigLayer7RuleRequest> request);
  CreateAsyncTaskResponse createAsyncTaskWithOptions(shared_ptr<CreateAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAsyncTaskResponse createAsyncTask(shared_ptr<CreateAsyncTaskRequest> request);
  CreateLayer4RuleResponse createLayer4RuleWithOptions(shared_ptr<CreateLayer4RuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLayer4RuleResponse createLayer4Rule(shared_ptr<CreateLayer4RuleRequest> request);
  CreateLayer7RuleResponse createLayer7RuleWithOptions(shared_ptr<CreateLayer7RuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLayer7RuleResponse createLayer7Rule(shared_ptr<CreateLayer7RuleRequest> request);
  DeleteAsyncTaskResponse deleteAsyncTaskWithOptions(shared_ptr<DeleteAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAsyncTaskResponse deleteAsyncTask(shared_ptr<DeleteAsyncTaskRequest> request);
  DeleteLayer4RuleResponse deleteLayer4RuleWithOptions(shared_ptr<DeleteLayer4RuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLayer4RuleResponse deleteLayer4Rule(shared_ptr<DeleteLayer4RuleRequest> request);
  DeleteLayer7CCRuleResponse deleteLayer7CCRuleWithOptions(shared_ptr<DeleteLayer7CCRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLayer7CCRuleResponse deleteLayer7CCRule(shared_ptr<DeleteLayer7CCRuleRequest> request);
  DeleteLayer7RuleResponse deleteLayer7RuleWithOptions(shared_ptr<DeleteLayer7RuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLayer7RuleResponse deleteLayer7Rule(shared_ptr<DeleteLayer7RuleRequest> request);
  DescribeBackSourceCidrResponse describeBackSourceCidrWithOptions(shared_ptr<DescribeBackSourceCidrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackSourceCidrResponse describeBackSourceCidr(shared_ptr<DescribeBackSourceCidrRequest> request);
  DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatusWithOptions(shared_ptr<DescribeBatchSlsDispatchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatus(shared_ptr<DescribeBatchSlsDispatchStatusRequest> request);
  DescribeDDoSEventsResponse describeDDoSEventsWithOptions(shared_ptr<DescribeDDoSEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDDoSEventsResponse describeDDoSEvents(shared_ptr<DescribeDDoSEventsRequest> request);
  DescribeDDoSTrafficResponse describeDDoSTrafficWithOptions(shared_ptr<DescribeDDoSTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDDoSTrafficResponse describeDDoSTraffic(shared_ptr<DescribeDDoSTrafficRequest> request);
  DescribeDefenseCountStatisticsResponse describeDefenseCountStatisticsWithOptions(shared_ptr<DescribeDefenseCountStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseCountStatisticsResponse describeDefenseCountStatistics(shared_ptr<DescribeDefenseCountStatisticsRequest> request);
  DescribeDomainAccessModeResponse describeDomainAccessModeWithOptions(shared_ptr<DescribeDomainAccessModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainAccessModeResponse describeDomainAccessMode(shared_ptr<DescribeDomainAccessModeRequest> request);
  DescribeDomainAttackEventListResponse describeDomainAttackEventListWithOptions(shared_ptr<DescribeDomainAttackEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainAttackEventListResponse describeDomainAttackEventList(shared_ptr<DescribeDomainAttackEventListRequest> request);
  DescribeDomainAttackMaxQpsResponse describeDomainAttackMaxQpsWithOptions(shared_ptr<DescribeDomainAttackMaxQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainAttackMaxQpsResponse describeDomainAttackMaxQps(shared_ptr<DescribeDomainAttackMaxQpsRequest> request);
  DescribeDomainOverviewResponse describeDomainOverviewWithOptions(shared_ptr<DescribeDomainOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainOverviewResponse describeDomainOverview(shared_ptr<DescribeDomainOverviewRequest> request);
  DescribeDomainQpsListResponse describeDomainQpsListWithOptions(shared_ptr<DescribeDomainQpsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainQpsListResponse describeDomainQpsList(shared_ptr<DescribeDomainQpsListRequest> request);
  DescribeDomainQpsWithCacheResponse describeDomainQpsWithCacheWithOptions(shared_ptr<DescribeDomainQpsWithCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainQpsWithCacheResponse describeDomainQpsWithCache(shared_ptr<DescribeDomainQpsWithCacheRequest> request);
  DescribeDomainSlsStatusResponse describeDomainSlsStatusWithOptions(shared_ptr<DescribeDomainSlsStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainSlsStatusResponse describeDomainSlsStatus(shared_ptr<DescribeDomainSlsStatusRequest> request);
  DescribeDomainStatusCodeListResponse describeDomainStatusCodeListWithOptions(shared_ptr<DescribeDomainStatusCodeListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainStatusCodeListResponse describeDomainStatusCodeList(shared_ptr<DescribeDomainStatusCodeListRequest> request);
  DescribeDomainsResponse describeDomainsWithOptions(shared_ptr<DescribeDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainsResponse describeDomains(shared_ptr<DescribeDomainsRequest> request);
  DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpecWithOptions(shared_ptr<DescribeElasticBandwidthSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticBandwidthSpecResponse describeElasticBandwidthSpec(shared_ptr<DescribeElasticBandwidthSpecRequest> request);
  DescribeHealthCheckListResponse describeHealthCheckListWithOptions(shared_ptr<DescribeHealthCheckListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHealthCheckListResponse describeHealthCheckList(shared_ptr<DescribeHealthCheckListRequest> request);
  DescribeHealthCheckStatusListResponse describeHealthCheckStatusListWithOptions(shared_ptr<DescribeHealthCheckStatusListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHealthCheckStatusListResponse describeHealthCheckStatusList(shared_ptr<DescribeHealthCheckStatusListRequest> request);
  DescribeInstanceDetailsResponse describeInstanceDetailsWithOptions(shared_ptr<DescribeInstanceDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceDetailsResponse describeInstanceDetails(shared_ptr<DescribeInstanceDetailsRequest> request);
  DescribeInstanceSpecsResponse describeInstanceSpecsWithOptions(shared_ptr<DescribeInstanceSpecsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSpecsResponse describeInstanceSpecs(shared_ptr<DescribeInstanceSpecsRequest> request);
  DescribeInstanceStatisticsResponse describeInstanceStatisticsWithOptions(shared_ptr<DescribeInstanceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceStatisticsResponse describeInstanceStatistics(shared_ptr<DescribeInstanceStatisticsRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeIpTrafficResponse describeIpTrafficWithOptions(shared_ptr<DescribeIpTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpTrafficResponse describeIpTraffic(shared_ptr<DescribeIpTrafficRequest> request);
  DescribeLayer4RuleAttributesResponse describeLayer4RuleAttributesWithOptions(shared_ptr<DescribeLayer4RuleAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLayer4RuleAttributesResponse describeLayer4RuleAttributes(shared_ptr<DescribeLayer4RuleAttributesRequest> request);
  DescribeLayer4RulesResponse describeLayer4RulesWithOptions(shared_ptr<DescribeLayer4RulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLayer4RulesResponse describeLayer4Rules(shared_ptr<DescribeLayer4RulesRequest> request);
  DescribeLayer7CCRulesResponse describeLayer7CCRulesWithOptions(shared_ptr<DescribeLayer7CCRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLayer7CCRulesResponse describeLayer7CCRules(shared_ptr<DescribeLayer7CCRulesRequest> request);
  DescribeLogStoreExistStatusResponse describeLogStoreExistStatusWithOptions(shared_ptr<DescribeLogStoreExistStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogStoreExistStatusResponse describeLogStoreExistStatus(shared_ptr<DescribeLogStoreExistStatusRequest> request);
  DescribeOpEntitiesResponse describeOpEntitiesWithOptions(shared_ptr<DescribeOpEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOpEntitiesResponse describeOpEntities(shared_ptr<DescribeOpEntitiesRequest> request);
  DescribeSimpleDomainsResponse describeSimpleDomainsWithOptions(shared_ptr<DescribeSimpleDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSimpleDomainsResponse describeSimpleDomains(shared_ptr<DescribeSimpleDomainsRequest> request);
  DescribeSlsAuthStatusResponse describeSlsAuthStatusWithOptions(shared_ptr<DescribeSlsAuthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlsAuthStatusResponse describeSlsAuthStatus(shared_ptr<DescribeSlsAuthStatusRequest> request);
  DescribeSlsEmptyCountResponse describeSlsEmptyCountWithOptions(shared_ptr<DescribeSlsEmptyCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlsEmptyCountResponse describeSlsEmptyCount(shared_ptr<DescribeSlsEmptyCountRequest> request);
  DescribeSlsLogstoreInfoResponse describeSlsLogstoreInfoWithOptions(shared_ptr<DescribeSlsLogstoreInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlsLogstoreInfoResponse describeSlsLogstoreInfo(shared_ptr<DescribeSlsLogstoreInfoRequest> request);
  DescribeSlsOpenStatusResponse describeSlsOpenStatusWithOptions(shared_ptr<DescribeSlsOpenStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlsOpenStatusResponse describeSlsOpenStatus(shared_ptr<DescribeSlsOpenStatusRequest> request);
  DescribleCertListResponse describleCertListWithOptions(shared_ptr<DescribleCertListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribleCertListResponse describleCertList(shared_ptr<DescribleCertListRequest> request);
  DescribleLayer7InstanceRelationsResponse describleLayer7InstanceRelationsWithOptions(shared_ptr<DescribleLayer7InstanceRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribleLayer7InstanceRelationsResponse describleLayer7InstanceRelations(shared_ptr<DescribleLayer7InstanceRelationsRequest> request);
  DisableLayer7CCResponse disableLayer7CCWithOptions(shared_ptr<DisableLayer7CCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableLayer7CCResponse disableLayer7CC(shared_ptr<DisableLayer7CCRequest> request);
  DisableLayer7CCRuleResponse disableLayer7CCRuleWithOptions(shared_ptr<DisableLayer7CCRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableLayer7CCRuleResponse disableLayer7CCRule(shared_ptr<DisableLayer7CCRuleRequest> request);
  EmptySlsLogstoreResponse emptySlsLogstoreWithOptions(shared_ptr<EmptySlsLogstoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EmptySlsLogstoreResponse emptySlsLogstore(shared_ptr<EmptySlsLogstoreRequest> request);
  EnableLayer7CCResponse enableLayer7CCWithOptions(shared_ptr<EnableLayer7CCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableLayer7CCResponse enableLayer7CC(shared_ptr<EnableLayer7CCRequest> request);
  EnableLayer7CCRuleResponse enableLayer7CCRuleWithOptions(shared_ptr<EnableLayer7CCRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableLayer7CCRuleResponse enableLayer7CCRule(shared_ptr<EnableLayer7CCRuleRequest> request);
  ListAsyncTaskResponse listAsyncTaskWithOptions(shared_ptr<ListAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAsyncTaskResponse listAsyncTask(shared_ptr<ListAsyncTaskRequest> request);
  ListLayer7CustomPortsResponse listLayer7CustomPortsWithOptions(shared_ptr<ListLayer7CustomPortsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLayer7CustomPortsResponse listLayer7CustomPorts(shared_ptr<ListLayer7CustomPortsRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListValueAddedResponse listValueAddedWithOptions(shared_ptr<ListValueAddedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListValueAddedResponse listValueAdded(shared_ptr<ListValueAddedRequest> request);
  ModifyElasticBandWidthResponse modifyElasticBandWidthWithOptions(shared_ptr<ModifyElasticBandWidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyElasticBandWidthResponse modifyElasticBandWidth(shared_ptr<ModifyElasticBandWidthRequest> request);
  ModifyFullLogTtlResponse modifyFullLogTtlWithOptions(shared_ptr<ModifyFullLogTtlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFullLogTtlResponse modifyFullLogTtl(shared_ptr<ModifyFullLogTtlRequest> request);
  ModifyInstanceRemarkResponse modifyInstanceRemarkWithOptions(shared_ptr<ModifyInstanceRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceRemarkResponse modifyInstanceRemark(shared_ptr<ModifyInstanceRemarkRequest> request);
  OpenDomainSlsConfigResponse openDomainSlsConfigWithOptions(shared_ptr<OpenDomainSlsConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenDomainSlsConfigResponse openDomainSlsConfig(shared_ptr<OpenDomainSlsConfigRequest> request);
  ReleaseInstanceResponse releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstanceResponse releaseInstance(shared_ptr<ReleaseInstanceRequest> request);
  ReleaseValueAddedResponse releaseValueAddedWithOptions(shared_ptr<ReleaseValueAddedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseValueAddedResponse releaseValueAdded(shared_ptr<ReleaseValueAddedRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ddoscoo20171228

#endif
