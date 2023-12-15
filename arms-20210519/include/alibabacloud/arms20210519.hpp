// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ARMS20210519_H_
#define ALIBABACLOUD_ARMS20210519_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ARMS20210519 {
class AddGrafanaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> integration{};
  shared_ptr<string> regionId{};

  AddGrafanaRequest() {}

  explicit AddGrafanaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (integration) {
      res["Integration"] = boost::any(*integration);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Integration") != m.end() && !m["Integration"].empty()) {
      integration = make_shared<string>(boost::any_cast<string>(m["Integration"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddGrafanaRequest() = default;
};
class AddGrafanaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  AddGrafanaResponseBody() {}

  explicit AddGrafanaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddGrafanaResponseBody() = default;
};
class AddGrafanaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddGrafanaResponseBody> body{};

  AddGrafanaResponse() {}

  explicit AddGrafanaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddGrafanaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGrafanaResponseBody>(model1);
      }
    }
  }


  virtual ~AddGrafanaResponse() = default;
};
class AddIntegrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> integration{};
  shared_ptr<string> regionId{};

  AddIntegrationRequest() {}

  explicit AddIntegrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (integration) {
      res["Integration"] = boost::any(*integration);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Integration") != m.end() && !m["Integration"].empty()) {
      integration = make_shared<string>(boost::any_cast<string>(m["Integration"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddIntegrationRequest() = default;
};
class AddIntegrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  AddIntegrationResponseBody() {}

  explicit AddIntegrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddIntegrationResponseBody() = default;
};
class AddIntegrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddIntegrationResponseBody> body{};

  AddIntegrationResponse() {}

  explicit AddIntegrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddIntegrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddIntegrationResponseBody>(model1);
      }
    }
  }


  virtual ~AddIntegrationResponse() = default;
};
class ApplyScenarioRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, boost::any>> config{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> sign{};
  shared_ptr<bool> snDump{};
  shared_ptr<bool> snForce{};
  shared_ptr<bool> snStat{};
  shared_ptr<bool> snTransfer{};
  shared_ptr<bool> updateOption{};

  ApplyScenarioRequest() {}

