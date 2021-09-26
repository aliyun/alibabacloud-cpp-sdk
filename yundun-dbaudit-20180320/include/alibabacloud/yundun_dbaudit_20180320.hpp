// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_YUNDUN-DBAUDIT20180320_H_
#define ALIBABACLOUD_YUNDUN-DBAUDIT20180320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Yundun-dbaudit20180320 {
class AddLogMaskConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> maskName{};
  shared_ptr<string> maskRegex{};
  shared_ptr<string> maskTxt{};
  shared_ptr<string> maskDescription{};

  AddLogMaskConfigRequest() {}

  explicit AddLogMaskConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maskName) {
      res["MaskName"] = boost::any(*maskName);
    }
    if (maskRegex) {
      res["MaskRegex"] = boost::any(*maskRegex);
    }
    if (maskTxt) {
      res["MaskTxt"] = boost::any(*maskTxt);
    }
    if (maskDescription) {
      res["MaskDescription"] = boost::any(*maskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaskName") != m.end() && !m["MaskName"].empty()) {
      maskName = make_shared<string>(boost::any_cast<string>(m["MaskName"]));
    }
    if (m.find("MaskRegex") != m.end() && !m["MaskRegex"].empty()) {
      maskRegex = make_shared<string>(boost::any_cast<string>(m["MaskRegex"]));
    }
    if (m.find("MaskTxt") != m.end() && !m["MaskTxt"].empty()) {
      maskTxt = make_shared<string>(boost::any_cast<string>(m["MaskTxt"]));
    }
    if (m.find("MaskDescription") != m.end() && !m["MaskDescription"].empty()) {
      maskDescription = make_shared<string>(boost::any_cast<string>(m["MaskDescription"]));
    }
  }


  virtual ~AddLogMaskConfigRequest() = default;
};
class AddLogMaskConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddLogMaskConfigResponseBody() {}

  explicit AddLogMaskConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddLogMaskConfigResponseBody() = default;
};
class AddLogMaskConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddLogMaskConfigResponseBody> body{};

  AddLogMaskConfigResponse() {}

  explicit AddLogMaskConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddLogMaskConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddLogMaskConfigResponseBody>(model1);
      }
    }
  }


  virtual ~AddLogMaskConfigResponse() = default;
};
class AssociateDbToRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleIds{};
  shared_ptr<string> ruleDbRelations{};
  shared_ptr<string> operType{};

  AssociateDbToRuleRequest() {}

  explicit AssociateDbToRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleIds) {
      res["RuleIds"] = boost::any(*ruleIds);
    }
    if (ruleDbRelations) {
      res["RuleDbRelations"] = boost::any(*ruleDbRelations);
    }
    if (operType) {
      res["OperType"] = boost::any(*operType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      ruleIds = make_shared<string>(boost::any_cast<string>(m["RuleIds"]));
    }
    if (m.find("RuleDbRelations") != m.end() && !m["RuleDbRelations"].empty()) {
      ruleDbRelations = make_shared<string>(boost::any_cast<string>(m["RuleDbRelations"]));
    }
    if (m.find("OperType") != m.end() && !m["OperType"].empty()) {
      operType = make_shared<string>(boost::any_cast<string>(m["OperType"]));
    }
  }


  virtual ~AssociateDbToRuleRequest() = default;
};
class AssociateDbToRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  AssociateDbToRuleResponseBody() {}

  explicit AssociateDbToRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssociateDbToRuleResponseBody() = default;
};
class AssociateDbToRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateDbToRuleResponseBody> body{};

  AssociateDbToRuleResponse() {}

  explicit AssociateDbToRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateDbToRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateDbToRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateDbToRuleResponse() = default;
};
class AssociateRuleToDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jsonParam{};

  AssociateRuleToDbRequest() {}

  explicit AssociateRuleToDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jsonParam) {
      res["JsonParam"] = boost::any(*jsonParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JsonParam") != m.end() && !m["JsonParam"].empty()) {
      jsonParam = make_shared<string>(boost::any_cast<string>(m["JsonParam"]));
    }
  }


  virtual ~AssociateRuleToDbRequest() = default;
};
class AssociateRuleToDbResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> jsonResult{};

  AssociateRuleToDbResponseBodyServerData() {}

  explicit AssociateRuleToDbResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonResult) {
      res["JsonResult"] = boost::any(*jsonResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonResult") != m.end() && !m["JsonResult"].empty()) {
      jsonResult = make_shared<string>(boost::any_cast<string>(m["JsonResult"]));
    }
  }


  virtual ~AssociateRuleToDbResponseBodyServerData() = default;
};
class AssociateRuleToDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AssociateRuleToDbResponseBodyServerData> serverData{};

  AssociateRuleToDbResponseBody() {}

  explicit AssociateRuleToDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        AssociateRuleToDbResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<AssociateRuleToDbResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~AssociateRuleToDbResponseBody() = default;
};
class AssociateRuleToDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateRuleToDbResponseBody> body{};

  AssociateRuleToDbResponse() {}

  explicit AssociateRuleToDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateRuleToDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateRuleToDbResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateRuleToDbResponse() = default;
};
class ChangeAgentStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> agentId{};
  shared_ptr<long> agentStatus{};

  ChangeAgentStatusRequest() {}

  explicit ChangeAgentStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<long>(boost::any_cast<long>(m["AgentStatus"]));
    }
  }


  virtual ~ChangeAgentStatusRequest() = default;
};
class ChangeAgentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeAgentStatusResponseBody() {}

  explicit ChangeAgentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeAgentStatusResponseBody() = default;
};
class ChangeAgentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeAgentStatusResponseBody> body{};

  ChangeAgentStatusResponse() {}

  explicit ChangeAgentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeAgentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeAgentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeAgentStatusResponse() = default;
};
class ChangeLogMaskConfigStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maskId{};
  shared_ptr<long> maskState{};

  ChangeLogMaskConfigStateRequest() {}

  explicit ChangeLogMaskConfigStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maskId) {
      res["MaskId"] = boost::any(*maskId);
    }
    if (maskState) {
      res["MaskState"] = boost::any(*maskState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaskId") != m.end() && !m["MaskId"].empty()) {
      maskId = make_shared<long>(boost::any_cast<long>(m["MaskId"]));
    }
    if (m.find("MaskState") != m.end() && !m["MaskState"].empty()) {
      maskState = make_shared<long>(boost::any_cast<long>(m["MaskState"]));
    }
  }


  virtual ~ChangeLogMaskConfigStateRequest() = default;
};
class ChangeLogMaskConfigStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeLogMaskConfigStateResponseBody() {}

  explicit ChangeLogMaskConfigStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeLogMaskConfigStateResponseBody() = default;
};
class ChangeLogMaskConfigStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeLogMaskConfigStateResponseBody> body{};

  ChangeLogMaskConfigStateResponse() {}

  explicit ChangeLogMaskConfigStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeLogMaskConfigStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeLogMaskConfigStateResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeLogMaskConfigStateResponse() = default;
};
class ChangeRulePriorityRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> dbId{};
  shared_ptr<string> ruleInfos{};

  ChangeRulePriorityRequest() {}

  explicit ChangeRulePriorityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (ruleInfos) {
      res["RuleInfos"] = boost::any(*ruleInfos);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("RuleInfos") != m.end() && !m["RuleInfos"].empty()) {
      ruleInfos = make_shared<string>(boost::any_cast<string>(m["RuleInfos"]));
    }
  }


  virtual ~ChangeRulePriorityRequest() = default;
};
class ChangeRulePriorityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  ChangeRulePriorityResponseBody() {}

  explicit ChangeRulePriorityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChangeRulePriorityResponseBody() = default;
};
class ChangeRulePriorityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeRulePriorityResponseBody> body{};

  ChangeRulePriorityResponse() {}

  explicit ChangeRulePriorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeRulePriorityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeRulePriorityResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeRulePriorityResponse() = default;
};
class ChangeRuleStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jsonParam{};

  ChangeRuleStatusRequest() {}

  explicit ChangeRuleStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jsonParam) {
      res["JsonParam"] = boost::any(*jsonParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JsonParam") != m.end() && !m["JsonParam"].empty()) {
      jsonParam = make_shared<string>(boost::any_cast<string>(m["JsonParam"]));
    }
  }


  virtual ~ChangeRuleStatusRequest() = default;
};
class ChangeRuleStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeRuleStatusResponseBody() {}

  explicit ChangeRuleStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeRuleStatusResponseBody() = default;
};
class ChangeRuleStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeRuleStatusResponseBody> body{};

  ChangeRuleStatusResponse() {}

  explicit ChangeRuleStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeRuleStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeRuleStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeRuleStatusResponse() = default;
};
class CheckMailRegisteredRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mail{};

  CheckMailRegisteredRequest() {}

  explicit CheckMailRegisteredRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
  }


  virtual ~CheckMailRegisteredRequest() = default;
};
class CheckMailRegisteredResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> registered{};
  shared_ptr<string> requestId{};

  CheckMailRegisteredResponseBody() {}

  explicit CheckMailRegisteredResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registered) {
      res["Registered"] = boost::any(*registered);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Registered") != m.end() && !m["Registered"].empty()) {
      registered = make_shared<bool>(boost::any_cast<bool>(m["Registered"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckMailRegisteredResponseBody() = default;
};
class CheckMailRegisteredResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckMailRegisteredResponseBody> body{};

  CheckMailRegisteredResponse() {}

  explicit CheckMailRegisteredResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckMailRegisteredResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMailRegisteredResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMailRegisteredResponse() = default;
};
class ClearAgentRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> agentIds{};

  ClearAgentRecordsRequest() {}

  explicit ClearAgentRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (agentIds) {
      res["AgentIds"] = boost::any(*agentIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AgentIds") != m.end() && !m["AgentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AgentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AgentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      agentIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ClearAgentRecordsRequest() = default;
};
class ClearAgentRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ClearAgentRecordsResponseBody() {}

  explicit ClearAgentRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearAgentRecordsResponseBody() = default;
};
class ClearAgentRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClearAgentRecordsResponseBody> body{};

  ClearAgentRecordsResponse() {}

  explicit ClearAgentRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClearAgentRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearAgentRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~ClearAgentRecordsResponse() = default;
};
class ConfigInstanceNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> publicAccessControl{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> privateWhiteList{};
  shared_ptr<vector<string>> publicWhiteList{};
  shared_ptr<vector<string>> securityGroupIds{};

  ConfigInstanceNetworkRequest() {}

  explicit ConfigInstanceNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (publicAccessControl) {
      res["PublicAccessControl"] = boost::any(*publicAccessControl);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (privateWhiteList) {
      res["PrivateWhiteList"] = boost::any(*privateWhiteList);
    }
    if (publicWhiteList) {
      res["PublicWhiteList"] = boost::any(*publicWhiteList);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PublicAccessControl") != m.end() && !m["PublicAccessControl"].empty()) {
      publicAccessControl = make_shared<long>(boost::any_cast<long>(m["PublicAccessControl"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PrivateWhiteList") != m.end() && !m["PrivateWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrivateWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrivateWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privateWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PublicWhiteList") != m.end() && !m["PublicWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PublicWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PublicWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigInstanceNetworkRequest() = default;
};
class ConfigInstanceNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigInstanceNetworkResponseBody() {}

  explicit ConfigInstanceNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigInstanceNetworkResponseBody() = default;
};
class ConfigInstanceNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConfigInstanceNetworkResponseBody> body{};

  ConfigInstanceNetworkResponse() {}

  explicit ConfigInstanceNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigInstanceNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigInstanceNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigInstanceNetworkResponse() = default;
};
class CreateDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<long> assetType{};
  shared_ptr<long> dbType{};
  shared_ptr<long> dbVersion{};
  shared_ptr<string> dbCertificate{};
  shared_ptr<string> dbUsername{};
  shared_ptr<string> dbPassword{};
  shared_ptr<vector<string>> dbAddresses{};

  CreateDataSourceRequest() {}

  explicit CreateDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (assetType) {
      res["AssetType"] = boost::any(*assetType);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (dbCertificate) {
      res["DbCertificate"] = boost::any(*dbCertificate);
    }
    if (dbUsername) {
      res["DbUsername"] = boost::any(*dbUsername);
    }
    if (dbPassword) {
      res["DbPassword"] = boost::any(*dbPassword);
    }
    if (dbAddresses) {
      res["DbAddresses"] = boost::any(*dbAddresses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("AssetType") != m.end() && !m["AssetType"].empty()) {
      assetType = make_shared<long>(boost::any_cast<long>(m["AssetType"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<long>(boost::any_cast<long>(m["DbType"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<long>(boost::any_cast<long>(m["DbVersion"]));
    }
    if (m.find("DbCertificate") != m.end() && !m["DbCertificate"].empty()) {
      dbCertificate = make_shared<string>(boost::any_cast<string>(m["DbCertificate"]));
    }
    if (m.find("DbUsername") != m.end() && !m["DbUsername"].empty()) {
      dbUsername = make_shared<string>(boost::any_cast<string>(m["DbUsername"]));
    }
    if (m.find("DbPassword") != m.end() && !m["DbPassword"].empty()) {
      dbPassword = make_shared<string>(boost::any_cast<string>(m["DbPassword"]));
    }
    if (m.find("DbAddresses") != m.end() && !m["DbAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbAddresses = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDataSourceRequest() = default;
};
class CreateDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> requestId{};

  CreateDataSourceResponseBody() {}

  explicit CreateDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataSourceResponseBody() = default;
};
class CreateDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDataSourceResponseBody> body{};

  CreateDataSourceResponse() {}

  explicit CreateDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataSourceResponse() = default;
};
class CreateGradeProtectionReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  CreateGradeProtectionReportRequest() {}

  explicit CreateGradeProtectionReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~CreateGradeProtectionReportRequest() = default;
};
class CreateGradeProtectionReportResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  CreateGradeProtectionReportResponseBodyServerData() {}

  explicit CreateGradeProtectionReportResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~CreateGradeProtectionReportResponseBodyServerData() = default;
};
class CreateGradeProtectionReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateGradeProtectionReportResponseBodyServerData> serverData{};

  CreateGradeProtectionReportResponseBody() {}

  explicit CreateGradeProtectionReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        CreateGradeProtectionReportResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<CreateGradeProtectionReportResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~CreateGradeProtectionReportResponseBody() = default;
};
class CreateGradeProtectionReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGradeProtectionReportResponseBody> body{};

  CreateGradeProtectionReportResponse() {}

  explicit CreateGradeProtectionReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGradeProtectionReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGradeProtectionReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGradeProtectionReportResponse() = default;
};
class CreateIntegratedReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  CreateIntegratedReportRequest() {}

  explicit CreateIntegratedReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~CreateIntegratedReportRequest() = default;
};
class CreateIntegratedReportResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  CreateIntegratedReportResponseBodyServerData() {}

  explicit CreateIntegratedReportResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~CreateIntegratedReportResponseBodyServerData() = default;
};
class CreateIntegratedReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateIntegratedReportResponseBodyServerData> serverData{};

  CreateIntegratedReportResponseBody() {}

  explicit CreateIntegratedReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        CreateIntegratedReportResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<CreateIntegratedReportResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~CreateIntegratedReportResponseBody() = default;
};
class CreateIntegratedReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIntegratedReportResponseBody> body{};

  CreateIntegratedReportResponse() {}

  explicit CreateIntegratedReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIntegratedReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIntegratedReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIntegratedReportResponse() = default;
};
class CreateLogAlarmTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskName{};
  shared_ptr<vector<string>> toMailList{};
  shared_ptr<vector<string>> dbIdList{};
  shared_ptr<vector<string>> riskLevelList{};

  CreateLogAlarmTaskRequest() {}

  explicit CreateLogAlarmTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (toMailList) {
      res["ToMailList"] = boost::any(*toMailList);
    }
    if (dbIdList) {
      res["DbIdList"] = boost::any(*dbIdList);
    }
    if (riskLevelList) {
      res["RiskLevelList"] = boost::any(*riskLevelList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ToMailList") != m.end() && !m["ToMailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ToMailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ToMailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      toMailList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbIdList") != m.end() && !m["DbIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevelList") != m.end() && !m["RiskLevelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RiskLevelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RiskLevelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      riskLevelList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateLogAlarmTaskRequest() = default;
};
class CreateLogAlarmTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};

  CreateLogAlarmTaskResponseBody() {}

  explicit CreateLogAlarmTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLogAlarmTaskResponseBody() = default;
};
class CreateLogAlarmTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLogAlarmTaskResponseBody> body{};

  CreateLogAlarmTaskResponse() {}

  explicit CreateLogAlarmTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLogAlarmTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLogAlarmTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLogAlarmTaskResponse() = default;
};
class CreatePCIReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  CreatePCIReportRequest() {}

  explicit CreatePCIReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~CreatePCIReportRequest() = default;
};
class CreatePCIReportResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  CreatePCIReportResponseBodyServerData() {}

  explicit CreatePCIReportResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~CreatePCIReportResponseBodyServerData() = default;
};
class CreatePCIReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreatePCIReportResponseBodyServerData> serverData{};

  CreatePCIReportResponseBody() {}

  explicit CreatePCIReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        CreatePCIReportResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<CreatePCIReportResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~CreatePCIReportResponseBody() = default;
};
class CreatePCIReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePCIReportResponseBody> body{};

  CreatePCIReportResponse() {}

  explicit CreatePCIReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePCIReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePCIReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePCIReportResponse() = default;
};
class CreateReportPushTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<long> jobStatus{};
  shared_ptr<vector<string>> reportType{};
  shared_ptr<vector<string>> dbList{};
  shared_ptr<vector<string>> emailList{};

  CreateReportPushTaskRequest() {}

  explicit CreateReportPushTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (dbList) {
      res["DbList"] = boost::any(*dbList);
    }
    if (emailList) {
      res["EmailList"] = boost::any(*emailList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReportType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReportType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reportType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EmailList") != m.end() && !m["EmailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EmailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EmailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      emailList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateReportPushTaskRequest() = default;
};
class CreateReportPushTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateReportPushTaskResponseBody() {}

  explicit CreateReportPushTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateReportPushTaskResponseBody() = default;
};
class CreateReportPushTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateReportPushTaskResponseBody> body{};

  CreateReportPushTaskResponse() {}

  explicit CreateReportPushTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateReportPushTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateReportPushTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateReportPushTaskResponse() = default;
};
class CreateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleInfo{};
  shared_ptr<string> ruleDbRelation{};
  shared_ptr<string> ruleGroup{};
  shared_ptr<string> effectCurrentDBStatus{};

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleInfo) {
      res["RuleInfo"] = boost::any(*ruleInfo);
    }
    if (ruleDbRelation) {
      res["RuleDbRelation"] = boost::any(*ruleDbRelation);
    }
    if (ruleGroup) {
      res["RuleGroup"] = boost::any(*ruleGroup);
    }
    if (effectCurrentDBStatus) {
      res["EffectCurrentDBStatus"] = boost::any(*effectCurrentDBStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleInfo") != m.end() && !m["RuleInfo"].empty()) {
      ruleInfo = make_shared<string>(boost::any_cast<string>(m["RuleInfo"]));
    }
    if (m.find("RuleDbRelation") != m.end() && !m["RuleDbRelation"].empty()) {
      ruleDbRelation = make_shared<string>(boost::any_cast<string>(m["RuleDbRelation"]));
    }
    if (m.find("RuleGroup") != m.end() && !m["RuleGroup"].empty()) {
      ruleGroup = make_shared<string>(boost::any_cast<string>(m["RuleGroup"]));
    }
    if (m.find("EffectCurrentDBStatus") != m.end() && !m["EffectCurrentDBStatus"].empty()) {
      effectCurrentDBStatus = make_shared<string>(boost::any_cast<string>(m["EffectCurrentDBStatus"]));
    }
  }


  virtual ~CreateRuleRequest() = default;
};
class CreateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  CreateRuleResponseBody() {}

  explicit CreateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRuleResponseBody() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRuleResponseBody> body{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleResponse() = default;
};
class CreateRuleGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};

  CreateRuleGroupRequest() {}

  explicit CreateRuleGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
  }


  virtual ~CreateRuleGroupRequest() = default;
};
class CreateRuleGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  CreateRuleGroupResponseBody() {}

  explicit CreateRuleGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRuleGroupResponseBody() = default;
};
class CreateRuleGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRuleGroupResponseBody> body{};

  CreateRuleGroupResponse() {}

  explicit CreateRuleGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRuleGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleGroupResponse() = default;
};
class CreateSOXReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  CreateSOXReportRequest() {}

  explicit CreateSOXReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~CreateSOXReportRequest() = default;
};
class CreateSOXReportResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  CreateSOXReportResponseBodyServerData() {}

  explicit CreateSOXReportResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~CreateSOXReportResponseBodyServerData() = default;
};
class CreateSOXReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateSOXReportResponseBodyServerData> serverData{};

  CreateSOXReportResponseBody() {}

  explicit CreateSOXReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        CreateSOXReportResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<CreateSOXReportResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~CreateSOXReportResponseBody() = default;
};
class CreateSOXReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSOXReportResponseBody> body{};

  CreateSOXReportResponse() {}

  explicit CreateSOXReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSOXReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSOXReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSOXReportResponse() = default;
};
class CreateSqlRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jsonParam{};

  CreateSqlRuleRequest() {}

  explicit CreateSqlRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jsonParam) {
      res["JsonParam"] = boost::any(*jsonParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JsonParam") != m.end() && !m["JsonParam"].empty()) {
      jsonParam = make_shared<string>(boost::any_cast<string>(m["JsonParam"]));
    }
  }


  virtual ~CreateSqlRuleRequest() = default;
};
class CreateSqlRuleResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> jsonResult{};

  CreateSqlRuleResponseBodyServerData() {}

  explicit CreateSqlRuleResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonResult) {
      res["JsonResult"] = boost::any(*jsonResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonResult") != m.end() && !m["JsonResult"].empty()) {
      jsonResult = make_shared<string>(boost::any_cast<string>(m["JsonResult"]));
    }
  }


  virtual ~CreateSqlRuleResponseBodyServerData() = default;
};
class CreateSqlRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateSqlRuleResponseBodyServerData> serverData{};

  CreateSqlRuleResponseBody() {}

  explicit CreateSqlRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        CreateSqlRuleResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<CreateSqlRuleResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~CreateSqlRuleResponseBody() = default;
};
class CreateSqlRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSqlRuleResponseBody> body{};

  CreateSqlRuleResponse() {}

  explicit CreateSqlRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSqlRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSqlRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSqlRuleResponse() = default;
};
class CreateSystemAlarmTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskName{};
  shared_ptr<vector<string>> toMailList{};

  CreateSystemAlarmTaskRequest() {}

  explicit CreateSystemAlarmTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (toMailList) {
      res["ToMailList"] = boost::any(*toMailList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ToMailList") != m.end() && !m["ToMailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ToMailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ToMailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      toMailList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateSystemAlarmTaskRequest() = default;
};
class CreateSystemAlarmTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};

  CreateSystemAlarmTaskResponseBody() {}

  explicit CreateSystemAlarmTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSystemAlarmTaskResponseBody() = default;
};
class CreateSystemAlarmTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSystemAlarmTaskResponseBody> body{};

  CreateSystemAlarmTaskResponse() {}

  explicit CreateSystemAlarmTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSystemAlarmTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSystemAlarmTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSystemAlarmTaskResponse() = default;
};
class DeleteAlarmTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> taskIds{};

  DeleteAlarmTaskRequest() {}

  explicit DeleteAlarmTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteAlarmTaskRequest() = default;
};
class DeleteAlarmTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAlarmTaskResponseBody() {}

  explicit DeleteAlarmTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAlarmTaskResponseBody() = default;
};
class DeleteAlarmTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAlarmTaskResponseBody> body{};

  DeleteAlarmTaskResponse() {}

  explicit DeleteAlarmTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAlarmTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlarmTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlarmTaskResponse() = default;
};
class DeleteDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> dbIds{};

  DeleteDataSourceRequest() {}

  explicit DeleteDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbIds) {
      res["DbIds"] = boost::any(*dbIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbIds") != m.end() && !m["DbIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteDataSourceRequest() = default;
};
class DeleteDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDataSourceResponseBody() {}

  explicit DeleteDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDataSourceResponseBody() = default;
};
class DeleteDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDataSourceResponseBody> body{};

  DeleteDataSourceResponse() {}

  explicit DeleteDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSourceResponse() = default;
};
class DeleteReportPushTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> jobId{};

  DeleteReportPushTaskRequest() {}

  explicit DeleteReportPushTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~DeleteReportPushTaskRequest() = default;
};
class DeleteReportPushTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteReportPushTaskResponseBody() {}

  explicit DeleteReportPushTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteReportPushTaskResponseBody() = default;
};
class DeleteReportPushTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteReportPushTaskResponseBody> body{};

  DeleteReportPushTaskResponse() {}

  explicit DeleteReportPushTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteReportPushTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteReportPushTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteReportPushTaskResponse() = default;
};
class DeleteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};

  DeleteRuleRequest() {}

  explicit DeleteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~DeleteRuleRequest() = default;
};
class DeleteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  DeleteRuleResponseBody() {}

  explicit DeleteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRuleResponseBody() = default;
};
class DeleteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRuleResponseBody> body{};

  DeleteRuleResponse() {}

  explicit DeleteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRuleResponse() = default;
};
class DeleteRuleGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> groupKeyId{};

  DeleteRuleGroupRequest() {}

  explicit DeleteRuleGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (groupKeyId) {
      res["GroupKeyId"] = boost::any(*groupKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GroupKeyId") != m.end() && !m["GroupKeyId"].empty()) {
      groupKeyId = make_shared<string>(boost::any_cast<string>(m["GroupKeyId"]));
    }
  }


  virtual ~DeleteRuleGroupRequest() = default;
};
class DeleteRuleGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  DeleteRuleGroupResponseBody() {}

  explicit DeleteRuleGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRuleGroupResponseBody() = default;
};
class DeleteRuleGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRuleGroupResponseBody> body{};

  DeleteRuleGroupResponse() {}

  explicit DeleteRuleGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRuleGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRuleGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRuleGroupResponse() = default;
};
class DeregisterTemplatesFromRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sentenceParam{};

  DeregisterTemplatesFromRuleRequest() {}

  explicit DeregisterTemplatesFromRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sentenceParam) {
      res["SentenceParam"] = boost::any(*sentenceParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SentenceParam") != m.end() && !m["SentenceParam"].empty()) {
      sentenceParam = make_shared<string>(boost::any_cast<string>(m["SentenceParam"]));
    }
  }


  virtual ~DeregisterTemplatesFromRuleRequest() = default;
};
class DeregisterTemplatesFromRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  DeregisterTemplatesFromRuleResponseBody() {}

  explicit DeregisterTemplatesFromRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeregisterTemplatesFromRuleResponseBody() = default;
};
class DeregisterTemplatesFromRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeregisterTemplatesFromRuleResponseBody> body{};

  DeregisterTemplatesFromRuleResponse() {}

  explicit DeregisterTemplatesFromRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeregisterTemplatesFromRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeregisterTemplatesFromRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeregisterTemplatesFromRuleResponse() = default;
};
class DescribeInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeInstanceAttributeRequest() {}

  explicit DescribeInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceAttributeRequest() = default;
};
class DescribeInstanceAttributeResponseBodyInstanceAttribute : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> networkType{};
  shared_ptr<string> imageVersionName{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> description{};
  shared_ptr<long> accessType{};
  shared_ptr<string> ecsStatus{};
  shared_ptr<bool> operatable{};
  shared_ptr<long> planUpgradeStatus{};
  shared_ptr<long> expireTime{};
  shared_ptr<bool> upgradeable{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> intranetIp{};
  shared_ptr<bool> renewable{};
  shared_ptr<string> regionId{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<long> startTime{};
  shared_ptr<long> upgradeStatus{};
  shared_ptr<bool> planUpgradeable{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> licenseCode{};
  shared_ptr<long> publicAccessControl{};
  shared_ptr<vector<string>> publicWhiteList{};
  shared_ptr<vector<string>> securityGroupIds{};
  shared_ptr<vector<string>> privateWhiteList{};

  DescribeInstanceAttributeResponseBodyInstanceAttribute() {}

  explicit DescribeInstanceAttributeResponseBodyInstanceAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (imageVersionName) {
      res["ImageVersionName"] = boost::any(*imageVersionName);
    }
    if (seriesCode) {
      res["SeriesCode"] = boost::any(*seriesCode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (ecsStatus) {
      res["EcsStatus"] = boost::any(*ecsStatus);
    }
    if (operatable) {
      res["Operatable"] = boost::any(*operatable);
    }
    if (planUpgradeStatus) {
      res["PlanUpgradeStatus"] = boost::any(*planUpgradeStatus);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (upgradeable) {
      res["Upgradeable"] = boost::any(*upgradeable);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (renewable) {
      res["Renewable"] = boost::any(*renewable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (upgradeStatus) {
      res["UpgradeStatus"] = boost::any(*upgradeStatus);
    }
    if (planUpgradeable) {
      res["PlanUpgradeable"] = boost::any(*planUpgradeable);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (publicAccessControl) {
      res["PublicAccessControl"] = boost::any(*publicAccessControl);
    }
    if (publicWhiteList) {
      res["PublicWhiteList"] = boost::any(*publicWhiteList);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (privateWhiteList) {
      res["PrivateWhiteList"] = boost::any(*privateWhiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ImageVersionName") != m.end() && !m["ImageVersionName"].empty()) {
      imageVersionName = make_shared<string>(boost::any_cast<string>(m["ImageVersionName"]));
    }
    if (m.find("SeriesCode") != m.end() && !m["SeriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["SeriesCode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<long>(boost::any_cast<long>(m["AccessType"]));
    }
    if (m.find("EcsStatus") != m.end() && !m["EcsStatus"].empty()) {
      ecsStatus = make_shared<string>(boost::any_cast<string>(m["EcsStatus"]));
    }
    if (m.find("Operatable") != m.end() && !m["Operatable"].empty()) {
      operatable = make_shared<bool>(boost::any_cast<bool>(m["Operatable"]));
    }
    if (m.find("PlanUpgradeStatus") != m.end() && !m["PlanUpgradeStatus"].empty()) {
      planUpgradeStatus = make_shared<long>(boost::any_cast<long>(m["PlanUpgradeStatus"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Upgradeable") != m.end() && !m["Upgradeable"].empty()) {
      upgradeable = make_shared<bool>(boost::any_cast<bool>(m["Upgradeable"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("Renewable") != m.end() && !m["Renewable"].empty()) {
      renewable = make_shared<bool>(boost::any_cast<bool>(m["Renewable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UpgradeStatus") != m.end() && !m["UpgradeStatus"].empty()) {
      upgradeStatus = make_shared<long>(boost::any_cast<long>(m["UpgradeStatus"]));
    }
    if (m.find("PlanUpgradeable") != m.end() && !m["PlanUpgradeable"].empty()) {
      planUpgradeable = make_shared<bool>(boost::any_cast<bool>(m["PlanUpgradeable"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("PublicAccessControl") != m.end() && !m["PublicAccessControl"].empty()) {
      publicAccessControl = make_shared<long>(boost::any_cast<long>(m["PublicAccessControl"]));
    }
    if (m.find("PublicWhiteList") != m.end() && !m["PublicWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PublicWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PublicWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PrivateWhiteList") != m.end() && !m["PrivateWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrivateWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrivateWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privateWhiteList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceAttributeResponseBodyInstanceAttribute() = default;
};
class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceAttributeResponseBodyInstanceAttribute> instanceAttribute{};

  DescribeInstanceAttributeResponseBody() {}

  explicit DescribeInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceAttribute) {
      res["InstanceAttribute"] = instanceAttribute ? boost::any(instanceAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceAttribute") != m.end() && !m["InstanceAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceAttribute"].type()) {
        DescribeInstanceAttributeResponseBodyInstanceAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceAttribute"]));
        instanceAttribute = make_shared<DescribeInstanceAttributeResponseBodyInstanceAttribute>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponseBody() = default;
};
class DescribeInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceAttributeResponseBody> body{};

  DescribeInstanceAttributeResponse() {}

  explicit DescribeInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponse() = default;
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
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<vector<DescribeInstancesRequestTag>> tag{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
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
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> networkType{};
  shared_ptr<string> imageVersionName{};
  shared_ptr<string> seriesCode{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsStatus{};
  shared_ptr<bool> operatable{};
  shared_ptr<long> planUpgradeStatus{};
  shared_ptr<long> expireTime{};
  shared_ptr<bool> upgradeable{};
  shared_ptr<bool> legacy{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> intranetIp{};
  shared_ptr<bool> renewable{};
  shared_ptr<string> regionId{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<long> startTime{};
  shared_ptr<long> upgradeStatus{};
  shared_ptr<bool> planUpgradeable{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> licenseCode{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (imageVersionName) {
      res["ImageVersionName"] = boost::any(*imageVersionName);
    }
    if (seriesCode) {
      res["SeriesCode"] = boost::any(*seriesCode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsStatus) {
      res["EcsStatus"] = boost::any(*ecsStatus);
    }
    if (operatable) {
      res["Operatable"] = boost::any(*operatable);
    }
    if (planUpgradeStatus) {
      res["PlanUpgradeStatus"] = boost::any(*planUpgradeStatus);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (upgradeable) {
      res["Upgradeable"] = boost::any(*upgradeable);
    }
    if (legacy) {
      res["Legacy"] = boost::any(*legacy);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (renewable) {
      res["Renewable"] = boost::any(*renewable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (upgradeStatus) {
      res["UpgradeStatus"] = boost::any(*upgradeStatus);
    }
    if (planUpgradeable) {
      res["PlanUpgradeable"] = boost::any(*planUpgradeable);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ImageVersionName") != m.end() && !m["ImageVersionName"].empty()) {
      imageVersionName = make_shared<string>(boost::any_cast<string>(m["ImageVersionName"]));
    }
    if (m.find("SeriesCode") != m.end() && !m["SeriesCode"].empty()) {
      seriesCode = make_shared<string>(boost::any_cast<string>(m["SeriesCode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsStatus") != m.end() && !m["EcsStatus"].empty()) {
      ecsStatus = make_shared<string>(boost::any_cast<string>(m["EcsStatus"]));
    }
    if (m.find("Operatable") != m.end() && !m["Operatable"].empty()) {
      operatable = make_shared<bool>(boost::any_cast<bool>(m["Operatable"]));
    }
    if (m.find("PlanUpgradeStatus") != m.end() && !m["PlanUpgradeStatus"].empty()) {
      planUpgradeStatus = make_shared<long>(boost::any_cast<long>(m["PlanUpgradeStatus"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Upgradeable") != m.end() && !m["Upgradeable"].empty()) {
      upgradeable = make_shared<bool>(boost::any_cast<bool>(m["Upgradeable"]));
    }
    if (m.find("Legacy") != m.end() && !m["Legacy"].empty()) {
      legacy = make_shared<bool>(boost::any_cast<bool>(m["Legacy"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("Renewable") != m.end() && !m["Renewable"].empty()) {
      renewable = make_shared<bool>(boost::any_cast<bool>(m["Renewable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UpgradeStatus") != m.end() && !m["UpgradeStatus"].empty()) {
      upgradeStatus = make_shared<long>(boost::any_cast<long>(m["UpgradeStatus"]));
    }
    if (m.find("PlanUpgradeable") != m.end() && !m["PlanUpgradeable"].empty()) {
      planUpgradeable = make_shared<bool>(boost::any_cast<bool>(m["PlanUpgradeable"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeInstancesResponseBodyInstances>> instances{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeLoginTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeLoginTicketRequest() {}

  explicit DescribeLoginTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeLoginTicketRequest() = default;
};
class DescribeLoginTicketResponseBodyLoginTicketZones : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};
  shared_ptr<string> localName{};

  DescribeLoginTicketResponseBodyLoginTicketZones() {}

  explicit DescribeLoginTicketResponseBodyLoginTicketZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
  }


  virtual ~DescribeLoginTicketResponseBodyLoginTicketZones() = default;
};
class DescribeLoginTicketResponseBodyLoginTicket : public Darabonba::Model {
public:
  shared_ptr<string> ticket{};
  shared_ptr<string> certificate{};
  shared_ptr<vector<DescribeLoginTicketResponseBodyLoginTicketZones>> zones{};

  DescribeLoginTicketResponseBodyLoginTicket() {}

  explicit DescribeLoginTicketResponseBodyLoginTicket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeLoginTicketResponseBodyLoginTicketZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoginTicketResponseBodyLoginTicketZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeLoginTicketResponseBodyLoginTicketZones>>(expect1);
      }
    }
  }


  virtual ~DescribeLoginTicketResponseBodyLoginTicket() = default;
};
class DescribeLoginTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeLoginTicketResponseBodyLoginTicket> loginTicket{};

  DescribeLoginTicketResponseBody() {}

  explicit DescribeLoginTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loginTicket) {
      res["LoginTicket"] = loginTicket ? boost::any(loginTicket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoginTicket") != m.end() && !m["LoginTicket"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginTicket"].type()) {
        DescribeLoginTicketResponseBodyLoginTicket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginTicket"]));
        loginTicket = make_shared<DescribeLoginTicketResponseBodyLoginTicket>(model1);
      }
    }
  }


  virtual ~DescribeLoginTicketResponseBody() = default;
};
class DescribeLoginTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoginTicketResponseBody> body{};

  DescribeLoginTicketResponse() {}

  explicit DescribeLoginTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoginTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoginTicketResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoginTicketResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> regionId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSyncInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  DescribeSyncInfoRequest() {}

  explicit DescribeSyncInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeSyncInfoRequest() = default;
};
class DescribeSyncInfoResponseBodyInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> imageVersionName{};
  shared_ptr<string> planCode{};
  shared_ptr<string> ecsUuid{};
  shared_ptr<long> accessType{};
  shared_ptr<string> ecsStatus{};
  shared_ptr<long> planUpgradeStatus{};
  shared_ptr<string> zoneNo{};
  shared_ptr<long> aliuid{};
  shared_ptr<string> productName{};
  shared_ptr<string> ecsEip{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> ecsInternetIp{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> renewable{};
  shared_ptr<string> ecsIntranetIp{};
  shared_ptr<long> startTime{};
  shared_ptr<string> regionName{};
  shared_ptr<long> upgradeStatus{};
  shared_ptr<string> planUpgradeable{};
  shared_ptr<string> customName{};
  shared_ptr<string> ecsNetworkType{};
  shared_ptr<long> publicAccessControl{};
  shared_ptr<string> vendorCode{};
  shared_ptr<string> planName{};
  shared_ptr<string> productCode{};

  DescribeSyncInfoResponseBodyInstanceInfo() {}

  explicit DescribeSyncInfoResponseBodyInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (imageVersionName) {
      res["ImageVersionName"] = boost::any(*imageVersionName);
    }
    if (planCode) {
      res["PlanCode"] = boost::any(*planCode);
    }
    if (ecsUuid) {
      res["EcsUuid"] = boost::any(*ecsUuid);
    }
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (ecsStatus) {
      res["EcsStatus"] = boost::any(*ecsStatus);
    }
    if (planUpgradeStatus) {
      res["PlanUpgradeStatus"] = boost::any(*planUpgradeStatus);
    }
    if (zoneNo) {
      res["ZoneNo"] = boost::any(*zoneNo);
    }
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (ecsEip) {
      res["EcsEip"] = boost::any(*ecsEip);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ecsInternetIp) {
      res["EcsInternetIp"] = boost::any(*ecsInternetIp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (renewable) {
      res["Renewable"] = boost::any(*renewable);
    }
    if (ecsIntranetIp) {
      res["EcsIntranetIp"] = boost::any(*ecsIntranetIp);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (upgradeStatus) {
      res["UpgradeStatus"] = boost::any(*upgradeStatus);
    }
    if (planUpgradeable) {
      res["PlanUpgradeable"] = boost::any(*planUpgradeable);
    }
    if (customName) {
      res["CustomName"] = boost::any(*customName);
    }
    if (ecsNetworkType) {
      res["EcsNetworkType"] = boost::any(*ecsNetworkType);
    }
    if (publicAccessControl) {
      res["PublicAccessControl"] = boost::any(*publicAccessControl);
    }
    if (vendorCode) {
      res["VendorCode"] = boost::any(*vendorCode);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("ImageVersionName") != m.end() && !m["ImageVersionName"].empty()) {
      imageVersionName = make_shared<string>(boost::any_cast<string>(m["ImageVersionName"]));
    }
    if (m.find("PlanCode") != m.end() && !m["PlanCode"].empty()) {
      planCode = make_shared<string>(boost::any_cast<string>(m["PlanCode"]));
    }
    if (m.find("EcsUuid") != m.end() && !m["EcsUuid"].empty()) {
      ecsUuid = make_shared<string>(boost::any_cast<string>(m["EcsUuid"]));
    }
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<long>(boost::any_cast<long>(m["AccessType"]));
    }
    if (m.find("EcsStatus") != m.end() && !m["EcsStatus"].empty()) {
      ecsStatus = make_shared<string>(boost::any_cast<string>(m["EcsStatus"]));
    }
    if (m.find("PlanUpgradeStatus") != m.end() && !m["PlanUpgradeStatus"].empty()) {
      planUpgradeStatus = make_shared<long>(boost::any_cast<long>(m["PlanUpgradeStatus"]));
    }
    if (m.find("ZoneNo") != m.end() && !m["ZoneNo"].empty()) {
      zoneNo = make_shared<string>(boost::any_cast<string>(m["ZoneNo"]));
    }
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("EcsEip") != m.end() && !m["EcsEip"].empty()) {
      ecsEip = make_shared<string>(boost::any_cast<string>(m["EcsEip"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("EcsInternetIp") != m.end() && !m["EcsInternetIp"].empty()) {
      ecsInternetIp = make_shared<string>(boost::any_cast<string>(m["EcsInternetIp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Renewable") != m.end() && !m["Renewable"].empty()) {
      renewable = make_shared<bool>(boost::any_cast<bool>(m["Renewable"]));
    }
    if (m.find("EcsIntranetIp") != m.end() && !m["EcsIntranetIp"].empty()) {
      ecsIntranetIp = make_shared<string>(boost::any_cast<string>(m["EcsIntranetIp"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("UpgradeStatus") != m.end() && !m["UpgradeStatus"].empty()) {
      upgradeStatus = make_shared<long>(boost::any_cast<long>(m["UpgradeStatus"]));
    }
    if (m.find("PlanUpgradeable") != m.end() && !m["PlanUpgradeable"].empty()) {
      planUpgradeable = make_shared<string>(boost::any_cast<string>(m["PlanUpgradeable"]));
    }
    if (m.find("CustomName") != m.end() && !m["CustomName"].empty()) {
      customName = make_shared<string>(boost::any_cast<string>(m["CustomName"]));
    }
    if (m.find("EcsNetworkType") != m.end() && !m["EcsNetworkType"].empty()) {
      ecsNetworkType = make_shared<string>(boost::any_cast<string>(m["EcsNetworkType"]));
    }
    if (m.find("PublicAccessControl") != m.end() && !m["PublicAccessControl"].empty()) {
      publicAccessControl = make_shared<long>(boost::any_cast<long>(m["PublicAccessControl"]));
    }
    if (m.find("VendorCode") != m.end() && !m["VendorCode"].empty()) {
      vendorCode = make_shared<string>(boost::any_cast<string>(m["VendorCode"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~DescribeSyncInfoResponseBodyInstanceInfo() = default;
};
class DescribeSyncInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSyncInfoResponseBodyInstanceInfo> instanceInfo{};

  DescribeSyncInfoResponseBody() {}

  explicit DescribeSyncInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceInfo) {
      res["InstanceInfo"] = instanceInfo ? boost::any(instanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceInfo"].type()) {
        DescribeSyncInfoResponseBodyInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceInfo"]));
        instanceInfo = make_shared<DescribeSyncInfoResponseBodyInstanceInfo>(model1);
      }
    }
  }


  virtual ~DescribeSyncInfoResponseBody() = default;
};
class DescribeSyncInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSyncInfoResponseBody> body{};

  DescribeSyncInfoResponse() {}

  explicit DescribeSyncInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSyncInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSyncInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSyncInfoResponse() = default;
};
class DisableLogMaskConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> maskIdList{};

  DisableLogMaskConfigsRequest() {}

  explicit DisableLogMaskConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maskIdList) {
      res["MaskIdList"] = boost::any(*maskIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaskIdList") != m.end() && !m["MaskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MaskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MaskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      maskIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DisableLogMaskConfigsRequest() = default;
};
class DisableLogMaskConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableLogMaskConfigsResponseBody() {}

  explicit DisableLogMaskConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableLogMaskConfigsResponseBody() = default;
};
class DisableLogMaskConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableLogMaskConfigsResponseBody> body{};

  DisableLogMaskConfigsResponse() {}

  explicit DisableLogMaskConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableLogMaskConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableLogMaskConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DisableLogMaskConfigsResponse() = default;
};
class DissociateRulesFromDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jsonParam{};

  DissociateRulesFromDbRequest() {}

  explicit DissociateRulesFromDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jsonParam) {
      res["JsonParam"] = boost::any(*jsonParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JsonParam") != m.end() && !m["JsonParam"].empty()) {
      jsonParam = make_shared<string>(boost::any_cast<string>(m["JsonParam"]));
    }
  }


  virtual ~DissociateRulesFromDbRequest() = default;
};
class DissociateRulesFromDbResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> jsonResult{};

  DissociateRulesFromDbResponseBodyServerData() {}

  explicit DissociateRulesFromDbResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonResult) {
      res["JsonResult"] = boost::any(*jsonResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonResult") != m.end() && !m["JsonResult"].empty()) {
      jsonResult = make_shared<string>(boost::any_cast<string>(m["JsonResult"]));
    }
  }


  virtual ~DissociateRulesFromDbResponseBodyServerData() = default;
};
class DissociateRulesFromDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DissociateRulesFromDbResponseBodyServerData> serverData{};

  DissociateRulesFromDbResponseBody() {}

  explicit DissociateRulesFromDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        DissociateRulesFromDbResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<DissociateRulesFromDbResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~DissociateRulesFromDbResponseBody() = default;
};
class DissociateRulesFromDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateRulesFromDbResponseBody> body{};

  DissociateRulesFromDbResponse() {}

  explicit DissociateRulesFromDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DissociateRulesFromDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateRulesFromDbResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateRulesFromDbResponse() = default;
};
class DissociateTemplatesFromRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jsonParam{};

  DissociateTemplatesFromRuleRequest() {}

  explicit DissociateTemplatesFromRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jsonParam) {
      res["JsonParam"] = boost::any(*jsonParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JsonParam") != m.end() && !m["JsonParam"].empty()) {
      jsonParam = make_shared<string>(boost::any_cast<string>(m["JsonParam"]));
    }
  }


  virtual ~DissociateTemplatesFromRuleRequest() = default;
};
class DissociateTemplatesFromRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateTemplatesFromRuleResponseBody() {}

  explicit DissociateTemplatesFromRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DissociateTemplatesFromRuleResponseBody() = default;
};
class DissociateTemplatesFromRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateTemplatesFromRuleResponseBody> body{};

  DissociateTemplatesFromRuleResponse() {}

  explicit DissociateTemplatesFromRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DissociateTemplatesFromRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateTemplatesFromRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateTemplatesFromRuleResponse() = default;
};
class EditLogMaskConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maskId{};
  shared_ptr<string> maskName{};
  shared_ptr<string> maskRegex{};
  shared_ptr<string> maskTxt{};
  shared_ptr<string> maskDescription{};

  EditLogMaskConfigRequest() {}

  explicit EditLogMaskConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maskId) {
      res["MaskId"] = boost::any(*maskId);
    }
    if (maskName) {
      res["MaskName"] = boost::any(*maskName);
    }
    if (maskRegex) {
      res["MaskRegex"] = boost::any(*maskRegex);
    }
    if (maskTxt) {
      res["MaskTxt"] = boost::any(*maskTxt);
    }
    if (maskDescription) {
      res["MaskDescription"] = boost::any(*maskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaskId") != m.end() && !m["MaskId"].empty()) {
      maskId = make_shared<long>(boost::any_cast<long>(m["MaskId"]));
    }
    if (m.find("MaskName") != m.end() && !m["MaskName"].empty()) {
      maskName = make_shared<string>(boost::any_cast<string>(m["MaskName"]));
    }
    if (m.find("MaskRegex") != m.end() && !m["MaskRegex"].empty()) {
      maskRegex = make_shared<string>(boost::any_cast<string>(m["MaskRegex"]));
    }
    if (m.find("MaskTxt") != m.end() && !m["MaskTxt"].empty()) {
      maskTxt = make_shared<string>(boost::any_cast<string>(m["MaskTxt"]));
    }
    if (m.find("MaskDescription") != m.end() && !m["MaskDescription"].empty()) {
      maskDescription = make_shared<string>(boost::any_cast<string>(m["MaskDescription"]));
    }
  }


  virtual ~EditLogMaskConfigRequest() = default;
};
class EditLogMaskConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EditLogMaskConfigResponseBody() {}

  explicit EditLogMaskConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EditLogMaskConfigResponseBody() = default;
};
class EditLogMaskConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EditLogMaskConfigResponseBody> body{};

  EditLogMaskConfigResponse() {}

  explicit EditLogMaskConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditLogMaskConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditLogMaskConfigResponseBody>(model1);
      }
    }
  }


  virtual ~EditLogMaskConfigResponse() = default;
};
class EnableLogMaskConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> maskIdList{};

  EnableLogMaskConfigsRequest() {}

  explicit EnableLogMaskConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maskIdList) {
      res["MaskIdList"] = boost::any(*maskIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaskIdList") != m.end() && !m["MaskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MaskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MaskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      maskIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EnableLogMaskConfigsRequest() = default;
};
class EnableLogMaskConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableLogMaskConfigsResponseBody() {}

  explicit EnableLogMaskConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableLogMaskConfigsResponseBody() = default;
};
class EnableLogMaskConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableLogMaskConfigsResponseBody> body{};

  EnableLogMaskConfigsResponse() {}

  explicit EnableLogMaskConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableLogMaskConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableLogMaskConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~EnableLogMaskConfigsResponse() = default;
};
class GetAgentFileUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  GetAgentFileUrlRequest() {}

  explicit GetAgentFileUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetAgentFileUrlRequest() = default;
};
class GetAgentFileUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> linuxFileUrl{};
  shared_ptr<string> accessToken{};
  shared_ptr<string> winFileUrl{};

  GetAgentFileUrlResponseBody() {}

  explicit GetAgentFileUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (linuxFileUrl) {
      res["LinuxFileUrl"] = boost::any(*linuxFileUrl);
    }
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (winFileUrl) {
      res["WinFileUrl"] = boost::any(*winFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LinuxFileUrl") != m.end() && !m["LinuxFileUrl"].empty()) {
      linuxFileUrl = make_shared<string>(boost::any_cast<string>(m["LinuxFileUrl"]));
    }
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("WinFileUrl") != m.end() && !m["WinFileUrl"].empty()) {
      winFileUrl = make_shared<string>(boost::any_cast<string>(m["WinFileUrl"]));
    }
  }


  virtual ~GetAgentFileUrlResponseBody() = default;
};
class GetAgentFileUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentFileUrlResponseBody> body{};

  GetAgentFileUrlResponse() {}

  explicit GetAgentFileUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAgentFileUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentFileUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentFileUrlResponse() = default;
};
class GetAgentListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> agentIp{};
  shared_ptr<long> agentStatus{};
  shared_ptr<string> agentOs{};

  GetAgentListRequest() {}

  explicit GetAgentListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (agentIp) {
      res["AgentIp"] = boost::any(*agentIp);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (agentOs) {
      res["AgentOs"] = boost::any(*agentOs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AgentIp") != m.end() && !m["AgentIp"].empty()) {
      agentIp = make_shared<string>(boost::any_cast<string>(m["AgentIp"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<long>(boost::any_cast<long>(m["AgentStatus"]));
    }
    if (m.find("AgentOs") != m.end() && !m["AgentOs"].empty()) {
      agentOs = make_shared<string>(boost::any_cast<string>(m["AgentOs"]));
    }
  }


  virtual ~GetAgentListRequest() = default;
};
class GetAgentListResponseBodyAgentList : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> privateIp{};
  shared_ptr<long> rmagentMem{};
  shared_ptr<string> agentId{};
  shared_ptr<long> rmagentCpu{};
  shared_ptr<string> firstLoginTime{};
  shared_ptr<string> agentOs{};
  shared_ptr<long> agentStatus{};
  shared_ptr<string> agentPort{};
  shared_ptr<string> agentVersion{};
  shared_ptr<long> sendPackets{};
  shared_ptr<long> sendBytes{};
  shared_ptr<string> lastActiveTime{};
  shared_ptr<long> sendPacketCount{};
  shared_ptr<string> ecsId{};
  shared_ptr<string> publicIp{};
  shared_ptr<long> sendByteCount{};

  GetAgentListResponseBodyAgentList() {}

  explicit GetAgentListResponseBodyAgentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (privateIp) {
      res["PrivateIp"] = boost::any(*privateIp);
    }
    if (rmagentMem) {
      res["RmagentMem"] = boost::any(*rmagentMem);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (rmagentCpu) {
      res["RmagentCpu"] = boost::any(*rmagentCpu);
    }
    if (firstLoginTime) {
      res["FirstLoginTime"] = boost::any(*firstLoginTime);
    }
    if (agentOs) {
      res["AgentOs"] = boost::any(*agentOs);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (agentPort) {
      res["AgentPort"] = boost::any(*agentPort);
    }
    if (agentVersion) {
      res["AgentVersion"] = boost::any(*agentVersion);
    }
    if (sendPackets) {
      res["SendPackets"] = boost::any(*sendPackets);
    }
    if (sendBytes) {
      res["SendBytes"] = boost::any(*sendBytes);
    }
    if (lastActiveTime) {
      res["LastActiveTime"] = boost::any(*lastActiveTime);
    }
    if (sendPacketCount) {
      res["SendPacketCount"] = boost::any(*sendPacketCount);
    }
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    if (sendByteCount) {
      res["SendByteCount"] = boost::any(*sendByteCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("PrivateIp") != m.end() && !m["PrivateIp"].empty()) {
      privateIp = make_shared<string>(boost::any_cast<string>(m["PrivateIp"]));
    }
    if (m.find("RmagentMem") != m.end() && !m["RmagentMem"].empty()) {
      rmagentMem = make_shared<long>(boost::any_cast<long>(m["RmagentMem"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("RmagentCpu") != m.end() && !m["RmagentCpu"].empty()) {
      rmagentCpu = make_shared<long>(boost::any_cast<long>(m["RmagentCpu"]));
    }
    if (m.find("FirstLoginTime") != m.end() && !m["FirstLoginTime"].empty()) {
      firstLoginTime = make_shared<string>(boost::any_cast<string>(m["FirstLoginTime"]));
    }
    if (m.find("AgentOs") != m.end() && !m["AgentOs"].empty()) {
      agentOs = make_shared<string>(boost::any_cast<string>(m["AgentOs"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<long>(boost::any_cast<long>(m["AgentStatus"]));
    }
    if (m.find("AgentPort") != m.end() && !m["AgentPort"].empty()) {
      agentPort = make_shared<string>(boost::any_cast<string>(m["AgentPort"]));
    }
    if (m.find("AgentVersion") != m.end() && !m["AgentVersion"].empty()) {
      agentVersion = make_shared<string>(boost::any_cast<string>(m["AgentVersion"]));
    }
    if (m.find("SendPackets") != m.end() && !m["SendPackets"].empty()) {
      sendPackets = make_shared<long>(boost::any_cast<long>(m["SendPackets"]));
    }
    if (m.find("SendBytes") != m.end() && !m["SendBytes"].empty()) {
      sendBytes = make_shared<long>(boost::any_cast<long>(m["SendBytes"]));
    }
    if (m.find("LastActiveTime") != m.end() && !m["LastActiveTime"].empty()) {
      lastActiveTime = make_shared<string>(boost::any_cast<string>(m["LastActiveTime"]));
    }
    if (m.find("SendPacketCount") != m.end() && !m["SendPacketCount"].empty()) {
      sendPacketCount = make_shared<long>(boost::any_cast<long>(m["SendPacketCount"]));
    }
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
    if (m.find("SendByteCount") != m.end() && !m["SendByteCount"].empty()) {
      sendByteCount = make_shared<long>(boost::any_cast<long>(m["SendByteCount"]));
    }
  }


  virtual ~GetAgentListResponseBodyAgentList() = default;
};
class GetAgentListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetAgentListResponseBodyAgentList>> agentList{};

  GetAgentListResponseBody() {}

  explicit GetAgentListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (agentList) {
      vector<boost::any> temp1;
      for(auto item1:*agentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AgentList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AgentList") != m.end() && !m["AgentList"].empty()) {
      if (typeid(vector<boost::any>) == m["AgentList"].type()) {
        vector<GetAgentListResponseBodyAgentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AgentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAgentListResponseBodyAgentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agentList = make_shared<vector<GetAgentListResponseBodyAgentList>>(expect1);
      }
    }
  }


  virtual ~GetAgentListResponseBody() = default;
};
class GetAgentListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAgentListResponseBody> body{};

  GetAgentListResponse() {}

  explicit GetAgentListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAgentListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentListResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentListResponse() = default;
};
class GetAppointOperationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  GetAppointOperationRequest() {}

  explicit GetAppointOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetAppointOperationRequest() = default;
};
class GetAppointOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  GetAppointOperationResponseBody() {}

  explicit GetAppointOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppointOperationResponseBody() = default;
};
class GetAppointOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAppointOperationResponseBody> body{};

  GetAppointOperationResponse() {}

  explicit GetAppointOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppointOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppointOperationResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppointOperationResponse() = default;
};
class GetAuditCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetAuditCountRequest() {}

  explicit GetAuditCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetAuditCountRequest() = default;
};
class GetAuditCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> sessionCount{};
  shared_ptr<long> sqlCount{};
  shared_ptr<long> riskCount{};
  shared_ptr<string> requestId{};

  GetAuditCountResponseBody() {}

  explicit GetAuditCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionCount) {
      res["SessionCount"] = boost::any(*sessionCount);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionCount") != m.end() && !m["SessionCount"].empty()) {
      sessionCount = make_shared<long>(boost::any_cast<long>(m["SessionCount"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAuditCountResponseBody() = default;
};
class GetAuditCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAuditCountResponseBody> body{};

  GetAuditCountResponse() {}

  explicit GetAuditCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuditCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuditCountResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuditCountResponse() = default;
};
class GetAuditCountDistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetAuditCountDistributionRequest() {}

  explicit GetAuditCountDistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetAuditCountDistributionRequest() = default;
};
class GetAuditCountDistributionResponseBodyTimeList : public Darabonba::Model {
public:
  shared_ptr<long> sessionCount{};
  shared_ptr<string> beginDate{};
  shared_ptr<long> sqlCount{};
  shared_ptr<string> endDate{};
  shared_ptr<long> riskCount{};

  GetAuditCountDistributionResponseBodyTimeList() {}

  explicit GetAuditCountDistributionResponseBodyTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionCount) {
      res["SessionCount"] = boost::any(*sessionCount);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionCount") != m.end() && !m["SessionCount"].empty()) {
      sessionCount = make_shared<long>(boost::any_cast<long>(m["SessionCount"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
  }


  virtual ~GetAuditCountDistributionResponseBodyTimeList() = default;
};
class GetAuditCountDistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetAuditCountDistributionResponseBodyTimeList>> timeList{};

  GetAuditCountDistributionResponseBody() {}

  explicit GetAuditCountDistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeList) {
      vector<boost::any> temp1;
      for(auto item1:*timeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeList") != m.end() && !m["TimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeList"].type()) {
        vector<GetAuditCountDistributionResponseBodyTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAuditCountDistributionResponseBodyTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeList = make_shared<vector<GetAuditCountDistributionResponseBodyTimeList>>(expect1);
      }
    }
  }


  virtual ~GetAuditCountDistributionResponseBody() = default;
};
class GetAuditCountDistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAuditCountDistributionResponseBody> body{};

  GetAuditCountDistributionResponse() {}

  explicit GetAuditCountDistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuditCountDistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuditCountDistributionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuditCountDistributionResponse() = default;
};
class GetBaseTemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  GetBaseTemplateListRequest() {}

  explicit GetBaseTemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetBaseTemplateListRequest() = default;
};
class GetBaseTemplateListResponseBodyTemplateList : public Darabonba::Model {
public:
  shared_ptr<string> dbTypeName{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> sqlTypeName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateState{};

  GetBaseTemplateListResponseBodyTemplateList() {}

  explicit GetBaseTemplateListResponseBodyTemplateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbTypeName) {
      res["DbTypeName"] = boost::any(*dbTypeName);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (sqlTypeName) {
      res["SqlTypeName"] = boost::any(*sqlTypeName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateState) {
      res["TemplateState"] = boost::any(*templateState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbTypeName") != m.end() && !m["DbTypeName"].empty()) {
      dbTypeName = make_shared<string>(boost::any_cast<string>(m["DbTypeName"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("SqlTypeName") != m.end() && !m["SqlTypeName"].empty()) {
      sqlTypeName = make_shared<string>(boost::any_cast<string>(m["SqlTypeName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateState") != m.end() && !m["TemplateState"].empty()) {
      templateState = make_shared<string>(boost::any_cast<string>(m["TemplateState"]));
    }
  }


  virtual ~GetBaseTemplateListResponseBodyTemplateList() = default;
};
class GetBaseTemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetBaseTemplateListResponseBodyTemplateList>> templateList{};

  GetBaseTemplateListResponseBody() {}

  explicit GetBaseTemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateList) {
      vector<boost::any> temp1;
      for(auto item1:*templateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateList") != m.end() && !m["TemplateList"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateList"].type()) {
        vector<GetBaseTemplateListResponseBodyTemplateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetBaseTemplateListResponseBodyTemplateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateList = make_shared<vector<GetBaseTemplateListResponseBodyTemplateList>>(expect1);
      }
    }
  }


  virtual ~GetBaseTemplateListResponseBody() = default;
};
class GetBaseTemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBaseTemplateListResponseBody> body{};

  GetBaseTemplateListResponse() {}

  explicit GetBaseTemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBaseTemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBaseTemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~GetBaseTemplateListResponse() = default;
};
class GetDasUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  GetDasUsageRequest() {}

  explicit GetDasUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetDasUsageRequest() = default;
};
class GetDasUsageResponseBodyAuditAssetDbTypes : public Darabonba::Model {
public:
  shared_ptr<string> dbType{};
  shared_ptr<long> dbCount{};

  GetDasUsageResponseBodyAuditAssetDbTypes() {}

  explicit GetDasUsageResponseBodyAuditAssetDbTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbCount) {
      res["DbCount"] = boost::any(*dbCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DbCount") != m.end() && !m["DbCount"].empty()) {
      dbCount = make_shared<long>(boost::any_cast<long>(m["DbCount"]));
    }
  }


  virtual ~GetDasUsageResponseBodyAuditAssetDbTypes() = default;
};
class GetDasUsageResponseBodyAuditAsset : public Darabonba::Model {
public:
  shared_ptr<long> dbCount{};
  shared_ptr<vector<GetDasUsageResponseBodyAuditAssetDbTypes>> dbTypes{};

  GetDasUsageResponseBodyAuditAsset() {}

  explicit GetDasUsageResponseBodyAuditAsset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbCount) {
      res["DbCount"] = boost::any(*dbCount);
    }
    if (dbTypes) {
      vector<boost::any> temp1;
      for(auto item1:*dbTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbCount") != m.end() && !m["DbCount"].empty()) {
      dbCount = make_shared<long>(boost::any_cast<long>(m["DbCount"]));
    }
    if (m.find("DbTypes") != m.end() && !m["DbTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["DbTypes"].type()) {
        vector<GetDasUsageResponseBodyAuditAssetDbTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDasUsageResponseBodyAuditAssetDbTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbTypes = make_shared<vector<GetDasUsageResponseBodyAuditAssetDbTypes>>(expect1);
      }
    }
  }


  virtual ~GetDasUsageResponseBodyAuditAsset() = default;
};
class GetDasUsageResponseBodyConsoleAccess : public Darabonba::Model {
public:
  shared_ptr<string> lastAccessTime{};
  shared_ptr<long> day90AccessCount{};
  shared_ptr<long> day15AccessCount{};
  shared_ptr<long> day30AccessCount{};
  shared_ptr<long> day180AccessCount{};

  GetDasUsageResponseBodyConsoleAccess() {}

  explicit GetDasUsageResponseBodyConsoleAccess(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastAccessTime) {
      res["LastAccessTime"] = boost::any(*lastAccessTime);
    }
    if (day90AccessCount) {
      res["Day90AccessCount"] = boost::any(*day90AccessCount);
    }
    if (day15AccessCount) {
      res["Day15AccessCount"] = boost::any(*day15AccessCount);
    }
    if (day30AccessCount) {
      res["Day30AccessCount"] = boost::any(*day30AccessCount);
    }
    if (day180AccessCount) {
      res["Day180AccessCount"] = boost::any(*day180AccessCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastAccessTime") != m.end() && !m["LastAccessTime"].empty()) {
      lastAccessTime = make_shared<string>(boost::any_cast<string>(m["LastAccessTime"]));
    }
    if (m.find("Day90AccessCount") != m.end() && !m["Day90AccessCount"].empty()) {
      day90AccessCount = make_shared<long>(boost::any_cast<long>(m["Day90AccessCount"]));
    }
    if (m.find("Day15AccessCount") != m.end() && !m["Day15AccessCount"].empty()) {
      day15AccessCount = make_shared<long>(boost::any_cast<long>(m["Day15AccessCount"]));
    }
    if (m.find("Day30AccessCount") != m.end() && !m["Day30AccessCount"].empty()) {
      day30AccessCount = make_shared<long>(boost::any_cast<long>(m["Day30AccessCount"]));
    }
    if (m.find("Day180AccessCount") != m.end() && !m["Day180AccessCount"].empty()) {
      day180AccessCount = make_shared<long>(boost::any_cast<long>(m["Day180AccessCount"]));
    }
  }


  virtual ~GetDasUsageResponseBodyConsoleAccess() = default;
};
class GetDasUsageResponseBodyAgent : public Darabonba::Model {
public:
  shared_ptr<bool> hasFlow{};
  shared_ptr<string> instState{};
  shared_ptr<long> activeCount{};

  GetDasUsageResponseBodyAgent() {}

  explicit GetDasUsageResponseBodyAgent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasFlow) {
      res["HasFlow"] = boost::any(*hasFlow);
    }
    if (instState) {
      res["InstState"] = boost::any(*instState);
    }
    if (activeCount) {
      res["ActiveCount"] = boost::any(*activeCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasFlow") != m.end() && !m["HasFlow"].empty()) {
      hasFlow = make_shared<bool>(boost::any_cast<bool>(m["HasFlow"]));
    }
    if (m.find("InstState") != m.end() && !m["InstState"].empty()) {
      instState = make_shared<string>(boost::any_cast<string>(m["InstState"]));
    }
    if (m.find("ActiveCount") != m.end() && !m["ActiveCount"].empty()) {
      activeCount = make_shared<long>(boost::any_cast<long>(m["ActiveCount"]));
    }
  }


  virtual ~GetDasUsageResponseBodyAgent() = default;
};
class GetDasUsageResponseBodyNoticeState : public Darabonba::Model {
public:
  shared_ptr<bool> riskNotice{};
  shared_ptr<bool> sysNotice{};

  GetDasUsageResponseBodyNoticeState() {}

  explicit GetDasUsageResponseBodyNoticeState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskNotice) {
      res["RiskNotice"] = boost::any(*riskNotice);
    }
    if (sysNotice) {
      res["SysNotice"] = boost::any(*sysNotice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskNotice") != m.end() && !m["RiskNotice"].empty()) {
      riskNotice = make_shared<bool>(boost::any_cast<bool>(m["RiskNotice"]));
    }
    if (m.find("SysNotice") != m.end() && !m["SysNotice"].empty()) {
      sysNotice = make_shared<bool>(boost::any_cast<bool>(m["SysNotice"]));
    }
  }


  virtual ~GetDasUsageResponseBodyNoticeState() = default;
};
class GetDasUsageResponseBodyRiskAsset : public Darabonba::Model {
public:
  shared_ptr<long> riskDBCount{};
  shared_ptr<long> day30RiskDBCount{};

  GetDasUsageResponseBodyRiskAsset() {}

  explicit GetDasUsageResponseBodyRiskAsset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskDBCount) {
      res["RiskDBCount"] = boost::any(*riskDBCount);
    }
    if (day30RiskDBCount) {
      res["Day30RiskDBCount"] = boost::any(*day30RiskDBCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskDBCount") != m.end() && !m["RiskDBCount"].empty()) {
      riskDBCount = make_shared<long>(boost::any_cast<long>(m["RiskDBCount"]));
    }
    if (m.find("Day30RiskDBCount") != m.end() && !m["Day30RiskDBCount"].empty()) {
      day30RiskDBCount = make_shared<long>(boost::any_cast<long>(m["Day30RiskDBCount"]));
    }
  }


  virtual ~GetDasUsageResponseBodyRiskAsset() = default;
};
class GetDasUsageResponseBodyRiskRuleMaxHitRule : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> ruleName{};

  GetDasUsageResponseBodyRiskRuleMaxHitRule() {}

  explicit GetDasUsageResponseBodyRiskRuleMaxHitRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~GetDasUsageResponseBodyRiskRuleMaxHitRule() = default;
};
class GetDasUsageResponseBodyRiskRuleDay30MaxHitRule : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> ruleName{};

  GetDasUsageResponseBodyRiskRuleDay30MaxHitRule() {}

  explicit GetDasUsageResponseBodyRiskRuleDay30MaxHitRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~GetDasUsageResponseBodyRiskRuleDay30MaxHitRule() = default;
};
class GetDasUsageResponseBodyRiskRule : public Darabonba::Model {
public:
  shared_ptr<long> day30RiskCount{};
  shared_ptr<long> riskCount{};
  shared_ptr<GetDasUsageResponseBodyRiskRuleMaxHitRule> maxHitRule{};
  shared_ptr<GetDasUsageResponseBodyRiskRuleDay30MaxHitRule> day30MaxHitRule{};

  GetDasUsageResponseBodyRiskRule() {}

  explicit GetDasUsageResponseBodyRiskRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day30RiskCount) {
      res["Day30RiskCount"] = boost::any(*day30RiskCount);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (maxHitRule) {
      res["MaxHitRule"] = maxHitRule ? boost::any(maxHitRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (day30MaxHitRule) {
      res["Day30MaxHitRule"] = day30MaxHitRule ? boost::any(day30MaxHitRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day30RiskCount") != m.end() && !m["Day30RiskCount"].empty()) {
      day30RiskCount = make_shared<long>(boost::any_cast<long>(m["Day30RiskCount"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("MaxHitRule") != m.end() && !m["MaxHitRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["MaxHitRule"].type()) {
        GetDasUsageResponseBodyRiskRuleMaxHitRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MaxHitRule"]));
        maxHitRule = make_shared<GetDasUsageResponseBodyRiskRuleMaxHitRule>(model1);
      }
    }
    if (m.find("Day30MaxHitRule") != m.end() && !m["Day30MaxHitRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["Day30MaxHitRule"].type()) {
        GetDasUsageResponseBodyRiskRuleDay30MaxHitRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Day30MaxHitRule"]));
        day30MaxHitRule = make_shared<GetDasUsageResponseBodyRiskRuleDay30MaxHitRule>(model1);
      }
    }
  }


  virtual ~GetDasUsageResponseBodyRiskRule() = default;
};
class GetDasUsageResponseBodyWpAsset : public Darabonba::Model {
public:
  shared_ptr<long> avgTime{};
  shared_ptr<string> dbName{};

  GetDasUsageResponseBodyWpAsset() {}

  explicit GetDasUsageResponseBodyWpAsset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgTime) {
      res["AvgTime"] = boost::any(*avgTime);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgTime") != m.end() && !m["AvgTime"].empty()) {
      avgTime = make_shared<long>(boost::any_cast<long>(m["AvgTime"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
  }


  virtual ~GetDasUsageResponseBodyWpAsset() = default;
};
class GetDasUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> over1sSqlCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sessionTotalCount{};
  shared_ptr<string> createTime{};
  shared_ptr<long> sqlTotalCount{};
  shared_ptr<GetDasUsageResponseBodyAuditAsset> auditAsset{};
  shared_ptr<GetDasUsageResponseBodyConsoleAccess> consoleAccess{};
  shared_ptr<GetDasUsageResponseBodyAgent> agent{};
  shared_ptr<GetDasUsageResponseBodyNoticeState> noticeState{};
  shared_ptr<GetDasUsageResponseBodyRiskAsset> riskAsset{};
  shared_ptr<GetDasUsageResponseBodyRiskRule> riskRule{};
  shared_ptr<GetDasUsageResponseBodyWpAsset> wpAsset{};

  GetDasUsageResponseBody() {}

  explicit GetDasUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (over1sSqlCount) {
      res["Over1sSqlCount"] = boost::any(*over1sSqlCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionTotalCount) {
      res["SessionTotalCount"] = boost::any(*sessionTotalCount);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (sqlTotalCount) {
      res["SqlTotalCount"] = boost::any(*sqlTotalCount);
    }
    if (auditAsset) {
      res["AuditAsset"] = auditAsset ? boost::any(auditAsset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (consoleAccess) {
      res["ConsoleAccess"] = consoleAccess ? boost::any(consoleAccess->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (agent) {
      res["Agent"] = agent ? boost::any(agent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (noticeState) {
      res["NoticeState"] = noticeState ? boost::any(noticeState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (riskAsset) {
      res["RiskAsset"] = riskAsset ? boost::any(riskAsset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (riskRule) {
      res["RiskRule"] = riskRule ? boost::any(riskRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wpAsset) {
      res["WpAsset"] = wpAsset ? boost::any(wpAsset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Over1sSqlCount") != m.end() && !m["Over1sSqlCount"].empty()) {
      over1sSqlCount = make_shared<long>(boost::any_cast<long>(m["Over1sSqlCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionTotalCount") != m.end() && !m["SessionTotalCount"].empty()) {
      sessionTotalCount = make_shared<long>(boost::any_cast<long>(m["SessionTotalCount"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SqlTotalCount") != m.end() && !m["SqlTotalCount"].empty()) {
      sqlTotalCount = make_shared<long>(boost::any_cast<long>(m["SqlTotalCount"]));
    }
    if (m.find("AuditAsset") != m.end() && !m["AuditAsset"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuditAsset"].type()) {
        GetDasUsageResponseBodyAuditAsset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuditAsset"]));
        auditAsset = make_shared<GetDasUsageResponseBodyAuditAsset>(model1);
      }
    }
    if (m.find("ConsoleAccess") != m.end() && !m["ConsoleAccess"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsoleAccess"].type()) {
        GetDasUsageResponseBodyConsoleAccess model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsoleAccess"]));
        consoleAccess = make_shared<GetDasUsageResponseBodyConsoleAccess>(model1);
      }
    }
    if (m.find("Agent") != m.end() && !m["Agent"].empty()) {
      if (typeid(map<string, boost::any>) == m["Agent"].type()) {
        GetDasUsageResponseBodyAgent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Agent"]));
        agent = make_shared<GetDasUsageResponseBodyAgent>(model1);
      }
    }
    if (m.find("NoticeState") != m.end() && !m["NoticeState"].empty()) {
      if (typeid(map<string, boost::any>) == m["NoticeState"].type()) {
        GetDasUsageResponseBodyNoticeState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NoticeState"]));
        noticeState = make_shared<GetDasUsageResponseBodyNoticeState>(model1);
      }
    }
    if (m.find("RiskAsset") != m.end() && !m["RiskAsset"].empty()) {
      if (typeid(map<string, boost::any>) == m["RiskAsset"].type()) {
        GetDasUsageResponseBodyRiskAsset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RiskAsset"]));
        riskAsset = make_shared<GetDasUsageResponseBodyRiskAsset>(model1);
      }
    }
    if (m.find("RiskRule") != m.end() && !m["RiskRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RiskRule"].type()) {
        GetDasUsageResponseBodyRiskRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RiskRule"]));
        riskRule = make_shared<GetDasUsageResponseBodyRiskRule>(model1);
      }
    }
    if (m.find("WpAsset") != m.end() && !m["WpAsset"].empty()) {
      if (typeid(map<string, boost::any>) == m["WpAsset"].type()) {
        GetDasUsageResponseBodyWpAsset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WpAsset"]));
        wpAsset = make_shared<GetDasUsageResponseBodyWpAsset>(model1);
      }
    }
  }


  virtual ~GetDasUsageResponseBody() = default;
};
class GetDasUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDasUsageResponseBody> body{};

  GetDasUsageResponse() {}

  explicit GetDasUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDasUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDasUsageResponseBody>(model1);
      }
    }
  }


  virtual ~GetDasUsageResponse() = default;
};
class GetDBAuditCountListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetDBAuditCountListRequest() {}

  explicit GetDBAuditCountListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetDBAuditCountListRequest() = default;
};
class GetDBAuditCountListResponseBodyDbList : public Darabonba::Model {
public:
  shared_ptr<long> sessionCount{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<long> dbType{};
  shared_ptr<long> sqlCount{};
  shared_ptr<string> dbTypeName{};
  shared_ptr<long> riskCount{};
  shared_ptr<string> dbVersionName{};
  shared_ptr<long> assetType{};
  shared_ptr<long> dbVersion{};
  shared_ptr<vector<string>> dbAddresses{};

  GetDBAuditCountListResponseBodyDbList() {}

  explicit GetDBAuditCountListResponseBodyDbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionCount) {
      res["SessionCount"] = boost::any(*sessionCount);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (dbTypeName) {
      res["DbTypeName"] = boost::any(*dbTypeName);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (dbVersionName) {
      res["DbVersionName"] = boost::any(*dbVersionName);
    }
    if (assetType) {
      res["AssetType"] = boost::any(*assetType);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (dbAddresses) {
      res["DbAddresses"] = boost::any(*dbAddresses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionCount") != m.end() && !m["SessionCount"].empty()) {
      sessionCount = make_shared<long>(boost::any_cast<long>(m["SessionCount"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<long>(boost::any_cast<long>(m["DbType"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("DbTypeName") != m.end() && !m["DbTypeName"].empty()) {
      dbTypeName = make_shared<string>(boost::any_cast<string>(m["DbTypeName"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("DbVersionName") != m.end() && !m["DbVersionName"].empty()) {
      dbVersionName = make_shared<string>(boost::any_cast<string>(m["DbVersionName"]));
    }
    if (m.find("AssetType") != m.end() && !m["AssetType"].empty()) {
      assetType = make_shared<long>(boost::any_cast<long>(m["AssetType"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<long>(boost::any_cast<long>(m["DbVersion"]));
    }
    if (m.find("DbAddresses") != m.end() && !m["DbAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbAddresses = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDBAuditCountListResponseBodyDbList() = default;
};
class GetDBAuditCountListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetDBAuditCountListResponseBodyDbList>> dbList{};

  GetDBAuditCountListResponseBody() {}

  explicit GetDBAuditCountListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbList) {
      vector<boost::any> temp1;
      for(auto item1:*dbList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<GetDBAuditCountListResponseBodyDbList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDBAuditCountListResponseBodyDbList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbList = make_shared<vector<GetDBAuditCountListResponseBodyDbList>>(expect1);
      }
    }
  }


  virtual ~GetDBAuditCountListResponseBody() = default;
};
class GetDBAuditCountListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDBAuditCountListResponseBody> body{};

  GetDBAuditCountListResponse() {}

  explicit GetDBAuditCountListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDBAuditCountListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDBAuditCountListResponseBody>(model1);
      }
    }
  }


  virtual ~GetDBAuditCountListResponse() = default;
};
class GetGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> groupKeyId{};
  shared_ptr<string> groupType{};

  GetGroupDetailRequest() {}

  explicit GetGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (groupKeyId) {
      res["GroupKeyId"] = boost::any(*groupKeyId);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GroupKeyId") != m.end() && !m["GroupKeyId"].empty()) {
      groupKeyId = make_shared<string>(boost::any_cast<string>(m["GroupKeyId"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
  }


  virtual ~GetGroupDetailRequest() = default;
};
class GetGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  GetGroupDetailResponseBody() {}

  explicit GetGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGroupDetailResponseBody() = default;
};
class GetGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGroupDetailResponseBody> body{};

  GetGroupDetailResponse() {}

  explicit GetGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupDetailResponse() = default;
};
class GetLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  GetLicenseRequest() {}

  explicit GetLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetLicenseRequest() = default;
};
class GetLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<long> assetLimit{};
  shared_ptr<long> assetLimitUsed{};

  GetLicenseResponseBody() {}

  explicit GetLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (assetLimit) {
      res["AssetLimit"] = boost::any(*assetLimit);
    }
    if (assetLimitUsed) {
      res["AssetLimitUsed"] = boost::any(*assetLimitUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AssetLimit") != m.end() && !m["AssetLimit"].empty()) {
      assetLimit = make_shared<long>(boost::any_cast<long>(m["AssetLimit"]));
    }
    if (m.find("AssetLimitUsed") != m.end() && !m["AssetLimitUsed"].empty()) {
      assetLimitUsed = make_shared<long>(boost::any_cast<long>(m["AssetLimitUsed"]));
    }
  }


  virtual ~GetLicenseResponseBody() = default;
};
class GetLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLicenseResponseBody> body{};

  GetLicenseResponse() {}

  explicit GetLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~GetLicenseResponse() = default;
};
class GetLogDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> sqlId{};

  GetLogDetailRequest() {}

  explicit GetLogDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (sqlId) {
      res["SqlId"] = boost::any(*sqlId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("SqlId") != m.end() && !m["SqlId"].empty()) {
      sqlId = make_shared<string>(boost::any_cast<string>(m["SqlId"]));
    }
  }


  virtual ~GetLogDetailRequest() = default;
};
class GetLogDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> clientPort{};
  shared_ptr<string> appClientIp{};
  shared_ptr<long> execCostUS{};
  shared_ptr<string> sessionLogoutTime{};
  shared_ptr<string> clientOsUser{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sqlId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> appUsername{};
  shared_ptr<long> riskLevel{};
  shared_ptr<long> dbId{};
  shared_ptr<long> ruleType{};
  shared_ptr<long> ruleKeyId{};
  shared_ptr<string> sqlResult{};
  shared_ptr<long> affectRows{};
  shared_ptr<string> sqlTypeName{};
  shared_ptr<string> schema{};
  shared_ptr<string> sessionLoginTime{};
  shared_ptr<string> dbUser{};
  shared_ptr<string> serverMac{};
  shared_ptr<string> dbServer{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> sqlContent{};
  shared_ptr<string> instName{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> clientProgram{};
  shared_ptr<string> captureTime{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientMac{};
  shared_ptr<string> templateId{};
  shared_ptr<string> responseText{};
  shared_ptr<long> fetchCostUS{};
  shared_ptr<vector<string>> templateRules{};

  GetLogDetailResponseBody() {}

  explicit GetLogDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientPort) {
      res["ClientPort"] = boost::any(*clientPort);
    }
    if (appClientIp) {
      res["AppClientIp"] = boost::any(*appClientIp);
    }
    if (execCostUS) {
      res["ExecCostUS"] = boost::any(*execCostUS);
    }
    if (sessionLogoutTime) {
      res["SessionLogoutTime"] = boost::any(*sessionLogoutTime);
    }
    if (clientOsUser) {
      res["ClientOsUser"] = boost::any(*clientOsUser);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sqlId) {
      res["SqlId"] = boost::any(*sqlId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (appUsername) {
      res["AppUsername"] = boost::any(*appUsername);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (ruleKeyId) {
      res["RuleKeyId"] = boost::any(*ruleKeyId);
    }
    if (sqlResult) {
      res["SqlResult"] = boost::any(*sqlResult);
    }
    if (affectRows) {
      res["AffectRows"] = boost::any(*affectRows);
    }
    if (sqlTypeName) {
      res["SqlTypeName"] = boost::any(*sqlTypeName);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (sessionLoginTime) {
      res["SessionLoginTime"] = boost::any(*sessionLoginTime);
    }
    if (dbUser) {
      res["DbUser"] = boost::any(*dbUser);
    }
    if (serverMac) {
      res["ServerMac"] = boost::any(*serverMac);
    }
    if (dbServer) {
      res["DbServer"] = boost::any(*dbServer);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (sqlContent) {
      res["SqlContent"] = boost::any(*sqlContent);
    }
    if (instName) {
      res["InstName"] = boost::any(*instName);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (clientProgram) {
      res["ClientProgram"] = boost::any(*clientProgram);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientMac) {
      res["ClientMac"] = boost::any(*clientMac);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (responseText) {
      res["ResponseText"] = boost::any(*responseText);
    }
    if (fetchCostUS) {
      res["FetchCostUS"] = boost::any(*fetchCostUS);
    }
    if (templateRules) {
      res["TemplateRules"] = boost::any(*templateRules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientPort") != m.end() && !m["ClientPort"].empty()) {
      clientPort = make_shared<long>(boost::any_cast<long>(m["ClientPort"]));
    }
    if (m.find("AppClientIp") != m.end() && !m["AppClientIp"].empty()) {
      appClientIp = make_shared<string>(boost::any_cast<string>(m["AppClientIp"]));
    }
    if (m.find("ExecCostUS") != m.end() && !m["ExecCostUS"].empty()) {
      execCostUS = make_shared<long>(boost::any_cast<long>(m["ExecCostUS"]));
    }
    if (m.find("SessionLogoutTime") != m.end() && !m["SessionLogoutTime"].empty()) {
      sessionLogoutTime = make_shared<string>(boost::any_cast<string>(m["SessionLogoutTime"]));
    }
    if (m.find("ClientOsUser") != m.end() && !m["ClientOsUser"].empty()) {
      clientOsUser = make_shared<string>(boost::any_cast<string>(m["ClientOsUser"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SqlId") != m.end() && !m["SqlId"].empty()) {
      sqlId = make_shared<string>(boost::any_cast<string>(m["SqlId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("AppUsername") != m.end() && !m["AppUsername"].empty()) {
      appUsername = make_shared<string>(boost::any_cast<string>(m["AppUsername"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("RuleKeyId") != m.end() && !m["RuleKeyId"].empty()) {
      ruleKeyId = make_shared<long>(boost::any_cast<long>(m["RuleKeyId"]));
    }
    if (m.find("SqlResult") != m.end() && !m["SqlResult"].empty()) {
      sqlResult = make_shared<string>(boost::any_cast<string>(m["SqlResult"]));
    }
    if (m.find("AffectRows") != m.end() && !m["AffectRows"].empty()) {
      affectRows = make_shared<long>(boost::any_cast<long>(m["AffectRows"]));
    }
    if (m.find("SqlTypeName") != m.end() && !m["SqlTypeName"].empty()) {
      sqlTypeName = make_shared<string>(boost::any_cast<string>(m["SqlTypeName"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("SessionLoginTime") != m.end() && !m["SessionLoginTime"].empty()) {
      sessionLoginTime = make_shared<string>(boost::any_cast<string>(m["SessionLoginTime"]));
    }
    if (m.find("DbUser") != m.end() && !m["DbUser"].empty()) {
      dbUser = make_shared<string>(boost::any_cast<string>(m["DbUser"]));
    }
    if (m.find("ServerMac") != m.end() && !m["ServerMac"].empty()) {
      serverMac = make_shared<string>(boost::any_cast<string>(m["ServerMac"]));
    }
    if (m.find("DbServer") != m.end() && !m["DbServer"].empty()) {
      dbServer = make_shared<string>(boost::any_cast<string>(m["DbServer"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("SqlContent") != m.end() && !m["SqlContent"].empty()) {
      sqlContent = make_shared<string>(boost::any_cast<string>(m["SqlContent"]));
    }
    if (m.find("InstName") != m.end() && !m["InstName"].empty()) {
      instName = make_shared<string>(boost::any_cast<string>(m["InstName"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("ClientProgram") != m.end() && !m["ClientProgram"].empty()) {
      clientProgram = make_shared<string>(boost::any_cast<string>(m["ClientProgram"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<string>(boost::any_cast<string>(m["CaptureTime"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientMac") != m.end() && !m["ClientMac"].empty()) {
      clientMac = make_shared<string>(boost::any_cast<string>(m["ClientMac"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ResponseText") != m.end() && !m["ResponseText"].empty()) {
      responseText = make_shared<string>(boost::any_cast<string>(m["ResponseText"]));
    }
    if (m.find("FetchCostUS") != m.end() && !m["FetchCostUS"].empty()) {
      fetchCostUS = make_shared<long>(boost::any_cast<long>(m["FetchCostUS"]));
    }
    if (m.find("TemplateRules") != m.end() && !m["TemplateRules"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateRules"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateRules"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateRules = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetLogDetailResponseBody() = default;
};
class GetLogDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogDetailResponseBody> body{};

  GetLogDetailResponse() {}

  explicit GetLogDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogDetailResponse() = default;
};
class GetLogListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sqlId{};
  shared_ptr<string> sqlKey{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> isSuccess{};
  shared_ptr<long> minAffectRows{};
  shared_ptr<long> maxAffectRows{};
  shared_ptr<long> minExecCostUS{};
  shared_ptr<long> maxExecCostUS{};
  shared_ptr<string> ruleName{};
  shared_ptr<vector<string>> clientIpList{};
  shared_ptr<vector<string>> dbUserList{};
  shared_ptr<vector<string>> dbHostList{};
  shared_ptr<vector<string>> riskLevelList{};
  shared_ptr<vector<string>> ruleTypeList{};
  shared_ptr<vector<string>> sqlTypeList{};
  shared_ptr<vector<string>> clientProgramList{};

  GetLogListRequest() {}

  explicit GetLogListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sqlId) {
      res["SqlId"] = boost::any(*sqlId);
    }
    if (sqlKey) {
      res["SqlKey"] = boost::any(*sqlKey);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (minAffectRows) {
      res["MinAffectRows"] = boost::any(*minAffectRows);
    }
    if (maxAffectRows) {
      res["MaxAffectRows"] = boost::any(*maxAffectRows);
    }
    if (minExecCostUS) {
      res["MinExecCostUS"] = boost::any(*minExecCostUS);
    }
    if (maxExecCostUS) {
      res["MaxExecCostUS"] = boost::any(*maxExecCostUS);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (clientIpList) {
      res["ClientIpList"] = boost::any(*clientIpList);
    }
    if (dbUserList) {
      res["DbUserList"] = boost::any(*dbUserList);
    }
    if (dbHostList) {
      res["DbHostList"] = boost::any(*dbHostList);
    }
    if (riskLevelList) {
      res["RiskLevelList"] = boost::any(*riskLevelList);
    }
    if (ruleTypeList) {
      res["RuleTypeList"] = boost::any(*ruleTypeList);
    }
    if (sqlTypeList) {
      res["SqlTypeList"] = boost::any(*sqlTypeList);
    }
    if (clientProgramList) {
      res["ClientProgramList"] = boost::any(*clientProgramList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SqlId") != m.end() && !m["SqlId"].empty()) {
      sqlId = make_shared<string>(boost::any_cast<string>(m["SqlId"]));
    }
    if (m.find("SqlKey") != m.end() && !m["SqlKey"].empty()) {
      sqlKey = make_shared<string>(boost::any_cast<string>(m["SqlKey"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<string>(boost::any_cast<string>(m["IsSuccess"]));
    }
    if (m.find("MinAffectRows") != m.end() && !m["MinAffectRows"].empty()) {
      minAffectRows = make_shared<long>(boost::any_cast<long>(m["MinAffectRows"]));
    }
    if (m.find("MaxAffectRows") != m.end() && !m["MaxAffectRows"].empty()) {
      maxAffectRows = make_shared<long>(boost::any_cast<long>(m["MaxAffectRows"]));
    }
    if (m.find("MinExecCostUS") != m.end() && !m["MinExecCostUS"].empty()) {
      minExecCostUS = make_shared<long>(boost::any_cast<long>(m["MinExecCostUS"]));
    }
    if (m.find("MaxExecCostUS") != m.end() && !m["MaxExecCostUS"].empty()) {
      maxExecCostUS = make_shared<long>(boost::any_cast<long>(m["MaxExecCostUS"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("ClientIpList") != m.end() && !m["ClientIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbUserList") != m.end() && !m["DbUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbHostList") != m.end() && !m["DbHostList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbHostList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbHostList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbHostList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevelList") != m.end() && !m["RiskLevelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RiskLevelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RiskLevelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      riskLevelList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RuleTypeList") != m.end() && !m["RuleTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SqlTypeList") != m.end() && !m["SqlTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SqlTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SqlTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sqlTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientProgramList") != m.end() && !m["ClientProgramList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientProgramList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientProgramList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientProgramList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetLogListRequest() = default;
};
class GetLogListResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<long> clientPort{};
  shared_ptr<long> execCostUS{};
  shared_ptr<string> appClientIp{};
  shared_ptr<string> sessionLogoutTime{};
  shared_ptr<string> clientOsUser{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> sqlId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sqlType{};
  shared_ptr<long> riskLevel{};
  shared_ptr<string> appUsername{};
  shared_ptr<long> dbId{};
  shared_ptr<long> ruleType{};
  shared_ptr<long> ruleKeyId{};
  shared_ptr<long> affectRows{};
  shared_ptr<string> schema{};
  shared_ptr<string> sessionLoginTime{};
  shared_ptr<string> dbUser{};
  shared_ptr<string> serverMac{};
  shared_ptr<string> dbServer{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> sqlContent{};
  shared_ptr<string> responseCode{};
  shared_ptr<string> instName{};
  shared_ptr<string> clientProgram{};
  shared_ptr<string> captureTime{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientMac{};
  shared_ptr<string> templateId{};
  shared_ptr<long> fetchCostUS{};
  shared_ptr<string> responseText{};

  GetLogListResponseBodyResults() {}

  explicit GetLogListResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientPort) {
      res["ClientPort"] = boost::any(*clientPort);
    }
    if (execCostUS) {
      res["ExecCostUS"] = boost::any(*execCostUS);
    }
    if (appClientIp) {
      res["AppClientIp"] = boost::any(*appClientIp);
    }
    if (sessionLogoutTime) {
      res["SessionLogoutTime"] = boost::any(*sessionLogoutTime);
    }
    if (clientOsUser) {
      res["ClientOsUser"] = boost::any(*clientOsUser);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (sqlId) {
      res["SqlId"] = boost::any(*sqlId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (appUsername) {
      res["AppUsername"] = boost::any(*appUsername);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (ruleKeyId) {
      res["RuleKeyId"] = boost::any(*ruleKeyId);
    }
    if (affectRows) {
      res["AffectRows"] = boost::any(*affectRows);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (sessionLoginTime) {
      res["SessionLoginTime"] = boost::any(*sessionLoginTime);
    }
    if (dbUser) {
      res["DbUser"] = boost::any(*dbUser);
    }
    if (serverMac) {
      res["ServerMac"] = boost::any(*serverMac);
    }
    if (dbServer) {
      res["DbServer"] = boost::any(*dbServer);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (sqlContent) {
      res["SqlContent"] = boost::any(*sqlContent);
    }
    if (responseCode) {
      res["ResponseCode"] = boost::any(*responseCode);
    }
    if (instName) {
      res["InstName"] = boost::any(*instName);
    }
    if (clientProgram) {
      res["ClientProgram"] = boost::any(*clientProgram);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientMac) {
      res["ClientMac"] = boost::any(*clientMac);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (fetchCostUS) {
      res["FetchCostUS"] = boost::any(*fetchCostUS);
    }
    if (responseText) {
      res["ResponseText"] = boost::any(*responseText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientPort") != m.end() && !m["ClientPort"].empty()) {
      clientPort = make_shared<long>(boost::any_cast<long>(m["ClientPort"]));
    }
    if (m.find("ExecCostUS") != m.end() && !m["ExecCostUS"].empty()) {
      execCostUS = make_shared<long>(boost::any_cast<long>(m["ExecCostUS"]));
    }
    if (m.find("AppClientIp") != m.end() && !m["AppClientIp"].empty()) {
      appClientIp = make_shared<string>(boost::any_cast<string>(m["AppClientIp"]));
    }
    if (m.find("SessionLogoutTime") != m.end() && !m["SessionLogoutTime"].empty()) {
      sessionLogoutTime = make_shared<string>(boost::any_cast<string>(m["SessionLogoutTime"]));
    }
    if (m.find("ClientOsUser") != m.end() && !m["ClientOsUser"].empty()) {
      clientOsUser = make_shared<string>(boost::any_cast<string>(m["ClientOsUser"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("SqlId") != m.end() && !m["SqlId"].empty()) {
      sqlId = make_shared<string>(boost::any_cast<string>(m["SqlId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("AppUsername") != m.end() && !m["AppUsername"].empty()) {
      appUsername = make_shared<string>(boost::any_cast<string>(m["AppUsername"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("RuleKeyId") != m.end() && !m["RuleKeyId"].empty()) {
      ruleKeyId = make_shared<long>(boost::any_cast<long>(m["RuleKeyId"]));
    }
    if (m.find("AffectRows") != m.end() && !m["AffectRows"].empty()) {
      affectRows = make_shared<long>(boost::any_cast<long>(m["AffectRows"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("SessionLoginTime") != m.end() && !m["SessionLoginTime"].empty()) {
      sessionLoginTime = make_shared<string>(boost::any_cast<string>(m["SessionLoginTime"]));
    }
    if (m.find("DbUser") != m.end() && !m["DbUser"].empty()) {
      dbUser = make_shared<string>(boost::any_cast<string>(m["DbUser"]));
    }
    if (m.find("ServerMac") != m.end() && !m["ServerMac"].empty()) {
      serverMac = make_shared<string>(boost::any_cast<string>(m["ServerMac"]));
    }
    if (m.find("DbServer") != m.end() && !m["DbServer"].empty()) {
      dbServer = make_shared<string>(boost::any_cast<string>(m["DbServer"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SqlContent") != m.end() && !m["SqlContent"].empty()) {
      sqlContent = make_shared<string>(boost::any_cast<string>(m["SqlContent"]));
    }
    if (m.find("ResponseCode") != m.end() && !m["ResponseCode"].empty()) {
      responseCode = make_shared<string>(boost::any_cast<string>(m["ResponseCode"]));
    }
    if (m.find("InstName") != m.end() && !m["InstName"].empty()) {
      instName = make_shared<string>(boost::any_cast<string>(m["InstName"]));
    }
    if (m.find("ClientProgram") != m.end() && !m["ClientProgram"].empty()) {
      clientProgram = make_shared<string>(boost::any_cast<string>(m["ClientProgram"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<string>(boost::any_cast<string>(m["CaptureTime"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientMac") != m.end() && !m["ClientMac"].empty()) {
      clientMac = make_shared<string>(boost::any_cast<string>(m["ClientMac"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("FetchCostUS") != m.end() && !m["FetchCostUS"].empty()) {
      fetchCostUS = make_shared<long>(boost::any_cast<long>(m["FetchCostUS"]));
    }
    if (m.find("ResponseText") != m.end() && !m["ResponseText"].empty()) {
      responseText = make_shared<string>(boost::any_cast<string>(m["ResponseText"]));
    }
  }


  virtual ~GetLogListResponseBodyResults() = default;
};
class GetLogListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> incomplete{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<GetLogListResponseBodyResults>> results{};

  GetLogListResponseBody() {}

  explicit GetLogListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (incomplete) {
      res["Incomplete"] = boost::any(*incomplete);
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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("Incomplete") != m.end() && !m["Incomplete"].empty()) {
      incomplete = make_shared<string>(boost::any_cast<string>(m["Incomplete"]));
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
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<GetLogListResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLogListResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<GetLogListResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~GetLogListResponseBody() = default;
};
class GetLogListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogListResponseBody> body{};

  GetLogListResponse() {}

  explicit GetLogListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogListResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogListResponse() = default;
};
class GetLogMaskConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> maskName{};
  shared_ptr<long> maskType{};
  shared_ptr<long> maskState{};

  GetLogMaskConfigsRequest() {}

  explicit GetLogMaskConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maskName) {
      res["MaskName"] = boost::any(*maskName);
    }
    if (maskType) {
      res["MaskType"] = boost::any(*maskType);
    }
    if (maskState) {
      res["MaskState"] = boost::any(*maskState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaskName") != m.end() && !m["MaskName"].empty()) {
      maskName = make_shared<string>(boost::any_cast<string>(m["MaskName"]));
    }
    if (m.find("MaskType") != m.end() && !m["MaskType"].empty()) {
      maskType = make_shared<long>(boost::any_cast<long>(m["MaskType"]));
    }
    if (m.find("MaskState") != m.end() && !m["MaskState"].empty()) {
      maskState = make_shared<long>(boost::any_cast<long>(m["MaskState"]));
    }
  }


  virtual ~GetLogMaskConfigsRequest() = default;
};
class GetLogMaskConfigsResponseBodyConfigs : public Darabonba::Model {
public:
  shared_ptr<string> maskDescription{};
  shared_ptr<long> maskState{};
  shared_ptr<string> maskName{};
  shared_ptr<string> maskRegex{};
  shared_ptr<string> maskTxt{};
  shared_ptr<long> maskId{};
  shared_ptr<long> maskType{};

  GetLogMaskConfigsResponseBodyConfigs() {}

  explicit GetLogMaskConfigsResponseBodyConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maskDescription) {
      res["MaskDescription"] = boost::any(*maskDescription);
    }
    if (maskState) {
      res["MaskState"] = boost::any(*maskState);
    }
    if (maskName) {
      res["MaskName"] = boost::any(*maskName);
    }
    if (maskRegex) {
      res["MaskRegex"] = boost::any(*maskRegex);
    }
    if (maskTxt) {
      res["MaskTxt"] = boost::any(*maskTxt);
    }
    if (maskId) {
      res["MaskId"] = boost::any(*maskId);
    }
    if (maskType) {
      res["MaskType"] = boost::any(*maskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaskDescription") != m.end() && !m["MaskDescription"].empty()) {
      maskDescription = make_shared<string>(boost::any_cast<string>(m["MaskDescription"]));
    }
    if (m.find("MaskState") != m.end() && !m["MaskState"].empty()) {
      maskState = make_shared<long>(boost::any_cast<long>(m["MaskState"]));
    }
    if (m.find("MaskName") != m.end() && !m["MaskName"].empty()) {
      maskName = make_shared<string>(boost::any_cast<string>(m["MaskName"]));
    }
    if (m.find("MaskRegex") != m.end() && !m["MaskRegex"].empty()) {
      maskRegex = make_shared<string>(boost::any_cast<string>(m["MaskRegex"]));
    }
    if (m.find("MaskTxt") != m.end() && !m["MaskTxt"].empty()) {
      maskTxt = make_shared<string>(boost::any_cast<string>(m["MaskTxt"]));
    }
    if (m.find("MaskId") != m.end() && !m["MaskId"].empty()) {
      maskId = make_shared<long>(boost::any_cast<long>(m["MaskId"]));
    }
    if (m.find("MaskType") != m.end() && !m["MaskType"].empty()) {
      maskType = make_shared<long>(boost::any_cast<long>(m["MaskType"]));
    }
  }


  virtual ~GetLogMaskConfigsResponseBodyConfigs() = default;
};
class GetLogMaskConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetLogMaskConfigsResponseBodyConfigs>> configs{};

  GetLogMaskConfigsResponseBody() {}

  explicit GetLogMaskConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<GetLogMaskConfigsResponseBodyConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLogMaskConfigsResponseBodyConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<GetLogMaskConfigsResponseBodyConfigs>>(expect1);
      }
    }
  }


  virtual ~GetLogMaskConfigsResponseBody() = default;
};
class GetLogMaskConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogMaskConfigsResponseBody> body{};

  GetLogMaskConfigsResponse() {}

  explicit GetLogMaskConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogMaskConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogMaskConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogMaskConfigsResponse() = default;
};
class GetLogQueryConditionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> isRisk{};
  shared_ptr<string> isSuccess{};

  GetLogQueryConditionRequest() {}

  explicit GetLogQueryConditionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (isRisk) {
      res["IsRisk"] = boost::any(*isRisk);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("IsRisk") != m.end() && !m["IsRisk"].empty()) {
      isRisk = make_shared<string>(boost::any_cast<string>(m["IsRisk"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<string>(boost::any_cast<string>(m["IsSuccess"]));
    }
  }


  virtual ~GetLogQueryConditionRequest() = default;
};
class GetLogQueryConditionResponseBodySqlTypeList : public Darabonba::Model {
public:
  shared_ptr<string> sqlKeyword{};
  shared_ptr<string> sqlType{};

  GetLogQueryConditionResponseBodySqlTypeList() {}

  explicit GetLogQueryConditionResponseBodySqlTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sqlKeyword) {
      res["SqlKeyword"] = boost::any(*sqlKeyword);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SqlKeyword") != m.end() && !m["SqlKeyword"].empty()) {
      sqlKeyword = make_shared<string>(boost::any_cast<string>(m["SqlKeyword"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
  }


  virtual ~GetLogQueryConditionResponseBodySqlTypeList() = default;
};
class GetLogQueryConditionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> dbUserList{};
  shared_ptr<vector<string>> clientIpList{};
  shared_ptr<vector<string>> clientProgramList{};
  shared_ptr<vector<string>> dbServerList{};
  shared_ptr<vector<GetLogQueryConditionResponseBodySqlTypeList>> sqlTypeList{};

  GetLogQueryConditionResponseBody() {}

  explicit GetLogQueryConditionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbUserList) {
      res["DbUserList"] = boost::any(*dbUserList);
    }
    if (clientIpList) {
      res["ClientIpList"] = boost::any(*clientIpList);
    }
    if (clientProgramList) {
      res["ClientProgramList"] = boost::any(*clientProgramList);
    }
    if (dbServerList) {
      res["DbServerList"] = boost::any(*dbServerList);
    }
    if (sqlTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*sqlTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SqlTypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbUserList") != m.end() && !m["DbUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientIpList") != m.end() && !m["ClientIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientProgramList") != m.end() && !m["ClientProgramList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientProgramList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientProgramList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientProgramList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbServerList") != m.end() && !m["DbServerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbServerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbServerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbServerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SqlTypeList") != m.end() && !m["SqlTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["SqlTypeList"].type()) {
        vector<GetLogQueryConditionResponseBodySqlTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SqlTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLogQueryConditionResponseBodySqlTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sqlTypeList = make_shared<vector<GetLogQueryConditionResponseBodySqlTypeList>>(expect1);
      }
    }
  }


  virtual ~GetLogQueryConditionResponseBody() = default;
};
class GetLogQueryConditionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogQueryConditionResponseBody> body{};

  GetLogQueryConditionResponse() {}

  explicit GetLogQueryConditionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogQueryConditionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogQueryConditionResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogQueryConditionResponse() = default;
};
class GetLogStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<long> byDbId{};
  shared_ptr<long> byClientIp{};
  shared_ptr<long> byDbUser{};
  shared_ptr<long> byDbServer{};
  shared_ptr<long> byClientProgram{};
  shared_ptr<long> bySqlType{};

  GetLogStatisticsRequest() {}

  explicit GetLogStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (byDbId) {
      res["ByDbId"] = boost::any(*byDbId);
    }
    if (byClientIp) {
      res["ByClientIp"] = boost::any(*byClientIp);
    }
    if (byDbUser) {
      res["ByDbUser"] = boost::any(*byDbUser);
    }
    if (byDbServer) {
      res["ByDbServer"] = boost::any(*byDbServer);
    }
    if (byClientProgram) {
      res["ByClientProgram"] = boost::any(*byClientProgram);
    }
    if (bySqlType) {
      res["BySqlType"] = boost::any(*bySqlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ByDbId") != m.end() && !m["ByDbId"].empty()) {
      byDbId = make_shared<long>(boost::any_cast<long>(m["ByDbId"]));
    }
    if (m.find("ByClientIp") != m.end() && !m["ByClientIp"].empty()) {
      byClientIp = make_shared<long>(boost::any_cast<long>(m["ByClientIp"]));
    }
    if (m.find("ByDbUser") != m.end() && !m["ByDbUser"].empty()) {
      byDbUser = make_shared<long>(boost::any_cast<long>(m["ByDbUser"]));
    }
    if (m.find("ByDbServer") != m.end() && !m["ByDbServer"].empty()) {
      byDbServer = make_shared<long>(boost::any_cast<long>(m["ByDbServer"]));
    }
    if (m.find("ByClientProgram") != m.end() && !m["ByClientProgram"].empty()) {
      byClientProgram = make_shared<long>(boost::any_cast<long>(m["ByClientProgram"]));
    }
    if (m.find("BySqlType") != m.end() && !m["BySqlType"].empty()) {
      bySqlType = make_shared<long>(boost::any_cast<long>(m["BySqlType"]));
    }
  }


  virtual ~GetLogStatisticsRequest() = default;
};
class GetLogStatisticsResponseBodyCountList : public Darabonba::Model {
public:
  shared_ptr<string> sqlKeyword{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> clientProgram{};
  shared_ptr<string> dbUser{};
  shared_ptr<string> clientIp{};
  shared_ptr<long> sqlCount{};
  shared_ptr<long> riskCount{};
  shared_ptr<string> dbServer{};
  shared_ptr<string> sqlType{};

  GetLogStatisticsResponseBodyCountList() {}

  explicit GetLogStatisticsResponseBodyCountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sqlKeyword) {
      res["SqlKeyword"] = boost::any(*sqlKeyword);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (clientProgram) {
      res["ClientProgram"] = boost::any(*clientProgram);
    }
    if (dbUser) {
      res["DbUser"] = boost::any(*dbUser);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (dbServer) {
      res["DbServer"] = boost::any(*dbServer);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SqlKeyword") != m.end() && !m["SqlKeyword"].empty()) {
      sqlKeyword = make_shared<string>(boost::any_cast<string>(m["SqlKeyword"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("ClientProgram") != m.end() && !m["ClientProgram"].empty()) {
      clientProgram = make_shared<string>(boost::any_cast<string>(m["ClientProgram"]));
    }
    if (m.find("DbUser") != m.end() && !m["DbUser"].empty()) {
      dbUser = make_shared<string>(boost::any_cast<string>(m["DbUser"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("DbServer") != m.end() && !m["DbServer"].empty()) {
      dbServer = make_shared<string>(boost::any_cast<string>(m["DbServer"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
  }


  virtual ~GetLogStatisticsResponseBodyCountList() = default;
};
class GetLogStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetLogStatisticsResponseBodyCountList>> countList{};

  GetLogStatisticsResponseBody() {}

  explicit GetLogStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (countList) {
      vector<boost::any> temp1;
      for(auto item1:*countList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CountList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CountList") != m.end() && !m["CountList"].empty()) {
      if (typeid(vector<boost::any>) == m["CountList"].type()) {
        vector<GetLogStatisticsResponseBodyCountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLogStatisticsResponseBodyCountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        countList = make_shared<vector<GetLogStatisticsResponseBodyCountList>>(expect1);
      }
    }
  }


  virtual ~GetLogStatisticsResponseBody() = default;
};
class GetLogStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogStatisticsResponseBody> body{};

  GetLogStatisticsResponse() {}

  explicit GetLogStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogStatisticsResponse() = default;
};
class GetLogTopDistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetLogTopDistributionRequest() {}

  explicit GetLogTopDistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetLogTopDistributionRequest() = default;
};
class GetLogTopDistributionResponseBodyTimeList : public Darabonba::Model {
public:
  shared_ptr<string> beginDate{};
  shared_ptr<long> sqlCount{};
  shared_ptr<string> endDate{};
  shared_ptr<string> topTime{};

  GetLogTopDistributionResponseBodyTimeList() {}

  explicit GetLogTopDistributionResponseBodyTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (topTime) {
      res["TopTime"] = boost::any(*topTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("TopTime") != m.end() && !m["TopTime"].empty()) {
      topTime = make_shared<string>(boost::any_cast<string>(m["TopTime"]));
    }
  }


  virtual ~GetLogTopDistributionResponseBodyTimeList() = default;
};
class GetLogTopDistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetLogTopDistributionResponseBodyTimeList>> timeList{};

  GetLogTopDistributionResponseBody() {}

  explicit GetLogTopDistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeList) {
      vector<boost::any> temp1;
      for(auto item1:*timeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeList") != m.end() && !m["TimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeList"].type()) {
        vector<GetLogTopDistributionResponseBodyTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLogTopDistributionResponseBodyTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeList = make_shared<vector<GetLogTopDistributionResponseBodyTimeList>>(expect1);
      }
    }
  }


  virtual ~GetLogTopDistributionResponseBody() = default;
};
class GetLogTopDistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogTopDistributionResponseBody> body{};

  GetLogTopDistributionResponse() {}

  explicit GetLogTopDistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogTopDistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogTopDistributionResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogTopDistributionResponse() = default;
};
class GetLogTopStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> topTime{};

  GetLogTopStatisticsRequest() {}

  explicit GetLogTopStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (topTime) {
      res["TopTime"] = boost::any(*topTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("TopTime") != m.end() && !m["TopTime"].empty()) {
      topTime = make_shared<string>(boost::any_cast<string>(m["TopTime"]));
    }
  }


  virtual ~GetLogTopStatisticsRequest() = default;
};
class GetLogTopStatisticsResponseBodyCountList : public Darabonba::Model {
public:
  shared_ptr<string> clientIp{};
  shared_ptr<string> dbUser{};
  shared_ptr<long> sqlCount{};
  shared_ptr<string> clientProgram{};

  GetLogTopStatisticsResponseBodyCountList() {}

  explicit GetLogTopStatisticsResponseBodyCountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (dbUser) {
      res["DbUser"] = boost::any(*dbUser);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (clientProgram) {
      res["ClientProgram"] = boost::any(*clientProgram);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("DbUser") != m.end() && !m["DbUser"].empty()) {
      dbUser = make_shared<string>(boost::any_cast<string>(m["DbUser"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("ClientProgram") != m.end() && !m["ClientProgram"].empty()) {
      clientProgram = make_shared<string>(boost::any_cast<string>(m["ClientProgram"]));
    }
  }


  virtual ~GetLogTopStatisticsResponseBodyCountList() = default;
};
class GetLogTopStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetLogTopStatisticsResponseBodyCountList>> countList{};

  GetLogTopStatisticsResponseBody() {}

  explicit GetLogTopStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (countList) {
      vector<boost::any> temp1;
      for(auto item1:*countList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CountList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CountList") != m.end() && !m["CountList"].empty()) {
      if (typeid(vector<boost::any>) == m["CountList"].type()) {
        vector<GetLogTopStatisticsResponseBodyCountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLogTopStatisticsResponseBodyCountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        countList = make_shared<vector<GetLogTopStatisticsResponseBodyCountList>>(expect1);
      }
    }
  }


  virtual ~GetLogTopStatisticsResponseBody() = default;
};
class GetLogTopStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogTopStatisticsResponseBody> body{};

  GetLogTopStatisticsResponse() {}

  explicit GetLogTopStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogTopStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogTopStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogTopStatisticsResponse() = default;
};
class GetLogTypeDistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetLogTypeDistributionRequest() {}

  explicit GetLogTypeDistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetLogTypeDistributionRequest() = default;
};
class GetLogTypeDistributionResponseBodyTimeList : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> execCostUS{};
  shared_ptr<long> insertSqlCount{};
  shared_ptr<long> selectSqlCount{};
  shared_ptr<long> deleteSqlCount{};
  shared_ptr<string> beginDate{};
  shared_ptr<long> otherSqlCount{};
  shared_ptr<long> sqlCount{};
  shared_ptr<long> updateSqlCount{};

  GetLogTypeDistributionResponseBodyTimeList() {}

  explicit GetLogTypeDistributionResponseBodyTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (execCostUS) {
      res["ExecCostUS"] = boost::any(*execCostUS);
    }
    if (insertSqlCount) {
      res["InsertSqlCount"] = boost::any(*insertSqlCount);
    }
    if (selectSqlCount) {
      res["SelectSqlCount"] = boost::any(*selectSqlCount);
    }
    if (deleteSqlCount) {
      res["DeleteSqlCount"] = boost::any(*deleteSqlCount);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (otherSqlCount) {
      res["OtherSqlCount"] = boost::any(*otherSqlCount);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (updateSqlCount) {
      res["UpdateSqlCount"] = boost::any(*updateSqlCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ExecCostUS") != m.end() && !m["ExecCostUS"].empty()) {
      execCostUS = make_shared<string>(boost::any_cast<string>(m["ExecCostUS"]));
    }
    if (m.find("InsertSqlCount") != m.end() && !m["InsertSqlCount"].empty()) {
      insertSqlCount = make_shared<long>(boost::any_cast<long>(m["InsertSqlCount"]));
    }
    if (m.find("SelectSqlCount") != m.end() && !m["SelectSqlCount"].empty()) {
      selectSqlCount = make_shared<long>(boost::any_cast<long>(m["SelectSqlCount"]));
    }
    if (m.find("DeleteSqlCount") != m.end() && !m["DeleteSqlCount"].empty()) {
      deleteSqlCount = make_shared<long>(boost::any_cast<long>(m["DeleteSqlCount"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("OtherSqlCount") != m.end() && !m["OtherSqlCount"].empty()) {
      otherSqlCount = make_shared<long>(boost::any_cast<long>(m["OtherSqlCount"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("UpdateSqlCount") != m.end() && !m["UpdateSqlCount"].empty()) {
      updateSqlCount = make_shared<long>(boost::any_cast<long>(m["UpdateSqlCount"]));
    }
  }


  virtual ~GetLogTypeDistributionResponseBodyTimeList() = default;
};
class GetLogTypeDistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetLogTypeDistributionResponseBodyTimeList>> timeList{};

  GetLogTypeDistributionResponseBody() {}

  explicit GetLogTypeDistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeList) {
      vector<boost::any> temp1;
      for(auto item1:*timeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeList") != m.end() && !m["TimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeList"].type()) {
        vector<GetLogTypeDistributionResponseBodyTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLogTypeDistributionResponseBodyTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeList = make_shared<vector<GetLogTypeDistributionResponseBodyTimeList>>(expect1);
      }
    }
  }


  virtual ~GetLogTypeDistributionResponseBody() = default;
};
class GetLogTypeDistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogTypeDistributionResponseBody> body{};

  GetLogTypeDistributionResponse() {}

  explicit GetLogTypeDistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogTypeDistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogTypeDistributionResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogTypeDistributionResponse() = default;
};
class GetNewSqlTemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> templateId{};

  GetNewSqlTemplateListRequest() {}

  explicit GetNewSqlTemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~GetNewSqlTemplateListRequest() = default;
};
class GetNewSqlTemplateListResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateId{};
  shared_ptr<string> firstCaptureTime{};

  GetNewSqlTemplateListResponseBodyResults() {}

  explicit GetNewSqlTemplateListResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (firstCaptureTime) {
      res["FirstCaptureTime"] = boost::any(*firstCaptureTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("FirstCaptureTime") != m.end() && !m["FirstCaptureTime"].empty()) {
      firstCaptureTime = make_shared<string>(boost::any_cast<string>(m["FirstCaptureTime"]));
    }
  }


  virtual ~GetNewSqlTemplateListResponseBodyResults() = default;
};
class GetNewSqlTemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<GetNewSqlTemplateListResponseBodyResults>> results{};

  GetNewSqlTemplateListResponseBody() {}

  explicit GetNewSqlTemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<GetNewSqlTemplateListResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNewSqlTemplateListResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<GetNewSqlTemplateListResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~GetNewSqlTemplateListResponseBody() = default;
};
class GetNewSqlTemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNewSqlTemplateListResponseBody> body{};

  GetNewSqlTemplateListResponse() {}

  explicit GetNewSqlTemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNewSqlTemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNewSqlTemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~GetNewSqlTemplateListResponse() = default;
};
class GetReportFileUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> fileName{};

  GetReportFileUrlRequest() {}

  explicit GetReportFileUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~GetReportFileUrlRequest() = default;
};
class GetReportFileUrlResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};

  GetReportFileUrlResponseBodyServerData() {}

  explicit GetReportFileUrlResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
  }


  virtual ~GetReportFileUrlResponseBodyServerData() = default;
};
class GetReportFileUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetReportFileUrlResponseBodyServerData> serverData{};

  GetReportFileUrlResponseBody() {}

  explicit GetReportFileUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        GetReportFileUrlResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<GetReportFileUrlResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~GetReportFileUrlResponseBody() = default;
};
class GetReportFileUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetReportFileUrlResponseBody> body{};

  GetReportFileUrlResponse() {}

  explicit GetReportFileUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReportFileUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReportFileUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetReportFileUrlResponse() = default;
};
class GetRiskLevelDistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetRiskLevelDistributionRequest() {}

  explicit GetRiskLevelDistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetRiskLevelDistributionRequest() = default;
};
class GetRiskLevelDistributionResponseBodyTimeList : public Darabonba::Model {
public:
  shared_ptr<long> middleRiskCount{};
  shared_ptr<long> highRiskCount{};
  shared_ptr<string> endDate{};
  shared_ptr<string> beginDate{};
  shared_ptr<long> riskCount{};
  shared_ptr<long> lowRiskCount{};

  GetRiskLevelDistributionResponseBodyTimeList() {}

  explicit GetRiskLevelDistributionResponseBodyTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (middleRiskCount) {
      res["MiddleRiskCount"] = boost::any(*middleRiskCount);
    }
    if (highRiskCount) {
      res["HighRiskCount"] = boost::any(*highRiskCount);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (lowRiskCount) {
      res["LowRiskCount"] = boost::any(*lowRiskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MiddleRiskCount") != m.end() && !m["MiddleRiskCount"].empty()) {
      middleRiskCount = make_shared<long>(boost::any_cast<long>(m["MiddleRiskCount"]));
    }
    if (m.find("HighRiskCount") != m.end() && !m["HighRiskCount"].empty()) {
      highRiskCount = make_shared<long>(boost::any_cast<long>(m["HighRiskCount"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("LowRiskCount") != m.end() && !m["LowRiskCount"].empty()) {
      lowRiskCount = make_shared<long>(boost::any_cast<long>(m["LowRiskCount"]));
    }
  }


  virtual ~GetRiskLevelDistributionResponseBodyTimeList() = default;
};
class GetRiskLevelDistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetRiskLevelDistributionResponseBodyTimeList>> timeList{};

  GetRiskLevelDistributionResponseBody() {}

  explicit GetRiskLevelDistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeList) {
      vector<boost::any> temp1;
      for(auto item1:*timeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeList") != m.end() && !m["TimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeList"].type()) {
        vector<GetRiskLevelDistributionResponseBodyTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRiskLevelDistributionResponseBodyTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeList = make_shared<vector<GetRiskLevelDistributionResponseBodyTimeList>>(expect1);
      }
    }
  }


  virtual ~GetRiskLevelDistributionResponseBody() = default;
};
class GetRiskLevelDistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRiskLevelDistributionResponseBody> body{};

  GetRiskLevelDistributionResponse() {}

  explicit GetRiskLevelDistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRiskLevelDistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRiskLevelDistributionResponseBody>(model1);
      }
    }
  }


  virtual ~GetRiskLevelDistributionResponse() = default;
};
class GetRiskStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<long> byDbId{};
  shared_ptr<long> byRiskLevel{};
  shared_ptr<long> byRuleType{};
  shared_ptr<long> byRuleId{};

  GetRiskStatisticsRequest() {}

  explicit GetRiskStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (byDbId) {
      res["ByDbId"] = boost::any(*byDbId);
    }
    if (byRiskLevel) {
      res["ByRiskLevel"] = boost::any(*byRiskLevel);
    }
    if (byRuleType) {
      res["ByRuleType"] = boost::any(*byRuleType);
    }
    if (byRuleId) {
      res["ByRuleId"] = boost::any(*byRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ByDbId") != m.end() && !m["ByDbId"].empty()) {
      byDbId = make_shared<long>(boost::any_cast<long>(m["ByDbId"]));
    }
    if (m.find("ByRiskLevel") != m.end() && !m["ByRiskLevel"].empty()) {
      byRiskLevel = make_shared<long>(boost::any_cast<long>(m["ByRiskLevel"]));
    }
    if (m.find("ByRuleType") != m.end() && !m["ByRuleType"].empty()) {
      byRuleType = make_shared<long>(boost::any_cast<long>(m["ByRuleType"]));
    }
    if (m.find("ByRuleId") != m.end() && !m["ByRuleId"].empty()) {
      byRuleId = make_shared<long>(boost::any_cast<long>(m["ByRuleId"]));
    }
  }


  virtual ~GetRiskStatisticsRequest() = default;
};
class GetRiskStatisticsResponseBodyTimeList : public Darabonba::Model {
public:
  shared_ptr<long> riskLevel{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<long> ruleType{};
  shared_ptr<string> lastCaptureTime{};
  shared_ptr<long> riskCount{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};

  GetRiskStatisticsResponseBodyTimeList() {}

  explicit GetRiskStatisticsResponseBodyTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (lastCaptureTime) {
      res["LastCaptureTime"] = boost::any(*lastCaptureTime);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("LastCaptureTime") != m.end() && !m["LastCaptureTime"].empty()) {
      lastCaptureTime = make_shared<string>(boost::any_cast<string>(m["LastCaptureTime"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~GetRiskStatisticsResponseBodyTimeList() = default;
};
class GetRiskStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetRiskStatisticsResponseBodyTimeList>> timeList{};

  GetRiskStatisticsResponseBody() {}

  explicit GetRiskStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeList) {
      vector<boost::any> temp1;
      for(auto item1:*timeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeList") != m.end() && !m["TimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeList"].type()) {
        vector<GetRiskStatisticsResponseBodyTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRiskStatisticsResponseBodyTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeList = make_shared<vector<GetRiskStatisticsResponseBodyTimeList>>(expect1);
      }
    }
  }


  virtual ~GetRiskStatisticsResponseBody() = default;
};
class GetRiskStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRiskStatisticsResponseBody> body{};

  GetRiskStatisticsResponse() {}

  explicit GetRiskStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRiskStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRiskStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRiskStatisticsResponse() = default;
};
class GetRuleDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> ruleKeyId{};
  shared_ptr<long> dbId{};

  GetRuleDetailRequest() {}

  explicit GetRuleDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleKeyId) {
      res["RuleKeyId"] = boost::any(*ruleKeyId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleKeyId") != m.end() && !m["RuleKeyId"].empty()) {
      ruleKeyId = make_shared<long>(boost::any_cast<long>(m["RuleKeyId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
  }


  virtual ~GetRuleDetailRequest() = default;
};
class GetRuleDetailResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> jsonResult{};

  GetRuleDetailResponseBodyServerData() {}

  explicit GetRuleDetailResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonResult) {
      res["JsonResult"] = boost::any(*jsonResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonResult") != m.end() && !m["JsonResult"].empty()) {
      jsonResult = make_shared<string>(boost::any_cast<string>(m["JsonResult"]));
    }
  }


  virtual ~GetRuleDetailResponseBodyServerData() = default;
};
class GetRuleDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRuleDetailResponseBodyServerData> serverData{};

  GetRuleDetailResponseBody() {}

  explicit GetRuleDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        GetRuleDetailResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<GetRuleDetailResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponseBody() = default;
};
class GetRuleDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRuleDetailResponseBody> body{};

  GetRuleDetailResponse() {}

  explicit GetRuleDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleDetailResponse() = default;
};
class GetRuleGroupNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};

  GetRuleGroupNameRequest() {}

  explicit GetRuleGroupNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
  }


  virtual ~GetRuleGroupNameRequest() = default;
};
class GetRuleGroupNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  GetRuleGroupNameResponseBody() {}

  explicit GetRuleGroupNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRuleGroupNameResponseBody() = default;
};
class GetRuleGroupNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRuleGroupNameResponseBody> body{};

  GetRuleGroupNameResponse() {}

  explicit GetRuleGroupNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleGroupNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleGroupNameResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleGroupNameResponse() = default;
};
class GetSessionDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sessionId{};

  GetSessionDetailRequest() {}

  explicit GetSessionDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~GetSessionDetailRequest() = default;
};
class GetSessionDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loginTime{};
  shared_ptr<long> dbId{};
  shared_ptr<long> loginCode{};
  shared_ptr<long> clientPort{};
  shared_ptr<string> loginMessage{};
  shared_ptr<string> dbUser{};
  shared_ptr<string> logoutTime{};
  shared_ptr<long> serverPort{};
  shared_ptr<string> clientOsUser{};
  shared_ptr<string> serverMac{};
  shared_ptr<string> requestId{};
  shared_ptr<string> clientProgram{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> clientMac{};

  GetSessionDetailResponseBody() {}

  explicit GetSessionDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginTime) {
      res["LoginTime"] = boost::any(*loginTime);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (loginCode) {
      res["LoginCode"] = boost::any(*loginCode);
    }
    if (clientPort) {
      res["ClientPort"] = boost::any(*clientPort);
    }
    if (loginMessage) {
      res["LoginMessage"] = boost::any(*loginMessage);
    }
    if (dbUser) {
      res["DbUser"] = boost::any(*dbUser);
    }
    if (logoutTime) {
      res["LogoutTime"] = boost::any(*logoutTime);
    }
    if (serverPort) {
      res["ServerPort"] = boost::any(*serverPort);
    }
    if (clientOsUser) {
      res["ClientOsUser"] = boost::any(*clientOsUser);
    }
    if (serverMac) {
      res["ServerMac"] = boost::any(*serverMac);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (clientProgram) {
      res["ClientProgram"] = boost::any(*clientProgram);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (clientMac) {
      res["ClientMac"] = boost::any(*clientMac);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginTime") != m.end() && !m["LoginTime"].empty()) {
      loginTime = make_shared<string>(boost::any_cast<string>(m["LoginTime"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("LoginCode") != m.end() && !m["LoginCode"].empty()) {
      loginCode = make_shared<long>(boost::any_cast<long>(m["LoginCode"]));
    }
    if (m.find("ClientPort") != m.end() && !m["ClientPort"].empty()) {
      clientPort = make_shared<long>(boost::any_cast<long>(m["ClientPort"]));
    }
    if (m.find("LoginMessage") != m.end() && !m["LoginMessage"].empty()) {
      loginMessage = make_shared<string>(boost::any_cast<string>(m["LoginMessage"]));
    }
    if (m.find("DbUser") != m.end() && !m["DbUser"].empty()) {
      dbUser = make_shared<string>(boost::any_cast<string>(m["DbUser"]));
    }
    if (m.find("LogoutTime") != m.end() && !m["LogoutTime"].empty()) {
      logoutTime = make_shared<string>(boost::any_cast<string>(m["LogoutTime"]));
    }
    if (m.find("ServerPort") != m.end() && !m["ServerPort"].empty()) {
      serverPort = make_shared<long>(boost::any_cast<long>(m["ServerPort"]));
    }
    if (m.find("ClientOsUser") != m.end() && !m["ClientOsUser"].empty()) {
      clientOsUser = make_shared<string>(boost::any_cast<string>(m["ClientOsUser"]));
    }
    if (m.find("ServerMac") != m.end() && !m["ServerMac"].empty()) {
      serverMac = make_shared<string>(boost::any_cast<string>(m["ServerMac"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ClientProgram") != m.end() && !m["ClientProgram"].empty()) {
      clientProgram = make_shared<string>(boost::any_cast<string>(m["ClientProgram"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("ClientMac") != m.end() && !m["ClientMac"].empty()) {
      clientMac = make_shared<string>(boost::any_cast<string>(m["ClientMac"]));
    }
  }


  virtual ~GetSessionDetailResponseBody() = default;
};
class GetSessionDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSessionDetailResponseBody> body{};

  GetSessionDetailResponse() {}

  explicit GetSessionDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSessionDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSessionDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetSessionDetailResponse() = default;
};
class GetSessionDistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetSessionDistributionRequest() {}

  explicit GetSessionDistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetSessionDistributionRequest() = default;
};
class GetSessionDistributionResponseBodyTimeList : public Darabonba::Model {
public:
  shared_ptr<string> beginDate{};
  shared_ptr<long> loginSessionCount{};
  shared_ptr<long> activeSessionCount{};
  shared_ptr<string> endDate{};
  shared_ptr<long> errorSessionCount{};

  GetSessionDistributionResponseBodyTimeList() {}

  explicit GetSessionDistributionResponseBodyTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (loginSessionCount) {
      res["LoginSessionCount"] = boost::any(*loginSessionCount);
    }
    if (activeSessionCount) {
      res["ActiveSessionCount"] = boost::any(*activeSessionCount);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (errorSessionCount) {
      res["ErrorSessionCount"] = boost::any(*errorSessionCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("LoginSessionCount") != m.end() && !m["LoginSessionCount"].empty()) {
      loginSessionCount = make_shared<long>(boost::any_cast<long>(m["LoginSessionCount"]));
    }
    if (m.find("ActiveSessionCount") != m.end() && !m["ActiveSessionCount"].empty()) {
      activeSessionCount = make_shared<long>(boost::any_cast<long>(m["ActiveSessionCount"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ErrorSessionCount") != m.end() && !m["ErrorSessionCount"].empty()) {
      errorSessionCount = make_shared<long>(boost::any_cast<long>(m["ErrorSessionCount"]));
    }
  }


  virtual ~GetSessionDistributionResponseBodyTimeList() = default;
};
class GetSessionDistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetSessionDistributionResponseBodyTimeList>> timeList{};

  GetSessionDistributionResponseBody() {}

  explicit GetSessionDistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeList) {
      vector<boost::any> temp1;
      for(auto item1:*timeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeList") != m.end() && !m["TimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeList"].type()) {
        vector<GetSessionDistributionResponseBodyTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSessionDistributionResponseBodyTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeList = make_shared<vector<GetSessionDistributionResponseBodyTimeList>>(expect1);
      }
    }
  }


  virtual ~GetSessionDistributionResponseBody() = default;
};
class GetSessionDistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSessionDistributionResponseBody> body{};

  GetSessionDistributionResponse() {}

  explicit GetSessionDistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSessionDistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSessionDistributionResponseBody>(model1);
      }
    }
  }


  virtual ~GetSessionDistributionResponse() = default;
};
class GetSessionListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sessionId{};
  shared_ptr<vector<string>> actionList{};
  shared_ptr<vector<string>> clientIpList{};
  shared_ptr<vector<string>> dbUserList{};
  shared_ptr<vector<string>> dbHostList{};
  shared_ptr<vector<string>> clientProgramList{};

  GetSessionListRequest() {}

  explicit GetSessionListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (actionList) {
      res["ActionList"] = boost::any(*actionList);
    }
    if (clientIpList) {
      res["ClientIpList"] = boost::any(*clientIpList);
    }
    if (dbUserList) {
      res["DbUserList"] = boost::any(*dbUserList);
    }
    if (dbHostList) {
      res["DbHostList"] = boost::any(*dbHostList);
    }
    if (clientProgramList) {
      res["ClientProgramList"] = boost::any(*clientProgramList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("ActionList") != m.end() && !m["ActionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ActionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientIpList") != m.end() && !m["ClientIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbUserList") != m.end() && !m["DbUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbHostList") != m.end() && !m["DbHostList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbHostList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbHostList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbHostList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientProgramList") != m.end() && !m["ClientProgramList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientProgramList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientProgramList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientProgramList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetSessionListRequest() = default;
};
class GetSessionListResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<long> loginCode{};
  shared_ptr<string> action{};
  shared_ptr<long> clientPort{};
  shared_ptr<string> loginMessage{};
  shared_ptr<string> dbUser{};
  shared_ptr<long> serverPort{};
  shared_ptr<string> clientOsUser{};
  shared_ptr<string> serverMac{};
  shared_ptr<string> clientProgram{};
  shared_ptr<string> captureTime{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> clientMac{};

  GetSessionListResponseBodyResults() {}

  explicit GetSessionListResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (loginCode) {
      res["LoginCode"] = boost::any(*loginCode);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (clientPort) {
      res["ClientPort"] = boost::any(*clientPort);
    }
    if (loginMessage) {
      res["LoginMessage"] = boost::any(*loginMessage);
    }
    if (dbUser) {
      res["DbUser"] = boost::any(*dbUser);
    }
    if (serverPort) {
      res["ServerPort"] = boost::any(*serverPort);
    }
    if (clientOsUser) {
      res["ClientOsUser"] = boost::any(*clientOsUser);
    }
    if (serverMac) {
      res["ServerMac"] = boost::any(*serverMac);
    }
    if (clientProgram) {
      res["ClientProgram"] = boost::any(*clientProgram);
    }
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (clientMac) {
      res["ClientMac"] = boost::any(*clientMac);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("LoginCode") != m.end() && !m["LoginCode"].empty()) {
      loginCode = make_shared<long>(boost::any_cast<long>(m["LoginCode"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ClientPort") != m.end() && !m["ClientPort"].empty()) {
      clientPort = make_shared<long>(boost::any_cast<long>(m["ClientPort"]));
    }
    if (m.find("LoginMessage") != m.end() && !m["LoginMessage"].empty()) {
      loginMessage = make_shared<string>(boost::any_cast<string>(m["LoginMessage"]));
    }
    if (m.find("DbUser") != m.end() && !m["DbUser"].empty()) {
      dbUser = make_shared<string>(boost::any_cast<string>(m["DbUser"]));
    }
    if (m.find("ServerPort") != m.end() && !m["ServerPort"].empty()) {
      serverPort = make_shared<long>(boost::any_cast<long>(m["ServerPort"]));
    }
    if (m.find("ClientOsUser") != m.end() && !m["ClientOsUser"].empty()) {
      clientOsUser = make_shared<string>(boost::any_cast<string>(m["ClientOsUser"]));
    }
    if (m.find("ServerMac") != m.end() && !m["ServerMac"].empty()) {
      serverMac = make_shared<string>(boost::any_cast<string>(m["ServerMac"]));
    }
    if (m.find("ClientProgram") != m.end() && !m["ClientProgram"].empty()) {
      clientProgram = make_shared<string>(boost::any_cast<string>(m["ClientProgram"]));
    }
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<string>(boost::any_cast<string>(m["CaptureTime"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("ClientMac") != m.end() && !m["ClientMac"].empty()) {
      clientMac = make_shared<string>(boost::any_cast<string>(m["ClientMac"]));
    }
  }


  virtual ~GetSessionListResponseBodyResults() = default;
};
class GetSessionListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> incomplete{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<GetSessionListResponseBodyResults>> results{};

  GetSessionListResponseBody() {}

  explicit GetSessionListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (incomplete) {
      res["Incomplete"] = boost::any(*incomplete);
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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("Incomplete") != m.end() && !m["Incomplete"].empty()) {
      incomplete = make_shared<string>(boost::any_cast<string>(m["Incomplete"]));
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
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<GetSessionListResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSessionListResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<GetSessionListResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~GetSessionListResponseBody() = default;
};
class GetSessionListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSessionListResponseBody> body{};

  GetSessionListResponse() {}

  explicit GetSessionListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSessionListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSessionListResponseBody>(model1);
      }
    }
  }


  virtual ~GetSessionListResponse() = default;
};
class GetSessionQueryConditionRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GetSessionQueryConditionRequest() {}

  explicit GetSessionQueryConditionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GetSessionQueryConditionRequest() = default;
};
class GetSessionQueryConditionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> dbUserList{};
  shared_ptr<vector<string>> clientIpList{};
  shared_ptr<vector<string>> clientProgramList{};
  shared_ptr<vector<string>> dbServerList{};

  GetSessionQueryConditionResponseBody() {}

  explicit GetSessionQueryConditionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbUserList) {
      res["DbUserList"] = boost::any(*dbUserList);
    }
    if (clientIpList) {
      res["ClientIpList"] = boost::any(*clientIpList);
    }
    if (clientProgramList) {
      res["ClientProgramList"] = boost::any(*clientProgramList);
    }
    if (dbServerList) {
      res["DbServerList"] = boost::any(*dbServerList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbUserList") != m.end() && !m["DbUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientIpList") != m.end() && !m["ClientIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientProgramList") != m.end() && !m["ClientProgramList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientProgramList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientProgramList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientProgramList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbServerList") != m.end() && !m["DbServerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbServerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbServerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbServerList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetSessionQueryConditionResponseBody() = default;
};
class GetSessionQueryConditionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSessionQueryConditionResponseBody> body{};

  GetSessionQueryConditionResponse() {}

  explicit GetSessionQueryConditionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSessionQueryConditionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSessionQueryConditionResponseBody>(model1);
      }
    }
  }


  virtual ~GetSessionQueryConditionResponse() = default;
};
class GetSqlTemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sqlId{};
  shared_ptr<string> templateId{};

  GetSqlTemplateListRequest() {}

  explicit GetSqlTemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sqlId) {
      res["SqlId"] = boost::any(*sqlId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SqlId") != m.end() && !m["SqlId"].empty()) {
      sqlId = make_shared<string>(boost::any_cast<string>(m["SqlId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~GetSqlTemplateListRequest() = default;
};
class GetSqlTemplateListResponseBodyResultsRuleList : public Darabonba::Model {
public:
  shared_ptr<long> riskLevel{};
  shared_ptr<long> ruleState{};
  shared_ptr<long> dbId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleId{};

  GetSqlTemplateListResponseBodyResultsRuleList() {}

  explicit GetSqlTemplateListResponseBodyResultsRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (ruleState) {
      res["RuleState"] = boost::any(*ruleState);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<long>(boost::any_cast<long>(m["RiskLevel"]));
    }
    if (m.find("RuleState") != m.end() && !m["RuleState"].empty()) {
      ruleState = make_shared<long>(boost::any_cast<long>(m["RuleState"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~GetSqlTemplateListResponseBodyResultsRuleList() = default;
};
class GetSqlTemplateListResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> templateContent{};
  shared_ptr<string> lastCaptureTime{};
  shared_ptr<long> captureCount{};
  shared_ptr<string> templateId{};
  shared_ptr<long> sqlType{};
  shared_ptr<vector<GetSqlTemplateListResponseBodyResultsRuleList>> ruleList{};

  GetSqlTemplateListResponseBodyResults() {}

  explicit GetSqlTemplateListResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (lastCaptureTime) {
      res["LastCaptureTime"] = boost::any(*lastCaptureTime);
    }
    if (captureCount) {
      res["CaptureCount"] = boost::any(*captureCount);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (ruleList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("LastCaptureTime") != m.end() && !m["LastCaptureTime"].empty()) {
      lastCaptureTime = make_shared<string>(boost::any_cast<string>(m["LastCaptureTime"]));
    }
    if (m.find("CaptureCount") != m.end() && !m["CaptureCount"].empty()) {
      captureCount = make_shared<long>(boost::any_cast<long>(m["CaptureCount"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<long>(boost::any_cast<long>(m["SqlType"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<GetSqlTemplateListResponseBodyResultsRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSqlTemplateListResponseBodyResultsRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleList = make_shared<vector<GetSqlTemplateListResponseBodyResultsRuleList>>(expect1);
      }
    }
  }


  virtual ~GetSqlTemplateListResponseBodyResults() = default;
};
class GetSqlTemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<GetSqlTemplateListResponseBodyResults>> results{};

  GetSqlTemplateListResponseBody() {}

  explicit GetSqlTemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<GetSqlTemplateListResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSqlTemplateListResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<GetSqlTemplateListResponseBodyResults>>(expect1);
      }
    }
  }


  virtual ~GetSqlTemplateListResponseBody() = default;
};
class GetSqlTemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSqlTemplateListResponseBody> body{};

  GetSqlTemplateListResponse() {}

  explicit GetSqlTemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSqlTemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSqlTemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~GetSqlTemplateListResponse() = default;
};
class GetTopSqlTemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};
  shared_ptr<long> orderType{};

  GetTopSqlTemplateListRequest() {}

  explicit GetTopSqlTemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<long>(boost::any_cast<long>(m["OrderType"]));
    }
  }


  virtual ~GetTopSqlTemplateListRequest() = default;
};
class GetTopSqlTemplateListResponseBodyTemplateList : public Darabonba::Model {
public:
  shared_ptr<string> templateContent{};
  shared_ptr<string> execCostUS{};
  shared_ptr<string> affectRows{};
  shared_ptr<string> execCostUSMean{};
  shared_ptr<string> lastCaptureTime{};
  shared_ptr<string> templateId{};
  shared_ptr<string> captureCount{};

  GetTopSqlTemplateListResponseBodyTemplateList() {}

  explicit GetTopSqlTemplateListResponseBodyTemplateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (execCostUS) {
      res["ExecCostUS"] = boost::any(*execCostUS);
    }
    if (affectRows) {
      res["AffectRows"] = boost::any(*affectRows);
    }
    if (execCostUSMean) {
      res["ExecCostUSMean"] = boost::any(*execCostUSMean);
    }
    if (lastCaptureTime) {
      res["LastCaptureTime"] = boost::any(*lastCaptureTime);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (captureCount) {
      res["CaptureCount"] = boost::any(*captureCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("ExecCostUS") != m.end() && !m["ExecCostUS"].empty()) {
      execCostUS = make_shared<string>(boost::any_cast<string>(m["ExecCostUS"]));
    }
    if (m.find("AffectRows") != m.end() && !m["AffectRows"].empty()) {
      affectRows = make_shared<string>(boost::any_cast<string>(m["AffectRows"]));
    }
    if (m.find("ExecCostUSMean") != m.end() && !m["ExecCostUSMean"].empty()) {
      execCostUSMean = make_shared<string>(boost::any_cast<string>(m["ExecCostUSMean"]));
    }
    if (m.find("LastCaptureTime") != m.end() && !m["LastCaptureTime"].empty()) {
      lastCaptureTime = make_shared<string>(boost::any_cast<string>(m["LastCaptureTime"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("CaptureCount") != m.end() && !m["CaptureCount"].empty()) {
      captureCount = make_shared<string>(boost::any_cast<string>(m["CaptureCount"]));
    }
  }


  virtual ~GetTopSqlTemplateListResponseBodyTemplateList() = default;
};
class GetTopSqlTemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetTopSqlTemplateListResponseBodyTemplateList>> templateList{};

  GetTopSqlTemplateListResponseBody() {}

  explicit GetTopSqlTemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateList) {
      vector<boost::any> temp1;
      for(auto item1:*templateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateList") != m.end() && !m["TemplateList"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateList"].type()) {
        vector<GetTopSqlTemplateListResponseBodyTemplateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopSqlTemplateListResponseBodyTemplateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateList = make_shared<vector<GetTopSqlTemplateListResponseBodyTemplateList>>(expect1);
      }
    }
  }


  virtual ~GetTopSqlTemplateListResponseBody() = default;
};
class GetTopSqlTemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTopSqlTemplateListResponseBody> body{};

  GetTopSqlTemplateListResponse() {}

  explicit GetTopSqlTemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopSqlTemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopSqlTemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopSqlTemplateListResponse() = default;
};
class GradeProtectionReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  GradeProtectionReportRequest() {}

  explicit GradeProtectionReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~GradeProtectionReportRequest() = default;
};
class GradeProtectionReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  GradeProtectionReportResponseBody() {}

  explicit GradeProtectionReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GradeProtectionReportResponseBody() = default;
};
class GradeProtectionReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GradeProtectionReportResponseBody> body{};

  GradeProtectionReportResponse() {}

  explicit GradeProtectionReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GradeProtectionReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GradeProtectionReportResponseBody>(model1);
      }
    }
  }


  virtual ~GradeProtectionReportResponse() = default;
};
class ImportDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataJson{};

  ImportDataSourceRequest() {}

  explicit ImportDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataJson) {
      res["DataJson"] = boost::any(*dataJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataJson") != m.end() && !m["DataJson"].empty()) {
      dataJson = make_shared<string>(boost::any_cast<string>(m["DataJson"]));
    }
  }


  virtual ~ImportDataSourceRequest() = default;
};
class ImportDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ImportDataSourceResponseBody() {}

  explicit ImportDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImportDataSourceResponseBody() = default;
};
class ImportDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportDataSourceResponseBody> body{};

  ImportDataSourceResponse() {}

  explicit ImportDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ImportDataSourceResponse() = default;
};
class IntegratedReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  IntegratedReportRequest() {}

  explicit IntegratedReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~IntegratedReportRequest() = default;
};
class IntegratedReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  IntegratedReportResponseBody() {}

  explicit IntegratedReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IntegratedReportResponseBody() = default;
};
class IntegratedReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IntegratedReportResponseBody> body{};

  IntegratedReportResponse() {}

  explicit IntegratedReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IntegratedReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IntegratedReportResponseBody>(model1);
      }
    }
  }


  virtual ~IntegratedReportResponse() = default;
};
class ListAssociatedRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> ruleDefn{};
  shared_ptr<long> dbId{};

  ListAssociatedRulesRequest() {}

  explicit ListAssociatedRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (ruleDefn) {
      res["RuleDefn"] = boost::any(*ruleDefn);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("RuleDefn") != m.end() && !m["RuleDefn"].empty()) {
      ruleDefn = make_shared<string>(boost::any_cast<string>(m["RuleDefn"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
  }


  virtual ~ListAssociatedRulesRequest() = default;
};
class ListAssociatedRulesResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> jsonResult{};

  ListAssociatedRulesResponseBodyServerData() {}

  explicit ListAssociatedRulesResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonResult) {
      res["JsonResult"] = boost::any(*jsonResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonResult") != m.end() && !m["JsonResult"].empty()) {
      jsonResult = make_shared<string>(boost::any_cast<string>(m["JsonResult"]));
    }
  }


  virtual ~ListAssociatedRulesResponseBodyServerData() = default;
};
class ListAssociatedRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListAssociatedRulesResponseBodyServerData> serverData{};

  ListAssociatedRulesResponseBody() {}

  explicit ListAssociatedRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        ListAssociatedRulesResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<ListAssociatedRulesResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~ListAssociatedRulesResponseBody() = default;
};
class ListAssociatedRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAssociatedRulesResponseBody> body{};

  ListAssociatedRulesResponse() {}

  explicit ListAssociatedRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAssociatedRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAssociatedRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAssociatedRulesResponse() = default;
};
class ListDataSourceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> dbIds{};

  ListDataSourceAttributeRequest() {}

  explicit ListDataSourceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbIds) {
      res["DbIds"] = boost::any(*dbIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbIds") != m.end() && !m["DbIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDataSourceAttributeRequest() = default;
};
class ListDataSourceAttributeResponseBodyDbList : public Darabonba::Model {
public:
  shared_ptr<string> resultAuditMode{};
  shared_ptr<long> dbId{};
  shared_ptr<long> resultAuditMaxSize{};
  shared_ptr<string> auditMode{};
  shared_ptr<long> resultAuditMaxLine{};

  ListDataSourceAttributeResponseBodyDbList() {}

  explicit ListDataSourceAttributeResponseBodyDbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultAuditMode) {
      res["ResultAuditMode"] = boost::any(*resultAuditMode);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (resultAuditMaxSize) {
      res["ResultAuditMaxSize"] = boost::any(*resultAuditMaxSize);
    }
    if (auditMode) {
      res["AuditMode"] = boost::any(*auditMode);
    }
    if (resultAuditMaxLine) {
      res["ResultAuditMaxLine"] = boost::any(*resultAuditMaxLine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultAuditMode") != m.end() && !m["ResultAuditMode"].empty()) {
      resultAuditMode = make_shared<string>(boost::any_cast<string>(m["ResultAuditMode"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("ResultAuditMaxSize") != m.end() && !m["ResultAuditMaxSize"].empty()) {
      resultAuditMaxSize = make_shared<long>(boost::any_cast<long>(m["ResultAuditMaxSize"]));
    }
    if (m.find("AuditMode") != m.end() && !m["AuditMode"].empty()) {
      auditMode = make_shared<string>(boost::any_cast<string>(m["AuditMode"]));
    }
    if (m.find("ResultAuditMaxLine") != m.end() && !m["ResultAuditMaxLine"].empty()) {
      resultAuditMaxLine = make_shared<long>(boost::any_cast<long>(m["ResultAuditMaxLine"]));
    }
  }


  virtual ~ListDataSourceAttributeResponseBodyDbList() = default;
};
class ListDataSourceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSourceAttributeResponseBodyDbList>> dbList{};

  ListDataSourceAttributeResponseBody() {}

  explicit ListDataSourceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbList) {
      vector<boost::any> temp1;
      for(auto item1:*dbList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<ListDataSourceAttributeResponseBodyDbList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceAttributeResponseBodyDbList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbList = make_shared<vector<ListDataSourceAttributeResponseBodyDbList>>(expect1);
      }
    }
  }


  virtual ~ListDataSourceAttributeResponseBody() = default;
};
class ListDataSourceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDataSourceAttributeResponseBody> body{};

  ListDataSourceAttributeResponse() {}

  explicit ListDataSourceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSourceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceAttributeResponse() = default;
};
class ListDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};

  ListDataSourcesRequest() {}

  explicit ListDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
  }


  virtual ~ListDataSourcesRequest() = default;
};
class ListDataSourcesResponseBodyDbList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dbUsername{};
  shared_ptr<string> dbCertificate{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<long> assetType{};
  shared_ptr<long> dbVersion{};
  shared_ptr<string> dbName{};
  shared_ptr<long> dbType{};
  shared_ptr<long> auditSwitch{};
  shared_ptr<string> dbTypeName{};
  shared_ptr<string> dbVersionName{};
  shared_ptr<vector<string>> dbAddresses{};

  ListDataSourcesResponseBodyDbList() {}

  explicit ListDataSourcesResponseBodyDbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dbUsername) {
      res["DbUsername"] = boost::any(*dbUsername);
    }
    if (dbCertificate) {
      res["DbCertificate"] = boost::any(*dbCertificate);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (assetType) {
      res["AssetType"] = boost::any(*assetType);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (auditSwitch) {
      res["AuditSwitch"] = boost::any(*auditSwitch);
    }
    if (dbTypeName) {
      res["DbTypeName"] = boost::any(*dbTypeName);
    }
    if (dbVersionName) {
      res["DbVersionName"] = boost::any(*dbVersionName);
    }
    if (dbAddresses) {
      res["DbAddresses"] = boost::any(*dbAddresses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DbUsername") != m.end() && !m["DbUsername"].empty()) {
      dbUsername = make_shared<string>(boost::any_cast<string>(m["DbUsername"]));
    }
    if (m.find("DbCertificate") != m.end() && !m["DbCertificate"].empty()) {
      dbCertificate = make_shared<string>(boost::any_cast<string>(m["DbCertificate"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("AssetType") != m.end() && !m["AssetType"].empty()) {
      assetType = make_shared<long>(boost::any_cast<long>(m["AssetType"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<long>(boost::any_cast<long>(m["DbVersion"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<long>(boost::any_cast<long>(m["DbType"]));
    }
    if (m.find("AuditSwitch") != m.end() && !m["AuditSwitch"].empty()) {
      auditSwitch = make_shared<long>(boost::any_cast<long>(m["AuditSwitch"]));
    }
    if (m.find("DbTypeName") != m.end() && !m["DbTypeName"].empty()) {
      dbTypeName = make_shared<string>(boost::any_cast<string>(m["DbTypeName"]));
    }
    if (m.find("DbVersionName") != m.end() && !m["DbVersionName"].empty()) {
      dbVersionName = make_shared<string>(boost::any_cast<string>(m["DbVersionName"]));
    }
    if (m.find("DbAddresses") != m.end() && !m["DbAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbAddresses = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDataSourcesResponseBodyDbList() = default;
};
class ListDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSourcesResponseBodyDbList>> dbList{};

  ListDataSourcesResponseBody() {}

  explicit ListDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dbList) {
      vector<boost::any> temp1;
      for(auto item1:*dbList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<ListDataSourcesResponseBodyDbList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourcesResponseBodyDbList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbList = make_shared<vector<ListDataSourcesResponseBodyDbList>>(expect1);
      }
    }
  }


  virtual ~ListDataSourcesResponseBody() = default;
};
class ListDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDataSourcesResponseBody> body{};

  ListDataSourcesResponse() {}

  explicit ListDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourcesResponse() = default;
};
class ListLogAlarmTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  ListLogAlarmTasksRequest() {}

  explicit ListLogAlarmTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListLogAlarmTasksRequest() = default;
};
class ListLogAlarmTasksResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<long> taskStatus{};
  shared_ptr<long> taskId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> taskName{};
  shared_ptr<vector<string>> toMailList{};
  shared_ptr<vector<string>> riskLevelList{};
  shared_ptr<vector<string>> dbIdList{};

  ListLogAlarmTasksResponseBodyTaskList() {}

  explicit ListLogAlarmTasksResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (toMailList) {
      res["ToMailList"] = boost::any(*toMailList);
    }
    if (riskLevelList) {
      res["RiskLevelList"] = boost::any(*riskLevelList);
    }
    if (dbIdList) {
      res["DbIdList"] = boost::any(*dbIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ToMailList") != m.end() && !m["ToMailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ToMailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ToMailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      toMailList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevelList") != m.end() && !m["RiskLevelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RiskLevelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RiskLevelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      riskLevelList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbIdList") != m.end() && !m["DbIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLogAlarmTasksResponseBodyTaskList() = default;
};
class ListLogAlarmTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListLogAlarmTasksResponseBodyTaskList>> taskList{};

  ListLogAlarmTasksResponseBody() {}

  explicit ListLogAlarmTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<ListLogAlarmTasksResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLogAlarmTasksResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<ListLogAlarmTasksResponseBodyTaskList>>(expect1);
      }
    }
  }


  virtual ~ListLogAlarmTasksResponseBody() = default;
};
class ListLogAlarmTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListLogAlarmTasksResponseBody> body{};

  ListLogAlarmTasksResponse() {}

  explicit ListLogAlarmTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLogAlarmTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogAlarmTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogAlarmTasksResponse() = default;
};
class ListReportPushTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  ListReportPushTasksRequest() {}

  explicit ListReportPushTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListReportPushTasksRequest() = default;
};
class ListReportPushTasksResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<string> scheduleTime{};
  shared_ptr<long> jobStatus{};
  shared_ptr<long> jobId{};
  shared_ptr<string> scheduleType{};
  shared_ptr<vector<string>> dbList{};
  shared_ptr<vector<string>> reportType{};
  shared_ptr<vector<string>> emailList{};

  ListReportPushTasksResponseBodyTaskList() {}

  explicit ListReportPushTasksResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (dbList) {
      res["DbList"] = boost::any(*dbList);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (emailList) {
      res["EmailList"] = boost::any(*emailList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReportType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReportType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reportType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EmailList") != m.end() && !m["EmailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EmailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EmailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      emailList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListReportPushTasksResponseBodyTaskList() = default;
};
class ListReportPushTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListReportPushTasksResponseBodyTaskList>> taskList{};

  ListReportPushTasksResponseBody() {}

  explicit ListReportPushTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<ListReportPushTasksResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListReportPushTasksResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<ListReportPushTasksResponseBodyTaskList>>(expect1);
      }
    }
  }


  virtual ~ListReportPushTasksResponseBody() = default;
};
class ListReportPushTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListReportPushTasksResponseBody> body{};

  ListReportPushTasksResponse() {}

  explicit ListReportPushTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListReportPushTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListReportPushTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListReportPushTasksResponse() = default;
};
class ListRuleGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleName{};

  ListRuleGroupsRequest() {}

  explicit ListRuleGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~ListRuleGroupsRequest() = default;
};
class ListRuleGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  ListRuleGroupsResponseBody() {}

  explicit ListRuleGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRuleGroupsResponseBody() = default;
};
class ListRuleGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRuleGroupsResponseBody> body{};

  ListRuleGroupsResponse() {}

  explicit ListRuleGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRuleGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRuleGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRuleGroupsResponse() = default;
};
class ListRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> dbId{};
  shared_ptr<string> foregroundType{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> ruleGroupId{};
  shared_ptr<string> riskLevel{};
  shared_ptr<long> ruleQuote{};
  shared_ptr<long> ruleState{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (foregroundType) {
      res["ForegroundType"] = boost::any(*foregroundType);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (ruleGroupId) {
      res["RuleGroupId"] = boost::any(*ruleGroupId);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (ruleQuote) {
      res["RuleQuote"] = boost::any(*ruleQuote);
    }
    if (ruleState) {
      res["RuleState"] = boost::any(*ruleState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("ForegroundType") != m.end() && !m["ForegroundType"].empty()) {
      foregroundType = make_shared<string>(boost::any_cast<string>(m["ForegroundType"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("RuleGroupId") != m.end() && !m["RuleGroupId"].empty()) {
      ruleGroupId = make_shared<string>(boost::any_cast<string>(m["RuleGroupId"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("RuleQuote") != m.end() && !m["RuleQuote"].empty()) {
      ruleQuote = make_shared<long>(boost::any_cast<long>(m["RuleQuote"]));
    }
    if (m.find("RuleState") != m.end() && !m["RuleState"].empty()) {
      ruleState = make_shared<long>(boost::any_cast<long>(m["RuleState"]));
    }
  }


  virtual ~ListRulesRequest() = default;
};
class ListRulesResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> jsonResult{};

  ListRulesResponseBodyServerData() {}

  explicit ListRulesResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonResult) {
      res["JsonResult"] = boost::any(*jsonResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonResult") != m.end() && !m["JsonResult"].empty()) {
      jsonResult = make_shared<string>(boost::any_cast<string>(m["JsonResult"]));
    }
  }


  virtual ~ListRulesResponseBodyServerData() = default;
};
class ListRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListRulesResponseBodyServerData> serverData{};

  ListRulesResponseBody() {}

  explicit ListRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      res["ServerData"] = serverData ? boost::any(serverData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerData"].type()) {
        ListRulesResponseBodyServerData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerData"]));
        serverData = make_shared<ListRulesResponseBodyServerData>(model1);
      }
    }
  }


  virtual ~ListRulesResponseBody() = default;
};
class ListRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRulesResponseBody> body{};

  ListRulesResponse() {}

  explicit ListRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRulesResponse() = default;
};
class ListSqlTypeKeysForRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  ListSqlTypeKeysForRuleRequest() {}

  explicit ListSqlTypeKeysForRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListSqlTypeKeysForRuleRequest() = default;
};
class ListSqlTypeKeysForRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  ListSqlTypeKeysForRuleResponseBody() {}

  explicit ListSqlTypeKeysForRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSqlTypeKeysForRuleResponseBody() = default;
};
class ListSqlTypeKeysForRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSqlTypeKeysForRuleResponseBody> body{};

  ListSqlTypeKeysForRuleResponse() {}

  explicit ListSqlTypeKeysForRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSqlTypeKeysForRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSqlTypeKeysForRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListSqlTypeKeysForRuleResponse() = default;
};
class ListSqlTypesForRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> typeId_{};
  shared_ptr<string> sqltype1{};
  shared_ptr<string> keyWorld{};

  ListSqlTypesForRuleRequest() {}

  explicit ListSqlTypesForRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (typeId_) {
      res["TypeId"] = boost::any(*typeId_);
    }
    if (sqltype1) {
      res["Sqltype1"] = boost::any(*sqltype1);
    }
    if (keyWorld) {
      res["KeyWorld"] = boost::any(*keyWorld);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TypeId") != m.end() && !m["TypeId"].empty()) {
      typeId_ = make_shared<string>(boost::any_cast<string>(m["TypeId"]));
    }
    if (m.find("Sqltype1") != m.end() && !m["Sqltype1"].empty()) {
      sqltype1 = make_shared<string>(boost::any_cast<string>(m["Sqltype1"]));
    }
    if (m.find("KeyWorld") != m.end() && !m["KeyWorld"].empty()) {
      keyWorld = make_shared<string>(boost::any_cast<string>(m["KeyWorld"]));
    }
  }


  virtual ~ListSqlTypesForRuleRequest() = default;
};
class ListSqlTypesForRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  ListSqlTypesForRuleResponseBody() {}

  explicit ListSqlTypesForRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSqlTypesForRuleResponseBody() = default;
};
class ListSqlTypesForRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSqlTypesForRuleResponseBody> body{};

  ListSqlTypesForRuleResponse() {}

  explicit ListSqlTypesForRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSqlTypesForRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSqlTypesForRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListSqlTypesForRuleResponse() = default;
};
class ListSupportDbTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  ListSupportDbTypesRequest() {}

  explicit ListSupportDbTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListSupportDbTypesRequest() = default;
};
class ListSupportDbTypesResponseBodyTypeListDbVersions : public Darabonba::Model {
public:
  shared_ptr<string> dbVersionName{};
  shared_ptr<long> dbVersion{};

  ListSupportDbTypesResponseBodyTypeListDbVersions() {}

  explicit ListSupportDbTypesResponseBodyTypeListDbVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbVersionName) {
      res["DbVersionName"] = boost::any(*dbVersionName);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbVersionName") != m.end() && !m["DbVersionName"].empty()) {
      dbVersionName = make_shared<string>(boost::any_cast<string>(m["DbVersionName"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<long>(boost::any_cast<long>(m["DbVersion"]));
    }
  }


  virtual ~ListSupportDbTypesResponseBodyTypeListDbVersions() = default;
};
class ListSupportDbTypesResponseBodyTypeList : public Darabonba::Model {
public:
  shared_ptr<long> dbType{};
  shared_ptr<string> dbTypeName{};
  shared_ptr<vector<ListSupportDbTypesResponseBodyTypeListDbVersions>> dbVersions{};

  ListSupportDbTypesResponseBodyTypeList() {}

  explicit ListSupportDbTypesResponseBodyTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbTypeName) {
      res["DbTypeName"] = boost::any(*dbTypeName);
    }
    if (dbVersions) {
      vector<boost::any> temp1;
      for(auto item1:*dbVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbVersions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<long>(boost::any_cast<long>(m["DbType"]));
    }
    if (m.find("DbTypeName") != m.end() && !m["DbTypeName"].empty()) {
      dbTypeName = make_shared<string>(boost::any_cast<string>(m["DbTypeName"]));
    }
    if (m.find("DbVersions") != m.end() && !m["DbVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["DbVersions"].type()) {
        vector<ListSupportDbTypesResponseBodyTypeListDbVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSupportDbTypesResponseBodyTypeListDbVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbVersions = make_shared<vector<ListSupportDbTypesResponseBodyTypeListDbVersions>>(expect1);
      }
    }
  }


  virtual ~ListSupportDbTypesResponseBodyTypeList() = default;
};
class ListSupportDbTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSupportDbTypesResponseBodyTypeList>> typeList{};

  ListSupportDbTypesResponseBody() {}

  explicit ListSupportDbTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (typeList) {
      vector<boost::any> temp1;
      for(auto item1:*typeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TypeList") != m.end() && !m["TypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TypeList"].type()) {
        vector<ListSupportDbTypesResponseBodyTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSupportDbTypesResponseBodyTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typeList = make_shared<vector<ListSupportDbTypesResponseBodyTypeList>>(expect1);
      }
    }
  }


  virtual ~ListSupportDbTypesResponseBody() = default;
};
class ListSupportDbTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSupportDbTypesResponseBody> body{};

  ListSupportDbTypesResponse() {}

  explicit ListSupportDbTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSupportDbTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSupportDbTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSupportDbTypesResponse() = default;
};
class ListSystemAlarmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> alarmType{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  ListSystemAlarmsRequest() {}

  explicit ListSystemAlarmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<long>(boost::any_cast<long>(m["AlarmType"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~ListSystemAlarmsRequest() = default;
};
class ListSystemAlarmsResponseBodyAlarms : public Darabonba::Model {
public:
  shared_ptr<long> readMark{};
  shared_ptr<string> alarmDetail{};
  shared_ptr<string> alarmType{};
  shared_ptr<long> alarmId{};
  shared_ptr<string> createTime{};

  ListSystemAlarmsResponseBodyAlarms() {}

  explicit ListSystemAlarmsResponseBodyAlarms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readMark) {
      res["ReadMark"] = boost::any(*readMark);
    }
    if (alarmDetail) {
      res["AlarmDetail"] = boost::any(*alarmDetail);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadMark") != m.end() && !m["ReadMark"].empty()) {
      readMark = make_shared<long>(boost::any_cast<long>(m["ReadMark"]));
    }
    if (m.find("AlarmDetail") != m.end() && !m["AlarmDetail"].empty()) {
      alarmDetail = make_shared<string>(boost::any_cast<string>(m["AlarmDetail"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<string>(boost::any_cast<string>(m["AlarmType"]));
    }
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<long>(boost::any_cast<long>(m["AlarmId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~ListSystemAlarmsResponseBodyAlarms() = default;
};
class ListSystemAlarmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSystemAlarmsResponseBodyAlarms>> alarms{};

  ListSystemAlarmsResponseBody() {}

  explicit ListSystemAlarmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (alarms) {
      vector<boost::any> temp1;
      for(auto item1:*alarms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Alarms"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Alarms") != m.end() && !m["Alarms"].empty()) {
      if (typeid(vector<boost::any>) == m["Alarms"].type()) {
        vector<ListSystemAlarmsResponseBodyAlarms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Alarms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSystemAlarmsResponseBodyAlarms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alarms = make_shared<vector<ListSystemAlarmsResponseBodyAlarms>>(expect1);
      }
    }
  }


  virtual ~ListSystemAlarmsResponseBody() = default;
};
class ListSystemAlarmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSystemAlarmsResponseBody> body{};

  ListSystemAlarmsResponse() {}

  explicit ListSystemAlarmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSystemAlarmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSystemAlarmsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSystemAlarmsResponse() = default;
};
class ListSystemAlarmTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  ListSystemAlarmTasksRequest() {}

  explicit ListSystemAlarmTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListSystemAlarmTasksRequest() = default;
};
class ListSystemAlarmTasksResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<long> taskStatus{};
  shared_ptr<long> taskId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> taskName{};
  shared_ptr<vector<string>> toMailList{};

  ListSystemAlarmTasksResponseBodyTaskList() {}

  explicit ListSystemAlarmTasksResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (toMailList) {
      res["ToMailList"] = boost::any(*toMailList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ToMailList") != m.end() && !m["ToMailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ToMailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ToMailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      toMailList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSystemAlarmTasksResponseBodyTaskList() = default;
};
class ListSystemAlarmTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSystemAlarmTasksResponseBodyTaskList>> taskList{};

  ListSystemAlarmTasksResponseBody() {}

  explicit ListSystemAlarmTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<ListSystemAlarmTasksResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSystemAlarmTasksResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<ListSystemAlarmTasksResponseBodyTaskList>>(expect1);
      }
    }
  }


  virtual ~ListSystemAlarmTasksResponseBody() = default;
};
class ListSystemAlarmTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSystemAlarmTasksResponseBody> body{};

  ListSystemAlarmTasksResponse() {}

  explicit ListSystemAlarmTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSystemAlarmTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSystemAlarmTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListSystemAlarmTasksResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTagKeysResponseBodyTagKeys>> tagKeys{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (tagKeys) {
      vector<boost::any> temp1;
      for(auto item1:*tagKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagKeys"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
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
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTemplatesForSqlRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sqlType1{};
  shared_ptr<string> choseCondition{};
  shared_ptr<long> dbId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTemplatesForSqlRuleRequest() {}

  explicit ListTemplatesForSqlRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sqlType1) {
      res["SqlType1"] = boost::any(*sqlType1);
    }
    if (choseCondition) {
      res["ChoseCondition"] = boost::any(*choseCondition);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SqlType1") != m.end() && !m["SqlType1"].empty()) {
      sqlType1 = make_shared<string>(boost::any_cast<string>(m["SqlType1"]));
    }
    if (m.find("ChoseCondition") != m.end() && !m["ChoseCondition"].empty()) {
      choseCondition = make_shared<string>(boost::any_cast<string>(m["ChoseCondition"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListTemplatesForSqlRuleRequest() = default;
};
class ListTemplatesForSqlRuleResponseBodyServerData : public Darabonba::Model {
public:
  shared_ptr<string> countTimely{};
  shared_ptr<long> blackOrWhite{};
  shared_ptr<string> sqlText{};
  shared_ptr<string> sqltype1{};
  shared_ptr<string> sqlId{};

  ListTemplatesForSqlRuleResponseBodyServerData() {}

  explicit ListTemplatesForSqlRuleResponseBodyServerData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countTimely) {
      res["CountTimely"] = boost::any(*countTimely);
    }
    if (blackOrWhite) {
      res["BlackOrWhite"] = boost::any(*blackOrWhite);
    }
    if (sqlText) {
      res["SqlText"] = boost::any(*sqlText);
    }
    if (sqltype1) {
      res["Sqltype1"] = boost::any(*sqltype1);
    }
    if (sqlId) {
      res["SqlId"] = boost::any(*sqlId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountTimely") != m.end() && !m["CountTimely"].empty()) {
      countTimely = make_shared<string>(boost::any_cast<string>(m["CountTimely"]));
    }
    if (m.find("BlackOrWhite") != m.end() && !m["BlackOrWhite"].empty()) {
      blackOrWhite = make_shared<long>(boost::any_cast<long>(m["BlackOrWhite"]));
    }
    if (m.find("SqlText") != m.end() && !m["SqlText"].empty()) {
      sqlText = make_shared<string>(boost::any_cast<string>(m["SqlText"]));
    }
    if (m.find("Sqltype1") != m.end() && !m["Sqltype1"].empty()) {
      sqltype1 = make_shared<string>(boost::any_cast<string>(m["Sqltype1"]));
    }
    if (m.find("SqlId") != m.end() && !m["SqlId"].empty()) {
      sqlId = make_shared<string>(boost::any_cast<string>(m["SqlId"]));
    }
  }


  virtual ~ListTemplatesForSqlRuleResponseBodyServerData() = default;
};
class ListTemplatesForSqlRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplatesForSqlRuleResponseBodyServerData>> serverData{};

  ListTemplatesForSqlRuleResponseBody() {}

  explicit ListTemplatesForSqlRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverData) {
      vector<boost::any> temp1;
      for(auto item1:*serverData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerData"].type()) {
        vector<ListTemplatesForSqlRuleResponseBodyServerData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesForSqlRuleResponseBodyServerData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverData = make_shared<vector<ListTemplatesForSqlRuleResponseBodyServerData>>(expect1);
      }
    }
  }


  virtual ~ListTemplatesForSqlRuleResponseBody() = default;
};
class ListTemplatesForSqlRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTemplatesForSqlRuleResponseBody> body{};

  ListTemplatesForSqlRuleResponse() {}

  explicit ListTemplatesForSqlRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplatesForSqlRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplatesForSqlRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplatesForSqlRuleResponse() = default;
};
class ListUsedSqlTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};

  ListUsedSqlTypesRequest() {}

  explicit ListUsedSqlTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~ListUsedSqlTypesRequest() = default;
};
class ListUsedSqlTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  ListUsedSqlTypesResponseBody() {}

  explicit ListUsedSqlTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUsedSqlTypesResponseBody() = default;
};
class ListUsedSqlTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUsedSqlTypesResponseBody> body{};

  ListUsedSqlTypesResponse() {}

  explicit ListUsedSqlTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsedSqlTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsedSqlTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsedSqlTypesResponse() = default;
};
class ModifyBaseTemplateStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> templateState{};
  shared_ptr<vector<string>> templateIds{};

  ModifyBaseTemplateStateRequest() {}

  explicit ModifyBaseTemplateStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (templateState) {
      res["TemplateState"] = boost::any(*templateState);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TemplateState") != m.end() && !m["TemplateState"].empty()) {
      templateState = make_shared<long>(boost::any_cast<long>(m["TemplateState"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyBaseTemplateStateRequest() = default;
};
class ModifyBaseTemplateStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBaseTemplateStateResponseBody() {}

  explicit ModifyBaseTemplateStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBaseTemplateStateResponseBody() = default;
};
class ModifyBaseTemplateStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBaseTemplateStateResponseBody> body{};

  ModifyBaseTemplateStateResponse() {}

  explicit ModifyBaseTemplateStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBaseTemplateStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBaseTemplateStateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBaseTemplateStateResponse() = default;
};
class ModifyCustomNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> customName{};

  ModifyCustomNameRequest() {}

  explicit ModifyCustomNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (customName) {
      res["CustomName"] = boost::any(*customName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CustomName") != m.end() && !m["CustomName"].empty()) {
      customName = make_shared<string>(boost::any_cast<string>(m["CustomName"]));
    }
  }


  virtual ~ModifyCustomNameRequest() = default;
};
class ModifyCustomNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyCustomNameResponseBody() {}

  explicit ModifyCustomNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyCustomNameResponseBody() = default;
};
class ModifyCustomNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyCustomNameResponseBody> body{};

  ModifyCustomNameResponse() {}

  explicit ModifyCustomNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCustomNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCustomNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCustomNameResponse() = default;
};
class ModifyDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<long> dbVersion{};
  shared_ptr<string> dbCertificate{};
  shared_ptr<string> dbUsername{};
  shared_ptr<string> dbPassword{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<vector<string>> dbAddresses{};

  ModifyDataSourceRequest() {}

  explicit ModifyDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (dbCertificate) {
      res["DbCertificate"] = boost::any(*dbCertificate);
    }
    if (dbUsername) {
      res["DbUsername"] = boost::any(*dbUsername);
    }
    if (dbPassword) {
      res["DbPassword"] = boost::any(*dbPassword);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (dbAddresses) {
      res["DbAddresses"] = boost::any(*dbAddresses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<long>(boost::any_cast<long>(m["DbVersion"]));
    }
    if (m.find("DbCertificate") != m.end() && !m["DbCertificate"].empty()) {
      dbCertificate = make_shared<string>(boost::any_cast<string>(m["DbCertificate"]));
    }
    if (m.find("DbUsername") != m.end() && !m["DbUsername"].empty()) {
      dbUsername = make_shared<string>(boost::any_cast<string>(m["DbUsername"]));
    }
    if (m.find("DbPassword") != m.end() && !m["DbPassword"].empty()) {
      dbPassword = make_shared<string>(boost::any_cast<string>(m["DbPassword"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("DbAddresses") != m.end() && !m["DbAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbAddresses = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyDataSourceRequest() = default;
};
class ModifyDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDataSourceResponseBody() {}

  explicit ModifyDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDataSourceResponseBody() = default;
};
class ModifyDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDataSourceResponseBody> body{};

  ModifyDataSourceResponse() {}

  explicit ModifyDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataSourceResponse() = default;
};
class ModifyDataSourceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> auditMode{};
  shared_ptr<string> resultAuditMode{};
  shared_ptr<long> resultAuditMaxLine{};
  shared_ptr<long> resultAuditMaxSize{};
  shared_ptr<vector<string>> dbIds{};

  ModifyDataSourceAttributeRequest() {}

  explicit ModifyDataSourceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (auditMode) {
      res["AuditMode"] = boost::any(*auditMode);
    }
    if (resultAuditMode) {
      res["ResultAuditMode"] = boost::any(*resultAuditMode);
    }
    if (resultAuditMaxLine) {
      res["ResultAuditMaxLine"] = boost::any(*resultAuditMaxLine);
    }
    if (resultAuditMaxSize) {
      res["ResultAuditMaxSize"] = boost::any(*resultAuditMaxSize);
    }
    if (dbIds) {
      res["DbIds"] = boost::any(*dbIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AuditMode") != m.end() && !m["AuditMode"].empty()) {
      auditMode = make_shared<string>(boost::any_cast<string>(m["AuditMode"]));
    }
    if (m.find("ResultAuditMode") != m.end() && !m["ResultAuditMode"].empty()) {
      resultAuditMode = make_shared<string>(boost::any_cast<string>(m["ResultAuditMode"]));
    }
    if (m.find("ResultAuditMaxLine") != m.end() && !m["ResultAuditMaxLine"].empty()) {
      resultAuditMaxLine = make_shared<long>(boost::any_cast<long>(m["ResultAuditMaxLine"]));
    }
    if (m.find("ResultAuditMaxSize") != m.end() && !m["ResultAuditMaxSize"].empty()) {
      resultAuditMaxSize = make_shared<long>(boost::any_cast<long>(m["ResultAuditMaxSize"]));
    }
    if (m.find("DbIds") != m.end() && !m["DbIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyDataSourceAttributeRequest() = default;
};
class ModifyDataSourceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDataSourceAttributeResponseBody() {}

  explicit ModifyDataSourceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDataSourceAttributeResponseBody() = default;
};
class ModifyDataSourceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDataSourceAttributeResponseBody> body{};

  ModifyDataSourceAttributeResponse() {}

  explicit ModifyDataSourceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDataSourceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataSourceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataSourceAttributeResponse() = default;
};
class ModifyInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};

  ModifyInstanceAttributeRequest() {}

  explicit ModifyInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyInstanceAttributeRequest() = default;
};
class ModifyInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceAttributeResponseBody() {}

  explicit ModifyInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceAttributeResponseBody() = default;
};
class ModifyInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceAttributeResponseBody> body{};

  ModifyInstanceAttributeResponse() {}

  explicit ModifyInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceAttributeResponse() = default;
};
class ModifyLogAlarmTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskName{};
  shared_ptr<long> taskId{};
  shared_ptr<vector<string>> toMailList{};
  shared_ptr<vector<string>> dbIdList{};
  shared_ptr<vector<string>> riskLevelList{};

  ModifyLogAlarmTaskRequest() {}

  explicit ModifyLogAlarmTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (toMailList) {
      res["ToMailList"] = boost::any(*toMailList);
    }
    if (dbIdList) {
      res["DbIdList"] = boost::any(*dbIdList);
    }
    if (riskLevelList) {
      res["RiskLevelList"] = boost::any(*riskLevelList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("ToMailList") != m.end() && !m["ToMailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ToMailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ToMailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      toMailList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbIdList") != m.end() && !m["DbIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RiskLevelList") != m.end() && !m["RiskLevelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RiskLevelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RiskLevelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      riskLevelList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyLogAlarmTaskRequest() = default;
};
class ModifyLogAlarmTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyLogAlarmTaskResponseBody() {}

  explicit ModifyLogAlarmTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyLogAlarmTaskResponseBody() = default;
};
class ModifyLogAlarmTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLogAlarmTaskResponseBody> body{};

  ModifyLogAlarmTaskResponse() {}

  explicit ModifyLogAlarmTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLogAlarmTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLogAlarmTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLogAlarmTaskResponse() = default;
};
class ModifyPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  ModifyPlanRequest() {}

  explicit ModifyPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
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
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyPlanRequest() = default;
};
class ModifyPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPlanResponseBody() {}

  explicit ModifyPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPlanResponseBody() = default;
};
class ModifyPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyPlanResponseBody> body{};

  ModifyPlanResponse() {}

  explicit ModifyPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPlanResponse() = default;
};
class ModifyReportPushTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> jobId{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<long> jobStatus{};
  shared_ptr<vector<string>> reportType{};
  shared_ptr<vector<string>> dbList{};
  shared_ptr<vector<string>> emailList{};

  ModifyReportPushTaskRequest() {}

  explicit ModifyReportPushTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (dbList) {
      res["DbList"] = boost::any(*dbList);
    }
    if (emailList) {
      res["EmailList"] = boost::any(*emailList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReportType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReportType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reportType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DbList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DbList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EmailList") != m.end() && !m["EmailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EmailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EmailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      emailList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyReportPushTaskRequest() = default;
};
class ModifyReportPushTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyReportPushTaskResponseBody() {}

  explicit ModifyReportPushTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyReportPushTaskResponseBody() = default;
};
class ModifyReportPushTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyReportPushTaskResponseBody> body{};

  ModifyReportPushTaskResponse() {}

  explicit ModifyReportPushTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyReportPushTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyReportPushTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyReportPushTaskResponse() = default;
};
class ModifyRuleGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> groupKeyId{};

  ModifyRuleGroupRequest() {}

  explicit ModifyRuleGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (groupKeyId) {
      res["GroupKeyId"] = boost::any(*groupKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("GroupKeyId") != m.end() && !m["GroupKeyId"].empty()) {
      groupKeyId = make_shared<string>(boost::any_cast<string>(m["GroupKeyId"]));
    }
  }


  virtual ~ModifyRuleGroupRequest() = default;
};
class ModifyRuleGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  ModifyRuleGroupResponseBody() {}

  explicit ModifyRuleGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyRuleGroupResponseBody() = default;
};
class ModifyRuleGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyRuleGroupResponseBody> body{};

  ModifyRuleGroupResponse() {}

  explicit ModifyRuleGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRuleGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRuleGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRuleGroupResponse() = default;
};
class ModifySystemAlarmTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskName{};
  shared_ptr<long> taskId{};
  shared_ptr<vector<string>> toMailList{};

  ModifySystemAlarmTaskRequest() {}

  explicit ModifySystemAlarmTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (toMailList) {
      res["ToMailList"] = boost::any(*toMailList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("ToMailList") != m.end() && !m["ToMailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ToMailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ToMailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      toMailList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifySystemAlarmTaskRequest() = default;
};
class ModifySystemAlarmTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySystemAlarmTaskResponseBody() {}

  explicit ModifySystemAlarmTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySystemAlarmTaskResponseBody() = default;
};
class ModifySystemAlarmTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifySystemAlarmTaskResponseBody> body{};

  ModifySystemAlarmTaskResponse() {}

  explicit ModifySystemAlarmTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySystemAlarmTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySystemAlarmTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySystemAlarmTaskResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> regionId{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class PciReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  PciReportRequest() {}

  explicit PciReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~PciReportRequest() = default;
};
class PciReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  PciReportResponseBody() {}

  explicit PciReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PciReportResponseBody() = default;
};
class PciReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PciReportResponseBody> body{};

  PciReportResponse() {}

  explicit PciReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PciReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PciReportResponseBody>(model1);
      }
    }
  }


  virtual ~PciReportResponse() = default;
};
class PutLoginCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  PutLoginCountRequest() {}

  explicit PutLoginCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~PutLoginCountRequest() = default;
};
class PutLoginCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PutLoginCountResponseBody() {}

  explicit PutLoginCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PutLoginCountResponseBody() = default;
};
class PutLoginCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutLoginCountResponseBody> body{};

  PutLoginCountResponse() {}

  explicit PutLoginCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutLoginCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutLoginCountResponseBody>(model1);
      }
    }
  }


  virtual ~PutLoginCountResponse() = default;
};
class ReadMarkSystemAlarmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> alarmIds{};

  ReadMarkSystemAlarmsRequest() {}

  explicit ReadMarkSystemAlarmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (alarmIds) {
      res["AlarmIds"] = boost::any(*alarmIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AlarmIds") != m.end() && !m["AlarmIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlarmIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlarmIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alarmIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ReadMarkSystemAlarmsRequest() = default;
};
class ReadMarkSystemAlarmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReadMarkSystemAlarmsResponseBody() {}

  explicit ReadMarkSystemAlarmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReadMarkSystemAlarmsResponseBody() = default;
};
class ReadMarkSystemAlarmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReadMarkSystemAlarmsResponseBody> body{};

  ReadMarkSystemAlarmsResponse() {}

  explicit ReadMarkSystemAlarmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadMarkSystemAlarmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadMarkSystemAlarmsResponseBody>(model1);
      }
    }
  }


  virtual ~ReadMarkSystemAlarmsResponse() = default;
};
class RefundInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> regionId{};

  RefundInstanceRequest() {}

  explicit RefundInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
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
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RefundInstanceRequest() = default;
};
class RefundInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RefundInstanceResponseBody() {}

  explicit RefundInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefundInstanceResponseBody() = default;
};
class RefundInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefundInstanceResponseBody> body{};

  RefundInstanceResponse() {}

  explicit RefundInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RefundInstanceResponse() = default;
};
class RegisterNoticeMailRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mail{};
  shared_ptr<string> vcode{};

  RegisterNoticeMailRequest() {}

  explicit RegisterNoticeMailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    if (vcode) {
      res["Vcode"] = boost::any(*vcode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
    if (m.find("Vcode") != m.end() && !m["Vcode"].empty()) {
      vcode = make_shared<string>(boost::any_cast<string>(m["Vcode"]));
    }
  }


  virtual ~RegisterNoticeMailRequest() = default;
};
class RegisterNoticeMailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RegisterNoticeMailResponseBody() {}

  explicit RegisterNoticeMailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RegisterNoticeMailResponseBody() = default;
};
class RegisterNoticeMailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterNoticeMailResponseBody> body{};

  RegisterNoticeMailResponse() {}

  explicit RegisterNoticeMailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterNoticeMailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterNoticeMailResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterNoticeMailResponse() = default;
};
class RemoveLogMaskConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maskId{};

  RemoveLogMaskConfigRequest() {}

  explicit RemoveLogMaskConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maskId) {
      res["MaskId"] = boost::any(*maskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaskId") != m.end() && !m["MaskId"].empty()) {
      maskId = make_shared<long>(boost::any_cast<long>(m["MaskId"]));
    }
  }


  virtual ~RemoveLogMaskConfigRequest() = default;
};
class RemoveLogMaskConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveLogMaskConfigResponseBody() {}

  explicit RemoveLogMaskConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveLogMaskConfigResponseBody() = default;
};
class RemoveLogMaskConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveLogMaskConfigResponseBody> body{};

  RemoveLogMaskConfigResponse() {}

  explicit RemoveLogMaskConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveLogMaskConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveLogMaskConfigResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveLogMaskConfigResponse() = default;
};
class SendVerifyCodeMailRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mail{};

  SendVerifyCodeMailRequest() {}

  explicit SendVerifyCodeMailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
  }


  virtual ~SendVerifyCodeMailRequest() = default;
};
class SendVerifyCodeMailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendVerifyCodeMailResponseBody() {}

  explicit SendVerifyCodeMailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendVerifyCodeMailResponseBody() = default;
};
class SendVerifyCodeMailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendVerifyCodeMailResponseBody> body{};

  SendVerifyCodeMailResponse() {}

  explicit SendVerifyCodeMailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendVerifyCodeMailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVerifyCodeMailResponseBody>(model1);
      }
    }
  }


  virtual ~SendVerifyCodeMailResponse() = default;
};
class SoxReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> dbId{};
  shared_ptr<string> beginDate{};
  shared_ptr<string> endDate{};

  SoxReportRequest() {}

  explicit SoxReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~SoxReportRequest() = default;
};
class SoxReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> serverData{};
  shared_ptr<string> requestId{};

  SoxReportResponseBody() {}

  explicit SoxReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverData) {
      res["ServerData"] = boost::any(*serverData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerData") != m.end() && !m["ServerData"].empty()) {
      serverData = make_shared<string>(boost::any_cast<string>(m["ServerData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SoxReportResponseBody() = default;
};
class SoxReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SoxReportResponseBody> body{};

  SoxReportResponse() {}

  explicit SoxReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SoxReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SoxReportResponseBody>(model1);
      }
    }
  }


  virtual ~SoxReportResponse() = default;
};
class StartAlarmTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> taskIds{};

  StartAlarmTaskRequest() {}

  explicit StartAlarmTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StartAlarmTaskRequest() = default;
};
class StartAlarmTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartAlarmTaskResponseBody() {}

  explicit StartAlarmTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartAlarmTaskResponseBody() = default;
};
class StartAlarmTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartAlarmTaskResponseBody> body{};

  StartAlarmTaskResponse() {}

  explicit StartAlarmTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAlarmTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAlarmTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartAlarmTaskResponse() = default;
};
class StartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> regionId{};

  StartInstanceRequest() {}

  explicit StartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
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
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartInstanceRequest() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
};
class StopAlarmTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> taskIds{};

  StopAlarmTaskRequest() {}

  explicit StopAlarmTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StopAlarmTaskRequest() = default;
};
class StopAlarmTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopAlarmTaskResponseBody() {}

  explicit StopAlarmTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopAlarmTaskResponseBody() = default;
};
class StopAlarmTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopAlarmTaskResponseBody> body{};

  StopAlarmTaskResponse() {}

  explicit StopAlarmTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAlarmTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAlarmTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopAlarmTaskResponse() = default;
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
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
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
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpgradeInstanceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  UpgradeInstanceVersionRequest() {}

  explicit UpgradeInstanceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeInstanceVersionRequest() = default;
};
class UpgradeInstanceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeInstanceVersionResponseBody() {}

  explicit UpgradeInstanceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeInstanceVersionResponseBody() = default;
};
class UpgradeInstanceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeInstanceVersionResponseBody> body{};

  UpgradeInstanceVersionResponse() {}

  explicit UpgradeInstanceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeInstanceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeInstanceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeInstanceVersionResponse() = default;
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
  AddLogMaskConfigResponse addLogMaskConfigWithOptions(shared_ptr<AddLogMaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddLogMaskConfigResponse addLogMaskConfig(shared_ptr<AddLogMaskConfigRequest> request);
  AssociateDbToRuleResponse associateDbToRuleWithOptions(shared_ptr<AssociateDbToRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateDbToRuleResponse associateDbToRule(shared_ptr<AssociateDbToRuleRequest> request);
  AssociateRuleToDbResponse associateRuleToDbWithOptions(shared_ptr<AssociateRuleToDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateRuleToDbResponse associateRuleToDb(shared_ptr<AssociateRuleToDbRequest> request);
  ChangeAgentStatusResponse changeAgentStatusWithOptions(shared_ptr<ChangeAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeAgentStatusResponse changeAgentStatus(shared_ptr<ChangeAgentStatusRequest> request);
  ChangeLogMaskConfigStateResponse changeLogMaskConfigStateWithOptions(shared_ptr<ChangeLogMaskConfigStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeLogMaskConfigStateResponse changeLogMaskConfigState(shared_ptr<ChangeLogMaskConfigStateRequest> request);
  ChangeRulePriorityResponse changeRulePriorityWithOptions(shared_ptr<ChangeRulePriorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeRulePriorityResponse changeRulePriority(shared_ptr<ChangeRulePriorityRequest> request);
  ChangeRuleStatusResponse changeRuleStatusWithOptions(shared_ptr<ChangeRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeRuleStatusResponse changeRuleStatus(shared_ptr<ChangeRuleStatusRequest> request);
  CheckMailRegisteredResponse checkMailRegisteredWithOptions(shared_ptr<CheckMailRegisteredRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMailRegisteredResponse checkMailRegistered(shared_ptr<CheckMailRegisteredRequest> request);
  ClearAgentRecordsResponse clearAgentRecordsWithOptions(shared_ptr<ClearAgentRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearAgentRecordsResponse clearAgentRecords(shared_ptr<ClearAgentRecordsRequest> request);
  ConfigInstanceNetworkResponse configInstanceNetworkWithOptions(shared_ptr<ConfigInstanceNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigInstanceNetworkResponse configInstanceNetwork(shared_ptr<ConfigInstanceNetworkRequest> request);
  CreateDataSourceResponse createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataSourceResponse createDataSource(shared_ptr<CreateDataSourceRequest> request);
  CreateGradeProtectionReportResponse createGradeProtectionReportWithOptions(shared_ptr<CreateGradeProtectionReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGradeProtectionReportResponse createGradeProtectionReport(shared_ptr<CreateGradeProtectionReportRequest> request);
  CreateIntegratedReportResponse createIntegratedReportWithOptions(shared_ptr<CreateIntegratedReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIntegratedReportResponse createIntegratedReport(shared_ptr<CreateIntegratedReportRequest> request);
  CreateLogAlarmTaskResponse createLogAlarmTaskWithOptions(shared_ptr<CreateLogAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLogAlarmTaskResponse createLogAlarmTask(shared_ptr<CreateLogAlarmTaskRequest> request);
  CreatePCIReportResponse createPCIReportWithOptions(shared_ptr<CreatePCIReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePCIReportResponse createPCIReport(shared_ptr<CreatePCIReportRequest> request);
  CreateReportPushTaskResponse createReportPushTaskWithOptions(shared_ptr<CreateReportPushTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReportPushTaskResponse createReportPushTask(shared_ptr<CreateReportPushTaskRequest> request);
  CreateRuleResponse createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateRuleGroupResponse createRuleGroupWithOptions(shared_ptr<CreateRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleGroupResponse createRuleGroup(shared_ptr<CreateRuleGroupRequest> request);
  CreateSOXReportResponse createSOXReportWithOptions(shared_ptr<CreateSOXReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSOXReportResponse createSOXReport(shared_ptr<CreateSOXReportRequest> request);
  CreateSqlRuleResponse createSqlRuleWithOptions(shared_ptr<CreateSqlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSqlRuleResponse createSqlRule(shared_ptr<CreateSqlRuleRequest> request);
  CreateSystemAlarmTaskResponse createSystemAlarmTaskWithOptions(shared_ptr<CreateSystemAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSystemAlarmTaskResponse createSystemAlarmTask(shared_ptr<CreateSystemAlarmTaskRequest> request);
  DeleteAlarmTaskResponse deleteAlarmTaskWithOptions(shared_ptr<DeleteAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlarmTaskResponse deleteAlarmTask(shared_ptr<DeleteAlarmTaskRequest> request);
  DeleteDataSourceResponse deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceResponse deleteDataSource(shared_ptr<DeleteDataSourceRequest> request);
  DeleteReportPushTaskResponse deleteReportPushTaskWithOptions(shared_ptr<DeleteReportPushTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteReportPushTaskResponse deleteReportPushTask(shared_ptr<DeleteReportPushTaskRequest> request);
  DeleteRuleResponse deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleResponse deleteRule(shared_ptr<DeleteRuleRequest> request);
  DeleteRuleGroupResponse deleteRuleGroupWithOptions(shared_ptr<DeleteRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleGroupResponse deleteRuleGroup(shared_ptr<DeleteRuleGroupRequest> request);
  DeregisterTemplatesFromRuleResponse deregisterTemplatesFromRuleWithOptions(shared_ptr<DeregisterTemplatesFromRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeregisterTemplatesFromRuleResponse deregisterTemplatesFromRule(shared_ptr<DeregisterTemplatesFromRuleRequest> request);
  DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAttributeResponse describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeLoginTicketResponse describeLoginTicketWithOptions(shared_ptr<DescribeLoginTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoginTicketResponse describeLoginTicket(shared_ptr<DescribeLoginTicketRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSyncInfoResponse describeSyncInfoWithOptions(shared_ptr<DescribeSyncInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSyncInfoResponse describeSyncInfo(shared_ptr<DescribeSyncInfoRequest> request);
  DisableLogMaskConfigsResponse disableLogMaskConfigsWithOptions(shared_ptr<DisableLogMaskConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableLogMaskConfigsResponse disableLogMaskConfigs(shared_ptr<DisableLogMaskConfigsRequest> request);
  DissociateRulesFromDbResponse dissociateRulesFromDbWithOptions(shared_ptr<DissociateRulesFromDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateRulesFromDbResponse dissociateRulesFromDb(shared_ptr<DissociateRulesFromDbRequest> request);
  DissociateTemplatesFromRuleResponse dissociateTemplatesFromRuleWithOptions(shared_ptr<DissociateTemplatesFromRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateTemplatesFromRuleResponse dissociateTemplatesFromRule(shared_ptr<DissociateTemplatesFromRuleRequest> request);
  EditLogMaskConfigResponse editLogMaskConfigWithOptions(shared_ptr<EditLogMaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditLogMaskConfigResponse editLogMaskConfig(shared_ptr<EditLogMaskConfigRequest> request);
  EnableLogMaskConfigsResponse enableLogMaskConfigsWithOptions(shared_ptr<EnableLogMaskConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableLogMaskConfigsResponse enableLogMaskConfigs(shared_ptr<EnableLogMaskConfigsRequest> request);
  GetAgentFileUrlResponse getAgentFileUrlWithOptions(shared_ptr<GetAgentFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentFileUrlResponse getAgentFileUrl(shared_ptr<GetAgentFileUrlRequest> request);
  GetAgentListResponse getAgentListWithOptions(shared_ptr<GetAgentListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentListResponse getAgentList(shared_ptr<GetAgentListRequest> request);
  GetAppointOperationResponse getAppointOperationWithOptions(shared_ptr<GetAppointOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppointOperationResponse getAppointOperation(shared_ptr<GetAppointOperationRequest> request);
  GetAuditCountResponse getAuditCountWithOptions(shared_ptr<GetAuditCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuditCountResponse getAuditCount(shared_ptr<GetAuditCountRequest> request);
  GetAuditCountDistributionResponse getAuditCountDistributionWithOptions(shared_ptr<GetAuditCountDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuditCountDistributionResponse getAuditCountDistribution(shared_ptr<GetAuditCountDistributionRequest> request);
  GetBaseTemplateListResponse getBaseTemplateListWithOptions(shared_ptr<GetBaseTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBaseTemplateListResponse getBaseTemplateList(shared_ptr<GetBaseTemplateListRequest> request);
  GetDasUsageResponse getDasUsageWithOptions(shared_ptr<GetDasUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDasUsageResponse getDasUsage(shared_ptr<GetDasUsageRequest> request);
  GetDBAuditCountListResponse getDBAuditCountListWithOptions(shared_ptr<GetDBAuditCountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDBAuditCountListResponse getDBAuditCountList(shared_ptr<GetDBAuditCountListRequest> request);
  GetGroupDetailResponse getGroupDetailWithOptions(shared_ptr<GetGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupDetailResponse getGroupDetail(shared_ptr<GetGroupDetailRequest> request);
  GetLicenseResponse getLicenseWithOptions(shared_ptr<GetLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLicenseResponse getLicense(shared_ptr<GetLicenseRequest> request);
  GetLogDetailResponse getLogDetailWithOptions(shared_ptr<GetLogDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogDetailResponse getLogDetail(shared_ptr<GetLogDetailRequest> request);
  GetLogListResponse getLogListWithOptions(shared_ptr<GetLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogListResponse getLogList(shared_ptr<GetLogListRequest> request);
  GetLogMaskConfigsResponse getLogMaskConfigsWithOptions(shared_ptr<GetLogMaskConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogMaskConfigsResponse getLogMaskConfigs(shared_ptr<GetLogMaskConfigsRequest> request);
  GetLogQueryConditionResponse getLogQueryConditionWithOptions(shared_ptr<GetLogQueryConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogQueryConditionResponse getLogQueryCondition(shared_ptr<GetLogQueryConditionRequest> request);
  GetLogStatisticsResponse getLogStatisticsWithOptions(shared_ptr<GetLogStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogStatisticsResponse getLogStatistics(shared_ptr<GetLogStatisticsRequest> request);
  GetLogTopDistributionResponse getLogTopDistributionWithOptions(shared_ptr<GetLogTopDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogTopDistributionResponse getLogTopDistribution(shared_ptr<GetLogTopDistributionRequest> request);
  GetLogTopStatisticsResponse getLogTopStatisticsWithOptions(shared_ptr<GetLogTopStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogTopStatisticsResponse getLogTopStatistics(shared_ptr<GetLogTopStatisticsRequest> request);
  GetLogTypeDistributionResponse getLogTypeDistributionWithOptions(shared_ptr<GetLogTypeDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogTypeDistributionResponse getLogTypeDistribution(shared_ptr<GetLogTypeDistributionRequest> request);
  GetNewSqlTemplateListResponse getNewSqlTemplateListWithOptions(shared_ptr<GetNewSqlTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNewSqlTemplateListResponse getNewSqlTemplateList(shared_ptr<GetNewSqlTemplateListRequest> request);
  GetReportFileUrlResponse getReportFileUrlWithOptions(shared_ptr<GetReportFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReportFileUrlResponse getReportFileUrl(shared_ptr<GetReportFileUrlRequest> request);
  GetRiskLevelDistributionResponse getRiskLevelDistributionWithOptions(shared_ptr<GetRiskLevelDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRiskLevelDistributionResponse getRiskLevelDistribution(shared_ptr<GetRiskLevelDistributionRequest> request);
  GetRiskStatisticsResponse getRiskStatisticsWithOptions(shared_ptr<GetRiskStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRiskStatisticsResponse getRiskStatistics(shared_ptr<GetRiskStatisticsRequest> request);
  GetRuleDetailResponse getRuleDetailWithOptions(shared_ptr<GetRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleDetailResponse getRuleDetail(shared_ptr<GetRuleDetailRequest> request);
  GetRuleGroupNameResponse getRuleGroupNameWithOptions(shared_ptr<GetRuleGroupNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleGroupNameResponse getRuleGroupName(shared_ptr<GetRuleGroupNameRequest> request);
  GetSessionDetailResponse getSessionDetailWithOptions(shared_ptr<GetSessionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSessionDetailResponse getSessionDetail(shared_ptr<GetSessionDetailRequest> request);
  GetSessionDistributionResponse getSessionDistributionWithOptions(shared_ptr<GetSessionDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSessionDistributionResponse getSessionDistribution(shared_ptr<GetSessionDistributionRequest> request);
  GetSessionListResponse getSessionListWithOptions(shared_ptr<GetSessionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSessionListResponse getSessionList(shared_ptr<GetSessionListRequest> request);
  GetSessionQueryConditionResponse getSessionQueryConditionWithOptions(shared_ptr<GetSessionQueryConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSessionQueryConditionResponse getSessionQueryCondition(shared_ptr<GetSessionQueryConditionRequest> request);
  GetSqlTemplateListResponse getSqlTemplateListWithOptions(shared_ptr<GetSqlTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSqlTemplateListResponse getSqlTemplateList(shared_ptr<GetSqlTemplateListRequest> request);
  GetTopSqlTemplateListResponse getTopSqlTemplateListWithOptions(shared_ptr<GetTopSqlTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopSqlTemplateListResponse getTopSqlTemplateList(shared_ptr<GetTopSqlTemplateListRequest> request);
  GradeProtectionReportResponse gradeProtectionReportWithOptions(shared_ptr<GradeProtectionReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GradeProtectionReportResponse gradeProtectionReport(shared_ptr<GradeProtectionReportRequest> request);
  ImportDataSourceResponse importDataSourceWithOptions(shared_ptr<ImportDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportDataSourceResponse importDataSource(shared_ptr<ImportDataSourceRequest> request);
  IntegratedReportResponse integratedReportWithOptions(shared_ptr<IntegratedReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IntegratedReportResponse integratedReport(shared_ptr<IntegratedReportRequest> request);
  ListAssociatedRulesResponse listAssociatedRulesWithOptions(shared_ptr<ListAssociatedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAssociatedRulesResponse listAssociatedRules(shared_ptr<ListAssociatedRulesRequest> request);
  ListDataSourceAttributeResponse listDataSourceAttributeWithOptions(shared_ptr<ListDataSourceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceAttributeResponse listDataSourceAttribute(shared_ptr<ListDataSourceAttributeRequest> request);
  ListDataSourcesResponse listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourcesResponse listDataSources(shared_ptr<ListDataSourcesRequest> request);
  ListLogAlarmTasksResponse listLogAlarmTasksWithOptions(shared_ptr<ListLogAlarmTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogAlarmTasksResponse listLogAlarmTasks(shared_ptr<ListLogAlarmTasksRequest> request);
  ListReportPushTasksResponse listReportPushTasksWithOptions(shared_ptr<ListReportPushTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListReportPushTasksResponse listReportPushTasks(shared_ptr<ListReportPushTasksRequest> request);
  ListRuleGroupsResponse listRuleGroupsWithOptions(shared_ptr<ListRuleGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRuleGroupsResponse listRuleGroups(shared_ptr<ListRuleGroupsRequest> request);
  ListRulesResponse listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<ListRulesRequest> request);
  ListSqlTypeKeysForRuleResponse listSqlTypeKeysForRuleWithOptions(shared_ptr<ListSqlTypeKeysForRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSqlTypeKeysForRuleResponse listSqlTypeKeysForRule(shared_ptr<ListSqlTypeKeysForRuleRequest> request);
  ListSqlTypesForRuleResponse listSqlTypesForRuleWithOptions(shared_ptr<ListSqlTypesForRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSqlTypesForRuleResponse listSqlTypesForRule(shared_ptr<ListSqlTypesForRuleRequest> request);
  ListSupportDbTypesResponse listSupportDbTypesWithOptions(shared_ptr<ListSupportDbTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSupportDbTypesResponse listSupportDbTypes(shared_ptr<ListSupportDbTypesRequest> request);
  ListSystemAlarmsResponse listSystemAlarmsWithOptions(shared_ptr<ListSystemAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSystemAlarmsResponse listSystemAlarms(shared_ptr<ListSystemAlarmsRequest> request);
  ListSystemAlarmTasksResponse listSystemAlarmTasksWithOptions(shared_ptr<ListSystemAlarmTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSystemAlarmTasksResponse listSystemAlarmTasks(shared_ptr<ListSystemAlarmTasksRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTemplatesForSqlRuleResponse listTemplatesForSqlRuleWithOptions(shared_ptr<ListTemplatesForSqlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesForSqlRuleResponse listTemplatesForSqlRule(shared_ptr<ListTemplatesForSqlRuleRequest> request);
  ListUsedSqlTypesResponse listUsedSqlTypesWithOptions(shared_ptr<ListUsedSqlTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsedSqlTypesResponse listUsedSqlTypes(shared_ptr<ListUsedSqlTypesRequest> request);
  ModifyBaseTemplateStateResponse modifyBaseTemplateStateWithOptions(shared_ptr<ModifyBaseTemplateStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBaseTemplateStateResponse modifyBaseTemplateState(shared_ptr<ModifyBaseTemplateStateRequest> request);
  ModifyCustomNameResponse modifyCustomNameWithOptions(shared_ptr<ModifyCustomNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCustomNameResponse modifyCustomName(shared_ptr<ModifyCustomNameRequest> request);
  ModifyDataSourceResponse modifyDataSourceWithOptions(shared_ptr<ModifyDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataSourceResponse modifyDataSource(shared_ptr<ModifyDataSourceRequest> request);
  ModifyDataSourceAttributeResponse modifyDataSourceAttributeWithOptions(shared_ptr<ModifyDataSourceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataSourceAttributeResponse modifyDataSourceAttribute(shared_ptr<ModifyDataSourceAttributeRequest> request);
  ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceAttributeResponse modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request);
  ModifyLogAlarmTaskResponse modifyLogAlarmTaskWithOptions(shared_ptr<ModifyLogAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLogAlarmTaskResponse modifyLogAlarmTask(shared_ptr<ModifyLogAlarmTaskRequest> request);
  ModifyPlanResponse modifyPlanWithOptions(shared_ptr<ModifyPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPlanResponse modifyPlan(shared_ptr<ModifyPlanRequest> request);
  ModifyReportPushTaskResponse modifyReportPushTaskWithOptions(shared_ptr<ModifyReportPushTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyReportPushTaskResponse modifyReportPushTask(shared_ptr<ModifyReportPushTaskRequest> request);
  ModifyRuleGroupResponse modifyRuleGroupWithOptions(shared_ptr<ModifyRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRuleGroupResponse modifyRuleGroup(shared_ptr<ModifyRuleGroupRequest> request);
  ModifySystemAlarmTaskResponse modifySystemAlarmTaskWithOptions(shared_ptr<ModifySystemAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySystemAlarmTaskResponse modifySystemAlarmTask(shared_ptr<ModifySystemAlarmTaskRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  PciReportResponse pciReportWithOptions(shared_ptr<PciReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PciReportResponse pciReport(shared_ptr<PciReportRequest> request);
  PutLoginCountResponse putLoginCountWithOptions(shared_ptr<PutLoginCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutLoginCountResponse putLoginCount(shared_ptr<PutLoginCountRequest> request);
  ReadMarkSystemAlarmsResponse readMarkSystemAlarmsWithOptions(shared_ptr<ReadMarkSystemAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadMarkSystemAlarmsResponse readMarkSystemAlarms(shared_ptr<ReadMarkSystemAlarmsRequest> request);
  RefundInstanceResponse refundInstanceWithOptions(shared_ptr<RefundInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundInstanceResponse refundInstance(shared_ptr<RefundInstanceRequest> request);
  RegisterNoticeMailResponse registerNoticeMailWithOptions(shared_ptr<RegisterNoticeMailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterNoticeMailResponse registerNoticeMail(shared_ptr<RegisterNoticeMailRequest> request);
  RemoveLogMaskConfigResponse removeLogMaskConfigWithOptions(shared_ptr<RemoveLogMaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveLogMaskConfigResponse removeLogMaskConfig(shared_ptr<RemoveLogMaskConfigRequest> request);
  SendVerifyCodeMailResponse sendVerifyCodeMailWithOptions(shared_ptr<SendVerifyCodeMailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerifyCodeMailResponse sendVerifyCodeMail(shared_ptr<SendVerifyCodeMailRequest> request);
  SoxReportResponse soxReportWithOptions(shared_ptr<SoxReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SoxReportResponse soxReport(shared_ptr<SoxReportRequest> request);
  StartAlarmTaskResponse startAlarmTaskWithOptions(shared_ptr<StartAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAlarmTaskResponse startAlarmTask(shared_ptr<StartAlarmTaskRequest> request);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<StartInstanceRequest> request);
  StopAlarmTaskResponse stopAlarmTaskWithOptions(shared_ptr<StopAlarmTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAlarmTaskResponse stopAlarmTask(shared_ptr<StopAlarmTaskRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpgradeInstanceVersionResponse upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeInstanceVersionResponse upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Yundun-dbaudit20180320

#endif