  explicit ApplyScenarioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scenario) {
      res["Scenario"] = boost::any(*scenario);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (snDump) {
      res["SnDump"] = boost::any(*snDump);
    }
    if (snForce) {
      res["SnForce"] = boost::any(*snForce);
    }
    if (snStat) {
      res["SnStat"] = boost::any(*snStat);
    }
    if (snTransfer) {
      res["SnTransfer"] = boost::any(*snTransfer);
    }
    if (updateOption) {
      res["UpdateOption"] = boost::any(*updateOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scenario") != m.end() && !m["Scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["Scenario"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SnDump") != m.end() && !m["SnDump"].empty()) {
      snDump = make_shared<bool>(boost::any_cast<bool>(m["SnDump"]));
    }
    if (m.find("SnForce") != m.end() && !m["SnForce"].empty()) {
      snForce = make_shared<bool>(boost::any_cast<bool>(m["SnForce"]));
    }
    if (m.find("SnStat") != m.end() && !m["SnStat"].empty()) {
      snStat = make_shared<bool>(boost::any_cast<bool>(m["SnStat"]));
    }
    if (m.find("SnTransfer") != m.end() && !m["SnTransfer"].empty()) {
      snTransfer = make_shared<bool>(boost::any_cast<bool>(m["SnTransfer"]));
    }
    if (m.find("UpdateOption") != m.end() && !m["UpdateOption"].empty()) {
      updateOption = make_shared<bool>(boost::any_cast<bool>(m["UpdateOption"]));
    }
  }


  virtual ~ApplyScenarioRequest() = default;
};
class ApplyScenarioShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> configShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> sign{};
  shared_ptr<bool> snDump{};
  shared_ptr<bool> snForce{};
  shared_ptr<bool> snStat{};
  shared_ptr<bool> snTransfer{};
  shared_ptr<bool> updateOption{};

  ApplyScenarioShrinkRequest() {}

  explicit ApplyScenarioShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (configShrink) {
      res["Config"] = boost::any(*configShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scenario) {
      res["Scenario"] = boost::any(*scenario);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (snDump) {
      res["SnDump"] = boost::any(*snDump);
    }
    if (snForce) {
      res["SnForce"] = boost::any(*snForce);
    }
    if (snStat) {
      res["SnStat"] = boost::any(*snStat);
    }
    if (snTransfer) {
      res["SnTransfer"] = boost::any(*snTransfer);
    }
    if (updateOption) {
      res["UpdateOption"] = boost::any(*updateOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      configShrink = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scenario") != m.end() && !m["Scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["Scenario"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SnDump") != m.end() && !m["SnDump"].empty()) {
      snDump = make_shared<bool>(boost::any_cast<bool>(m["SnDump"]));
    }
    if (m.find("SnForce") != m.end() && !m["SnForce"].empty()) {
      snForce = make_shared<bool>(boost::any_cast<bool>(m["SnForce"]));
    }
    if (m.find("SnStat") != m.end() && !m["SnStat"].empty()) {
      snStat = make_shared<bool>(boost::any_cast<bool>(m["SnStat"]));
    }
    if (m.find("SnTransfer") != m.end() && !m["SnTransfer"].empty()) {
      snTransfer = make_shared<bool>(boost::any_cast<bool>(m["SnTransfer"]));
    }
    if (m.find("UpdateOption") != m.end() && !m["UpdateOption"].empty()) {
      updateOption = make_shared<bool>(boost::any_cast<bool>(m["UpdateOption"]));
    }
  }


  virtual ~ApplyScenarioShrinkRequest() = default;
};
class ApplyScenarioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  ApplyScenarioResponseBody() {}

  explicit ApplyScenarioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~ApplyScenarioResponseBody() = default;
};
class ApplyScenarioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyScenarioResponseBody> body{};

  ApplyScenarioResponse() {}

  explicit ApplyScenarioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyScenarioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyScenarioResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyScenarioResponse() = default;
};
class CheckDataConsistencyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<long> currentTimestamp{};
  shared_ptr<string> pid{};
  shared_ptr<string> proxyUserId{};
  shared_ptr<string> regionId{};

  CheckDataConsistencyRequest() {}

  explicit CheckDataConsistencyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (currentTimestamp) {
      res["CurrentTimestamp"] = boost::any(*currentTimestamp);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (proxyUserId) {
      res["ProxyUserId"] = boost::any(*proxyUserId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CurrentTimestamp") != m.end() && !m["CurrentTimestamp"].empty()) {
      currentTimestamp = make_shared<long>(boost::any_cast<long>(m["CurrentTimestamp"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("ProxyUserId") != m.end() && !m["ProxyUserId"].empty()) {
      proxyUserId = make_shared<string>(boost::any_cast<string>(m["ProxyUserId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CheckDataConsistencyRequest() = default;
};
class CheckDataConsistencyResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isDataConsistency{};
  shared_ptr<string> requestId{};

  CheckDataConsistencyResponseBody() {}

  explicit CheckDataConsistencyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDataConsistency) {
      res["IsDataConsistency"] = boost::any(*isDataConsistency);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDataConsistency") != m.end() && !m["IsDataConsistency"].empty()) {
      isDataConsistency = make_shared<bool>(boost::any_cast<bool>(m["IsDataConsistency"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDataConsistencyResponseBody() = default;
};
class CheckDataConsistencyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDataConsistencyResponseBody> body{};

  CheckDataConsistencyResponse() {}

  explicit CheckDataConsistencyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDataConsistencyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDataConsistencyResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDataConsistencyResponse() = default;
};
class CheckServiceLinkedRoleForDeletingRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletionTaskId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> SPIRegionId{};
  shared_ptr<string> serviceName{};

  CheckServiceLinkedRoleForDeletingRequest() {}

  explicit CheckServiceLinkedRoleForDeletingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (SPIRegionId) {
      res["SPIRegionId"] = boost::any(*SPIRegionId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("SPIRegionId") != m.end() && !m["SPIRegionId"].empty()) {
      SPIRegionId = make_shared<string>(boost::any_cast<string>(m["SPIRegionId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingRequest() = default;
};
class CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<vector<string>> resources{};

  CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages() {}

  explicit CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resources = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages() = default;
};
class CheckServiceLinkedRoleForDeletingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> deletable{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages>> roleUsages{};

  CheckServiceLinkedRoleForDeletingResponseBody() {}

  explicit CheckServiceLinkedRoleForDeletingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletable) {
      res["Deletable"] = boost::any(*deletable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleUsages) {
      vector<boost::any> temp1;
      for(auto item1:*roleUsages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoleUsages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deletable") != m.end() && !m["Deletable"].empty()) {
      deletable = make_shared<bool>(boost::any_cast<bool>(m["Deletable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleUsages") != m.end() && !m["RoleUsages"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleUsages"].type()) {
        vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleUsages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleUsages = make_shared<vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages>>(expect1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingResponseBody() = default;
};
class CheckServiceLinkedRoleForDeletingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckServiceLinkedRoleForDeletingResponseBody> body{};

  CheckServiceLinkedRoleForDeletingResponse() {}

  explicit CheckServiceLinkedRoleForDeletingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceLinkedRoleForDeletingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceLinkedRoleForDeletingResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingResponse() = default;
};
class CheckServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> svcCode{};

  CheckServiceStatusRequest() {}

  explicit CheckServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (svcCode) {
      res["SvcCode"] = boost::any(*svcCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SvcCode") != m.end() && !m["SvcCode"].empty()) {
      svcCode = make_shared<string>(boost::any_cast<string>(m["SvcCode"]));
    }
  }


  virtual ~CheckServiceStatusRequest() = default;
};
class CheckServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CheckServiceStatusResponseBody() {}

  explicit CheckServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckServiceStatusResponseBody() = default;
};
class CheckServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckServiceStatusResponseBody> body{};

  CheckServiceStatusResponse() {}

  explicit CheckServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceStatusResponse() = default;
};
class ConfigAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appIds{};
  shared_ptr<string> enable{};
  shared_ptr<string> regionId{};

  ConfigAppRequest() {}

  explicit ConfigAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<string>(boost::any_cast<string>(m["Enable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ConfigAppRequest() = default;
};
class ConfigAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ConfigAppResponseBody() {}

  explicit ConfigAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ConfigAppResponseBody() = default;
};
class ConfigAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigAppResponseBody> body{};

  ConfigAppResponse() {}

  explicit ConfigAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigAppResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigAppResponse() = default;
};
class CreateAlertContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactName{};
  shared_ptr<string> dingRobotWebhookUrl{};
  shared_ptr<string> email{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> systemNoc{};

  CreateAlertContactRequest() {}

  explicit CreateAlertContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (dingRobotWebhookUrl) {
      res["DingRobotWebhookUrl"] = boost::any(*dingRobotWebhookUrl);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (systemNoc) {
      res["SystemNoc"] = boost::any(*systemNoc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("DingRobotWebhookUrl") != m.end() && !m["DingRobotWebhookUrl"].empty()) {
      dingRobotWebhookUrl = make_shared<string>(boost::any_cast<string>(m["DingRobotWebhookUrl"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SystemNoc") != m.end() && !m["SystemNoc"].empty()) {
      systemNoc = make_shared<bool>(boost::any_cast<bool>(m["SystemNoc"]));
    }
  }


  virtual ~CreateAlertContactRequest() = default;
};
class CreateAlertContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> requestId{};

  CreateAlertContactResponseBody() {}

  explicit CreateAlertContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAlertContactResponseBody() = default;
};
class CreateAlertContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAlertContactResponseBody> body{};

  CreateAlertContactResponse() {}

  explicit CreateAlertContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAlertContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlertContactResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlertContactResponse() = default;
};
class CreateAlertContactGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactGroupName{};
  shared_ptr<string> contactIds{};
  shared_ptr<string> regionId{};

  CreateAlertContactGroupRequest() {}

  explicit CreateAlertContactGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupName) {
      res["ContactGroupName"] = boost::any(*contactGroupName);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupName") != m.end() && !m["ContactGroupName"].empty()) {
      contactGroupName = make_shared<string>(boost::any_cast<string>(m["ContactGroupName"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      contactIds = make_shared<string>(boost::any_cast<string>(m["ContactIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateAlertContactGroupRequest() = default;
};
class CreateAlertContactGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> contactGroupId{};
  shared_ptr<string> requestId{};

  CreateAlertContactGroupResponseBody() {}

  explicit CreateAlertContactGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupId) {
      res["ContactGroupId"] = boost::any(*contactGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupId") != m.end() && !m["ContactGroupId"].empty()) {
      contactGroupId = make_shared<string>(boost::any_cast<string>(m["ContactGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAlertContactGroupResponseBody() = default;
};
class CreateAlertContactGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAlertContactGroupResponseBody> body{};

  CreateAlertContactGroupResponse() {}

  explicit CreateAlertContactGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAlertContactGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlertContactGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlertContactGroupResponse() = default;
};
class CreateAlertTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> annotations{};
  shared_ptr<string> labels{};
  shared_ptr<string> matchExpressions{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rule{};
  shared_ptr<string> templateProvider{};
  shared_ptr<string> type{};

  CreateAlertTemplateRequest() {}

  explicit CreateAlertTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (matchExpressions) {
      res["MatchExpressions"] = boost::any(*matchExpressions);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    if (templateProvider) {
      res["TemplateProvider"] = boost::any(*templateProvider);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MatchExpressions") != m.end() && !m["MatchExpressions"].empty()) {
      matchExpressions = make_shared<string>(boost::any_cast<string>(m["MatchExpressions"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
    if (m.find("TemplateProvider") != m.end() && !m["TemplateProvider"].empty()) {
      templateProvider = make_shared<string>(boost::any_cast<string>(m["TemplateProvider"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAlertTemplateRequest() = default;
};
class CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions() {}

  explicit CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions() = default;
};
class CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>> labelMatchExpressions{};

  CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups() {}

  explicit CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelMatchExpressions) {
      vector<boost::any> temp1;
      for(auto item1:*labelMatchExpressions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelMatchExpressions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelMatchExpressions") != m.end() && !m["LabelMatchExpressions"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelMatchExpressions"].type()) {
        vector<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelMatchExpressions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelMatchExpressions = make_shared<vector<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>>(expect1);
      }
    }
  }


  virtual ~CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups() = default;
};
class CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGrid : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups>> labelMatchExpressionGroups{};

  CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGrid() {}

  explicit CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGrid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelMatchExpressionGroups) {
      vector<boost::any> temp1;
      for(auto item1:*labelMatchExpressionGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelMatchExpressionGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelMatchExpressionGroups") != m.end() && !m["LabelMatchExpressionGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelMatchExpressionGroups"].type()) {
        vector<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelMatchExpressionGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelMatchExpressionGroups = make_shared<vector<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGridLabelMatchExpressionGroups>>(expect1);
      }
    }
  }


  virtual ~CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGrid() = default;
};
class CreateAlertTemplateResponseBodyAlertTemplate : public Darabonba::Model {
public:
  shared_ptr<string> alertProvider{};
  shared_ptr<map<string, boost::any>> annotations{};
  shared_ptr<long> id{};
  shared_ptr<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGrid> labelMatchExpressionGrid{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> parentId{};
  shared_ptr<bool> public_{};
  shared_ptr<string> rule{};
  shared_ptr<bool> status{};
  shared_ptr<string> templateProvider{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  CreateAlertTemplateResponseBodyAlertTemplate() {}

  explicit CreateAlertTemplateResponseBodyAlertTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertProvider) {
      res["AlertProvider"] = boost::any(*alertProvider);
    }
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (labelMatchExpressionGrid) {
      res["LabelMatchExpressionGrid"] = labelMatchExpressionGrid ? boost::any(labelMatchExpressionGrid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateProvider) {
      res["TemplateProvider"] = boost::any(*templateProvider);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertProvider") != m.end() && !m["AlertProvider"].empty()) {
      alertProvider = make_shared<string>(boost::any_cast<string>(m["AlertProvider"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Annotations"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      annotations = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LabelMatchExpressionGrid") != m.end() && !m["LabelMatchExpressionGrid"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabelMatchExpressionGrid"].type()) {
        CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGrid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabelMatchExpressionGrid"]));
        labelMatchExpressionGrid = make_shared<CreateAlertTemplateResponseBodyAlertTemplateLabelMatchExpressionGrid>(model1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["Public"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("TemplateProvider") != m.end() && !m["TemplateProvider"].empty()) {
      templateProvider = make_shared<string>(boost::any_cast<string>(m["TemplateProvider"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateAlertTemplateResponseBodyAlertTemplate() = default;
};
class CreateAlertTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAlertTemplateResponseBodyAlertTemplate> alertTemplate{};
  shared_ptr<string> requestId{};

  CreateAlertTemplateResponseBody() {}

  explicit CreateAlertTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertTemplate) {
      res["AlertTemplate"] = alertTemplate ? boost::any(alertTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertTemplate") != m.end() && !m["AlertTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlertTemplate"].type()) {
        CreateAlertTemplateResponseBodyAlertTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlertTemplate"]));
        alertTemplate = make_shared<CreateAlertTemplateResponseBodyAlertTemplate>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAlertTemplateResponseBody() = default;
};
class CreateAlertTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAlertTemplateResponseBody> body{};

  CreateAlertTemplateResponse() {}

  explicit CreateAlertTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAlertTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlertTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlertTemplateResponse() = default;
};
class CreateDispatchRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> dispatchRule{};
  shared_ptr<string> regionId{};

  CreateDispatchRuleRequest() {}

  explicit CreateDispatchRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dispatchRule) {
      res["DispatchRule"] = boost::any(*dispatchRule);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DispatchRule") != m.end() && !m["DispatchRule"].empty()) {
      dispatchRule = make_shared<string>(boost::any_cast<string>(m["DispatchRule"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateDispatchRuleRequest() = default;
};
class CreateDispatchRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> dispatchRuleId{};
  shared_ptr<string> requestId{};

  CreateDispatchRuleResponseBody() {}

  explicit CreateDispatchRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dispatchRuleId) {
      res["DispatchRuleId"] = boost::any(*dispatchRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DispatchRuleId") != m.end() && !m["DispatchRuleId"].empty()) {
      dispatchRuleId = make_shared<long>(boost::any_cast<long>(m["DispatchRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDispatchRuleResponseBody() = default;
};
class CreateDispatchRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDispatchRuleResponseBody> body{};

  CreateDispatchRuleResponse() {}

  explicit CreateDispatchRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDispatchRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDispatchRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDispatchRuleResponse() = default;
};
class CreatePrometheusAlertRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<string> annotations{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> dispatchRuleId{};
  shared_ptr<string> duration{};
  shared_ptr<string> expression{};
  shared_ptr<string> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> notifyType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  CreatePrometheusAlertRuleRequest() {}

  explicit CreatePrometheusAlertRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dispatchRuleId) {
      res["DispatchRuleId"] = boost::any(*dispatchRuleId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DispatchRuleId") != m.end() && !m["DispatchRuleId"].empty()) {
      dispatchRuleId = make_shared<long>(boost::any_cast<long>(m["DispatchRuleId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreatePrometheusAlertRuleRequest() = default;
};
class CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations() {}

  explicit CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations() = default;
};
class CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels() {}

  explicit CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels() = default;
};
class CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> alertName{};
  shared_ptr<vector<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>> annotations{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> dispatchRuleId{};
  shared_ptr<string> duration{};
  shared_ptr<string> expression{};
  shared_ptr<vector<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> notifyType{};
  shared_ptr<long> status{};
  shared_ptr<string> type{};

  CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule() {}

  explicit CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Annotations"] = boost::any(temp1);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dispatchRuleId) {
      res["DispatchRuleId"] = boost::any(*dispatchRuleId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["Annotations"].type()) {
        vector<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>>(expect1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DispatchRuleId") != m.end() && !m["DispatchRuleId"].empty()) {
      dispatchRuleId = make_shared<long>(boost::any_cast<long>(m["DispatchRuleId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule() = default;
};
class CreatePrometheusAlertRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule> prometheusAlertRule{};
  shared_ptr<string> requestId{};

  CreatePrometheusAlertRuleResponseBody() {}

  explicit CreatePrometheusAlertRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prometheusAlertRule) {
      res["PrometheusAlertRule"] = prometheusAlertRule ? boost::any(prometheusAlertRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrometheusAlertRule") != m.end() && !m["PrometheusAlertRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrometheusAlertRule"].type()) {
        CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrometheusAlertRule"]));
        prometheusAlertRule = make_shared<CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePrometheusAlertRuleResponseBody() = default;
};
class CreatePrometheusAlertRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePrometheusAlertRuleResponseBody> body{};

  CreatePrometheusAlertRuleResponse() {}

  explicit CreatePrometheusAlertRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrometheusAlertRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePrometheusAlertRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePrometheusAlertRuleResponse() = default;
};
class CreateRetcodeAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> retcodeAppName{};
  shared_ptr<string> retcodeAppType{};

  CreateRetcodeAppRequest() {}

  explicit CreateRetcodeAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retcodeAppName) {
      res["RetcodeAppName"] = boost::any(*retcodeAppName);
    }
    if (retcodeAppType) {
      res["RetcodeAppType"] = boost::any(*retcodeAppType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetcodeAppName") != m.end() && !m["RetcodeAppName"].empty()) {
      retcodeAppName = make_shared<string>(boost::any_cast<string>(m["RetcodeAppName"]));
    }
    if (m.find("RetcodeAppType") != m.end() && !m["RetcodeAppType"].empty()) {
      retcodeAppType = make_shared<string>(boost::any_cast<string>(m["RetcodeAppType"]));
    }
  }


  virtual ~CreateRetcodeAppRequest() = default;
};
class CreateRetcodeAppResponseBodyRetcodeAppDataBean : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> pid{};

  CreateRetcodeAppResponseBodyRetcodeAppDataBean() {}

  explicit CreateRetcodeAppResponseBodyRetcodeAppDataBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
  }


  virtual ~CreateRetcodeAppResponseBodyRetcodeAppDataBean() = default;
};
class CreateRetcodeAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRetcodeAppResponseBodyRetcodeAppDataBean> retcodeAppDataBean{};

  CreateRetcodeAppResponseBody() {}

  explicit CreateRetcodeAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (retcodeAppDataBean) {
      res["RetcodeAppDataBean"] = retcodeAppDataBean ? boost::any(retcodeAppDataBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RetcodeAppDataBean") != m.end() && !m["RetcodeAppDataBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetcodeAppDataBean"].type()) {
        CreateRetcodeAppResponseBodyRetcodeAppDataBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetcodeAppDataBean"]));
        retcodeAppDataBean = make_shared<CreateRetcodeAppResponseBodyRetcodeAppDataBean>(model1);
      }
    }
  }


  virtual ~CreateRetcodeAppResponseBody() = default;
};
class CreateRetcodeAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRetcodeAppResponseBody> body{};

  CreateRetcodeAppResponse() {}

  explicit CreateRetcodeAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRetcodeAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRetcodeAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRetcodeAppResponse() = default;
};
class CreateWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> contactName{};
  shared_ptr<string> httpHeaders{};
  shared_ptr<string> httpParams{};
  shared_ptr<string> method{};
  shared_ptr<string> regionId{};
  shared_ptr<string> url{};

  CreateWebhookRequest() {}

  explicit CreateWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (httpHeaders) {
      res["HttpHeaders"] = boost::any(*httpHeaders);
    }
    if (httpParams) {
      res["HttpParams"] = boost::any(*httpParams);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("HttpHeaders") != m.end() && !m["HttpHeaders"].empty()) {
      httpHeaders = make_shared<string>(boost::any_cast<string>(m["HttpHeaders"]));
    }
    if (m.find("HttpParams") != m.end() && !m["HttpParams"].empty()) {
      httpParams = make_shared<string>(boost::any_cast<string>(m["HttpParams"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateWebhookRequest() = default;
};
class CreateWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> requestId{};

  CreateWebhookResponseBody() {}

  explicit CreateWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateWebhookResponseBody() = default;
};
class CreateWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWebhookResponseBody> body{};

  CreateWebhookResponse() {}

  explicit CreateWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWebhookResponse() = default;
};
class CreateWehookRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> contactName{};
  shared_ptr<string> httpHeaders{};
  shared_ptr<string> httpParams{};
  shared_ptr<string> method{};
  shared_ptr<string> regionId{};
  shared_ptr<string> url{};

  CreateWehookRequest() {}

  explicit CreateWehookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (httpHeaders) {
      res["HttpHeaders"] = boost::any(*httpHeaders);
    }
    if (httpParams) {
      res["HttpParams"] = boost::any(*httpParams);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("HttpHeaders") != m.end() && !m["HttpHeaders"].empty()) {
      httpHeaders = make_shared<string>(boost::any_cast<string>(m["HttpHeaders"]));
    }
    if (m.find("HttpParams") != m.end() && !m["HttpParams"].empty()) {
      httpParams = make_shared<string>(boost::any_cast<string>(m["HttpParams"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateWehookRequest() = default;
};
class CreateWehookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> requestId{};

  CreateWehookResponseBody() {}

  explicit CreateWehookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateWehookResponseBody() = default;
};
class CreateWehookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWehookResponseBody> body{};

  CreateWehookResponse() {}

  explicit CreateWehookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWehookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWehookResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWehookResponse() = default;
};
class DeleteAlertContactRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> regionId{};

  DeleteAlertContactRequest() {}

  explicit DeleteAlertContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAlertContactRequest() = default;
};
class DeleteAlertContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteAlertContactResponseBody() {}

  explicit DeleteAlertContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAlertContactResponseBody() = default;
};
class DeleteAlertContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAlertContactResponseBody> body{};

  DeleteAlertContactResponse() {}

  explicit DeleteAlertContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAlertContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlertContactResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlertContactResponse() = default;
};
class DeleteAlertContactGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactGroupId{};
  shared_ptr<string> regionId{};

  DeleteAlertContactGroupRequest() {}

  explicit DeleteAlertContactGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupId) {
      res["ContactGroupId"] = boost::any(*contactGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupId") != m.end() && !m["ContactGroupId"].empty()) {
      contactGroupId = make_shared<long>(boost::any_cast<long>(m["ContactGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAlertContactGroupRequest() = default;
};
class DeleteAlertContactGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteAlertContactGroupResponseBody() {}

  explicit DeleteAlertContactGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAlertContactGroupResponseBody() = default;
};
class DeleteAlertContactGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAlertContactGroupResponseBody> body{};

  DeleteAlertContactGroupResponse() {}

  explicit DeleteAlertContactGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAlertContactGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlertContactGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlertContactGroupResponse() = default;
};
class DeleteAlertRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertIds{};
  shared_ptr<string> regionId{};

  DeleteAlertRulesRequest() {}

  explicit DeleteAlertRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertIds) {
      res["AlertIds"] = boost::any(*alertIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertIds") != m.end() && !m["AlertIds"].empty()) {
      alertIds = make_shared<string>(boost::any_cast<string>(m["AlertIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAlertRulesRequest() = default;
};
class DeleteAlertRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteAlertRulesResponseBody() {}

  explicit DeleteAlertRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAlertRulesResponseBody() = default;
};
class DeleteAlertRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAlertRulesResponseBody> body{};

  DeleteAlertRulesResponse() {}

  explicit DeleteAlertRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAlertRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlertRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlertRulesResponse() = default;
};
class DeleteAlertTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  DeleteAlertTemplateRequest() {}

  explicit DeleteAlertTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAlertTemplateRequest() = default;
};
class DeleteAlertTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAlertTemplateResponseBody() {}

  explicit DeleteAlertTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAlertTemplateResponseBody() = default;
};
class DeleteAlertTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAlertTemplateResponseBody> body{};

  DeleteAlertTemplateResponse() {}

  explicit DeleteAlertTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAlertTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlertTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlertTemplateResponse() = default;
};
class DeleteDispatchRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> regionId{};

  DeleteDispatchRuleRequest() {}

  explicit DeleteDispatchRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDispatchRuleRequest() = default;
};
class DeleteDispatchRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDispatchRuleResponseBody() {}

  explicit DeleteDispatchRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDispatchRuleResponseBody() = default;
};
class DeleteDispatchRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDispatchRuleResponseBody> body{};

  DeleteDispatchRuleResponse() {}

  explicit DeleteDispatchRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDispatchRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDispatchRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDispatchRuleResponse() = default;
};
class DeleteGrafanaResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> userId{};

  DeleteGrafanaResourceRequest() {}

  explicit DeleteGrafanaResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteGrafanaResourceRequest() = default;
};
class DeleteGrafanaResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  DeleteGrafanaResourceResponseBody() {}

  explicit DeleteGrafanaResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteGrafanaResourceResponseBody() = default;
};
class DeleteGrafanaResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGrafanaResourceResponseBody> body{};

  DeleteGrafanaResourceResponse() {}

  explicit DeleteGrafanaResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGrafanaResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGrafanaResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGrafanaResourceResponse() = default;
};
class DeletePrometheusAlertRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};

  DeletePrometheusAlertRuleRequest() {}

  explicit DeletePrometheusAlertRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
  }


  virtual ~DeletePrometheusAlertRuleRequest() = default;
};
class DeletePrometheusAlertRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePrometheusAlertRuleResponseBody() {}

  explicit DeletePrometheusAlertRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeletePrometheusAlertRuleResponseBody() = default;
};
class DeletePrometheusAlertRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePrometheusAlertRuleResponseBody> body{};

  DeletePrometheusAlertRuleResponse() {}

  explicit DeletePrometheusAlertRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePrometheusAlertRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePrometheusAlertRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePrometheusAlertRuleResponse() = default;
};
class DeleteRetcodeAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> regionId{};

  DeleteRetcodeAppRequest() {}

  explicit DeleteRetcodeAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteRetcodeAppRequest() = default;
};
class DeleteRetcodeAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  DeleteRetcodeAppResponseBody() {}

  explicit DeleteRetcodeAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRetcodeAppResponseBody() = default;
};
class DeleteRetcodeAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRetcodeAppResponseBody> body{};

  DeleteRetcodeAppResponse() {}

  explicit DeleteRetcodeAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRetcodeAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRetcodeAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRetcodeAppResponse() = default;
};
class DeleteScenarioRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> scenarioId{};

  DeleteScenarioRequest() {}

  explicit DeleteScenarioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scenarioId) {
      res["ScenarioId"] = boost::any(*scenarioId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScenarioId") != m.end() && !m["ScenarioId"].empty()) {
      scenarioId = make_shared<long>(boost::any_cast<long>(m["ScenarioId"]));
    }
  }


  virtual ~DeleteScenarioRequest() = default;
};
class DeleteScenarioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteScenarioResponseBody() {}

  explicit DeleteScenarioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteScenarioResponseBody() = default;
};
class DeleteScenarioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScenarioResponseBody> body{};

  DeleteScenarioResponse() {}

  explicit DeleteScenarioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScenarioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScenarioResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScenarioResponse() = default;
};
class DeleteTraceAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  DeleteTraceAppRequest() {}

  explicit DeleteTraceAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DeleteTraceAppRequest() = default;
};
class DeleteTraceAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  DeleteTraceAppResponseBody() {}

  explicit DeleteTraceAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTraceAppResponseBody() = default;
};
class DeleteTraceAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTraceAppResponseBody> body{};

  DeleteTraceAppResponse() {}

  explicit DeleteTraceAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTraceAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTraceAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTraceAppResponse() = default;
};
class DescribeDispatchRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> regionId{};

  DescribeDispatchRuleRequest() {}

  explicit DescribeDispatchRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDispatchRuleRequest() = default;
};
class DescribeDispatchRuleResponseBodyDispatchRuleGroupRules : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<long> groupInterval{};
  shared_ptr<long> groupWaitTime{};
  shared_ptr<vector<string>> groupingFields{};

  DescribeDispatchRuleResponseBodyDispatchRuleGroupRules() {}

  explicit DescribeDispatchRuleResponseBodyDispatchRuleGroupRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupInterval) {
      res["GroupInterval"] = boost::any(*groupInterval);
    }
    if (groupWaitTime) {
      res["GroupWaitTime"] = boost::any(*groupWaitTime);
    }
    if (groupingFields) {
      res["GroupingFields"] = boost::any(*groupingFields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("GroupInterval") != m.end() && !m["GroupInterval"].empty()) {
      groupInterval = make_shared<long>(boost::any_cast<long>(m["GroupInterval"]));
    }
    if (m.find("GroupWaitTime") != m.end() && !m["GroupWaitTime"].empty()) {
      groupWaitTime = make_shared<long>(boost::any_cast<long>(m["GroupWaitTime"]));
    }
    if (m.find("GroupingFields") != m.end() && !m["GroupingFields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupingFields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupingFields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupingFields = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDispatchRuleResponseBodyDispatchRuleGroupRules() = default;
};
class DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions() {}

  explicit DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions() = default;
};
class DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>> labelMatchExpressions{};

  DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups() {}

  explicit DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelMatchExpressions) {
      vector<boost::any> temp1;
      for(auto item1:*labelMatchExpressions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelMatchExpressions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelMatchExpressions") != m.end() && !m["LabelMatchExpressions"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelMatchExpressions"].type()) {
        vector<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelMatchExpressions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelMatchExpressions = make_shared<vector<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>>(expect1);
      }
    }
  }


  virtual ~DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups() = default;
};
class DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups>> labelMatchExpressionGroups{};

  DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid() {}

  explicit DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelMatchExpressionGroups) {
      vector<boost::any> temp1;
      for(auto item1:*labelMatchExpressionGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelMatchExpressionGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelMatchExpressionGroups") != m.end() && !m["LabelMatchExpressionGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelMatchExpressionGroups"].type()) {
        vector<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelMatchExpressionGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelMatchExpressionGroups = make_shared<vector<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups>>(expect1);
      }
    }
  }


  virtual ~DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid() = default;
};
class DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> notifyObjectId{};
  shared_ptr<string> notifyType{};

  DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects() {}

  explicit DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (notifyObjectId) {
      res["NotifyObjectId"] = boost::any(*notifyObjectId);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NotifyObjectId") != m.end() && !m["NotifyObjectId"].empty()) {
      notifyObjectId = make_shared<string>(boost::any_cast<string>(m["NotifyObjectId"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
  }


  virtual ~DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects() = default;
};
class DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules : public Darabonba::Model {
public:
  shared_ptr<vector<string>> notifyChannels{};
  shared_ptr<vector<DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects>> notifyObjects{};

  DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules() {}

  explicit DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyChannels) {
      res["NotifyChannels"] = boost::any(*notifyChannels);
    }
    if (notifyObjects) {
      vector<boost::any> temp1;
      for(auto item1:*notifyObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NotifyObjects"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotifyChannels") != m.end() && !m["NotifyChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotifyChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotifyChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NotifyObjects") != m.end() && !m["NotifyObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["NotifyObjects"].type()) {
        vector<DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NotifyObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyObjects = make_shared<vector<DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects>>(expect1);
      }
    }
  }


  virtual ~DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules() = default;
};
class DescribeDispatchRuleResponseBodyDispatchRule : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDispatchRuleResponseBodyDispatchRuleGroupRules>> groupRules{};
  shared_ptr<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid> labelMatchExpressionGrid{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules>> notifyRules{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> state{};

  DescribeDispatchRuleResponseBodyDispatchRule() {}

  explicit DescribeDispatchRuleResponseBodyDispatchRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupRules) {
      vector<boost::any> temp1;
      for(auto item1:*groupRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupRules"] = boost::any(temp1);
    }
    if (labelMatchExpressionGrid) {
      res["LabelMatchExpressionGrid"] = labelMatchExpressionGrid ? boost::any(labelMatchExpressionGrid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (notifyRules) {
      vector<boost::any> temp1;
      for(auto item1:*notifyRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NotifyRules"] = boost::any(temp1);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupRules") != m.end() && !m["GroupRules"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupRules"].type()) {
        vector<DescribeDispatchRuleResponseBodyDispatchRuleGroupRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDispatchRuleResponseBodyDispatchRuleGroupRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupRules = make_shared<vector<DescribeDispatchRuleResponseBodyDispatchRuleGroupRules>>(expect1);
      }
    }
    if (m.find("LabelMatchExpressionGrid") != m.end() && !m["LabelMatchExpressionGrid"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabelMatchExpressionGrid"].type()) {
        DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabelMatchExpressionGrid"]));
        labelMatchExpressionGrid = make_shared<DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NotifyRules") != m.end() && !m["NotifyRules"].empty()) {
      if (typeid(vector<boost::any>) == m["NotifyRules"].type()) {
        vector<DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NotifyRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notifyRules = make_shared<vector<DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules>>(expect1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeDispatchRuleResponseBodyDispatchRule() = default;
};
class DescribeDispatchRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDispatchRuleResponseBodyDispatchRule> dispatchRule{};
  shared_ptr<string> requestId{};

  DescribeDispatchRuleResponseBody() {}

  explicit DescribeDispatchRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dispatchRule) {
      res["DispatchRule"] = dispatchRule ? boost::any(dispatchRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DispatchRule") != m.end() && !m["DispatchRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["DispatchRule"].type()) {
        DescribeDispatchRuleResponseBodyDispatchRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DispatchRule"]));
        dispatchRule = make_shared<DescribeDispatchRuleResponseBodyDispatchRule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDispatchRuleResponseBody() = default;
};
class DescribeDispatchRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDispatchRuleResponseBody> body{};

  DescribeDispatchRuleResponse() {}

  explicit DescribeDispatchRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDispatchRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDispatchRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDispatchRuleResponse() = default;
};
class DescribePrometheusAlertRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};

  DescribePrometheusAlertRuleRequest() {}

  explicit DescribePrometheusAlertRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
  }


  virtual ~DescribePrometheusAlertRuleRequest() = default;
};
class DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations() {}

  explicit DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations() = default;
};
class DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels() {}

  explicit DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels() = default;
};
class DescribePrometheusAlertRuleResponseBodyPrometheusAlertRule : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> alertName{};
  shared_ptr<vector<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>> annotations{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> dispatchRuleId{};
  shared_ptr<string> duration{};
  shared_ptr<string> expression{};
  shared_ptr<vector<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> notifyType{};
  shared_ptr<long> status{};
  shared_ptr<string> type{};

  DescribePrometheusAlertRuleResponseBodyPrometheusAlertRule() {}

  explicit DescribePrometheusAlertRuleResponseBodyPrometheusAlertRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Annotations"] = boost::any(temp1);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dispatchRuleId) {
      res["DispatchRuleId"] = boost::any(*dispatchRuleId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["Annotations"].type()) {
        vector<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>>(expect1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DispatchRuleId") != m.end() && !m["DispatchRuleId"].empty()) {
      dispatchRuleId = make_shared<long>(boost::any_cast<long>(m["DispatchRuleId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribePrometheusAlertRuleResponseBodyPrometheusAlertRule() = default;
};
class DescribePrometheusAlertRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRule> prometheusAlertRule{};
  shared_ptr<string> requestId{};

  DescribePrometheusAlertRuleResponseBody() {}

  explicit DescribePrometheusAlertRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prometheusAlertRule) {
      res["PrometheusAlertRule"] = prometheusAlertRule ? boost::any(prometheusAlertRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrometheusAlertRule") != m.end() && !m["PrometheusAlertRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrometheusAlertRule"].type()) {
        DescribePrometheusAlertRuleResponseBodyPrometheusAlertRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrometheusAlertRule"]));
        prometheusAlertRule = make_shared<DescribePrometheusAlertRuleResponseBodyPrometheusAlertRule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePrometheusAlertRuleResponseBody() = default;
};
class DescribePrometheusAlertRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePrometheusAlertRuleResponseBody> body{};

  DescribePrometheusAlertRuleResponse() {}

  explicit DescribePrometheusAlertRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePrometheusAlertRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePrometheusAlertRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePrometheusAlertRuleResponse() = default;
};
class DescribeTraceLicenseKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeTraceLicenseKeyRequest() {}

  explicit DescribeTraceLicenseKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeTraceLicenseKeyRequest() = default;
};
class DescribeTraceLicenseKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> licenseKey{};
  shared_ptr<string> requestId{};

  DescribeTraceLicenseKeyResponseBody() {}

  explicit DescribeTraceLicenseKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (licenseKey) {
      res["LicenseKey"] = boost::any(*licenseKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LicenseKey") != m.end() && !m["LicenseKey"].empty()) {
      licenseKey = make_shared<string>(boost::any_cast<string>(m["LicenseKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTraceLicenseKeyResponseBody() = default;
};
class DescribeTraceLicenseKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTraceLicenseKeyResponseBody> body{};

  DescribeTraceLicenseKeyResponse() {}

  explicit DescribeTraceLicenseKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTraceLicenseKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTraceLicenseKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTraceLicenseKeyResponse() = default;
};
class DescribeTraceLocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeTraceLocationRequest() {}

  explicit DescribeTraceLocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeTraceLocationRequest() = default;
};
class DescribeTraceLocationResponseBodyRegionConfigs : public Darabonba::Model {
public:
  shared_ptr<string> regionNo{};
  shared_ptr<string> url{};

  DescribeTraceLocationResponseBodyRegionConfigs() {}

  explicit DescribeTraceLocationResponseBodyRegionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeTraceLocationResponseBodyRegionConfigs() = default;
};
class DescribeTraceLocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTraceLocationResponseBodyRegionConfigs>> regionConfigs{};
  shared_ptr<string> requestId{};

  DescribeTraceLocationResponseBody() {}

  explicit DescribeTraceLocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*regionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionConfigs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionConfigs") != m.end() && !m["RegionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionConfigs"].type()) {
        vector<DescribeTraceLocationResponseBodyRegionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTraceLocationResponseBodyRegionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionConfigs = make_shared<vector<DescribeTraceLocationResponseBodyRegionConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTraceLocationResponseBody() = default;
};
class DescribeTraceLocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTraceLocationResponseBody> body{};

  DescribeTraceLocationResponse() {}

  explicit DescribeTraceLocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTraceLocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTraceLocationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTraceLocationResponse() = default;
};
class DisableAlertTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  DisableAlertTemplateRequest() {}

  explicit DisableAlertTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisableAlertTemplateRequest() = default;
};
class DisableAlertTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableAlertTemplateResponseBody() {}

  explicit DisableAlertTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableAlertTemplateResponseBody() = default;
};
class DisableAlertTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAlertTemplateResponseBody> body{};

  DisableAlertTemplateResponse() {}

  explicit DisableAlertTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAlertTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAlertTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAlertTemplateResponse() = default;
};
class EnableAlertTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> regionId{};

  EnableAlertTemplateRequest() {}

  explicit EnableAlertTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~EnableAlertTemplateRequest() = default;
};
class EnableAlertTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableAlertTemplateResponseBody() {}

  explicit EnableAlertTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableAlertTemplateResponseBody() = default;
};
class EnableAlertTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAlertTemplateResponseBody> body{};

  EnableAlertTemplateResponse() {}

  explicit EnableAlertTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAlertTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAlertTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAlertTemplateResponse() = default;
};
class ExportPrometheusRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> name{};
  shared_ptr<string> nameSpace_{};
  shared_ptr<string> regionId{};

  ExportPrometheusRulesRequest() {}

  explicit ExportPrometheusRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nameSpace_) {
      res["NameSpace"] = boost::any(*nameSpace_);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NameSpace") != m.end() && !m["NameSpace"].empty()) {
      nameSpace_ = make_shared<string>(boost::any_cast<string>(m["NameSpace"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ExportPrometheusRulesRequest() = default;
};
class ExportPrometheusRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExportPrometheusRulesResponseBody() {}

  explicit ExportPrometheusRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportPrometheusRulesResponseBody() = default;
};
class ExportPrometheusRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportPrometheusRulesResponseBody> body{};

  ExportPrometheusRulesResponse() {}

  explicit ExportPrometheusRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportPrometheusRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportPrometheusRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ExportPrometheusRulesResponse() = default;
};
class GetAgentDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetAgentDownloadUrlRequest() {}

  explicit GetAgentDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAgentDownloadUrlRequest() = default;
};
class GetAgentDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> armsAgentDownloadUrl{};
  shared_ptr<string> requestId{};

  GetAgentDownloadUrlResponseBody() {}

  explicit GetAgentDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (armsAgentDownloadUrl) {
      res["ArmsAgentDownloadUrl"] = boost::any(*armsAgentDownloadUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArmsAgentDownloadUrl") != m.end() && !m["ArmsAgentDownloadUrl"].empty()) {
      armsAgentDownloadUrl = make_shared<string>(boost::any_cast<string>(m["ArmsAgentDownloadUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAgentDownloadUrlResponseBody() = default;
};
class GetAgentDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAgentDownloadUrlResponseBody> body{};

  GetAgentDownloadUrlResponse() {}

  explicit GetAgentDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAgentDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentDownloadUrlResponse() = default;
};
class GetAppApiByPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> intervalMills{};
  shared_ptr<string> PId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  GetAppApiByPageRequest() {}

  explicit GetAppApiByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (intervalMills) {
      res["IntervalMills"] = boost::any(*intervalMills);
    }
    if (PId) {
      res["PId"] = boost::any(*PId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IntervalMills") != m.end() && !m["IntervalMills"].empty()) {
      intervalMills = make_shared<long>(boost::any_cast<long>(m["IntervalMills"]));
    }
    if (m.find("PId") != m.end() && !m["PId"].empty()) {
      PId = make_shared<string>(boost::any_cast<string>(m["PId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetAppApiByPageRequest() = default;
};
class GetAppApiByPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> items{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> total{};

  GetAppApiByPageResponseBodyData() {}

  explicit GetAppApiByPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = boost::any(*items);
    }
    if (page) {
      res["Page"] = boost::any(*page);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Items"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      items = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
  }


  virtual ~GetAppApiByPageResponseBodyData() = default;
};
class GetAppApiByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetAppApiByPageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAppApiByPageResponseBody() {}

  explicit GetAppApiByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppApiByPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAppApiByPageResponseBodyData>(model1);
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


  virtual ~GetAppApiByPageResponseBody() = default;
};
class GetAppApiByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppApiByPageResponseBody> body{};

  GetAppApiByPageResponse() {}

  explicit GetAppApiByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppApiByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppApiByPageResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppApiByPageResponse() = default;
};
class GetConsistencySnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<long> currentTimestamp{};
  shared_ptr<string> pid{};
  shared_ptr<string> proxyUserId{};
  shared_ptr<string> regionId{};

  GetConsistencySnapshotRequest() {}

  explicit GetConsistencySnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (currentTimestamp) {
      res["CurrentTimestamp"] = boost::any(*currentTimestamp);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (proxyUserId) {
      res["ProxyUserId"] = boost::any(*proxyUserId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CurrentTimestamp") != m.end() && !m["CurrentTimestamp"].empty()) {
      currentTimestamp = make_shared<long>(boost::any_cast<long>(m["CurrentTimestamp"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("ProxyUserId") != m.end() && !m["ProxyUserId"].empty()) {
      proxyUserId = make_shared<string>(boost::any_cast<string>(m["ProxyUserId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConsistencySnapshotRequest() = default;
};
class GetConsistencySnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> consistencyResultJsonStr{};
  shared_ptr<string> requestId{};

  GetConsistencySnapshotResponseBody() {}

  explicit GetConsistencySnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consistencyResultJsonStr) {
      res["ConsistencyResultJsonStr"] = boost::any(*consistencyResultJsonStr);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsistencyResultJsonStr") != m.end() && !m["ConsistencyResultJsonStr"].empty()) {
      consistencyResultJsonStr = make_shared<string>(boost::any_cast<string>(m["ConsistencyResultJsonStr"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetConsistencySnapshotResponseBody() = default;
};
class GetConsistencySnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsistencySnapshotResponseBody> body{};

  GetConsistencySnapshotResponse() {}

  explicit GetConsistencySnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsistencySnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsistencySnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsistencySnapshotResponse() = default;
};
class GetIntegrationTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};

  GetIntegrationTokenRequest() {}

  explicit GetIntegrationTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetIntegrationTokenRequest() = default;
};
class GetIntegrationTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  GetIntegrationTokenResponseBody() {}

  explicit GetIntegrationTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetIntegrationTokenResponseBody() = default;
};
class GetIntegrationTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIntegrationTokenResponseBody> body{};

  GetIntegrationTokenResponse() {}

  explicit GetIntegrationTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIntegrationTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIntegrationTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetIntegrationTokenResponse() = default;
};
class GetMultipleTraceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> traceIDs{};

  GetMultipleTraceRequest() {}

  explicit GetMultipleTraceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (traceIDs) {
      res["TraceIDs"] = boost::any(*traceIDs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TraceIDs") != m.end() && !m["TraceIDs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TraceIDs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TraceIDs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      traceIDs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMultipleTraceRequest() = default;
};
class GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList() {}

  explicit GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList() = default;
};
class GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList : public Darabonba::Model {
public:
  shared_ptr<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList>> tagEntryList{};
  shared_ptr<long> timestamp{};

  GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList() {}

  explicit GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*tagEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagEntryList"] = boost::any(temp1);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagEntryList") != m.end() && !m["TagEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagEntryList"].type()) {
        vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagEntryList = make_shared<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventListTagEntryList>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList() = default;
};
class GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList() {}

  explicit GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList() = default;
};
class GetMultipleTraceResponseBodyMultiCallChainInfosSpans : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<bool> haveStack{};
  shared_ptr<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList>> logEventList{};
  shared_ptr<string> operationName{};
  shared_ptr<string> parentSpanId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> rpcId{};
  shared_ptr<long> rpcType{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spanId{};
  shared_ptr<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList>> tagEntryList{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> traceID{};

  GetMultipleTraceResponseBodyMultiCallChainInfosSpans() {}

  explicit GetMultipleTraceResponseBodyMultiCallChainInfosSpans(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (haveStack) {
      res["HaveStack"] = boost::any(*haveStack);
    }
    if (logEventList) {
      vector<boost::any> temp1;
      for(auto item1:*logEventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogEventList"] = boost::any(temp1);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parentSpanId) {
      res["ParentSpanId"] = boost::any(*parentSpanId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (rpcType) {
      res["RpcType"] = boost::any(*rpcType);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spanId) {
      res["SpanId"] = boost::any(*spanId);
    }
    if (tagEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*tagEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagEntryList"] = boost::any(temp1);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("HaveStack") != m.end() && !m["HaveStack"].empty()) {
      haveStack = make_shared<bool>(boost::any_cast<bool>(m["HaveStack"]));
    }
    if (m.find("LogEventList") != m.end() && !m["LogEventList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogEventList"].type()) {
        vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogEventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logEventList = make_shared<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList>>(expect1);
      }
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("ParentSpanId") != m.end() && !m["ParentSpanId"].empty()) {
      parentSpanId = make_shared<string>(boost::any_cast<string>(m["ParentSpanId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("RpcType") != m.end() && !m["RpcType"].empty()) {
      rpcType = make_shared<long>(boost::any_cast<long>(m["RpcType"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpanId") != m.end() && !m["SpanId"].empty()) {
      spanId = make_shared<string>(boost::any_cast<string>(m["SpanId"]));
    }
    if (m.find("TagEntryList") != m.end() && !m["TagEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagEntryList"].type()) {
        vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagEntryList = make_shared<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~GetMultipleTraceResponseBodyMultiCallChainInfosSpans() = default;
};
class GetMultipleTraceResponseBodyMultiCallChainInfos : public Darabonba::Model {
public:
  shared_ptr<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpans>> spans{};
  shared_ptr<string> traceID{};

  GetMultipleTraceResponseBodyMultiCallChainInfos() {}

  explicit GetMultipleTraceResponseBodyMultiCallChainInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spans) {
      vector<boost::any> temp1;
      for(auto item1:*spans){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Spans"] = boost::any(temp1);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Spans") != m.end() && !m["Spans"].empty()) {
      if (typeid(vector<boost::any>) == m["Spans"].type()) {
        vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpans> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Spans"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultipleTraceResponseBodyMultiCallChainInfosSpans model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spans = make_shared<vector<GetMultipleTraceResponseBodyMultiCallChainInfosSpans>>(expect1);
      }
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~GetMultipleTraceResponseBodyMultiCallChainInfos() = default;
};
class GetMultipleTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetMultipleTraceResponseBodyMultiCallChainInfos>> multiCallChainInfos{};
  shared_ptr<string> requestId{};

  GetMultipleTraceResponseBody() {}

  explicit GetMultipleTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiCallChainInfos) {
      vector<boost::any> temp1;
      for(auto item1:*multiCallChainInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MultiCallChainInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MultiCallChainInfos") != m.end() && !m["MultiCallChainInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MultiCallChainInfos"].type()) {
        vector<GetMultipleTraceResponseBodyMultiCallChainInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MultiCallChainInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMultipleTraceResponseBodyMultiCallChainInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiCallChainInfos = make_shared<vector<GetMultipleTraceResponseBodyMultiCallChainInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMultipleTraceResponseBody() = default;
};
class GetMultipleTraceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMultipleTraceResponseBody> body{};

  GetMultipleTraceResponse() {}

  explicit GetMultipleTraceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMultipleTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultipleTraceResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultipleTraceResponse() = default;
};
class GetPrometheusApiTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetPrometheusApiTokenRequest() {}

  explicit GetPrometheusApiTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPrometheusApiTokenRequest() = default;
};
class GetPrometheusApiTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  GetPrometheusApiTokenResponseBody() {}

  explicit GetPrometheusApiTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPrometheusApiTokenResponseBody() = default;
};
class GetPrometheusApiTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPrometheusApiTokenResponseBody> body{};

  GetPrometheusApiTokenResponse() {}

  explicit GetPrometheusApiTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPrometheusApiTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPrometheusApiTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetPrometheusApiTokenResponse() = default;
};
class GetPrometheusRemoteActionTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  GetPrometheusRemoteActionTokenRequest() {}

  explicit GetPrometheusRemoteActionTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetPrometheusRemoteActionTokenRequest() = default;
};
class GetPrometheusRemoteActionTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetPrometheusRemoteActionTokenResponseBody() {}

  explicit GetPrometheusRemoteActionTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~GetPrometheusRemoteActionTokenResponseBody() = default;
};
class GetPrometheusRemoteActionTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPrometheusRemoteActionTokenResponseBody> body{};

  GetPrometheusRemoteActionTokenResponse() {}

  explicit GetPrometheusRemoteActionTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPrometheusRemoteActionTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPrometheusRemoteActionTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetPrometheusRemoteActionTokenResponse() = default;
};
class GetRetcodeShareUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> pid{};

  GetRetcodeShareUrlRequest() {}

  explicit GetRetcodeShareUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
  }


  virtual ~GetRetcodeShareUrlRequest() = default;
};
class GetRetcodeShareUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> url{};

  GetRetcodeShareUrlResponseBody() {}

  explicit GetRetcodeShareUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetRetcodeShareUrlResponseBody() = default;
};
class GetRetcodeShareUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRetcodeShareUrlResponseBody> body{};

  GetRetcodeShareUrlResponse() {}

  explicit GetRetcodeShareUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRetcodeShareUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRetcodeShareUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetRetcodeShareUrlResponse() = default;
};
class GetStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rpcID{};
  shared_ptr<string> traceID{};

  GetStackRequest() {}

  explicit GetStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rpcID) {
      res["RpcID"] = boost::any(*rpcID);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RpcID") != m.end() && !m["RpcID"].empty()) {
      rpcID = make_shared<string>(boost::any_cast<string>(m["RpcID"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~GetStackRequest() = default;
};
class GetStackResponseBodyStackInfoExtInfo : public Darabonba::Model {
public:
  shared_ptr<string> info{};
  shared_ptr<string> type{};

  GetStackResponseBodyStackInfoExtInfo() {}

  explicit GetStackResponseBodyStackInfoExtInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (info) {
      res["Info"] = boost::any(*info);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetStackResponseBodyStackInfoExtInfo() = default;
};
class GetStackResponseBodyStackInfo : public Darabonba::Model {
public:
  shared_ptr<string> api{};
  shared_ptr<long> duration{};
  shared_ptr<string> exception{};
  shared_ptr<GetStackResponseBodyStackInfoExtInfo> extInfo{};
  shared_ptr<string> line{};
  shared_ptr<string> rpcId{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startTime{};

  GetStackResponseBodyStackInfo() {}

  explicit GetStackResponseBodyStackInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["Api"] = boost::any(*api);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (exception) {
      res["Exception"] = boost::any(*exception);
    }
    if (extInfo) {
      res["ExtInfo"] = extInfo ? boost::any(extInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Api") != m.end() && !m["Api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["Api"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Exception") != m.end() && !m["Exception"].empty()) {
      exception = make_shared<string>(boost::any_cast<string>(m["Exception"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtInfo"].type()) {
        GetStackResponseBodyStackInfoExtInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtInfo"]));
        extInfo = make_shared<GetStackResponseBodyStackInfoExtInfo>(model1);
      }
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<string>(boost::any_cast<string>(m["Line"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetStackResponseBodyStackInfo() = default;
};
class GetStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetStackResponseBodyStackInfo>> stackInfo{};

  GetStackResponseBody() {}

  explicit GetStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackInfo) {
      vector<boost::any> temp1;
      for(auto item1:*stackInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackInfo") != m.end() && !m["StackInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["StackInfo"].type()) {
        vector<GetStackResponseBodyStackInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StackInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackResponseBodyStackInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stackInfo = make_shared<vector<GetStackResponseBodyStackInfo>>(expect1);
      }
    }
  }


  virtual ~GetStackResponseBody() = default;
};
class GetStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackResponseBody> body{};

  GetStackResponse() {}

  explicit GetStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackResponse() = default;
};
class GetTraceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> traceID{};

  GetTraceRequest() {}

  explicit GetTraceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~GetTraceRequest() = default;
};
class GetTraceResponseBodySpansLogEventListTagEntryList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTraceResponseBodySpansLogEventListTagEntryList() {}

  explicit GetTraceResponseBodySpansLogEventListTagEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTraceResponseBodySpansLogEventListTagEntryList() = default;
};
class GetTraceResponseBodySpansLogEventList : public Darabonba::Model {
public:
  shared_ptr<vector<GetTraceResponseBodySpansLogEventListTagEntryList>> tagEntryList{};
  shared_ptr<long> timestamp{};

  GetTraceResponseBodySpansLogEventList() {}

  explicit GetTraceResponseBodySpansLogEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*tagEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagEntryList"] = boost::any(temp1);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagEntryList") != m.end() && !m["TagEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagEntryList"].type()) {
        vector<GetTraceResponseBodySpansLogEventListTagEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpansLogEventListTagEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagEntryList = make_shared<vector<GetTraceResponseBodySpansLogEventListTagEntryList>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~GetTraceResponseBodySpansLogEventList() = default;
};
class GetTraceResponseBodySpansTagEntryList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTraceResponseBodySpansTagEntryList() {}

  explicit GetTraceResponseBodySpansTagEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTraceResponseBodySpansTagEntryList() = default;
};
class GetTraceResponseBodySpans : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<bool> haveStack{};
  shared_ptr<vector<GetTraceResponseBodySpansLogEventList>> logEventList{};
  shared_ptr<string> operationName{};
  shared_ptr<string> parentSpanId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> rpcId{};
  shared_ptr<long> rpcType{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spanId{};
  shared_ptr<vector<GetTraceResponseBodySpansTagEntryList>> tagEntryList{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> traceID{};

  GetTraceResponseBodySpans() {}

  explicit GetTraceResponseBodySpans(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (haveStack) {
      res["HaveStack"] = boost::any(*haveStack);
    }
    if (logEventList) {
      vector<boost::any> temp1;
      for(auto item1:*logEventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogEventList"] = boost::any(temp1);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parentSpanId) {
      res["ParentSpanId"] = boost::any(*parentSpanId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (rpcId) {
      res["RpcId"] = boost::any(*rpcId);
    }
    if (rpcType) {
      res["RpcType"] = boost::any(*rpcType);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spanId) {
      res["SpanId"] = boost::any(*spanId);
    }
    if (tagEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*tagEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagEntryList"] = boost::any(temp1);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("HaveStack") != m.end() && !m["HaveStack"].empty()) {
      haveStack = make_shared<bool>(boost::any_cast<bool>(m["HaveStack"]));
    }
    if (m.find("LogEventList") != m.end() && !m["LogEventList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogEventList"].type()) {
        vector<GetTraceResponseBodySpansLogEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogEventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpansLogEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logEventList = make_shared<vector<GetTraceResponseBodySpansLogEventList>>(expect1);
      }
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("ParentSpanId") != m.end() && !m["ParentSpanId"].empty()) {
      parentSpanId = make_shared<string>(boost::any_cast<string>(m["ParentSpanId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("RpcId") != m.end() && !m["RpcId"].empty()) {
      rpcId = make_shared<string>(boost::any_cast<string>(m["RpcId"]));
    }
    if (m.find("RpcType") != m.end() && !m["RpcType"].empty()) {
      rpcType = make_shared<long>(boost::any_cast<long>(m["RpcType"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpanId") != m.end() && !m["SpanId"].empty()) {
      spanId = make_shared<string>(boost::any_cast<string>(m["SpanId"]));
    }
    if (m.find("TagEntryList") != m.end() && !m["TagEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagEntryList"].type()) {
        vector<GetTraceResponseBodySpansTagEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpansTagEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagEntryList = make_shared<vector<GetTraceResponseBodySpansTagEntryList>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~GetTraceResponseBodySpans() = default;
};
class GetTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetTraceResponseBodySpans>> spans{};

  GetTraceResponseBody() {}

  explicit GetTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spans) {
      vector<boost::any> temp1;
      for(auto item1:*spans){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Spans"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Spans") != m.end() && !m["Spans"].empty()) {
      if (typeid(vector<boost::any>) == m["Spans"].type()) {
        vector<GetTraceResponseBodySpans> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Spans"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTraceResponseBodySpans model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spans = make_shared<vector<GetTraceResponseBodySpans>>(expect1);
      }
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
        GetTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTraceResponseBody>(model1);
      }
    }
  }


  virtual ~GetTraceResponse() = default;
};
class GetTraceAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};

  GetTraceAppRequest() {}

  explicit GetTraceAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetTraceAppRequest() = default;
};
class GetTraceAppResponseBodyTraceApp : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> show{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  GetTraceAppResponseBodyTraceApp() {}

  explicit GetTraceAppResponseBodyTraceApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (show) {
      res["Show"] = boost::any(*show);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Show") != m.end() && !m["Show"].empty()) {
      show = make_shared<bool>(boost::any_cast<bool>(m["Show"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetTraceAppResponseBodyTraceApp() = default;
};
class GetTraceAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTraceAppResponseBodyTraceApp> traceApp{};

  GetTraceAppResponseBody() {}

  explicit GetTraceAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceApp) {
      res["TraceApp"] = traceApp ? boost::any(traceApp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceApp") != m.end() && !m["TraceApp"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceApp"].type()) {
        GetTraceAppResponseBodyTraceApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceApp"]));
        traceApp = make_shared<GetTraceAppResponseBodyTraceApp>(model1);
      }
    }
  }


  virtual ~GetTraceAppResponseBody() = default;
};
class GetTraceAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTraceAppResponseBody> body{};

  GetTraceAppResponse() {}

  explicit GetTraceAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTraceAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTraceAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetTraceAppResponse() = default;
};
class ImportAppAlertRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactGroupIds{};
  shared_ptr<bool> isAutoStart{};
  shared_ptr<string> pids{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templageAlertConfig{};
  shared_ptr<string> templateAlertId{};

  ImportAppAlertRulesRequest() {}

  explicit ImportAppAlertRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupIds) {
      res["ContactGroupIds"] = boost::any(*contactGroupIds);
    }
    if (isAutoStart) {
      res["IsAutoStart"] = boost::any(*isAutoStart);
    }
    if (pids) {
      res["Pids"] = boost::any(*pids);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templageAlertConfig) {
      res["TemplageAlertConfig"] = boost::any(*templageAlertConfig);
    }
    if (templateAlertId) {
      res["TemplateAlertId"] = boost::any(*templateAlertId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      contactGroupIds = make_shared<string>(boost::any_cast<string>(m["ContactGroupIds"]));
    }
    if (m.find("IsAutoStart") != m.end() && !m["IsAutoStart"].empty()) {
      isAutoStart = make_shared<bool>(boost::any_cast<bool>(m["IsAutoStart"]));
    }
    if (m.find("Pids") != m.end() && !m["Pids"].empty()) {
      pids = make_shared<string>(boost::any_cast<string>(m["Pids"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplageAlertConfig") != m.end() && !m["TemplageAlertConfig"].empty()) {
      templageAlertConfig = make_shared<string>(boost::any_cast<string>(m["TemplageAlertConfig"]));
    }
    if (m.find("TemplateAlertId") != m.end() && !m["TemplateAlertId"].empty()) {
      templateAlertId = make_shared<string>(boost::any_cast<string>(m["TemplateAlertId"]));
    }
  }


  virtual ~ImportAppAlertRulesRequest() = default;
};
class ImportAppAlertRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ImportAppAlertRulesResponseBody() {}

  explicit ImportAppAlertRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImportAppAlertRulesResponseBody() = default;
};
class ImportAppAlertRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportAppAlertRulesResponseBody> body{};

  ImportAppAlertRulesResponse() {}

  explicit ImportAppAlertRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportAppAlertRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportAppAlertRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ImportAppAlertRulesResponse() = default;
};
class ImportCustomAlertRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactGroupIds{};
  shared_ptr<bool> isAutoStart{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templageAlertConfig{};
  shared_ptr<string> templateAlertConfig{};

  ImportCustomAlertRulesRequest() {}

  explicit ImportCustomAlertRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupIds) {
      res["ContactGroupIds"] = boost::any(*contactGroupIds);
    }
    if (isAutoStart) {
      res["IsAutoStart"] = boost::any(*isAutoStart);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templageAlertConfig) {
      res["TemplageAlertConfig"] = boost::any(*templageAlertConfig);
    }
    if (templateAlertConfig) {
      res["TemplateAlertConfig"] = boost::any(*templateAlertConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      contactGroupIds = make_shared<string>(boost::any_cast<string>(m["ContactGroupIds"]));
    }
    if (m.find("IsAutoStart") != m.end() && !m["IsAutoStart"].empty()) {
      isAutoStart = make_shared<bool>(boost::any_cast<bool>(m["IsAutoStart"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplageAlertConfig") != m.end() && !m["TemplageAlertConfig"].empty()) {
      templageAlertConfig = make_shared<string>(boost::any_cast<string>(m["TemplageAlertConfig"]));
    }
    if (m.find("TemplateAlertConfig") != m.end() && !m["TemplateAlertConfig"].empty()) {
      templateAlertConfig = make_shared<string>(boost::any_cast<string>(m["TemplateAlertConfig"]));
    }
  }


  virtual ~ImportCustomAlertRulesRequest() = default;
};
class ImportCustomAlertRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ImportCustomAlertRulesResponseBody() {}

  explicit ImportCustomAlertRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImportCustomAlertRulesResponseBody() = default;
};
class ImportCustomAlertRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportCustomAlertRulesResponseBody> body{};

  ImportCustomAlertRulesResponse() {}

  explicit ImportCustomAlertRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportCustomAlertRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportCustomAlertRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ImportCustomAlertRulesResponse() = default;
};
class ImportPrometheusRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> content{};
  shared_ptr<string> name{};
  shared_ptr<string> nameSpace_{};
  shared_ptr<string> regionId{};

  ImportPrometheusRulesRequest() {}

  explicit ImportPrometheusRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nameSpace_) {
      res["NameSpace"] = boost::any(*nameSpace_);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NameSpace") != m.end() && !m["NameSpace"].empty()) {
      nameSpace_ = make_shared<string>(boost::any_cast<string>(m["NameSpace"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ImportPrometheusRulesRequest() = default;
};
class ImportPrometheusRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ImportPrometheusRulesResponseBody() {}

  explicit ImportPrometheusRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImportPrometheusRulesResponseBody() = default;
};
class ImportPrometheusRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportPrometheusRulesResponseBody> body{};

  ImportPrometheusRulesResponse() {}

  explicit ImportPrometheusRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportPrometheusRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportPrometheusRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ImportPrometheusRulesResponse() = default;
};
class InstallCmsExporterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> cmsArgs{};
  shared_ptr<string> regionId{};

  InstallCmsExporterRequest() {}

  explicit InstallCmsExporterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (cmsArgs) {
      res["CmsArgs"] = boost::any(*cmsArgs);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CmsArgs") != m.end() && !m["CmsArgs"].empty()) {
      cmsArgs = make_shared<string>(boost::any_cast<string>(m["CmsArgs"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~InstallCmsExporterRequest() = default;
};
class InstallCmsExporterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InstallCmsExporterResponseBody() {}

  explicit InstallCmsExporterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InstallCmsExporterResponseBody() = default;
};
class InstallCmsExporterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallCmsExporterResponseBody> body{};

  InstallCmsExporterResponse() {}

  explicit InstallCmsExporterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallCmsExporterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallCmsExporterResponseBody>(model1);
      }
    }
  }


  virtual ~InstallCmsExporterResponse() = default;
};
class InstallEventerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> proxyUserId{};
  shared_ptr<string> regionId{};

  InstallEventerRequest() {}

  explicit InstallEventerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (proxyUserId) {
      res["ProxyUserId"] = boost::any(*proxyUserId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ProxyUserId") != m.end() && !m["ProxyUserId"].empty()) {
      proxyUserId = make_shared<string>(boost::any_cast<string>(m["ProxyUserId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~InstallEventerRequest() = default;
};
class InstallEventerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  InstallEventerResponseBody() {}

  explicit InstallEventerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InstallEventerResponseBody() = default;
};
class InstallEventerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallEventerResponseBody> body{};

  InstallEventerResponse() {}

  explicit InstallEventerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallEventerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallEventerResponseBody>(model1);
      }
    }
  }


  virtual ~InstallEventerResponse() = default;
};
class ListActivatedAlertsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> filter{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListActivatedAlertsRequest() {}

  explicit ListActivatedAlertsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
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
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListActivatedAlertsRequest() = default;
};
class ListActivatedAlertsResponseBodyPageAlertsDispatchRules : public Darabonba::Model {
public:
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};

  ListActivatedAlertsResponseBodyPageAlertsDispatchRules() {}

  explicit ListActivatedAlertsResponseBodyPageAlertsDispatchRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~ListActivatedAlertsResponseBodyPageAlertsDispatchRules() = default;
};
class ListActivatedAlertsResponseBodyPageAlerts : public Darabonba::Model {
public:
  shared_ptr<string> alertId{};
  shared_ptr<string> alertName{};
  shared_ptr<string> alertType{};
  shared_ptr<long> count{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<ListActivatedAlertsResponseBodyPageAlertsDispatchRules>> dispatchRules{};
  shared_ptr<long> endsAt{};
  shared_ptr<map<string, boost::any>> expandFields{};
  shared_ptr<string> integrationName{};
  shared_ptr<string> integrationType{};
  shared_ptr<string> involvedObjectKind{};
  shared_ptr<string> involvedObjectName{};
  shared_ptr<string> message{};
  shared_ptr<string> severity{};
  shared_ptr<long> startsAt{};
  shared_ptr<string> status{};

  ListActivatedAlertsResponseBodyPageAlerts() {}

  explicit ListActivatedAlertsResponseBodyPageAlerts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dispatchRules) {
      vector<boost::any> temp1;
      for(auto item1:*dispatchRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DispatchRules"] = boost::any(temp1);
    }
    if (endsAt) {
      res["EndsAt"] = boost::any(*endsAt);
    }
    if (expandFields) {
      res["ExpandFields"] = boost::any(*expandFields);
    }
    if (integrationName) {
      res["IntegrationName"] = boost::any(*integrationName);
    }
    if (integrationType) {
      res["IntegrationType"] = boost::any(*integrationType);
    }
    if (involvedObjectKind) {
      res["InvolvedObjectKind"] = boost::any(*involvedObjectKind);
    }
    if (involvedObjectName) {
      res["InvolvedObjectName"] = boost::any(*involvedObjectName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (startsAt) {
      res["StartsAt"] = boost::any(*startsAt);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<string>(boost::any_cast<string>(m["AlertId"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<string>(boost::any_cast<string>(m["AlertType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DispatchRules") != m.end() && !m["DispatchRules"].empty()) {
      if (typeid(vector<boost::any>) == m["DispatchRules"].type()) {
        vector<ListActivatedAlertsResponseBodyPageAlertsDispatchRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DispatchRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListActivatedAlertsResponseBodyPageAlertsDispatchRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dispatchRules = make_shared<vector<ListActivatedAlertsResponseBodyPageAlertsDispatchRules>>(expect1);
      }
    }
    if (m.find("EndsAt") != m.end() && !m["EndsAt"].empty()) {
      endsAt = make_shared<long>(boost::any_cast<long>(m["EndsAt"]));
    }
    if (m.find("ExpandFields") != m.end() && !m["ExpandFields"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExpandFields"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      expandFields = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("IntegrationName") != m.end() && !m["IntegrationName"].empty()) {
      integrationName = make_shared<string>(boost::any_cast<string>(m["IntegrationName"]));
    }
    if (m.find("IntegrationType") != m.end() && !m["IntegrationType"].empty()) {
      integrationType = make_shared<string>(boost::any_cast<string>(m["IntegrationType"]));
    }
    if (m.find("InvolvedObjectKind") != m.end() && !m["InvolvedObjectKind"].empty()) {
      involvedObjectKind = make_shared<string>(boost::any_cast<string>(m["InvolvedObjectKind"]));
    }
    if (m.find("InvolvedObjectName") != m.end() && !m["InvolvedObjectName"].empty()) {
      involvedObjectName = make_shared<string>(boost::any_cast<string>(m["InvolvedObjectName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("StartsAt") != m.end() && !m["StartsAt"].empty()) {
      startsAt = make_shared<long>(boost::any_cast<long>(m["StartsAt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListActivatedAlertsResponseBodyPageAlerts() = default;
};
class ListActivatedAlertsResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<vector<ListActivatedAlertsResponseBodyPageAlerts>> alerts{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListActivatedAlertsResponseBodyPage() {}

  explicit ListActivatedAlertsResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alerts) {
      vector<boost::any> temp1;
      for(auto item1:*alerts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Alerts"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
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
    if (m.find("Alerts") != m.end() && !m["Alerts"].empty()) {
      if (typeid(vector<boost::any>) == m["Alerts"].type()) {
        vector<ListActivatedAlertsResponseBodyPageAlerts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Alerts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListActivatedAlertsResponseBodyPageAlerts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alerts = make_shared<vector<ListActivatedAlertsResponseBodyPageAlerts>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListActivatedAlertsResponseBodyPage() = default;
};
class ListActivatedAlertsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListActivatedAlertsResponseBodyPage> page{};
  shared_ptr<string> requestId{};

  ListActivatedAlertsResponseBody() {}

  explicit ListActivatedAlertsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListActivatedAlertsResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListActivatedAlertsResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListActivatedAlertsResponseBody() = default;
};
class ListActivatedAlertsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListActivatedAlertsResponseBody> body{};

  ListActivatedAlertsResponse() {}

  explicit ListActivatedAlertsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListActivatedAlertsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListActivatedAlertsResponseBody>(model1);
      }
    }
  }


  virtual ~ListActivatedAlertsResponse() = default;
};
class ListAlertTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertProvider{};
  shared_ptr<string> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> status{};
  shared_ptr<string> templateProvider{};
  shared_ptr<string> type{};

  ListAlertTemplatesRequest() {}

  explicit ListAlertTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertProvider) {
      res["AlertProvider"] = boost::any(*alertProvider);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateProvider) {
      res["TemplateProvider"] = boost::any(*templateProvider);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertProvider") != m.end() && !m["AlertProvider"].empty()) {
      alertProvider = make_shared<string>(boost::any_cast<string>(m["AlertProvider"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("TemplateProvider") != m.end() && !m["TemplateProvider"].empty()) {
      templateProvider = make_shared<string>(boost::any_cast<string>(m["TemplateProvider"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAlertTemplatesRequest() = default;
};
class ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions() {}

  explicit ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions() = default;
};
class ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>> labelMatchExpressions{};

  ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups() {}

  explicit ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelMatchExpressions) {
      vector<boost::any> temp1;
      for(auto item1:*labelMatchExpressions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelMatchExpressions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelMatchExpressions") != m.end() && !m["LabelMatchExpressions"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelMatchExpressions"].type()) {
        vector<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelMatchExpressions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelMatchExpressions = make_shared<vector<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>>(expect1);
      }
    }
  }


  virtual ~ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups() = default;
};
class ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGrid : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups>> labelMatchExpressionGroups{};

  ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGrid() {}

  explicit ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGrid(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelMatchExpressionGroups) {
      vector<boost::any> temp1;
      for(auto item1:*labelMatchExpressionGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelMatchExpressionGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelMatchExpressionGroups") != m.end() && !m["LabelMatchExpressionGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelMatchExpressionGroups"].type()) {
        vector<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelMatchExpressionGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelMatchExpressionGroups = make_shared<vector<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGridLabelMatchExpressionGroups>>(expect1);
      }
    }
  }


  virtual ~ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGrid() = default;
};
class ListAlertTemplatesResponseBodyAlertTemplates : public Darabonba::Model {
public:
  shared_ptr<string> alertProvider{};
  shared_ptr<map<string, boost::any>> annotations{};
  shared_ptr<long> id{};
  shared_ptr<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGrid> labelMatchExpressionGrid{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> parentId{};
  shared_ptr<bool> public_{};
  shared_ptr<string> rule{};
  shared_ptr<bool> status{};
  shared_ptr<string> templateProvider{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  ListAlertTemplatesResponseBodyAlertTemplates() {}

  explicit ListAlertTemplatesResponseBodyAlertTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertProvider) {
      res["AlertProvider"] = boost::any(*alertProvider);
    }
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (labelMatchExpressionGrid) {
      res["LabelMatchExpressionGrid"] = labelMatchExpressionGrid ? boost::any(labelMatchExpressionGrid->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateProvider) {
      res["TemplateProvider"] = boost::any(*templateProvider);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertProvider") != m.end() && !m["AlertProvider"].empty()) {
      alertProvider = make_shared<string>(boost::any_cast<string>(m["AlertProvider"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Annotations"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      annotations = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LabelMatchExpressionGrid") != m.end() && !m["LabelMatchExpressionGrid"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabelMatchExpressionGrid"].type()) {
        ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGrid model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabelMatchExpressionGrid"]));
        labelMatchExpressionGrid = make_shared<ListAlertTemplatesResponseBodyAlertTemplatesLabelMatchExpressionGrid>(model1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<bool>(boost::any_cast<bool>(m["Public"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("TemplateProvider") != m.end() && !m["TemplateProvider"].empty()) {
      templateProvider = make_shared<string>(boost::any_cast<string>(m["TemplateProvider"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAlertTemplatesResponseBodyAlertTemplates() = default;
};
class ListAlertTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlertTemplatesResponseBodyAlertTemplates>> alertTemplates{};
  shared_ptr<string> requestId{};

  ListAlertTemplatesResponseBody() {}

  explicit ListAlertTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*alertTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlertTemplates"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertTemplates") != m.end() && !m["AlertTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["AlertTemplates"].type()) {
        vector<ListAlertTemplatesResponseBodyAlertTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlertTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlertTemplatesResponseBodyAlertTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alertTemplates = make_shared<vector<ListAlertTemplatesResponseBodyAlertTemplates>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAlertTemplatesResponseBody() = default;
};
class ListAlertTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlertTemplatesResponseBody> body{};

  ListAlertTemplatesResponse() {}

  explicit ListAlertTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlertTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlertTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlertTemplatesResponse() = default;
};
class ListClusterFromGrafanaRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListClusterFromGrafanaRequest() {}

  explicit ListClusterFromGrafanaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClusterFromGrafanaRequest() = default;
};
class ListClusterFromGrafanaResponseBodyPromClusterList : public Darabonba::Model {
public:
  shared_ptr<string> agentStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> controllerId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> extra{};
  shared_ptr<long> id{};
  shared_ptr<long> installTime{};
  shared_ptr<bool> isControllerInstalled{};
  shared_ptr<long> lastHeartBeatTime{};
  shared_ptr<long> nodeNum{};
  shared_ptr<string> options{};
  shared_ptr<string> pluginsJsonArray{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stateJson{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  ListClusterFromGrafanaResponseBodyPromClusterList() {}

  explicit ListClusterFromGrafanaResponseBodyPromClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (controllerId) {
      res["ControllerId"] = boost::any(*controllerId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (installTime) {
      res["InstallTime"] = boost::any(*installTime);
    }
    if (isControllerInstalled) {
      res["IsControllerInstalled"] = boost::any(*isControllerInstalled);
    }
    if (lastHeartBeatTime) {
      res["LastHeartBeatTime"] = boost::any(*lastHeartBeatTime);
    }
    if (nodeNum) {
      res["NodeNum"] = boost::any(*nodeNum);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (pluginsJsonArray) {
      res["PluginsJsonArray"] = boost::any(*pluginsJsonArray);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stateJson) {
      res["StateJson"] = boost::any(*stateJson);
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
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<string>(boost::any_cast<string>(m["AgentStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ControllerId") != m.end() && !m["ControllerId"].empty()) {
      controllerId = make_shared<string>(boost::any_cast<string>(m["ControllerId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstallTime") != m.end() && !m["InstallTime"].empty()) {
      installTime = make_shared<long>(boost::any_cast<long>(m["InstallTime"]));
    }
    if (m.find("IsControllerInstalled") != m.end() && !m["IsControllerInstalled"].empty()) {
      isControllerInstalled = make_shared<bool>(boost::any_cast<bool>(m["IsControllerInstalled"]));
    }
    if (m.find("LastHeartBeatTime") != m.end() && !m["LastHeartBeatTime"].empty()) {
      lastHeartBeatTime = make_shared<long>(boost::any_cast<long>(m["LastHeartBeatTime"]));
    }
    if (m.find("NodeNum") != m.end() && !m["NodeNum"].empty()) {
      nodeNum = make_shared<long>(boost::any_cast<long>(m["NodeNum"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("PluginsJsonArray") != m.end() && !m["PluginsJsonArray"].empty()) {
      pluginsJsonArray = make_shared<string>(boost::any_cast<string>(m["PluginsJsonArray"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StateJson") != m.end() && !m["StateJson"].empty()) {
      stateJson = make_shared<string>(boost::any_cast<string>(m["StateJson"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListClusterFromGrafanaResponseBodyPromClusterList() = default;
};
class ListClusterFromGrafanaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClusterFromGrafanaResponseBodyPromClusterList>> promClusterList{};
  shared_ptr<string> requestId{};

  ListClusterFromGrafanaResponseBody() {}

  explicit ListClusterFromGrafanaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promClusterList) {
      vector<boost::any> temp1;
      for(auto item1:*promClusterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PromClusterList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromClusterList") != m.end() && !m["PromClusterList"].empty()) {
      if (typeid(vector<boost::any>) == m["PromClusterList"].type()) {
        vector<ListClusterFromGrafanaResponseBodyPromClusterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PromClusterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterFromGrafanaResponseBodyPromClusterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promClusterList = make_shared<vector<ListClusterFromGrafanaResponseBodyPromClusterList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListClusterFromGrafanaResponseBody() = default;
};
class ListClusterFromGrafanaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterFromGrafanaResponseBody> body{};

  ListClusterFromGrafanaResponse() {}

  explicit ListClusterFromGrafanaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClusterFromGrafanaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterFromGrafanaResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterFromGrafanaResponse() = default;
};
class ListDashboardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> dashboardName{};
  shared_ptr<string> product{};
  shared_ptr<bool> recreateSwitch{};
  shared_ptr<string> regionId{};
  shared_ptr<string> title{};

  ListDashboardsRequest() {}

  explicit ListDashboardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (dashboardName) {
      res["DashboardName"] = boost::any(*dashboardName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (recreateSwitch) {
      res["RecreateSwitch"] = boost::any(*recreateSwitch);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("DashboardName") != m.end() && !m["DashboardName"].empty()) {
      dashboardName = make_shared<string>(boost::any_cast<string>(m["DashboardName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RecreateSwitch") != m.end() && !m["RecreateSwitch"].empty()) {
      recreateSwitch = make_shared<bool>(boost::any_cast<bool>(m["RecreateSwitch"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListDashboardsRequest() = default;
};
class ListDashboardsResponseBodyDashboardVos : public Darabonba::Model {
public:
  shared_ptr<string> dashboardType{};
  shared_ptr<string> exporter{};
  shared_ptr<string> id{};
  shared_ptr<bool> isArmsExporter{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<bool> needUpdate{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> time{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};
  shared_ptr<string> url{};
  shared_ptr<string> version{};

  ListDashboardsResponseBodyDashboardVos() {}

  explicit ListDashboardsResponseBodyDashboardVos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardType) {
      res["DashboardType"] = boost::any(*dashboardType);
    }
    if (exporter) {
      res["Exporter"] = boost::any(*exporter);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isArmsExporter) {
      res["IsArmsExporter"] = boost::any(*isArmsExporter);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (needUpdate) {
      res["NeedUpdate"] = boost::any(*needUpdate);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DashboardType") != m.end() && !m["DashboardType"].empty()) {
      dashboardType = make_shared<string>(boost::any_cast<string>(m["DashboardType"]));
    }
    if (m.find("Exporter") != m.end() && !m["Exporter"].empty()) {
      exporter = make_shared<string>(boost::any_cast<string>(m["Exporter"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsArmsExporter") != m.end() && !m["IsArmsExporter"].empty()) {
      isArmsExporter = make_shared<bool>(boost::any_cast<bool>(m["IsArmsExporter"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NeedUpdate") != m.end() && !m["NeedUpdate"].empty()) {
      needUpdate = make_shared<bool>(boost::any_cast<bool>(m["NeedUpdate"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListDashboardsResponseBodyDashboardVos() = default;
};
class ListDashboardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDashboardsResponseBodyDashboardVos>> dashboardVos{};
  shared_ptr<string> requestId{};

  ListDashboardsResponseBody() {}

  explicit ListDashboardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardVos) {
      vector<boost::any> temp1;
      for(auto item1:*dashboardVos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DashboardVos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DashboardVos") != m.end() && !m["DashboardVos"].empty()) {
      if (typeid(vector<boost::any>) == m["DashboardVos"].type()) {
        vector<ListDashboardsResponseBodyDashboardVos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DashboardVos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardsResponseBodyDashboardVos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboardVos = make_shared<vector<ListDashboardsResponseBodyDashboardVos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDashboardsResponseBody() = default;
};
class ListDashboardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDashboardsResponseBody> body{};

  ListDashboardsResponse() {}

  explicit ListDashboardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDashboardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDashboardsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDashboardsResponse() = default;
};
class ListDispatchRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> system{};

  ListDispatchRuleRequest() {}

  explicit ListDispatchRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (system) {
      res["System"] = boost::any(*system);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("System") != m.end() && !m["System"].empty()) {
      system = make_shared<bool>(boost::any_cast<bool>(m["System"]));
    }
  }


  virtual ~ListDispatchRuleRequest() = default;
};
class ListDispatchRuleResponseBodyDispatchRules : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> state{};

  ListDispatchRuleResponseBodyDispatchRules() {}

  explicit ListDispatchRuleResponseBodyDispatchRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListDispatchRuleResponseBodyDispatchRules() = default;
};
class ListDispatchRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDispatchRuleResponseBodyDispatchRules>> dispatchRules{};
  shared_ptr<string> requestId{};

  ListDispatchRuleResponseBody() {}

  explicit ListDispatchRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dispatchRules) {
      vector<boost::any> temp1;
      for(auto item1:*dispatchRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DispatchRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DispatchRules") != m.end() && !m["DispatchRules"].empty()) {
      if (typeid(vector<boost::any>) == m["DispatchRules"].type()) {
        vector<ListDispatchRuleResponseBodyDispatchRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DispatchRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDispatchRuleResponseBodyDispatchRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dispatchRules = make_shared<vector<ListDispatchRuleResponseBodyDispatchRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDispatchRuleResponseBody() = default;
};
class ListDispatchRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDispatchRuleResponseBody> body{};

  ListDispatchRuleResponse() {}

  explicit ListDispatchRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDispatchRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDispatchRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListDispatchRuleResponse() = default;
};
class ListPromClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListPromClustersRequest() {}

  explicit ListPromClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPromClustersRequest() = default;
};
class ListPromClustersResponseBodyPromClusterList : public Darabonba::Model {
public:
  shared_ptr<string> agentStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> controllerId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> extra{};
  shared_ptr<long> id{};
  shared_ptr<long> installTime{};
  shared_ptr<bool> isControllerInstalled{};
  shared_ptr<long> lastHeartBeatTime{};
  shared_ptr<long> nodeNum{};
  shared_ptr<string> options{};
  shared_ptr<string> pluginsJsonArray{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stateJson{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  ListPromClustersResponseBodyPromClusterList() {}

  explicit ListPromClustersResponseBodyPromClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (controllerId) {
      res["ControllerId"] = boost::any(*controllerId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (installTime) {
      res["InstallTime"] = boost::any(*installTime);
    }
    if (isControllerInstalled) {
      res["IsControllerInstalled"] = boost::any(*isControllerInstalled);
    }
    if (lastHeartBeatTime) {
      res["LastHeartBeatTime"] = boost::any(*lastHeartBeatTime);
    }
    if (nodeNum) {
      res["NodeNum"] = boost::any(*nodeNum);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (pluginsJsonArray) {
      res["PluginsJsonArray"] = boost::any(*pluginsJsonArray);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stateJson) {
      res["StateJson"] = boost::any(*stateJson);
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
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<string>(boost::any_cast<string>(m["AgentStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ControllerId") != m.end() && !m["ControllerId"].empty()) {
      controllerId = make_shared<string>(boost::any_cast<string>(m["ControllerId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstallTime") != m.end() && !m["InstallTime"].empty()) {
      installTime = make_shared<long>(boost::any_cast<long>(m["InstallTime"]));
    }
    if (m.find("IsControllerInstalled") != m.end() && !m["IsControllerInstalled"].empty()) {
      isControllerInstalled = make_shared<bool>(boost::any_cast<bool>(m["IsControllerInstalled"]));
    }
    if (m.find("LastHeartBeatTime") != m.end() && !m["LastHeartBeatTime"].empty()) {
      lastHeartBeatTime = make_shared<long>(boost::any_cast<long>(m["LastHeartBeatTime"]));
    }
    if (m.find("NodeNum") != m.end() && !m["NodeNum"].empty()) {
      nodeNum = make_shared<long>(boost::any_cast<long>(m["NodeNum"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("PluginsJsonArray") != m.end() && !m["PluginsJsonArray"].empty()) {
      pluginsJsonArray = make_shared<string>(boost::any_cast<string>(m["PluginsJsonArray"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StateJson") != m.end() && !m["StateJson"].empty()) {
      stateJson = make_shared<string>(boost::any_cast<string>(m["StateJson"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListPromClustersResponseBodyPromClusterList() = default;
};
class ListPromClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPromClustersResponseBodyPromClusterList>> promClusterList{};
  shared_ptr<string> requestId{};

  ListPromClustersResponseBody() {}

  explicit ListPromClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promClusterList) {
      vector<boost::any> temp1;
      for(auto item1:*promClusterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PromClusterList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromClusterList") != m.end() && !m["PromClusterList"].empty()) {
      if (typeid(vector<boost::any>) == m["PromClusterList"].type()) {
        vector<ListPromClustersResponseBodyPromClusterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PromClusterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPromClustersResponseBodyPromClusterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promClusterList = make_shared<vector<ListPromClustersResponseBodyPromClusterList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPromClustersResponseBody() = default;
};
class ListPromClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPromClustersResponseBody> body{};

  ListPromClustersResponse() {}

  explicit ListPromClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPromClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPromClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListPromClustersResponse() = default;
};
class ListPrometheusAlertRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> matchExpressions{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<long> status{};
  shared_ptr<string> type{};

  ListPrometheusAlertRulesRequest() {}

  explicit ListPrometheusAlertRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (matchExpressions) {
      res["MatchExpressions"] = boost::any(*matchExpressions);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("MatchExpressions") != m.end() && !m["MatchExpressions"].empty()) {
      matchExpressions = make_shared<string>(boost::any_cast<string>(m["MatchExpressions"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListPrometheusAlertRulesRequest() = default;
};
class ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations() {}

  explicit ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations() = default;
};
class ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels() {}

  explicit ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels() = default;
};
class ListPrometheusAlertRulesResponseBodyPrometheusAlertRules : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> alertName{};
  shared_ptr<vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations>> annotations{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> dispatchRuleId{};
  shared_ptr<string> duration{};
  shared_ptr<string> expression{};
  shared_ptr<vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> notifyType{};
  shared_ptr<long> status{};
  shared_ptr<string> type{};

  ListPrometheusAlertRulesResponseBodyPrometheusAlertRules() {}

  explicit ListPrometheusAlertRulesResponseBodyPrometheusAlertRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Annotations"] = boost::any(temp1);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dispatchRuleId) {
      res["DispatchRuleId"] = boost::any(*dispatchRuleId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["Annotations"].type()) {
        vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesAnnotations>>(expect1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DispatchRuleId") != m.end() && !m["DispatchRuleId"].empty()) {
      dispatchRuleId = make_shared<long>(boost::any_cast<long>(m["DispatchRuleId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRulesLabels>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListPrometheusAlertRulesResponseBodyPrometheusAlertRules() = default;
};
class ListPrometheusAlertRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules>> prometheusAlertRules{};
  shared_ptr<string> requestId{};

  ListPrometheusAlertRulesResponseBody() {}

  explicit ListPrometheusAlertRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prometheusAlertRules) {
      vector<boost::any> temp1;
      for(auto item1:*prometheusAlertRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrometheusAlertRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrometheusAlertRules") != m.end() && !m["PrometheusAlertRules"].empty()) {
      if (typeid(vector<boost::any>) == m["PrometheusAlertRules"].type()) {
        vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrometheusAlertRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrometheusAlertRulesResponseBodyPrometheusAlertRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        prometheusAlertRules = make_shared<vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPrometheusAlertRulesResponseBody() = default;
};
class ListPrometheusAlertRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrometheusAlertRulesResponseBody> body{};

  ListPrometheusAlertRulesResponse() {}

  explicit ListPrometheusAlertRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrometheusAlertRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrometheusAlertRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrometheusAlertRulesResponse() = default;
};
class ListPrometheusAlertTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  ListPrometheusAlertTemplatesRequest() {}

  explicit ListPrometheusAlertTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListPrometheusAlertTemplatesRequest() = default;
};
class ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations() {}

  explicit ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations() = default;
};
class ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels() {}

  explicit ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels() = default;
};
class ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates : public Darabonba::Model {
public:
  shared_ptr<string> alertName{};
  shared_ptr<vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations>> annotations{};
  shared_ptr<string> description{};
  shared_ptr<string> duration{};
  shared_ptr<string> expression{};
  shared_ptr<vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels>> labels{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates() {}

  explicit ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Annotations"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["Annotations"].type()) {
        vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates() = default;
};
class ListPrometheusAlertTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates>> prometheusAlertTemplates{};
  shared_ptr<string> requestId{};

  ListPrometheusAlertTemplatesResponseBody() {}

  explicit ListPrometheusAlertTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prometheusAlertTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*prometheusAlertTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrometheusAlertTemplates"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrometheusAlertTemplates") != m.end() && !m["PrometheusAlertTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["PrometheusAlertTemplates"].type()) {
        vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrometheusAlertTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        prometheusAlertTemplates = make_shared<vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPrometheusAlertTemplatesResponseBody() = default;
};
class ListPrometheusAlertTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrometheusAlertTemplatesResponseBody> body{};

  ListPrometheusAlertTemplatesResponse() {}

  explicit ListPrometheusAlertTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrometheusAlertTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrometheusAlertTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrometheusAlertTemplatesResponse() = default;
};
class ListRetcodeAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> securityToken{};

  ListRetcodeAppsRequest() {}

  explicit ListRetcodeAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ListRetcodeAppsRequest() = default;
};
class ListRetcodeAppsResponseBodyRetcodeApps : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> pid{};

  ListRetcodeAppsResponseBodyRetcodeApps() {}

  explicit ListRetcodeAppsResponseBodyRetcodeApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
  }


  virtual ~ListRetcodeAppsResponseBodyRetcodeApps() = default;
};
class ListRetcodeAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRetcodeAppsResponseBodyRetcodeApps>> retcodeApps{};

  ListRetcodeAppsResponseBody() {}

  explicit ListRetcodeAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (retcodeApps) {
      vector<boost::any> temp1;
      for(auto item1:*retcodeApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RetcodeApps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RetcodeApps") != m.end() && !m["RetcodeApps"].empty()) {
      if (typeid(vector<boost::any>) == m["RetcodeApps"].type()) {
        vector<ListRetcodeAppsResponseBodyRetcodeApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RetcodeApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRetcodeAppsResponseBodyRetcodeApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        retcodeApps = make_shared<vector<ListRetcodeAppsResponseBodyRetcodeApps>>(expect1);
      }
    }
  }


  virtual ~ListRetcodeAppsResponseBody() = default;
};
class ListRetcodeAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRetcodeAppsResponseBody> body{};

  ListRetcodeAppsResponse() {}

  explicit ListRetcodeAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRetcodeAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRetcodeAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRetcodeAppsResponse() = default;
};
class ListScenarioRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> sign{};

  ListScenarioRequest() {}

  explicit ListScenarioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scenario) {
      res["Scenario"] = boost::any(*scenario);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scenario") != m.end() && !m["Scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["Scenario"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
  }


  virtual ~ListScenarioRequest() = default;
};
class ListScenarioResponseBodyArmsScenarios : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> extensions{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sign{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};

  ListScenarioResponseBodyArmsScenarios() {}

  explicit ListScenarioResponseBodyArmsScenarios(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extensions) {
      res["Extensions"] = boost::any(*extensions);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      extensions = make_shared<string>(boost::any_cast<string>(m["Extensions"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListScenarioResponseBodyArmsScenarios() = default;
};
class ListScenarioResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListScenarioResponseBodyArmsScenarios>> armsScenarios{};
  shared_ptr<string> requestId{};

  ListScenarioResponseBody() {}

  explicit ListScenarioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (armsScenarios) {
      vector<boost::any> temp1;
      for(auto item1:*armsScenarios){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ArmsScenarios"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArmsScenarios") != m.end() && !m["ArmsScenarios"].empty()) {
      if (typeid(vector<boost::any>) == m["ArmsScenarios"].type()) {
        vector<ListScenarioResponseBodyArmsScenarios> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ArmsScenarios"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScenarioResponseBodyArmsScenarios model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        armsScenarios = make_shared<vector<ListScenarioResponseBodyArmsScenarios>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListScenarioResponseBody() = default;
};
class ListScenarioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScenarioResponseBody> body{};

  ListScenarioResponse() {}

  explicit ListScenarioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListScenarioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScenarioResponseBody>(model1);
      }
    }
  }


  virtual ~ListScenarioResponse() = default;
};
class ListServerlessTopNAppsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  ListServerlessTopNAppsRequest() {}

  explicit ListServerlessTopNAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListServerlessTopNAppsRequest() = default;
};
class ListServerlessTopNAppsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> error{};
  shared_ptr<string> name{};
  shared_ptr<string> pid{};
  shared_ptr<string> region{};
  shared_ptr<double> rt{};

  ListServerlessTopNAppsResponseBodyData() {}

  explicit ListServerlessTopNAppsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<long>(boost::any_cast<long>(m["Error"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<double>(boost::any_cast<double>(m["Rt"]));
    }
  }


  virtual ~ListServerlessTopNAppsResponseBodyData() = default;
};
class ListServerlessTopNAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListServerlessTopNAppsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListServerlessTopNAppsResponseBody() {}

  explicit ListServerlessTopNAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListServerlessTopNAppsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerlessTopNAppsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListServerlessTopNAppsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListServerlessTopNAppsResponseBody() = default;
};
class ListServerlessTopNAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServerlessTopNAppsResponseBody> body{};

  ListServerlessTopNAppsResponse() {}

  explicit ListServerlessTopNAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServerlessTopNAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServerlessTopNAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServerlessTopNAppsResponse() = default;
};
class ListTraceAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListTraceAppsRequest() {}

  explicit ListTraceAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTraceAppsRequest() = default;
};
class ListTraceAppsResponseBodyTraceApps : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> show{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  ListTraceAppsResponseBodyTraceApps() {}

  explicit ListTraceAppsResponseBodyTraceApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (show) {
      res["Show"] = boost::any(*show);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Show") != m.end() && !m["Show"].empty()) {
      show = make_shared<bool>(boost::any_cast<bool>(m["Show"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListTraceAppsResponseBodyTraceApps() = default;
};
class ListTraceAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListTraceAppsResponseBodyTraceApps>> traceApps{};

  ListTraceAppsResponseBody() {}

  explicit ListTraceAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (traceApps) {
      vector<boost::any> temp1;
      for(auto item1:*traceApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceApps"] = boost::any(temp1);
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
    if (m.find("TraceApps") != m.end() && !m["TraceApps"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceApps"].type()) {
        vector<ListTraceAppsResponseBodyTraceApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTraceAppsResponseBodyTraceApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceApps = make_shared<vector<ListTraceAppsResponseBodyTraceApps>>(expect1);
      }
    }
  }


  virtual ~ListTraceAppsResponseBody() = default;
};
class ListTraceAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTraceAppsResponseBody> body{};

  ListTraceAppsResponse() {}

  explicit ListTraceAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTraceAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTraceAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTraceAppsResponse() = default;
};
class OpenArmsDefaultSLRRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  OpenArmsDefaultSLRRequest() {}

  explicit OpenArmsDefaultSLRRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenArmsDefaultSLRRequest() = default;
};
class OpenArmsDefaultSLRResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  OpenArmsDefaultSLRResponseBody() {}

  explicit OpenArmsDefaultSLRResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenArmsDefaultSLRResponseBody() = default;
};
class OpenArmsDefaultSLRResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenArmsDefaultSLRResponseBody> body{};

  OpenArmsDefaultSLRResponse() {}

  explicit OpenArmsDefaultSLRResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenArmsDefaultSLRResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenArmsDefaultSLRResponseBody>(model1);
      }
    }
  }


  virtual ~OpenArmsDefaultSLRResponse() = default;
};
class OpenArmsServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> type{};

  OpenArmsServiceRequest() {}

  explicit OpenArmsServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~OpenArmsServiceRequest() = default;
};
class OpenArmsServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenArmsServiceResponseBody() {}

  explicit OpenArmsServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenArmsServiceResponseBody() = default;
};
class OpenArmsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenArmsServiceResponseBody> body{};

  OpenArmsServiceResponse() {}

  explicit OpenArmsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenArmsServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenArmsServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenArmsServiceResponse() = default;
};
class OpenArmsServiceSecondVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  OpenArmsServiceSecondVersionRequest() {}

  explicit OpenArmsServiceSecondVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~OpenArmsServiceSecondVersionRequest() = default;
};
class OpenArmsServiceSecondVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenArmsServiceSecondVersionResponseBody() {}

  explicit OpenArmsServiceSecondVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenArmsServiceSecondVersionResponseBody() = default;
};
class OpenArmsServiceSecondVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenArmsServiceSecondVersionResponseBody> body{};

  OpenArmsServiceSecondVersionResponse() {}

  explicit OpenArmsServiceSecondVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenArmsServiceSecondVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenArmsServiceSecondVersionResponseBody>(model1);
      }
    }
  }


  virtual ~OpenArmsServiceSecondVersionResponse() = default;
};
class OpenVClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<long> length{};
  shared_ptr<string> product{};
  shared_ptr<bool> recreateSwitch{};
  shared_ptr<string> regionId{};

  OpenVClusterRequest() {}

  explicit OpenVClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (length) {
      res["Length"] = boost::any(*length);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (recreateSwitch) {
      res["RecreateSwitch"] = boost::any(*recreateSwitch);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["Length"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RecreateSwitch") != m.end() && !m["RecreateSwitch"].empty()) {
      recreateSwitch = make_shared<bool>(boost::any_cast<bool>(m["RecreateSwitch"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~OpenVClusterRequest() = default;
};
class OpenVClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  OpenVClusterResponseBody() {}

  explicit OpenVClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenVClusterResponseBody() = default;
};
class OpenVClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenVClusterResponseBody> body{};

  OpenVClusterResponse() {}

  explicit OpenVClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenVClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenVClusterResponseBody>(model1);
      }
    }
  }


  virtual ~OpenVClusterResponse() = default;
};
class OpenXtraceDefaultSLRRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  OpenXtraceDefaultSLRRequest() {}

  explicit OpenXtraceDefaultSLRRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenXtraceDefaultSLRRequest() = default;
};
class OpenXtraceDefaultSLRResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  OpenXtraceDefaultSLRResponseBody() {}

  explicit OpenXtraceDefaultSLRResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenXtraceDefaultSLRResponseBody() = default;
};
class OpenXtraceDefaultSLRResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenXtraceDefaultSLRResponseBody> body{};

  OpenXtraceDefaultSLRResponse() {}

  explicit OpenXtraceDefaultSLRResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenXtraceDefaultSLRResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenXtraceDefaultSLRResponseBody>(model1);
      }
    }
  }


  virtual ~OpenXtraceDefaultSLRResponse() = default;
};
class QueryDatasetRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  QueryDatasetRequestDimensions() {}

  explicit QueryDatasetRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryDatasetRequestDimensions() = default;
};
class QueryDatasetRequestOptionalDims : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  QueryDatasetRequestOptionalDims() {}

  explicit QueryDatasetRequestOptionalDims(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryDatasetRequestOptionalDims() = default;
};
class QueryDatasetRequestRequiredDims : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  QueryDatasetRequestRequiredDims() {}

  explicit QueryDatasetRequestRequiredDims(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryDatasetRequestRequiredDims() = default;
};
class QueryDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<long> datasetId{};
  shared_ptr<string> dateStr{};
  shared_ptr<vector<QueryDatasetRequestDimensions>> dimensions{};
  shared_ptr<bool> hungryMode{};
  shared_ptr<long> intervalInSec{};
  shared_ptr<bool> isDrillDown{};
  shared_ptr<long> limit{};
  shared_ptr<long> maxTime{};
  shared_ptr<vector<string>> measures{};
  shared_ptr<long> minTime{};
  shared_ptr<vector<QueryDatasetRequestOptionalDims>> optionalDims{};
  shared_ptr<string> orderByKey{};
  shared_ptr<string> proxyUserId{};
  shared_ptr<bool> reduceTail{};
  shared_ptr<vector<QueryDatasetRequestRequiredDims>> requiredDims{};

  QueryDatasetRequest() {}

  explicit QueryDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (dateStr) {
      res["DateStr"] = boost::any(*dateStr);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (hungryMode) {
      res["HungryMode"] = boost::any(*hungryMode);
    }
    if (intervalInSec) {
      res["IntervalInSec"] = boost::any(*intervalInSec);
    }
    if (isDrillDown) {
      res["IsDrillDown"] = boost::any(*isDrillDown);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (maxTime) {
      res["MaxTime"] = boost::any(*maxTime);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (minTime) {
      res["MinTime"] = boost::any(*minTime);
    }
    if (optionalDims) {
      vector<boost::any> temp1;
      for(auto item1:*optionalDims){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OptionalDims"] = boost::any(temp1);
    }
    if (orderByKey) {
      res["OrderByKey"] = boost::any(*orderByKey);
    }
    if (proxyUserId) {
      res["ProxyUserId"] = boost::any(*proxyUserId);
    }
    if (reduceTail) {
      res["ReduceTail"] = boost::any(*reduceTail);
    }
    if (requiredDims) {
      vector<boost::any> temp1;
      for(auto item1:*requiredDims){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequiredDims"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<long>(boost::any_cast<long>(m["DatasetId"]));
    }
    if (m.find("DateStr") != m.end() && !m["DateStr"].empty()) {
      dateStr = make_shared<string>(boost::any_cast<string>(m["DateStr"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<QueryDatasetRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDatasetRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<QueryDatasetRequestDimensions>>(expect1);
      }
    }
    if (m.find("HungryMode") != m.end() && !m["HungryMode"].empty()) {
      hungryMode = make_shared<bool>(boost::any_cast<bool>(m["HungryMode"]));
    }
    if (m.find("IntervalInSec") != m.end() && !m["IntervalInSec"].empty()) {
      intervalInSec = make_shared<long>(boost::any_cast<long>(m["IntervalInSec"]));
    }
    if (m.find("IsDrillDown") != m.end() && !m["IsDrillDown"].empty()) {
      isDrillDown = make_shared<bool>(boost::any_cast<bool>(m["IsDrillDown"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("MaxTime") != m.end() && !m["MaxTime"].empty()) {
      maxTime = make_shared<long>(boost::any_cast<long>(m["MaxTime"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Measures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Measures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      measures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MinTime") != m.end() && !m["MinTime"].empty()) {
      minTime = make_shared<long>(boost::any_cast<long>(m["MinTime"]));
    }
    if (m.find("OptionalDims") != m.end() && !m["OptionalDims"].empty()) {
      if (typeid(vector<boost::any>) == m["OptionalDims"].type()) {
        vector<QueryDatasetRequestOptionalDims> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OptionalDims"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDatasetRequestOptionalDims model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        optionalDims = make_shared<vector<QueryDatasetRequestOptionalDims>>(expect1);
      }
    }
    if (m.find("OrderByKey") != m.end() && !m["OrderByKey"].empty()) {
      orderByKey = make_shared<string>(boost::any_cast<string>(m["OrderByKey"]));
    }
    if (m.find("ProxyUserId") != m.end() && !m["ProxyUserId"].empty()) {
      proxyUserId = make_shared<string>(boost::any_cast<string>(m["ProxyUserId"]));
    }
    if (m.find("ReduceTail") != m.end() && !m["ReduceTail"].empty()) {
      reduceTail = make_shared<bool>(boost::any_cast<bool>(m["ReduceTail"]));
    }
    if (m.find("RequiredDims") != m.end() && !m["RequiredDims"].empty()) {
      if (typeid(vector<boost::any>) == m["RequiredDims"].type()) {
        vector<QueryDatasetRequestRequiredDims> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequiredDims"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDatasetRequestRequiredDims model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requiredDims = make_shared<vector<QueryDatasetRequestRequiredDims>>(expect1);
      }
    }
  }


  virtual ~QueryDatasetRequest() = default;
};
class QueryDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  QueryDatasetResponseBody() {}

  explicit QueryDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDatasetResponseBody() = default;
};
class QueryDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDatasetResponseBody> body{};

  QueryDatasetResponse() {}

  explicit QueryDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDatasetResponse() = default;
};
class QueryMetricRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  QueryMetricRequestFilters() {}

  explicit QueryMetricRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryMetricRequestFilters() = default;
};
class QueryMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> consistencyDataKey{};
  shared_ptr<string> consistencyQueryStrategy{};
  shared_ptr<vector<string>> dimensions{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<QueryMetricRequestFilters>> filters{};
  shared_ptr<long> intervalInSec{};
  shared_ptr<long> limit{};
  shared_ptr<vector<string>> measures{};
  shared_ptr<string> metric{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> proxyUserId{};
  shared_ptr<long> startTime{};

  QueryMetricRequest() {}

  explicit QueryMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consistencyDataKey) {
      res["ConsistencyDataKey"] = boost::any(*consistencyDataKey);
    }
    if (consistencyQueryStrategy) {
      res["ConsistencyQueryStrategy"] = boost::any(*consistencyQueryStrategy);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (intervalInSec) {
      res["IntervalInSec"] = boost::any(*intervalInSec);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (metric) {
      res["Metric"] = boost::any(*metric);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (proxyUserId) {
      res["ProxyUserId"] = boost::any(*proxyUserId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsistencyDataKey") != m.end() && !m["ConsistencyDataKey"].empty()) {
      consistencyDataKey = make_shared<string>(boost::any_cast<string>(m["ConsistencyDataKey"]));
    }
    if (m.find("ConsistencyQueryStrategy") != m.end() && !m["ConsistencyQueryStrategy"].empty()) {
      consistencyQueryStrategy = make_shared<string>(boost::any_cast<string>(m["ConsistencyQueryStrategy"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dimensions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimensions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<QueryMetricRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMetricRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<QueryMetricRequestFilters>>(expect1);
      }
    }
    if (m.find("IntervalInSec") != m.end() && !m["IntervalInSec"].empty()) {
      intervalInSec = make_shared<long>(boost::any_cast<long>(m["IntervalInSec"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Measures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Measures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      measures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      metric = make_shared<string>(boost::any_cast<string>(m["Metric"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("ProxyUserId") != m.end() && !m["ProxyUserId"].empty()) {
      proxyUserId = make_shared<string>(boost::any_cast<string>(m["ProxyUserId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryMetricRequest() = default;
};
class QueryMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  QueryMetricResponseBody() {}

  explicit QueryMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryMetricResponseBody() = default;
};
class QueryMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMetricResponseBody> body{};

  QueryMetricResponse() {}

  explicit QueryMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMetricResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMetricResponse() = default;
};
class QueryMetricByPageRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  QueryMetricByPageRequestFilters() {}

  explicit QueryMetricByPageRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryMetricByPageRequestFilters() = default;
};
class QueryMetricByPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<string>> customFilters{};
  shared_ptr<vector<string>> dimensions{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<QueryMetricByPageRequestFilters>> filters{};
  shared_ptr<long> intervalInSec{};
  shared_ptr<vector<string>> measures{};
  shared_ptr<string> metric{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};

  QueryMetricByPageRequest() {}

  explicit QueryMetricByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (customFilters) {
      res["CustomFilters"] = boost::any(*customFilters);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (intervalInSec) {
      res["IntervalInSec"] = boost::any(*intervalInSec);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (metric) {
      res["Metric"] = boost::any(*metric);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("CustomFilters") != m.end() && !m["CustomFilters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomFilters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomFilters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customFilters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dimensions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimensions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<QueryMetricByPageRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMetricByPageRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<QueryMetricByPageRequestFilters>>(expect1);
      }
    }
    if (m.find("IntervalInSec") != m.end() && !m["IntervalInSec"].empty()) {
      intervalInSec = make_shared<long>(boost::any_cast<long>(m["IntervalInSec"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Measures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Measures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      measures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      metric = make_shared<string>(boost::any_cast<string>(m["Metric"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryMetricByPageRequest() = default;
};
class QueryMetricByPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> items{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryMetricByPageResponseBodyData() {}

  explicit QueryMetricByPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = boost::any(*items);
    }
    if (page) {
      res["Page"] = boost::any(*page);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Items"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      items = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryMetricByPageResponseBodyData() = default;
};
class QueryMetricByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryMetricByPageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryMetricByPageResponseBody() {}

  explicit QueryMetricByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryMetricByPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryMetricByPageResponseBodyData>(model1);
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


  virtual ~QueryMetricByPageResponseBody() = default;
};
class QueryMetricByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMetricByPageResponseBody> body{};

  QueryMetricByPageResponse() {}

  explicit QueryMetricByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMetricByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMetricByPageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMetricByPageResponse() = default;
};
class QueryPromInstallStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  QueryPromInstallStatusRequest() {}

  explicit QueryPromInstallStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~QueryPromInstallStatusRequest() = default;
};
class QueryPromInstallStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isControllerInstalled{};

  QueryPromInstallStatusResponseBodyData() {}

  explicit QueryPromInstallStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isControllerInstalled) {
      res["isControllerInstalled"] = boost::any(*isControllerInstalled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isControllerInstalled") != m.end() && !m["isControllerInstalled"].empty()) {
      isControllerInstalled = make_shared<bool>(boost::any_cast<bool>(m["isControllerInstalled"]));
    }
  }


  virtual ~QueryPromInstallStatusResponseBodyData() = default;
};
class QueryPromInstallStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryPromInstallStatusResponseBodyData> data{};

  QueryPromInstallStatusResponseBody() {}

  explicit QueryPromInstallStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryPromInstallStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryPromInstallStatusResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryPromInstallStatusResponseBody() = default;
};
class QueryPromInstallStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPromInstallStatusResponseBody> body{};

  QueryPromInstallStatusResponse() {}

  explicit QueryPromInstallStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPromInstallStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPromInstallStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPromInstallStatusResponse() = default;
};
class SaveTraceAppConfigRequestSettings : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SaveTraceAppConfigRequestSettings() {}

  explicit SaveTraceAppConfigRequestSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveTraceAppConfigRequestSettings() = default;
};
class SaveTraceAppConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> pid{};
  shared_ptr<vector<SaveTraceAppConfigRequestSettings>> settings{};

  SaveTraceAppConfigRequest() {}

  explicit SaveTraceAppConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (settings) {
      vector<boost::any> temp1;
      for(auto item1:*settings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Settings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      if (typeid(vector<boost::any>) == m["Settings"].type()) {
        vector<SaveTraceAppConfigRequestSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Settings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveTraceAppConfigRequestSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        settings = make_shared<vector<SaveTraceAppConfigRequestSettings>>(expect1);
      }
    }
  }


  virtual ~SaveTraceAppConfigRequest() = default;
};
class SaveTraceAppConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  SaveTraceAppConfigResponseBody() {}

  explicit SaveTraceAppConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SaveTraceAppConfigResponseBody() = default;
};
class SaveTraceAppConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTraceAppConfigResponseBody> body{};

  SaveTraceAppConfigResponse() {}

  explicit SaveTraceAppConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveTraceAppConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTraceAppConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTraceAppConfigResponse() = default;
};
class SearchAlertContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactIds{};
  shared_ptr<string> contactName{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> email{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> phone{};
  shared_ptr<string> regionId{};

  SearchAlertContactRequest() {}

  explicit SearchAlertContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      contactIds = make_shared<string>(boost::any_cast<string>(m["ContactIds"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SearchAlertContactRequest() = default;
};
class SearchAlertContactResponseBodyPageBeanContacts : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dingRobot{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<bool> systemNoc{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> webhook{};

  SearchAlertContactResponseBodyPageBeanContacts() {}

  explicit SearchAlertContactResponseBodyPageBeanContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dingRobot) {
      res["DingRobot"] = boost::any(*dingRobot);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (systemNoc) {
      res["SystemNoc"] = boost::any(*systemNoc);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (webhook) {
      res["Webhook"] = boost::any(*webhook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DingRobot") != m.end() && !m["DingRobot"].empty()) {
      dingRobot = make_shared<string>(boost::any_cast<string>(m["DingRobot"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("SystemNoc") != m.end() && !m["SystemNoc"].empty()) {
      systemNoc = make_shared<bool>(boost::any_cast<bool>(m["SystemNoc"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Webhook") != m.end() && !m["Webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["Webhook"]));
    }
  }


  virtual ~SearchAlertContactResponseBodyPageBeanContacts() = default;
};
class SearchAlertContactResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<vector<SearchAlertContactResponseBodyPageBeanContacts>> contacts{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  SearchAlertContactResponseBodyPageBean() {}

  explicit SearchAlertContactResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contacts) {
      vector<boost::any> temp1;
      for(auto item1:*contacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contacts"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Contacts"].type()) {
        vector<SearchAlertContactResponseBodyPageBeanContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAlertContactResponseBodyPageBeanContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contacts = make_shared<vector<SearchAlertContactResponseBodyPageBeanContacts>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchAlertContactResponseBodyPageBean() = default;
};
class SearchAlertContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchAlertContactResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchAlertContactResponseBody() {}

  explicit SearchAlertContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchAlertContactResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchAlertContactResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchAlertContactResponseBody() = default;
};
class SearchAlertContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchAlertContactResponseBody> body{};

  SearchAlertContactResponse() {}

  explicit SearchAlertContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchAlertContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchAlertContactResponseBody>(model1);
      }
    }
  }


  virtual ~SearchAlertContactResponse() = default;
};
class SearchAlertContactGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactGroupIds{};
  shared_ptr<string> contactGroupName{};
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<bool> isDetail{};
  shared_ptr<string> regionId{};

  SearchAlertContactGroupRequest() {}

  explicit SearchAlertContactGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupIds) {
      res["ContactGroupIds"] = boost::any(*contactGroupIds);
    }
    if (contactGroupName) {
      res["ContactGroupName"] = boost::any(*contactGroupName);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (isDetail) {
      res["IsDetail"] = boost::any(*isDetail);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      contactGroupIds = make_shared<string>(boost::any_cast<string>(m["ContactGroupIds"]));
    }
    if (m.find("ContactGroupName") != m.end() && !m["ContactGroupName"].empty()) {
      contactGroupName = make_shared<string>(boost::any_cast<string>(m["ContactGroupName"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("IsDetail") != m.end() && !m["IsDetail"].empty()) {
      isDetail = make_shared<bool>(boost::any_cast<bool>(m["IsDetail"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SearchAlertContactGroupRequest() = default;
};
class SearchAlertContactGroupResponseBodyContactGroupsContacts : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dingRobot{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<bool> systemNoc{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  SearchAlertContactGroupResponseBodyContactGroupsContacts() {}

  explicit SearchAlertContactGroupResponseBodyContactGroupsContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dingRobot) {
      res["DingRobot"] = boost::any(*dingRobot);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (systemNoc) {
      res["SystemNoc"] = boost::any(*systemNoc);
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
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DingRobot") != m.end() && !m["DingRobot"].empty()) {
      dingRobot = make_shared<string>(boost::any_cast<string>(m["DingRobot"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("SystemNoc") != m.end() && !m["SystemNoc"].empty()) {
      systemNoc = make_shared<bool>(boost::any_cast<bool>(m["SystemNoc"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchAlertContactGroupResponseBodyContactGroupsContacts() = default;
};
class SearchAlertContactGroupResponseBodyContactGroups : public Darabonba::Model {
public:
  shared_ptr<long> contactGroupId{};
  shared_ptr<string> contactGroupName{};
  shared_ptr<vector<SearchAlertContactGroupResponseBodyContactGroupsContacts>> contacts{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  SearchAlertContactGroupResponseBodyContactGroups() {}

  explicit SearchAlertContactGroupResponseBodyContactGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupId) {
      res["ContactGroupId"] = boost::any(*contactGroupId);
    }
    if (contactGroupName) {
      res["ContactGroupName"] = boost::any(*contactGroupName);
    }
    if (contacts) {
      vector<boost::any> temp1;
      for(auto item1:*contacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contacts"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
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
    if (m.find("ContactGroupId") != m.end() && !m["ContactGroupId"].empty()) {
      contactGroupId = make_shared<long>(boost::any_cast<long>(m["ContactGroupId"]));
    }
    if (m.find("ContactGroupName") != m.end() && !m["ContactGroupName"].empty()) {
      contactGroupName = make_shared<string>(boost::any_cast<string>(m["ContactGroupName"]));
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Contacts"].type()) {
        vector<SearchAlertContactGroupResponseBodyContactGroupsContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAlertContactGroupResponseBodyContactGroupsContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contacts = make_shared<vector<SearchAlertContactGroupResponseBodyContactGroupsContacts>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchAlertContactGroupResponseBodyContactGroups() = default;
};
class SearchAlertContactGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchAlertContactGroupResponseBodyContactGroups>> contactGroups{};
  shared_ptr<string> requestId{};

  SearchAlertContactGroupResponseBody() {}

  explicit SearchAlertContactGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroups) {
      vector<boost::any> temp1;
      for(auto item1:*contactGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContactGroups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroups") != m.end() && !m["ContactGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ContactGroups"].type()) {
        vector<SearchAlertContactGroupResponseBodyContactGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContactGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAlertContactGroupResponseBodyContactGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contactGroups = make_shared<vector<SearchAlertContactGroupResponseBodyContactGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchAlertContactGroupResponseBody() = default;
};
class SearchAlertContactGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchAlertContactGroupResponseBody> body{};

  SearchAlertContactGroupResponse() {}

  explicit SearchAlertContactGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchAlertContactGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchAlertContactGroupResponseBody>(model1);
      }
    }
  }


  virtual ~SearchAlertContactGroupResponse() = default;
};
class SearchAlertHistoriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<long> alertType{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  SearchAlertHistoriesRequest() {}

  explicit SearchAlertHistoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<long>(boost::any_cast<long>(m["AlertType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~SearchAlertHistoriesRequest() = default;
};
class SearchAlertHistoriesResponseBodyPageBeanAlarmHistories : public Darabonba::Model {
public:
  shared_ptr<string> alarmContent{};
  shared_ptr<long> alarmResponseCode{};
  shared_ptr<string> alarmSources{};
  shared_ptr<long> alarmTime{};
  shared_ptr<long> alarmType{};
  shared_ptr<string> emails{};
  shared_ptr<long> id{};
  shared_ptr<string> phones{};
  shared_ptr<string> strategyId{};
  shared_ptr<string> target{};
  shared_ptr<string> userId{};

  SearchAlertHistoriesResponseBodyPageBeanAlarmHistories() {}

  explicit SearchAlertHistoriesResponseBodyPageBeanAlarmHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmContent) {
      res["AlarmContent"] = boost::any(*alarmContent);
    }
    if (alarmResponseCode) {
      res["AlarmResponseCode"] = boost::any(*alarmResponseCode);
    }
    if (alarmSources) {
      res["AlarmSources"] = boost::any(*alarmSources);
    }
    if (alarmTime) {
      res["AlarmTime"] = boost::any(*alarmTime);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (emails) {
      res["Emails"] = boost::any(*emails);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phones) {
      res["Phones"] = boost::any(*phones);
    }
    if (strategyId) {
      res["StrategyId"] = boost::any(*strategyId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmContent") != m.end() && !m["AlarmContent"].empty()) {
      alarmContent = make_shared<string>(boost::any_cast<string>(m["AlarmContent"]));
    }
    if (m.find("AlarmResponseCode") != m.end() && !m["AlarmResponseCode"].empty()) {
      alarmResponseCode = make_shared<long>(boost::any_cast<long>(m["AlarmResponseCode"]));
    }
    if (m.find("AlarmSources") != m.end() && !m["AlarmSources"].empty()) {
      alarmSources = make_shared<string>(boost::any_cast<string>(m["AlarmSources"]));
    }
    if (m.find("AlarmTime") != m.end() && !m["AlarmTime"].empty()) {
      alarmTime = make_shared<long>(boost::any_cast<long>(m["AlarmTime"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<long>(boost::any_cast<long>(m["AlarmType"]));
    }
    if (m.find("Emails") != m.end() && !m["Emails"].empty()) {
      emails = make_shared<string>(boost::any_cast<string>(m["Emails"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Phones") != m.end() && !m["Phones"].empty()) {
      phones = make_shared<string>(boost::any_cast<string>(m["Phones"]));
    }
    if (m.find("StrategyId") != m.end() && !m["StrategyId"].empty()) {
      strategyId = make_shared<string>(boost::any_cast<string>(m["StrategyId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchAlertHistoriesResponseBodyPageBeanAlarmHistories() = default;
};
class SearchAlertHistoriesResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<vector<SearchAlertHistoriesResponseBodyPageBeanAlarmHistories>> alarmHistories{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  SearchAlertHistoriesResponseBodyPageBean() {}

  explicit SearchAlertHistoriesResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmHistories) {
      vector<boost::any> temp1;
      for(auto item1:*alarmHistories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlarmHistories"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmHistories") != m.end() && !m["AlarmHistories"].empty()) {
      if (typeid(vector<boost::any>) == m["AlarmHistories"].type()) {
        vector<SearchAlertHistoriesResponseBodyPageBeanAlarmHistories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlarmHistories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAlertHistoriesResponseBodyPageBeanAlarmHistories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alarmHistories = make_shared<vector<SearchAlertHistoriesResponseBodyPageBeanAlarmHistories>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchAlertHistoriesResponseBodyPageBean() = default;
};
class SearchAlertHistoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchAlertHistoriesResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchAlertHistoriesResponseBody() {}

  explicit SearchAlertHistoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchAlertHistoriesResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchAlertHistoriesResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchAlertHistoriesResponseBody() = default;
};
class SearchAlertHistoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchAlertHistoriesResponseBody> body{};

  SearchAlertHistoriesResponse() {}

  explicit SearchAlertHistoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchAlertHistoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchAlertHistoriesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchAlertHistoriesResponse() = default;
};
class SearchAlertRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  SearchAlertRulesRequest() {}

  explicit SearchAlertRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SearchAlertRulesRequest() = default;
};
class SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext : public Darabonba::Model {
public:
  shared_ptr<string> alarmContentSubTitle{};
  shared_ptr<string> alarmContentTemplate{};
  shared_ptr<string> content{};
  shared_ptr<string> subTitle{};

  SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext() {}

  explicit SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmContentSubTitle) {
      res["AlarmContentSubTitle"] = boost::any(*alarmContentSubTitle);
    }
    if (alarmContentTemplate) {
      res["AlarmContentTemplate"] = boost::any(*alarmContentTemplate);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (subTitle) {
      res["SubTitle"] = boost::any(*subTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmContentSubTitle") != m.end() && !m["AlarmContentSubTitle"].empty()) {
      alarmContentSubTitle = make_shared<string>(boost::any_cast<string>(m["AlarmContentSubTitle"]));
    }
    if (m.find("AlarmContentTemplate") != m.end() && !m["AlarmContentTemplate"].empty()) {
      alarmContentTemplate = make_shared<string>(boost::any_cast<string>(m["AlarmContentTemplate"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("SubTitle") != m.end() && !m["SubTitle"].empty()) {
      subTitle = make_shared<string>(boost::any_cast<string>(m["SubTitle"]));
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext() = default;
};
class SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules : public Darabonba::Model {
public:
  shared_ptr<string> aggregates{};
  shared_ptr<string> alias{};
  shared_ptr<string> measure{};
  shared_ptr<long> NValue{};
  shared_ptr<string> operator_{};
  shared_ptr<double> value{};

  SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules() {}

  explicit SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregates) {
      res["Aggregates"] = boost::any(*aggregates);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (measure) {
      res["Measure"] = boost::any(*measure);
    }
    if (NValue) {
      res["NValue"] = boost::any(*NValue);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregates") != m.end() && !m["Aggregates"].empty()) {
      aggregates = make_shared<string>(boost::any_cast<string>(m["Aggregates"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("Measure") != m.end() && !m["Measure"].empty()) {
      measure = make_shared<string>(boost::any_cast<string>(m["Measure"]));
    }
    if (m.find("NValue") != m.end() && !m["NValue"].empty()) {
      NValue = make_shared<long>(boost::any_cast<long>(m["NValue"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules() = default;
};
class SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<vector<SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules>> rules{};

  SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule() {}

  explicit SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules>>(expect1);
      }
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule() = default;
};
class SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions() {}

  explicit SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions() = default;
};
class SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam : public Darabonba::Model {
public:
  shared_ptr<string> appGroupId{};
  shared_ptr<string> appId{};
  shared_ptr<vector<SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions>> dimensions{};
  shared_ptr<string> pid{};
  shared_ptr<string> type{};

  SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam() {}

  explicit SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appGroupId) {
      res["AppGroupId"] = boost::any(*appGroupId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppGroupId") != m.end() && !m["AppGroupId"].empty()) {
      appGroupId = make_shared<string>(boost::any_cast<string>(m["AppGroupId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParamDimensions>>(expect1);
      }
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam() = default;
};
class SearchAlertRulesResponseBodyPageBeanAlertRulesNotice : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> noticeEndTime{};
  shared_ptr<long> noticeStartTime{};
  shared_ptr<long> startTime{};

  SearchAlertRulesResponseBodyPageBeanAlertRulesNotice() {}

  explicit SearchAlertRulesResponseBodyPageBeanAlertRulesNotice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (noticeEndTime) {
      res["NoticeEndTime"] = boost::any(*noticeEndTime);
    }
    if (noticeStartTime) {
      res["NoticeStartTime"] = boost::any(*noticeStartTime);
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
    if (m.find("NoticeEndTime") != m.end() && !m["NoticeEndTime"].empty()) {
      noticeEndTime = make_shared<long>(boost::any_cast<long>(m["NoticeEndTime"]));
    }
    if (m.find("NoticeStartTime") != m.end() && !m["NoticeStartTime"].empty()) {
      noticeStartTime = make_shared<long>(boost::any_cast<long>(m["NoticeStartTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesNotice() = default;
};
class SearchAlertRulesResponseBodyPageBeanAlertRules : public Darabonba::Model {
public:
  shared_ptr<SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext> alarmContext{};
  shared_ptr<string> alertLevel{};
  shared_ptr<SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule> alertRule{};
  shared_ptr<string> alertTitle{};
  shared_ptr<long> alertType{};
  shared_ptr<long> alertVersion{};
  shared_ptr<vector<string>> alertWay{};
  shared_ptr<vector<string>> alertWays{};
  shared_ptr<string> config{};
  shared_ptr<string> contactGroupIdList{};
  shared_ptr<string> contactGroupIds{};
  shared_ptr<long> createTime{};
  shared_ptr<long> id{};
  shared_ptr<SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam> metricParam{};
  shared_ptr<SearchAlertRulesResponseBodyPageBeanAlertRulesNotice> notice{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<long> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> title{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  SearchAlertRulesResponseBodyPageBeanAlertRules() {}

  explicit SearchAlertRulesResponseBodyPageBeanAlertRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmContext) {
      res["AlarmContext"] = alarmContext ? boost::any(alarmContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (alertLevel) {
      res["AlertLevel"] = boost::any(*alertLevel);
    }
    if (alertRule) {
      res["AlertRule"] = alertRule ? boost::any(alertRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (alertTitle) {
      res["AlertTitle"] = boost::any(*alertTitle);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (alertVersion) {
      res["AlertVersion"] = boost::any(*alertVersion);
    }
    if (alertWay) {
      res["AlertWay"] = boost::any(*alertWay);
    }
    if (alertWays) {
      res["AlertWays"] = boost::any(*alertWays);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (contactGroupIdList) {
      res["ContactGroupIdList"] = boost::any(*contactGroupIdList);
    }
    if (contactGroupIds) {
      res["ContactGroupIds"] = boost::any(*contactGroupIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metricParam) {
      res["MetricParam"] = metricParam ? boost::any(metricParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notice) {
      res["Notice"] = notice ? boost::any(notice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (title) {
      res["Title"] = boost::any(*title);
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
    if (m.find("AlarmContext") != m.end() && !m["AlarmContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlarmContext"].type()) {
        SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlarmContext"]));
        alarmContext = make_shared<SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext>(model1);
      }
    }
    if (m.find("AlertLevel") != m.end() && !m["AlertLevel"].empty()) {
      alertLevel = make_shared<string>(boost::any_cast<string>(m["AlertLevel"]));
    }
    if (m.find("AlertRule") != m.end() && !m["AlertRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlertRule"].type()) {
        SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlertRule"]));
        alertRule = make_shared<SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule>(model1);
      }
    }
    if (m.find("AlertTitle") != m.end() && !m["AlertTitle"].empty()) {
      alertTitle = make_shared<string>(boost::any_cast<string>(m["AlertTitle"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<long>(boost::any_cast<long>(m["AlertType"]));
    }
    if (m.find("AlertVersion") != m.end() && !m["AlertVersion"].empty()) {
      alertVersion = make_shared<long>(boost::any_cast<long>(m["AlertVersion"]));
    }
    if (m.find("AlertWay") != m.end() && !m["AlertWay"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlertWay"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlertWay"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alertWay = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AlertWays") != m.end() && !m["AlertWays"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlertWays"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlertWays"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alertWays = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ContactGroupIdList") != m.end() && !m["ContactGroupIdList"].empty()) {
      contactGroupIdList = make_shared<string>(boost::any_cast<string>(m["ContactGroupIdList"]));
    }
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      contactGroupIds = make_shared<string>(boost::any_cast<string>(m["ContactGroupIds"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MetricParam") != m.end() && !m["MetricParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetricParam"].type()) {
        SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetricParam"]));
        metricParam = make_shared<SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam>(model1);
      }
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      if (typeid(map<string, boost::any>) == m["Notice"].type()) {
        SearchAlertRulesResponseBodyPageBeanAlertRulesNotice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Notice"]));
        notice = make_shared<SearchAlertRulesResponseBodyPageBeanAlertRulesNotice>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBeanAlertRules() = default;
};
class SearchAlertRulesResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<vector<SearchAlertRulesResponseBodyPageBeanAlertRules>> alertRules{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  SearchAlertRulesResponseBodyPageBean() {}

  explicit SearchAlertRulesResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertRules) {
      vector<boost::any> temp1;
      for(auto item1:*alertRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlertRules"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertRules") != m.end() && !m["AlertRules"].empty()) {
      if (typeid(vector<boost::any>) == m["AlertRules"].type()) {
        vector<SearchAlertRulesResponseBodyPageBeanAlertRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlertRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchAlertRulesResponseBodyPageBeanAlertRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alertRules = make_shared<vector<SearchAlertRulesResponseBodyPageBeanAlertRules>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchAlertRulesResponseBodyPageBean() = default;
};
class SearchAlertRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchAlertRulesResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchAlertRulesResponseBody() {}

  explicit SearchAlertRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchAlertRulesResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchAlertRulesResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchAlertRulesResponseBody() = default;
};
class SearchAlertRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchAlertRulesResponseBody> body{};

  SearchAlertRulesResponse() {}

  explicit SearchAlertRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchAlertRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchAlertRulesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchAlertRulesResponse() = default;
};
class SearchEventsRequest : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<long> alertType{};
  shared_ptr<string> appType{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> isTrigger{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  SearchEventsRequest() {}

  explicit SearchEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isTrigger) {
      res["IsTrigger"] = boost::any(*isTrigger);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<long>(boost::any_cast<long>(m["AlertType"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IsTrigger") != m.end() && !m["IsTrigger"].empty()) {
      isTrigger = make_shared<long>(boost::any_cast<long>(m["IsTrigger"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~SearchEventsRequest() = default;
};
class SearchEventsResponseBodyPageBeanEvent : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> alertName{};
  shared_ptr<string> alertRule{};
  shared_ptr<long> alertType{};
  shared_ptr<string> eventLevel{};
  shared_ptr<long> eventTime{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> links{};
  shared_ptr<string> message{};

  SearchEventsResponseBodyPageBeanEvent() {}

  explicit SearchEventsResponseBodyPageBeanEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (alertRule) {
      res["AlertRule"] = boost::any(*alertRule);
    }
    if (alertType) {
      res["AlertType"] = boost::any(*alertType);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (links) {
      res["Links"] = boost::any(*links);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("AlertRule") != m.end() && !m["AlertRule"].empty()) {
      alertRule = make_shared<string>(boost::any_cast<string>(m["AlertRule"]));
    }
    if (m.find("AlertType") != m.end() && !m["AlertType"].empty()) {
      alertType = make_shared<long>(boost::any_cast<long>(m["AlertType"]));
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<string>(boost::any_cast<string>(m["EventLevel"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["EventTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Links") != m.end() && !m["Links"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Links"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Links"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      links = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~SearchEventsResponseBodyPageBeanEvent() = default;
};
class SearchEventsResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<vector<SearchEventsResponseBodyPageBeanEvent>> event{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  SearchEventsResponseBodyPageBean() {}

  explicit SearchEventsResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      vector<boost::any> temp1;
      for(auto item1:*event){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Event"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      if (typeid(vector<boost::any>) == m["Event"].type()) {
        vector<SearchEventsResponseBodyPageBeanEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Event"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchEventsResponseBodyPageBeanEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        event = make_shared<vector<SearchEventsResponseBodyPageBeanEvent>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchEventsResponseBodyPageBean() = default;
};
class SearchEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> isTrigger{};
  shared_ptr<SearchEventsResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchEventsResponseBody() {}

  explicit SearchEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTrigger) {
      res["IsTrigger"] = boost::any(*isTrigger);
    }
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTrigger") != m.end() && !m["IsTrigger"].empty()) {
      isTrigger = make_shared<long>(boost::any_cast<long>(m["IsTrigger"]));
    }
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchEventsResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchEventsResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchEventsResponseBody() = default;
};
class SearchEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchEventsResponseBody> body{};

  SearchEventsResponse() {}

  explicit SearchEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchEventsResponseBody>(model1);
      }
    }
  }


  virtual ~SearchEventsResponse() = default;
};
class SearchRetcodeAppByPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> retcodeAppName{};

  SearchRetcodeAppByPageRequest() {}

  explicit SearchRetcodeAppByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retcodeAppName) {
      res["RetcodeAppName"] = boost::any(*retcodeAppName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetcodeAppName") != m.end() && !m["RetcodeAppName"].empty()) {
      retcodeAppName = make_shared<string>(boost::any_cast<string>(m["RetcodeAppName"]));
    }
  }


  virtual ~SearchRetcodeAppByPageRequest() = default;
};
class SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps() {}

  explicit SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps() = default;
};
class SearchRetcodeAppByPageResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps>> retcodeApps{};
  shared_ptr<long> totalCount{};

  SearchRetcodeAppByPageResponseBodyPageBean() {}

  explicit SearchRetcodeAppByPageResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (retcodeApps) {
      vector<boost::any> temp1;
      for(auto item1:*retcodeApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RetcodeApps"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RetcodeApps") != m.end() && !m["RetcodeApps"].empty()) {
      if (typeid(vector<boost::any>) == m["RetcodeApps"].type()) {
        vector<SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RetcodeApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        retcodeApps = make_shared<vector<SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchRetcodeAppByPageResponseBodyPageBean() = default;
};
class SearchRetcodeAppByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchRetcodeAppByPageResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchRetcodeAppByPageResponseBody() {}

  explicit SearchRetcodeAppByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchRetcodeAppByPageResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchRetcodeAppByPageResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchRetcodeAppByPageResponseBody() = default;
};
class SearchRetcodeAppByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchRetcodeAppByPageResponseBody> body{};

  SearchRetcodeAppByPageResponse() {}

  explicit SearchRetcodeAppByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchRetcodeAppByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchRetcodeAppByPageResponseBody>(model1);
      }
    }
  }


  virtual ~SearchRetcodeAppByPageResponse() = default;
};
class SearchTraceAppByNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> traceAppName{};

  SearchTraceAppByNameRequest() {}

  explicit SearchTraceAppByNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (traceAppName) {
      res["TraceAppName"] = boost::any(*traceAppName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TraceAppName") != m.end() && !m["TraceAppName"].empty()) {
      traceAppName = make_shared<string>(boost::any_cast<string>(m["TraceAppName"]));
    }
  }


  virtual ~SearchTraceAppByNameRequest() = default;
};
class SearchTraceAppByNameResponseBodyTraceApps : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> show{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  SearchTraceAppByNameResponseBodyTraceApps() {}

  explicit SearchTraceAppByNameResponseBodyTraceApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (show) {
      res["Show"] = boost::any(*show);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Show") != m.end() && !m["Show"].empty()) {
      show = make_shared<bool>(boost::any_cast<bool>(m["Show"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchTraceAppByNameResponseBodyTraceApps() = default;
};
class SearchTraceAppByNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchTraceAppByNameResponseBodyTraceApps>> traceApps{};

  SearchTraceAppByNameResponseBody() {}

  explicit SearchTraceAppByNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceApps) {
      vector<boost::any> temp1;
      for(auto item1:*traceApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceApps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceApps") != m.end() && !m["TraceApps"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceApps"].type()) {
        vector<SearchTraceAppByNameResponseBodyTraceApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTraceAppByNameResponseBodyTraceApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceApps = make_shared<vector<SearchTraceAppByNameResponseBodyTraceApps>>(expect1);
      }
    }
  }


  virtual ~SearchTraceAppByNameResponseBody() = default;
};
class SearchTraceAppByNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchTraceAppByNameResponseBody> body{};

  SearchTraceAppByNameResponse() {}

  explicit SearchTraceAppByNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchTraceAppByNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTraceAppByNameResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTraceAppByNameResponse() = default;
};
class SearchTraceAppByPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> traceAppName{};

  SearchTraceAppByPageRequest() {}

  explicit SearchTraceAppByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (traceAppName) {
      res["TraceAppName"] = boost::any(*traceAppName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TraceAppName") != m.end() && !m["TraceAppName"].empty()) {
      traceAppName = make_shared<string>(boost::any_cast<string>(m["TraceAppName"]));
    }
  }


  virtual ~SearchTraceAppByPageRequest() = default;
};
class SearchTraceAppByPageResponseBodyPageBeanTraceApps : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> show{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  SearchTraceAppByPageResponseBodyPageBeanTraceApps() {}

  explicit SearchTraceAppByPageResponseBodyPageBeanTraceApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (show) {
      res["Show"] = boost::any(*show);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Show") != m.end() && !m["Show"].empty()) {
      show = make_shared<bool>(boost::any_cast<bool>(m["Show"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchTraceAppByPageResponseBodyPageBeanTraceApps() = default;
};
class SearchTraceAppByPageResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<SearchTraceAppByPageResponseBodyPageBeanTraceApps>> traceApps{};

  SearchTraceAppByPageResponseBodyPageBean() {}

  explicit SearchTraceAppByPageResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (traceApps) {
      vector<boost::any> temp1;
      for(auto item1:*traceApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceApps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TraceApps") != m.end() && !m["TraceApps"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceApps"].type()) {
        vector<SearchTraceAppByPageResponseBodyPageBeanTraceApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTraceAppByPageResponseBodyPageBeanTraceApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceApps = make_shared<vector<SearchTraceAppByPageResponseBodyPageBeanTraceApps>>(expect1);
      }
    }
  }


  virtual ~SearchTraceAppByPageResponseBodyPageBean() = default;
};
class SearchTraceAppByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchTraceAppByPageResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchTraceAppByPageResponseBody() {}

  explicit SearchTraceAppByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchTraceAppByPageResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchTraceAppByPageResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchTraceAppByPageResponseBody() = default;
};
class SearchTraceAppByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchTraceAppByPageResponseBody> body{};

  SearchTraceAppByPageResponse() {}

  explicit SearchTraceAppByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchTraceAppByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTraceAppByPageResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTraceAppByPageResponse() = default;
};
class SearchTracesRequestExclusionFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SearchTracesRequestExclusionFilters() {}

  explicit SearchTracesRequestExclusionFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchTracesRequestExclusionFilters() = default;
};
class SearchTracesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SearchTracesRequestTag() {}

  explicit SearchTracesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchTracesRequestTag() = default;
};
class SearchTracesRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<vector<SearchTracesRequestExclusionFilters>> exclusionFilters{};
  shared_ptr<long> minDuration{};
  shared_ptr<string> operationName{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startTime{};
  shared_ptr<vector<SearchTracesRequestTag>> tag{};

  SearchTracesRequest() {}

  explicit SearchTracesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (exclusionFilters) {
      vector<boost::any> temp1;
      for(auto item1:*exclusionFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExclusionFilters"] = boost::any(temp1);
    }
    if (minDuration) {
      res["MinDuration"] = boost::any(*minDuration);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExclusionFilters") != m.end() && !m["ExclusionFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["ExclusionFilters"].type()) {
        vector<SearchTracesRequestExclusionFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExclusionFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTracesRequestExclusionFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exclusionFilters = make_shared<vector<SearchTracesRequestExclusionFilters>>(expect1);
      }
    }
    if (m.find("MinDuration") != m.end() && !m["MinDuration"].empty()) {
      minDuration = make_shared<long>(boost::any_cast<long>(m["MinDuration"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<SearchTracesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTracesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<SearchTracesRequestTag>>(expect1);
      }
    }
  }


  virtual ~SearchTracesRequest() = default;
};
class SearchTracesResponseBodyTraceInfos : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> operationName{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> traceID{};

  SearchTracesResponseBodyTraceInfos() {}

  explicit SearchTracesResponseBodyTraceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~SearchTracesResponseBodyTraceInfos() = default;
};
class SearchTracesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchTracesResponseBodyTraceInfos>> traceInfos{};

  SearchTracesResponseBody() {}

  explicit SearchTracesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (traceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*traceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TraceInfos") != m.end() && !m["TraceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceInfos"].type()) {
        vector<SearchTracesResponseBodyTraceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTracesResponseBodyTraceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceInfos = make_shared<vector<SearchTracesResponseBodyTraceInfos>>(expect1);
      }
    }
  }


  virtual ~SearchTracesResponseBody() = default;
};
class SearchTracesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchTracesResponseBody> body{};

  SearchTracesResponse() {}

  explicit SearchTracesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchTracesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTracesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTracesResponse() = default;
};
class SearchTracesByPageRequestExclusionFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SearchTracesByPageRequestExclusionFilters() {}

  explicit SearchTracesByPageRequestExclusionFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchTracesByPageRequestExclusionFilters() = default;
};
class SearchTracesByPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<vector<SearchTracesByPageRequestExclusionFilters>> exclusionFilters{};
  shared_ptr<long> minDuration{};
  shared_ptr<string> operationName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> startTime{};

  SearchTracesByPageRequest() {}

  explicit SearchTracesByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (exclusionFilters) {
      vector<boost::any> temp1;
      for(auto item1:*exclusionFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExclusionFilters"] = boost::any(temp1);
    }
    if (minDuration) {
      res["MinDuration"] = boost::any(*minDuration);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
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
    if (m.find("ExclusionFilters") != m.end() && !m["ExclusionFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["ExclusionFilters"].type()) {
        vector<SearchTracesByPageRequestExclusionFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExclusionFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTracesByPageRequestExclusionFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exclusionFilters = make_shared<vector<SearchTracesByPageRequestExclusionFilters>>(expect1);
      }
    }
    if (m.find("MinDuration") != m.end() && !m["MinDuration"].empty()) {
      minDuration = make_shared<long>(boost::any_cast<long>(m["MinDuration"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~SearchTracesByPageRequest() = default;
};
class SearchTracesByPageResponseBodyPageBeanTraceInfos : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> operationName{};
  shared_ptr<string> serviceIp{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> traceID{};

  SearchTracesByPageResponseBodyPageBeanTraceInfos() {}

  explicit SearchTracesByPageResponseBodyPageBeanTraceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (serviceIp) {
      res["ServiceIp"] = boost::any(*serviceIp);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (traceID) {
      res["TraceID"] = boost::any(*traceID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("ServiceIp") != m.end() && !m["ServiceIp"].empty()) {
      serviceIp = make_shared<string>(boost::any_cast<string>(m["ServiceIp"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TraceID") != m.end() && !m["TraceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["TraceID"]));
    }
  }


  virtual ~SearchTracesByPageResponseBodyPageBeanTraceInfos() = default;
};
class SearchTracesByPageResponseBodyPageBean : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<SearchTracesByPageResponseBodyPageBeanTraceInfos>> traceInfos{};

  SearchTracesByPageResponseBodyPageBean() {}

  explicit SearchTracesByPageResponseBodyPageBean(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (traceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*traceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TraceInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TraceInfos") != m.end() && !m["TraceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TraceInfos"].type()) {
        vector<SearchTracesByPageResponseBodyPageBeanTraceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TraceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTracesByPageResponseBodyPageBeanTraceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        traceInfos = make_shared<vector<SearchTracesByPageResponseBodyPageBeanTraceInfos>>(expect1);
      }
    }
  }


  virtual ~SearchTracesByPageResponseBodyPageBean() = default;
};
class SearchTracesByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchTracesByPageResponseBodyPageBean> pageBean{};
  shared_ptr<string> requestId{};

  SearchTracesByPageResponseBody() {}

  explicit SearchTracesByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageBean) {
      res["PageBean"] = pageBean ? boost::any(pageBean->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageBean") != m.end() && !m["PageBean"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageBean"].type()) {
        SearchTracesByPageResponseBodyPageBean model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageBean"]));
        pageBean = make_shared<SearchTracesByPageResponseBodyPageBean>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchTracesByPageResponseBody() = default;
};
class SearchTracesByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchTracesByPageResponseBody> body{};

  SearchTracesByPageResponse() {}

  explicit SearchTracesByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchTracesByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTracesByPageResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTracesByPageResponse() = default;
};
class SendCustomIncidentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidents{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};

  SendCustomIncidentsRequest() {}

  explicit SendCustomIncidentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidents) {
      res["Incidents"] = boost::any(*incidents);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Incidents") != m.end() && !m["Incidents"].empty()) {
      incidents = make_shared<string>(boost::any_cast<string>(m["Incidents"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SendCustomIncidentsRequest() = default;
};
class SendCustomIncidentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendCustomIncidentsResponseBody() {}

  explicit SendCustomIncidentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendCustomIncidentsResponseBody() = default;
};
class SendCustomIncidentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCustomIncidentsResponseBody> body{};

  SendCustomIncidentsResponse() {}

  explicit SendCustomIncidentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCustomIncidentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCustomIncidentsResponseBody>(model1);
      }
    }
  }


  virtual ~SendCustomIncidentsResponse() = default;
};
class SendMseIncidentRequest : public Darabonba::Model {
public:
  shared_ptr<string> incidents{};
  shared_ptr<string> regionId{};

  SendMseIncidentRequest() {}

  explicit SendMseIncidentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incidents) {
      res["Incidents"] = boost::any(*incidents);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Incidents") != m.end() && !m["Incidents"].empty()) {
      incidents = make_shared<string>(boost::any_cast<string>(m["Incidents"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SendMseIncidentRequest() = default;
};
class SendMseIncidentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendMseIncidentResponseBody() {}

  explicit SendMseIncidentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendMseIncidentResponseBody() = default;
};
class SendMseIncidentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMseIncidentResponseBody> body{};

  SendMseIncidentResponse() {}

  explicit SendMseIncidentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMseIncidentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMseIncidentResponseBody>(model1);
      }
    }
  }


  virtual ~SendMseIncidentResponse() = default;
};
class SetRetcodeShareStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> pid{};
  shared_ptr<bool> status{};

  SetRetcodeShareStatusRequest() {}

  explicit SetRetcodeShareStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~SetRetcodeShareStatusRequest() = default;
};
class SetRetcodeShareStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  SetRetcodeShareStatusResponseBody() {}

  explicit SetRetcodeShareStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetRetcodeShareStatusResponseBody() = default;
};
class SetRetcodeShareStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetRetcodeShareStatusResponseBody> body{};

  SetRetcodeShareStatusResponse() {}

  explicit SetRetcodeShareStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetRetcodeShareStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetRetcodeShareStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetRetcodeShareStatusResponse() = default;
};
class StartAlertRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertId{};
  shared_ptr<string> regionId{};

  StartAlertRequest() {}

  explicit StartAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<string>(boost::any_cast<string>(m["AlertId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartAlertRequest() = default;
};
class StartAlertResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  StartAlertResponseBody() {}

  explicit StartAlertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartAlertResponseBody() = default;
};
class StartAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartAlertResponseBody> body{};

  StartAlertResponse() {}

  explicit StartAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAlertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAlertResponseBody>(model1);
      }
    }
  }


  virtual ~StartAlertResponse() = default;
};
class StopAlertRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertId{};
  shared_ptr<string> regionId{};

  StopAlertRequest() {}

  explicit StopAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<string>(boost::any_cast<string>(m["AlertId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopAlertRequest() = default;
};
class StopAlertResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  StopAlertResponseBody() {}

  explicit StopAlertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopAlertResponseBody() = default;
};
class StopAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAlertResponseBody> body{};

  StopAlertResponse() {}

  explicit StopAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAlertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAlertResponseBody>(model1);
      }
    }
  }


  virtual ~StopAlertResponse() = default;
};
class UninstallPromClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  UninstallPromClusterRequest() {}

  explicit UninstallPromClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UninstallPromClusterRequest() = default;
};
class UninstallPromClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> data{};

  UninstallPromClusterResponseBody() {}

  explicit UninstallPromClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
  }


  virtual ~UninstallPromClusterResponseBody() = default;
};
class UninstallPromClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UninstallPromClusterResponseBody> body{};

  UninstallPromClusterResponse() {}

  explicit UninstallPromClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UninstallPromClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UninstallPromClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UninstallPromClusterResponse() = default;
};
class UpdateAlertContactRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<string> dingRobotWebhookUrl{};
  shared_ptr<string> email{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> systemNoc{};

  UpdateAlertContactRequest() {}

  explicit UpdateAlertContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (dingRobotWebhookUrl) {
      res["DingRobotWebhookUrl"] = boost::any(*dingRobotWebhookUrl);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (systemNoc) {
      res["SystemNoc"] = boost::any(*systemNoc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("DingRobotWebhookUrl") != m.end() && !m["DingRobotWebhookUrl"].empty()) {
      dingRobotWebhookUrl = make_shared<string>(boost::any_cast<string>(m["DingRobotWebhookUrl"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SystemNoc") != m.end() && !m["SystemNoc"].empty()) {
      systemNoc = make_shared<bool>(boost::any_cast<bool>(m["SystemNoc"]));
    }
  }


  virtual ~UpdateAlertContactRequest() = default;
};
class UpdateAlertContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateAlertContactResponseBody() {}

  explicit UpdateAlertContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAlertContactResponseBody() = default;
};
class UpdateAlertContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlertContactResponseBody> body{};

  UpdateAlertContactResponse() {}

  explicit UpdateAlertContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlertContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlertContactResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlertContactResponse() = default;
};
class UpdateAlertContactGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> contactGroupId{};
  shared_ptr<string> contactGroupName{};
  shared_ptr<string> contactIds{};
  shared_ptr<string> regionId{};

  UpdateAlertContactGroupRequest() {}

  explicit UpdateAlertContactGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupId) {
      res["ContactGroupId"] = boost::any(*contactGroupId);
    }
    if (contactGroupName) {
      res["ContactGroupName"] = boost::any(*contactGroupName);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupId") != m.end() && !m["ContactGroupId"].empty()) {
      contactGroupId = make_shared<long>(boost::any_cast<long>(m["ContactGroupId"]));
    }
    if (m.find("ContactGroupName") != m.end() && !m["ContactGroupName"].empty()) {
      contactGroupName = make_shared<string>(boost::any_cast<string>(m["ContactGroupName"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      contactIds = make_shared<string>(boost::any_cast<string>(m["ContactIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateAlertContactGroupRequest() = default;
};
class UpdateAlertContactGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateAlertContactGroupResponseBody() {}

  explicit UpdateAlertContactGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAlertContactGroupResponseBody() = default;
};
class UpdateAlertContactGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlertContactGroupResponseBody> body{};

  UpdateAlertContactGroupResponse() {}

  explicit UpdateAlertContactGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlertContactGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlertContactGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlertContactGroupResponse() = default;
};
class UpdateAlertRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> contactGroupIds{};
  shared_ptr<bool> isAutoStart{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templageAlertConfig{};

  UpdateAlertRuleRequest() {}

  explicit UpdateAlertRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (contactGroupIds) {
      res["ContactGroupIds"] = boost::any(*contactGroupIds);
    }
    if (isAutoStart) {
      res["IsAutoStart"] = boost::any(*isAutoStart);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templageAlertConfig) {
      res["TemplageAlertConfig"] = boost::any(*templageAlertConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      contactGroupIds = make_shared<string>(boost::any_cast<string>(m["ContactGroupIds"]));
    }
    if (m.find("IsAutoStart") != m.end() && !m["IsAutoStart"].empty()) {
      isAutoStart = make_shared<bool>(boost::any_cast<bool>(m["IsAutoStart"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplageAlertConfig") != m.end() && !m["TemplageAlertConfig"].empty()) {
      templageAlertConfig = make_shared<string>(boost::any_cast<string>(m["TemplageAlertConfig"]));
    }
  }


  virtual ~UpdateAlertRuleRequest() = default;
};
class UpdateAlertRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UpdateAlertRuleResponseBody() {}

  explicit UpdateAlertRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAlertRuleResponseBody() = default;
};
class UpdateAlertRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlertRuleResponseBody> body{};

  UpdateAlertRuleResponse() {}

  explicit UpdateAlertRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlertRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlertRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlertRuleResponse() = default;
};
class UpdateAlertTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> annotations{};
  shared_ptr<long> id{};
  shared_ptr<string> labels{};
  shared_ptr<string> matchExpressions{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rule{};
  shared_ptr<bool> status{};
  shared_ptr<string> type{};

  UpdateAlertTemplateRequest() {}

  explicit UpdateAlertTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (matchExpressions) {
      res["MatchExpressions"] = boost::any(*matchExpressions);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rule) {
      res["Rule"] = boost::any(*rule);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MatchExpressions") != m.end() && !m["MatchExpressions"].empty()) {
      matchExpressions = make_shared<string>(boost::any_cast<string>(m["MatchExpressions"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      rule = make_shared<string>(boost::any_cast<string>(m["Rule"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateAlertTemplateRequest() = default;
};
class UpdateAlertTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAlertTemplateResponseBody() {}

  explicit UpdateAlertTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAlertTemplateResponseBody() = default;
};
class UpdateAlertTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAlertTemplateResponseBody> body{};

  UpdateAlertTemplateResponse() {}

  explicit UpdateAlertTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAlertTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAlertTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAlertTemplateResponse() = default;
};
class UpdateDispatchRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> dispatchRule{};
  shared_ptr<string> regionId{};

  UpdateDispatchRuleRequest() {}

  explicit UpdateDispatchRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dispatchRule) {
      res["DispatchRule"] = boost::any(*dispatchRule);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DispatchRule") != m.end() && !m["DispatchRule"].empty()) {
      dispatchRule = make_shared<string>(boost::any_cast<string>(m["DispatchRule"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateDispatchRuleRequest() = default;
};
class UpdateDispatchRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDispatchRuleResponseBody() {}

  explicit UpdateDispatchRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateDispatchRuleResponseBody() = default;
};
class UpdateDispatchRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDispatchRuleResponseBody> body{};

  UpdateDispatchRuleResponse() {}

  explicit UpdateDispatchRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDispatchRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDispatchRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDispatchRuleResponse() = default;
};
class UpdatePrometheusAlertRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> alertName{};
  shared_ptr<string> annotations{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> dispatchRuleId{};
  shared_ptr<string> duration{};
  shared_ptr<string> expression{};
  shared_ptr<string> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> notifyType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  UpdatePrometheusAlertRuleRequest() {}

  explicit UpdatePrometheusAlertRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dispatchRuleId) {
      res["DispatchRuleId"] = boost::any(*dispatchRuleId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DispatchRuleId") != m.end() && !m["DispatchRuleId"].empty()) {
      dispatchRuleId = make_shared<long>(boost::any_cast<long>(m["DispatchRuleId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdatePrometheusAlertRuleRequest() = default;
};
class UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations() {}

  explicit UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations() = default;
};
class UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels() {}

  explicit UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels() = default;
};
class UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRule : public Darabonba::Model {
public:
  shared_ptr<long> alertId{};
  shared_ptr<string> alertName{};
  shared_ptr<vector<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>> annotations{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> dispatchRuleId{};
  shared_ptr<string> duration{};
  shared_ptr<string> expression{};
  shared_ptr<vector<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> notifyType{};
  shared_ptr<long> status{};
  shared_ptr<string> type{};

  UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRule() {}

  explicit UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertId) {
      res["AlertId"] = boost::any(*alertId);
    }
    if (alertName) {
      res["AlertName"] = boost::any(*alertName);
    }
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Annotations"] = boost::any(temp1);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dispatchRuleId) {
      res["DispatchRuleId"] = boost::any(*dispatchRuleId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertId") != m.end() && !m["AlertId"].empty()) {
      alertId = make_shared<long>(boost::any_cast<long>(m["AlertId"]));
    }
    if (m.find("AlertName") != m.end() && !m["AlertName"].empty()) {
      alertName = make_shared<string>(boost::any_cast<string>(m["AlertName"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["Annotations"].type()) {
        vector<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>>(expect1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DispatchRuleId") != m.end() && !m["DispatchRuleId"].empty()) {
      dispatchRuleId = make_shared<long>(boost::any_cast<long>(m["DispatchRuleId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRule() = default;
};
class UpdatePrometheusAlertRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRule> prometheusAlertRule{};
  shared_ptr<string> requestId{};

  UpdatePrometheusAlertRuleResponseBody() {}

  explicit UpdatePrometheusAlertRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prometheusAlertRule) {
      res["PrometheusAlertRule"] = prometheusAlertRule ? boost::any(prometheusAlertRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrometheusAlertRule") != m.end() && !m["PrometheusAlertRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrometheusAlertRule"].type()) {
        UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrometheusAlertRule"]));
        prometheusAlertRule = make_shared<UpdatePrometheusAlertRuleResponseBodyPrometheusAlertRule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePrometheusAlertRuleResponseBody() = default;
};
class UpdatePrometheusAlertRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePrometheusAlertRuleResponseBody> body{};

  UpdatePrometheusAlertRuleResponse() {}

  explicit UpdatePrometheusAlertRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePrometheusAlertRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePrometheusAlertRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePrometheusAlertRuleResponse() = default;
};
class UpdateWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<long> contactId{};
  shared_ptr<string> contactName{};
  shared_ptr<string> httpHeaders{};
  shared_ptr<string> httpParams{};
  shared_ptr<string> method{};
  shared_ptr<string> regionId{};
  shared_ptr<string> url{};

  UpdateWebhookRequest() {}

  explicit UpdateWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (httpHeaders) {
      res["HttpHeaders"] = boost::any(*httpHeaders);
    }
    if (httpParams) {
      res["HttpParams"] = boost::any(*httpParams);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<long>(boost::any_cast<long>(m["ContactId"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("HttpHeaders") != m.end() && !m["HttpHeaders"].empty()) {
      httpHeaders = make_shared<string>(boost::any_cast<string>(m["HttpHeaders"]));
    }
    if (m.find("HttpParams") != m.end() && !m["HttpParams"].empty()) {
      httpParams = make_shared<string>(boost::any_cast<string>(m["HttpParams"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateWebhookRequest() = default;
};
class UpdateWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateWebhookResponseBody() {}

  explicit UpdateWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateWebhookResponseBody() = default;
};
class UpdateWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWebhookResponseBody> body{};

  UpdateWebhookResponse() {}

  explicit UpdateWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWebhookResponse() = default;
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
  AddGrafanaResponse addGrafanaWithOptions(shared_ptr<AddGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGrafanaResponse addGrafana(shared_ptr<AddGrafanaRequest> request);
  AddIntegrationResponse addIntegrationWithOptions(shared_ptr<AddIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddIntegrationResponse addIntegration(shared_ptr<AddIntegrationRequest> request);
  ApplyScenarioResponse applyScenarioWithOptions(shared_ptr<ApplyScenarioRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyScenarioResponse applyScenario(shared_ptr<ApplyScenarioRequest> request);
  CheckDataConsistencyResponse checkDataConsistencyWithOptions(shared_ptr<CheckDataConsistencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDataConsistencyResponse checkDataConsistency(shared_ptr<CheckDataConsistencyRequest> request);
  CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeletingWithOptions(shared_ptr<CheckServiceLinkedRoleForDeletingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeleting(shared_ptr<CheckServiceLinkedRoleForDeletingRequest> request);
  CheckServiceStatusResponse checkServiceStatusWithOptions(shared_ptr<CheckServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceStatusResponse checkServiceStatus(shared_ptr<CheckServiceStatusRequest> request);
  ConfigAppResponse configAppWithOptions(shared_ptr<ConfigAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigAppResponse configApp(shared_ptr<ConfigAppRequest> request);
  CreateAlertContactResponse createAlertContactWithOptions(shared_ptr<CreateAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlertContactResponse createAlertContact(shared_ptr<CreateAlertContactRequest> request);
  CreateAlertContactGroupResponse createAlertContactGroupWithOptions(shared_ptr<CreateAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlertContactGroupResponse createAlertContactGroup(shared_ptr<CreateAlertContactGroupRequest> request);
  CreateAlertTemplateResponse createAlertTemplateWithOptions(shared_ptr<CreateAlertTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlertTemplateResponse createAlertTemplate(shared_ptr<CreateAlertTemplateRequest> request);
  CreateDispatchRuleResponse createDispatchRuleWithOptions(shared_ptr<CreateDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDispatchRuleResponse createDispatchRule(shared_ptr<CreateDispatchRuleRequest> request);
  CreatePrometheusAlertRuleResponse createPrometheusAlertRuleWithOptions(shared_ptr<CreatePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrometheusAlertRuleResponse createPrometheusAlertRule(shared_ptr<CreatePrometheusAlertRuleRequest> request);
  CreateRetcodeAppResponse createRetcodeAppWithOptions(shared_ptr<CreateRetcodeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRetcodeAppResponse createRetcodeApp(shared_ptr<CreateRetcodeAppRequest> request);
  CreateWebhookResponse createWebhookWithOptions(shared_ptr<CreateWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWebhookResponse createWebhook(shared_ptr<CreateWebhookRequest> request);
  CreateWehookResponse createWehookWithOptions(shared_ptr<CreateWehookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWehookResponse createWehook(shared_ptr<CreateWehookRequest> request);
  DeleteAlertContactResponse deleteAlertContactWithOptions(shared_ptr<DeleteAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlertContactResponse deleteAlertContact(shared_ptr<DeleteAlertContactRequest> request);
  DeleteAlertContactGroupResponse deleteAlertContactGroupWithOptions(shared_ptr<DeleteAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlertContactGroupResponse deleteAlertContactGroup(shared_ptr<DeleteAlertContactGroupRequest> request);
  DeleteAlertRulesResponse deleteAlertRulesWithOptions(shared_ptr<DeleteAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlertRulesResponse deleteAlertRules(shared_ptr<DeleteAlertRulesRequest> request);
  DeleteAlertTemplateResponse deleteAlertTemplateWithOptions(shared_ptr<DeleteAlertTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlertTemplateResponse deleteAlertTemplate(shared_ptr<DeleteAlertTemplateRequest> request);
  DeleteDispatchRuleResponse deleteDispatchRuleWithOptions(shared_ptr<DeleteDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDispatchRuleResponse deleteDispatchRule(shared_ptr<DeleteDispatchRuleRequest> request);
  DeleteGrafanaResourceResponse deleteGrafanaResourceWithOptions(shared_ptr<DeleteGrafanaResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGrafanaResourceResponse deleteGrafanaResource(shared_ptr<DeleteGrafanaResourceRequest> request);
  DeletePrometheusAlertRuleResponse deletePrometheusAlertRuleWithOptions(shared_ptr<DeletePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrometheusAlertRuleResponse deletePrometheusAlertRule(shared_ptr<DeletePrometheusAlertRuleRequest> request);
  DeleteRetcodeAppResponse deleteRetcodeAppWithOptions(shared_ptr<DeleteRetcodeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRetcodeAppResponse deleteRetcodeApp(shared_ptr<DeleteRetcodeAppRequest> request);
  DeleteScenarioResponse deleteScenarioWithOptions(shared_ptr<DeleteScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScenarioResponse deleteScenario(shared_ptr<DeleteScenarioRequest> request);
  DeleteTraceAppResponse deleteTraceAppWithOptions(shared_ptr<DeleteTraceAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTraceAppResponse deleteTraceApp(shared_ptr<DeleteTraceAppRequest> request);
  DescribeDispatchRuleResponse describeDispatchRuleWithOptions(shared_ptr<DescribeDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDispatchRuleResponse describeDispatchRule(shared_ptr<DescribeDispatchRuleRequest> request);
  DescribePrometheusAlertRuleResponse describePrometheusAlertRuleWithOptions(shared_ptr<DescribePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePrometheusAlertRuleResponse describePrometheusAlertRule(shared_ptr<DescribePrometheusAlertRuleRequest> request);
  DescribeTraceLicenseKeyResponse describeTraceLicenseKeyWithOptions(shared_ptr<DescribeTraceLicenseKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTraceLicenseKeyResponse describeTraceLicenseKey(shared_ptr<DescribeTraceLicenseKeyRequest> request);
  DescribeTraceLocationResponse describeTraceLocationWithOptions(shared_ptr<DescribeTraceLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTraceLocationResponse describeTraceLocation(shared_ptr<DescribeTraceLocationRequest> request);
  DisableAlertTemplateResponse disableAlertTemplateWithOptions(shared_ptr<DisableAlertTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAlertTemplateResponse disableAlertTemplate(shared_ptr<DisableAlertTemplateRequest> request);
  EnableAlertTemplateResponse enableAlertTemplateWithOptions(shared_ptr<EnableAlertTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAlertTemplateResponse enableAlertTemplate(shared_ptr<EnableAlertTemplateRequest> request);
  ExportPrometheusRulesResponse exportPrometheusRulesWithOptions(shared_ptr<ExportPrometheusRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportPrometheusRulesResponse exportPrometheusRules(shared_ptr<ExportPrometheusRulesRequest> request);
  GetAgentDownloadUrlResponse getAgentDownloadUrlWithOptions(shared_ptr<GetAgentDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentDownloadUrlResponse getAgentDownloadUrl(shared_ptr<GetAgentDownloadUrlRequest> request);
  GetAppApiByPageResponse getAppApiByPageWithOptions(shared_ptr<GetAppApiByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppApiByPageResponse getAppApiByPage(shared_ptr<GetAppApiByPageRequest> request);
  GetConsistencySnapshotResponse getConsistencySnapshotWithOptions(shared_ptr<GetConsistencySnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsistencySnapshotResponse getConsistencySnapshot(shared_ptr<GetConsistencySnapshotRequest> request);
  GetIntegrationTokenResponse getIntegrationTokenWithOptions(shared_ptr<GetIntegrationTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIntegrationTokenResponse getIntegrationToken(shared_ptr<GetIntegrationTokenRequest> request);
  GetMultipleTraceResponse getMultipleTraceWithOptions(shared_ptr<GetMultipleTraceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultipleTraceResponse getMultipleTrace(shared_ptr<GetMultipleTraceRequest> request);
  GetPrometheusApiTokenResponse getPrometheusApiTokenWithOptions(shared_ptr<GetPrometheusApiTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPrometheusApiTokenResponse getPrometheusApiToken(shared_ptr<GetPrometheusApiTokenRequest> request);
  GetPrometheusRemoteActionTokenResponse getPrometheusRemoteActionTokenWithOptions(shared_ptr<GetPrometheusRemoteActionTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPrometheusRemoteActionTokenResponse getPrometheusRemoteActionToken(shared_ptr<GetPrometheusRemoteActionTokenRequest> request);
  GetRetcodeShareUrlResponse getRetcodeShareUrlWithOptions(shared_ptr<GetRetcodeShareUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRetcodeShareUrlResponse getRetcodeShareUrl(shared_ptr<GetRetcodeShareUrlRequest> request);
  GetStackResponse getStackWithOptions(shared_ptr<GetStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackResponse getStack(shared_ptr<GetStackRequest> request);
  GetTraceResponse getTraceWithOptions(shared_ptr<GetTraceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTraceResponse getTrace(shared_ptr<GetTraceRequest> request);
  GetTraceAppResponse getTraceAppWithOptions(shared_ptr<GetTraceAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTraceAppResponse getTraceApp(shared_ptr<GetTraceAppRequest> request);
  ImportAppAlertRulesResponse importAppAlertRulesWithOptions(shared_ptr<ImportAppAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportAppAlertRulesResponse importAppAlertRules(shared_ptr<ImportAppAlertRulesRequest> request);
  ImportCustomAlertRulesResponse importCustomAlertRulesWithOptions(shared_ptr<ImportCustomAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportCustomAlertRulesResponse importCustomAlertRules(shared_ptr<ImportCustomAlertRulesRequest> request);
  ImportPrometheusRulesResponse importPrometheusRulesWithOptions(shared_ptr<ImportPrometheusRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportPrometheusRulesResponse importPrometheusRules(shared_ptr<ImportPrometheusRulesRequest> request);
  InstallCmsExporterResponse installCmsExporterWithOptions(shared_ptr<InstallCmsExporterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallCmsExporterResponse installCmsExporter(shared_ptr<InstallCmsExporterRequest> request);
  InstallEventerResponse installEventerWithOptions(shared_ptr<InstallEventerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallEventerResponse installEventer(shared_ptr<InstallEventerRequest> request);
  ListActivatedAlertsResponse listActivatedAlertsWithOptions(shared_ptr<ListActivatedAlertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListActivatedAlertsResponse listActivatedAlerts(shared_ptr<ListActivatedAlertsRequest> request);
  ListAlertTemplatesResponse listAlertTemplatesWithOptions(shared_ptr<ListAlertTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlertTemplatesResponse listAlertTemplates(shared_ptr<ListAlertTemplatesRequest> request);
  ListClusterFromGrafanaResponse listClusterFromGrafanaWithOptions(shared_ptr<ListClusterFromGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterFromGrafanaResponse listClusterFromGrafana(shared_ptr<ListClusterFromGrafanaRequest> request);
  ListDashboardsResponse listDashboardsWithOptions(shared_ptr<ListDashboardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDashboardsResponse listDashboards(shared_ptr<ListDashboardsRequest> request);
  ListDispatchRuleResponse listDispatchRuleWithOptions(shared_ptr<ListDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDispatchRuleResponse listDispatchRule(shared_ptr<ListDispatchRuleRequest> request);
  ListPromClustersResponse listPromClustersWithOptions(shared_ptr<ListPromClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPromClustersResponse listPromClusters(shared_ptr<ListPromClustersRequest> request);
  ListPrometheusAlertRulesResponse listPrometheusAlertRulesWithOptions(shared_ptr<ListPrometheusAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrometheusAlertRulesResponse listPrometheusAlertRules(shared_ptr<ListPrometheusAlertRulesRequest> request);
  ListPrometheusAlertTemplatesResponse listPrometheusAlertTemplatesWithOptions(shared_ptr<ListPrometheusAlertTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrometheusAlertTemplatesResponse listPrometheusAlertTemplates(shared_ptr<ListPrometheusAlertTemplatesRequest> request);
  ListRetcodeAppsResponse listRetcodeAppsWithOptions(shared_ptr<ListRetcodeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRetcodeAppsResponse listRetcodeApps(shared_ptr<ListRetcodeAppsRequest> request);
  ListScenarioResponse listScenarioWithOptions(shared_ptr<ListScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScenarioResponse listScenario(shared_ptr<ListScenarioRequest> request);
  ListServerlessTopNAppsResponse listServerlessTopNAppsWithOptions(shared_ptr<ListServerlessTopNAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerlessTopNAppsResponse listServerlessTopNApps(shared_ptr<ListServerlessTopNAppsRequest> request);
  ListTraceAppsResponse listTraceAppsWithOptions(shared_ptr<ListTraceAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTraceAppsResponse listTraceApps(shared_ptr<ListTraceAppsRequest> request);
  OpenArmsDefaultSLRResponse openArmsDefaultSLRWithOptions(shared_ptr<OpenArmsDefaultSLRRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenArmsDefaultSLRResponse openArmsDefaultSLR(shared_ptr<OpenArmsDefaultSLRRequest> request);
  OpenArmsServiceResponse openArmsServiceWithOptions(shared_ptr<OpenArmsServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenArmsServiceResponse openArmsService(shared_ptr<OpenArmsServiceRequest> request);
  OpenArmsServiceSecondVersionResponse openArmsServiceSecondVersionWithOptions(shared_ptr<OpenArmsServiceSecondVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenArmsServiceSecondVersionResponse openArmsServiceSecondVersion(shared_ptr<OpenArmsServiceSecondVersionRequest> request);
  OpenVClusterResponse openVClusterWithOptions(shared_ptr<OpenVClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenVClusterResponse openVCluster(shared_ptr<OpenVClusterRequest> request);
  OpenXtraceDefaultSLRResponse openXtraceDefaultSLRWithOptions(shared_ptr<OpenXtraceDefaultSLRRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenXtraceDefaultSLRResponse openXtraceDefaultSLR(shared_ptr<OpenXtraceDefaultSLRRequest> request);
  QueryDatasetResponse queryDatasetWithOptions(shared_ptr<QueryDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDatasetResponse queryDataset(shared_ptr<QueryDatasetRequest> request);
  QueryMetricResponse queryMetricWithOptions(shared_ptr<QueryMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMetricResponse queryMetric(shared_ptr<QueryMetricRequest> request);
  QueryMetricByPageResponse queryMetricByPageWithOptions(shared_ptr<QueryMetricByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMetricByPageResponse queryMetricByPage(shared_ptr<QueryMetricByPageRequest> request);
  QueryPromInstallStatusResponse queryPromInstallStatusWithOptions(shared_ptr<QueryPromInstallStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPromInstallStatusResponse queryPromInstallStatus(shared_ptr<QueryPromInstallStatusRequest> request);
  SaveTraceAppConfigResponse saveTraceAppConfigWithOptions(shared_ptr<SaveTraceAppConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTraceAppConfigResponse saveTraceAppConfig(shared_ptr<SaveTraceAppConfigRequest> request);
  SearchAlertContactResponse searchAlertContactWithOptions(shared_ptr<SearchAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchAlertContactResponse searchAlertContact(shared_ptr<SearchAlertContactRequest> request);
  SearchAlertContactGroupResponse searchAlertContactGroupWithOptions(shared_ptr<SearchAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchAlertContactGroupResponse searchAlertContactGroup(shared_ptr<SearchAlertContactGroupRequest> request);
  SearchAlertHistoriesResponse searchAlertHistoriesWithOptions(shared_ptr<SearchAlertHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchAlertHistoriesResponse searchAlertHistories(shared_ptr<SearchAlertHistoriesRequest> request);
  SearchAlertRulesResponse searchAlertRulesWithOptions(shared_ptr<SearchAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchAlertRulesResponse searchAlertRules(shared_ptr<SearchAlertRulesRequest> request);
  SearchEventsResponse searchEventsWithOptions(shared_ptr<SearchEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchEventsResponse searchEvents(shared_ptr<SearchEventsRequest> request);
  SearchRetcodeAppByPageResponse searchRetcodeAppByPageWithOptions(shared_ptr<SearchRetcodeAppByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchRetcodeAppByPageResponse searchRetcodeAppByPage(shared_ptr<SearchRetcodeAppByPageRequest> request);
  SearchTraceAppByNameResponse searchTraceAppByNameWithOptions(shared_ptr<SearchTraceAppByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTraceAppByNameResponse searchTraceAppByName(shared_ptr<SearchTraceAppByNameRequest> request);
  SearchTraceAppByPageResponse searchTraceAppByPageWithOptions(shared_ptr<SearchTraceAppByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTraceAppByPageResponse searchTraceAppByPage(shared_ptr<SearchTraceAppByPageRequest> request);
  SearchTracesResponse searchTracesWithOptions(shared_ptr<SearchTracesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTracesResponse searchTraces(shared_ptr<SearchTracesRequest> request);
  SearchTracesByPageResponse searchTracesByPageWithOptions(shared_ptr<SearchTracesByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTracesByPageResponse searchTracesByPage(shared_ptr<SearchTracesByPageRequest> request);
  SendCustomIncidentsResponse sendCustomIncidentsWithOptions(shared_ptr<SendCustomIncidentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCustomIncidentsResponse sendCustomIncidents(shared_ptr<SendCustomIncidentsRequest> request);
  SendMseIncidentResponse sendMseIncidentWithOptions(shared_ptr<SendMseIncidentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMseIncidentResponse sendMseIncident(shared_ptr<SendMseIncidentRequest> request);
  SetRetcodeShareStatusResponse setRetcodeShareStatusWithOptions(shared_ptr<SetRetcodeShareStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetRetcodeShareStatusResponse setRetcodeShareStatus(shared_ptr<SetRetcodeShareStatusRequest> request);
  StartAlertResponse startAlertWithOptions(shared_ptr<StartAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAlertResponse startAlert(shared_ptr<StartAlertRequest> request);
  StopAlertResponse stopAlertWithOptions(shared_ptr<StopAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAlertResponse stopAlert(shared_ptr<StopAlertRequest> request);
  UninstallPromClusterResponse uninstallPromClusterWithOptions(shared_ptr<UninstallPromClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UninstallPromClusterResponse uninstallPromCluster(shared_ptr<UninstallPromClusterRequest> request);
  UpdateAlertContactResponse updateAlertContactWithOptions(shared_ptr<UpdateAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlertContactResponse updateAlertContact(shared_ptr<UpdateAlertContactRequest> request);
  UpdateAlertContactGroupResponse updateAlertContactGroupWithOptions(shared_ptr<UpdateAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlertContactGroupResponse updateAlertContactGroup(shared_ptr<UpdateAlertContactGroupRequest> request);
  UpdateAlertRuleResponse updateAlertRuleWithOptions(shared_ptr<UpdateAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlertRuleResponse updateAlertRule(shared_ptr<UpdateAlertRuleRequest> request);
  UpdateAlertTemplateResponse updateAlertTemplateWithOptions(shared_ptr<UpdateAlertTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlertTemplateResponse updateAlertTemplate(shared_ptr<UpdateAlertTemplateRequest> request);
  UpdateDispatchRuleResponse updateDispatchRuleWithOptions(shared_ptr<UpdateDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDispatchRuleResponse updateDispatchRule(shared_ptr<UpdateDispatchRuleRequest> request);
  UpdatePrometheusAlertRuleResponse updatePrometheusAlertRuleWithOptions(shared_ptr<UpdatePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePrometheusAlertRuleResponse updatePrometheusAlertRule(shared_ptr<UpdatePrometheusAlertRuleRequest> request);
  UpdateWebhookResponse updateWebhookWithOptions(shared_ptr<UpdateWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWebhookResponse updateWebhook(shared_ptr<UpdateWebhookRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ARMS20210519

#endif
