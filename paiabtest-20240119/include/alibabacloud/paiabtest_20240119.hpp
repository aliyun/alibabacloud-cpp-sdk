// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAIABTEST20240119_H_
#define ALIBABACLOUD_PAIABTEST20240119_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PAIABTest20240119 {
class CheckLayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramNames{};

  CheckLayerRequest() {}

  explicit CheckLayerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramNames) {
      res["ParamNames"] = boost::any(*paramNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamNames") != m.end() && !m["ParamNames"].empty()) {
      paramNames = make_shared<string>(boost::any_cast<string>(m["ParamNames"]));
    }
  }


  virtual ~CheckLayerRequest() = default;
};
class CheckLayerResponseBodyCheckResults : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> experimentName{};
  shared_ptr<string> paramName{};

  CheckLayerResponseBodyCheckResults() {}

  explicit CheckLayerResponseBodyCheckResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentName) {
      res["ExperimentName"] = boost::any(*experimentName);
    }
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("ExperimentName") != m.end() && !m["ExperimentName"].empty()) {
      experimentName = make_shared<string>(boost::any_cast<string>(m["ExperimentName"]));
    }
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
  }


  virtual ~CheckLayerResponseBodyCheckResults() = default;
};
class CheckLayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CheckLayerResponseBodyCheckResults>> checkResults{};
  shared_ptr<string> requestId{};

  CheckLayerResponseBody() {}

  explicit CheckLayerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkResults) {
      vector<boost::any> temp1;
      for(auto item1:*checkResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckResults"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckResults") != m.end() && !m["CheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckResults"].type()) {
        vector<CheckLayerResponseBodyCheckResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckLayerResponseBodyCheckResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkResults = make_shared<vector<CheckLayerResponseBodyCheckResults>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckLayerResponseBody() = default;
};
class CheckLayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckLayerResponseBody> body{};

  CheckLayerResponse() {}

  explicit CheckLayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckLayerResponseBody>(model1);
      }
    }
  }


  virtual ~CheckLayerResponse() = default;
};
class CreateCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> users{};
  shared_ptr<string> workspaceId{};

  CreateCrowdRequest() {}

  explicit CreateCrowdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateCrowdRequest() = default;
};
class CreateCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> crowdId{};
  shared_ptr<string> requestId{};

  CreateCrowdResponseBody() {}

  explicit CreateCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCrowdResponseBody() = default;
};
class CreateCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCrowdResponseBody> body{};

  CreateCrowdResponse() {}

  explicit CreateCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCrowdResponse() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> condition{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> flow{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> workspaceId{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDomainResponseBody() = default;
};
class CreateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDomainResponseBody> body{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> condition{};
  shared_ptr<string> coreMetricId{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<long> flow{};
  shared_ptr<string> focusMetricIds{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<string> startTime{};
  shared_ptr<string> workspaceId{};

  CreateExperimentRequest() {}

  explicit CreateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (coreMetricId) {
      res["CoreMetricId"] = boost::any(*coreMetricId);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (focusMetricIds) {
      res["FocusMetricIds"] = boost::any(*focusMetricIds);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CoreMetricId") != m.end() && !m["CoreMetricId"].empty()) {
      coreMetricId = make_shared<string>(boost::any_cast<string>(m["CoreMetricId"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("FocusMetricIds") != m.end() && !m["FocusMetricIds"].empty()) {
      focusMetricIds = make_shared<string>(boost::any_cast<string>(m["FocusMetricIds"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateExperimentRequest() = default;
};
class CreateExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> requestId{};

  CreateExperimentResponseBody() {}

  explicit CreateExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateExperimentResponseBody() = default;
};
class CreateExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExperimentResponseBody> body{};

  CreateExperimentResponse() {}

  explicit CreateExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentResponse() = default;
};
class CreateExperimentVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<long> flow{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateExperimentVersionRequest() {}

  explicit CreateExperimentVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateExperimentVersionRequest() = default;
};
class CreateExperimentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> experimentVersionId{};
  shared_ptr<string> requestId{};

  CreateExperimentVersionResponseBody() {}

  explicit CreateExperimentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentVersionId) {
      res["ExperimentVersionId"] = boost::any(*experimentVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentVersionId") != m.end() && !m["ExperimentVersionId"].empty()) {
      experimentVersionId = make_shared<string>(boost::any_cast<string>(m["ExperimentVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateExperimentVersionResponseBody() = default;
};
class CreateExperimentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExperimentVersionResponseBody> body{};

  CreateExperimentVersionResponse() {}

  explicit CreateExperimentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExperimentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentVersionResponse() = default;
};
class CreateFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  CreateFeatureRequest() {}

  explicit CreateFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateFeatureRequest() = default;
};
class CreateFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureId{};
  shared_ptr<string> requestId{};

  CreateFeatureResponseBody() {}

  explicit CreateFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureId) {
      res["FeatureId"] = boost::any(*featureId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureId") != m.end() && !m["FeatureId"].empty()) {
      featureId = make_shared<string>(boost::any_cast<string>(m["FeatureId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFeatureResponseBody() = default;
};
class CreateFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFeatureResponseBody> body{};

  CreateFeatureResponse() {}

  explicit CreateFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFeatureResponse() = default;
};
class CreateLayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> workspaceId{};

  CreateLayerRequest() {}

  explicit CreateLayerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateLayerRequest() = default;
};
class CreateLayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> layerId{};
  shared_ptr<string> requestId{};

  CreateLayerResponseBody() {}

  explicit CreateLayerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLayerResponseBody() = default;
};
class CreateLayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLayerResponseBody> body{};

  CreateLayerResponse() {}

  explicit CreateLayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLayerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLayerResponse() = default;
};
class CreateMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> metricGroupId{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceTableMetaId{};

  CreateMetricRequest() {}

  explicit CreateMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceTableMetaId) {
      res["SourceTableMetaId"] = boost::any(*sourceTableMetaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceTableMetaId") != m.end() && !m["SourceTableMetaId"].empty()) {
      sourceTableMetaId = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaId"]));
    }
  }


  virtual ~CreateMetricRequest() = default;
};
class CreateMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> metricId{};
  shared_ptr<string> requestId{};

  CreateMetricResponseBody() {}

  explicit CreateMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricId) {
      res["MetricId"] = boost::any(*metricId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricId") != m.end() && !m["MetricId"].empty()) {
      metricId = make_shared<string>(boost::any_cast<string>(m["MetricId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMetricResponseBody() = default;
};
class CreateMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMetricResponseBody> body{};

  CreateMetricResponse() {}

  explicit CreateMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMetricResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMetricResponse() = default;
};
class CreateMetricGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  CreateMetricGroupRequest() {}

  explicit CreateMetricGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateMetricGroupRequest() = default;
};
class CreateMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> metricGroupId{};
  shared_ptr<string> requestId{};

  CreateMetricGroupResponseBody() {}

  explicit CreateMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMetricGroupResponseBody() = default;
};
class CreateMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMetricGroupResponseBody> body{};

  CreateMetricGroupResponse() {}

  explicit CreateMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMetricGroupResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateTableMetaRequestFields : public Darabonba::Model {
public:
  shared_ptr<string> meaning{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateTableMetaRequestFields() {}

  explicit CreateTableMetaRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meaning) {
      res["Meaning"] = boost::any(*meaning);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Meaning") != m.end() && !m["Meaning"].empty()) {
      meaning = make_shared<string>(boost::any_cast<string>(m["Meaning"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateTableMetaRequestFields() = default;
};
class CreateTableMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasourceInfo{};
  shared_ptr<string> datasourceType{};
  shared_ptr<string> description{};
  shared_ptr<vector<CreateTableMetaRequestFields>> fields{};
  shared_ptr<string> name{};
  shared_ptr<string> tableName{};
  shared_ptr<string> workspaceId{};

  CreateTableMetaRequest() {}

  explicit CreateTableMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasourceInfo) {
      res["DatasourceInfo"] = boost::any(*datasourceInfo);
    }
    if (datasourceType) {
      res["DatasourceType"] = boost::any(*datasourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasourceInfo") != m.end() && !m["DatasourceInfo"].empty()) {
      datasourceInfo = make_shared<string>(boost::any_cast<string>(m["DatasourceInfo"]));
    }
    if (m.find("DatasourceType") != m.end() && !m["DatasourceType"].empty()) {
      datasourceType = make_shared<string>(boost::any_cast<string>(m["DatasourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<CreateTableMetaRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTableMetaRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<CreateTableMetaRequestFields>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateTableMetaRequest() = default;
};
class CreateTableMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tableMetaId{};

  CreateTableMetaResponseBody() {}

  explicit CreateTableMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
  }


  virtual ~CreateTableMetaResponseBody() = default;
};
class CreateTableMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTableMetaResponseBody> body{};

  CreateTableMetaResponse() {}

  explicit CreateTableMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTableMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTableMetaResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTableMetaResponse() = default;
};
class DeleteCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCrowdResponseBody() {}

  explicit DeleteCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCrowdResponseBody() = default;
};
class DeleteCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCrowdResponseBody> body{};

  DeleteCrowdResponse() {}

  explicit DeleteCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCrowdResponse() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDomainResponseBody() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainResponseBody> body{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExperimentResponseBody() {}

  explicit DeleteExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExperimentResponseBody() = default;
};
class DeleteExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentResponseBody> body{};

  DeleteExperimentResponse() {}

  explicit DeleteExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentResponse() = default;
};
class DeleteExperimentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExperimentVersionResponseBody() {}

  explicit DeleteExperimentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExperimentVersionResponseBody() = default;
};
class DeleteExperimentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentVersionResponseBody> body{};

  DeleteExperimentVersionResponse() {}

  explicit DeleteExperimentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExperimentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentVersionResponse() = default;
};
class DeleteFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFeatureResponseBody() {}

  explicit DeleteFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFeatureResponseBody() = default;
};
class DeleteFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFeatureResponseBody> body{};

  DeleteFeatureResponse() {}

  explicit DeleteFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFeatureResponse() = default;
};
class DeleteLayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLayerResponseBody() {}

  explicit DeleteLayerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLayerResponseBody() = default;
};
class DeleteLayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLayerResponseBody> body{};

  DeleteLayerResponse() {}

  explicit DeleteLayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLayerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLayerResponse() = default;
};
class DeleteMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMetricResponseBody() {}

  explicit DeleteMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMetricResponseBody() = default;
};
class DeleteMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMetricResponseBody> body{};

  DeleteMetricResponse() {}

  explicit DeleteMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMetricResponse() = default;
};
class DeleteMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMetricGroupResponseBody() {}

  explicit DeleteMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMetricGroupResponseBody() = default;
};
class DeleteMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMetricGroupResponseBody> body{};

  DeleteMetricGroupResponse() {}

  explicit DeleteMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMetricGroupResponse() = default;
};
class DeleteProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProjectResponseBody() {}

  explicit DeleteProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProjectResponseBody() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class DeleteTableMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTableMetaResponseBody() {}

  explicit DeleteTableMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTableMetaResponseBody() = default;
};
class DeleteTableMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTableMetaResponseBody> body{};

  DeleteTableMetaResponse() {}

  explicit DeleteTableMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTableMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTableMetaResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTableMetaResponse() = default;
};
class GetCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> crowdId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> quantity{};
  shared_ptr<string> requestId{};
  shared_ptr<string> users{};
  shared_ptr<string> workspaceId{};

  GetCrowdResponseBody() {}

  explicit GetCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetCrowdResponseBody() = default;
};
class GetCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCrowdResponseBody> body{};

  GetCrowdResponse() {}

  explicit GetCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~GetCrowdResponse() = default;
};
class GetDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  GetDomainRequest() {}

  explicit GetDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetDomainRequest() = default;
};
class GetDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> condition{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> domainId{};
  shared_ptr<long> flow{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isDefaultDomain{};
  shared_ptr<string> layerId{};
  shared_ptr<string> layerName{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetDomainResponseBody() {}

  explicit GetDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isDefaultDomain) {
      res["IsDefaultDomain"] = boost::any(*isDefaultDomain);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (layerName) {
      res["LayerName"] = boost::any(*layerName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsDefaultDomain") != m.end() && !m["IsDefaultDomain"].empty()) {
      isDefaultDomain = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultDomain"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("LayerName") != m.end() && !m["LayerName"].empty()) {
      layerName = make_shared<string>(boost::any_cast<string>(m["LayerName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDomainResponseBody() = default;
};
class GetDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainResponseBody> body{};

  GetDomainResponse() {}

  explicit GetDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainResponse() = default;
};
class GetExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> buckets{};
  shared_ptr<string> condition{};
  shared_ptr<string> coreMetricId{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> experimentId{};
  shared_ptr<long> flow{};
  shared_ptr<string> focusMetricIds{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> layerId{};
  shared_ptr<string> layerName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  GetExperimentResponseBody() {}

  explicit GetExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (coreMetricId) {
      res["CoreMetricId"] = boost::any(*coreMetricId);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (focusMetricIds) {
      res["FocusMetricIds"] = boost::any(*focusMetricIds);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (layerName) {
      res["LayerName"] = boost::any(*layerName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CoreMetricId") != m.end() && !m["CoreMetricId"].empty()) {
      coreMetricId = make_shared<string>(boost::any_cast<string>(m["CoreMetricId"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("FocusMetricIds") != m.end() && !m["FocusMetricIds"].empty()) {
      focusMetricIds = make_shared<string>(boost::any_cast<string>(m["FocusMetricIds"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("LayerName") != m.end() && !m["LayerName"].empty()) {
      layerName = make_shared<string>(boost::any_cast<string>(m["LayerName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetExperimentResponseBody() = default;
};
class GetExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExperimentResponseBody> body{};

  GetExperimentResponse() {}

  explicit GetExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentResponse() = default;
};
class GetExperimentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buckets{};
  shared_ptr<string> config{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> experimentVersionId{};
  shared_ptr<long> flow{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};

  GetExperimentVersionResponseBody() {}

  explicit GetExperimentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentVersionId) {
      res["ExperimentVersionId"] = boost::any(*experimentVersionId);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("ExperimentVersionId") != m.end() && !m["ExperimentVersionId"].empty()) {
      experimentVersionId = make_shared<string>(boost::any_cast<string>(m["ExperimentVersionId"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetExperimentVersionResponseBody() = default;
};
class GetExperimentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExperimentVersionResponseBody> body{};

  GetExperimentVersionResponse() {}

  explicit GetExperimentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExperimentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentVersionResponse() = default;
};
class GetFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> config{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> experimentName{};
  shared_ptr<string> experimentOwner{};
  shared_ptr<string> experimentVersionId{};
  shared_ptr<string> experimentVersionName{};
  shared_ptr<string> featureId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  GetFeatureResponseBody() {}

  explicit GetFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentName) {
      res["ExperimentName"] = boost::any(*experimentName);
    }
    if (experimentOwner) {
      res["ExperimentOwner"] = boost::any(*experimentOwner);
    }
    if (experimentVersionId) {
      res["ExperimentVersionId"] = boost::any(*experimentVersionId);
    }
    if (experimentVersionName) {
      res["ExperimentVersionName"] = boost::any(*experimentVersionName);
    }
    if (featureId) {
      res["FeatureId"] = boost::any(*featureId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("ExperimentName") != m.end() && !m["ExperimentName"].empty()) {
      experimentName = make_shared<string>(boost::any_cast<string>(m["ExperimentName"]));
    }
    if (m.find("ExperimentOwner") != m.end() && !m["ExperimentOwner"].empty()) {
      experimentOwner = make_shared<string>(boost::any_cast<string>(m["ExperimentOwner"]));
    }
    if (m.find("ExperimentVersionId") != m.end() && !m["ExperimentVersionId"].empty()) {
      experimentVersionId = make_shared<string>(boost::any_cast<string>(m["ExperimentVersionId"]));
    }
    if (m.find("ExperimentVersionName") != m.end() && !m["ExperimentVersionName"].empty()) {
      experimentVersionName = make_shared<string>(boost::any_cast<string>(m["ExperimentVersionName"]));
    }
    if (m.find("FeatureId") != m.end() && !m["FeatureId"].empty()) {
      featureId = make_shared<string>(boost::any_cast<string>(m["FeatureId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["ReleaseTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetFeatureResponseBody() = default;
};
class GetFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFeatureResponseBody> body{};

  GetFeatureResponse() {}

  explicit GetFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~GetFeatureResponse() = default;
};
class GetLayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isDefaultLayer{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetLayerResponseBody() {}

  explicit GetLayerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isDefaultLayer) {
      res["IsDefaultLayer"] = boost::any(*isDefaultLayer);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsDefaultLayer") != m.end() && !m["IsDefaultLayer"].empty()) {
      isDefaultLayer = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultLayer"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetLayerResponseBody() = default;
};
class GetLayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLayerResponseBody> body{};

  GetLayerResponse() {}

  explicit GetLayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLayerResponseBody>(model1);
      }
    }
  }


  virtual ~GetLayerResponse() = default;
};
class GetMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> metricGroupId{};
  shared_ptr<string> metricId{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceTableMetaId{};
  shared_ptr<string> sourceTableMetaName{};

  GetMetricResponseBody() {}

  explicit GetMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (metricId) {
      res["MetricId"] = boost::any(*metricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceTableMetaId) {
      res["SourceTableMetaId"] = boost::any(*sourceTableMetaId);
    }
    if (sourceTableMetaName) {
      res["SourceTableMetaName"] = boost::any(*sourceTableMetaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("MetricId") != m.end() && !m["MetricId"].empty()) {
      metricId = make_shared<string>(boost::any_cast<string>(m["MetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceTableMetaId") != m.end() && !m["SourceTableMetaId"].empty()) {
      sourceTableMetaId = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaId"]));
    }
    if (m.find("SourceTableMetaName") != m.end() && !m["SourceTableMetaName"].empty()) {
      sourceTableMetaName = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaName"]));
    }
  }


  virtual ~GetMetricResponseBody() = default;
};
class GetMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMetricResponseBody> body{};

  GetMetricResponse() {}

  explicit GetMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetricResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetricResponse() = default;
};
class GetMetricGroupResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> metricId{};
  shared_ptr<string> name{};
  shared_ptr<long> relatedExperimentNumber{};
  shared_ptr<string> sourceTableMetaId{};

  GetMetricGroupResponseBodyMetrics() {}

  explicit GetMetricGroupResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (metricId) {
      res["MetricId"] = boost::any(*metricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (relatedExperimentNumber) {
      res["RelatedExperimentNumber"] = boost::any(*relatedExperimentNumber);
    }
    if (sourceTableMetaId) {
      res["SourceTableMetaId"] = boost::any(*sourceTableMetaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("MetricId") != m.end() && !m["MetricId"].empty()) {
      metricId = make_shared<string>(boost::any_cast<string>(m["MetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RelatedExperimentNumber") != m.end() && !m["RelatedExperimentNumber"].empty()) {
      relatedExperimentNumber = make_shared<long>(boost::any_cast<long>(m["RelatedExperimentNumber"]));
    }
    if (m.find("SourceTableMetaId") != m.end() && !m["SourceTableMetaId"].empty()) {
      sourceTableMetaId = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaId"]));
    }
  }


  virtual ~GetMetricGroupResponseBodyMetrics() = default;
};
class GetMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> metricGroupId{};
  shared_ptr<vector<GetMetricGroupResponseBodyMetrics>> metrics{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetMetricGroupResponseBody() {}

  explicit GetMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<GetMetricGroupResponseBodyMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMetricGroupResponseBodyMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<GetMetricGroupResponseBodyMetrics>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetMetricGroupResponseBody() = default;
};
class GetMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMetricGroupResponseBody> body{};

  GetMetricGroupResponse() {}

  explicit GetMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetricGroupResponse() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomainId{};
  shared_ptr<string> defaultLayerId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomainId) {
      res["DefaultDomainId"] = boost::any(*defaultDomainId);
    }
    if (defaultLayerId) {
      res["DefaultLayerId"] = boost::any(*defaultLayerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomainId") != m.end() && !m["DefaultDomainId"].empty()) {
      defaultDomainId = make_shared<string>(boost::any_cast<string>(m["DefaultDomainId"]));
    }
    if (m.find("DefaultLayerId") != m.end() && !m["DefaultLayerId"].empty()) {
      defaultLayerId = make_shared<string>(boost::any_cast<string>(m["DefaultLayerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetProjectResponseBody() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetTableMetaResponseBodyFields : public Darabonba::Model {
public:
  shared_ptr<string> meaning{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetTableMetaResponseBodyFields() {}

  explicit GetTableMetaResponseBodyFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meaning) {
      res["Meaning"] = boost::any(*meaning);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Meaning") != m.end() && !m["Meaning"].empty()) {
      meaning = make_shared<string>(boost::any_cast<string>(m["Meaning"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetTableMetaResponseBodyFields() = default;
};
class GetTableMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasourceInfo{};
  shared_ptr<string> datasourceType{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetTableMetaResponseBodyFields>> fields{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> workspaceId{};

  GetTableMetaResponseBody() {}

  explicit GetTableMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasourceInfo) {
      res["DatasourceInfo"] = boost::any(*datasourceInfo);
    }
    if (datasourceType) {
      res["DatasourceType"] = boost::any(*datasourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasourceInfo") != m.end() && !m["DatasourceInfo"].empty()) {
      datasourceInfo = make_shared<string>(boost::any_cast<string>(m["DatasourceInfo"]));
    }
    if (m.find("DatasourceType") != m.end() && !m["DatasourceType"].empty()) {
      datasourceType = make_shared<string>(boost::any_cast<string>(m["DatasourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<GetTableMetaResponseBodyFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableMetaResponseBodyFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<GetTableMetaResponseBodyFields>>(expect1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetTableMetaResponseBody() = default;
};
class GetTableMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableMetaResponseBody> body{};

  GetTableMetaResponse() {}

  explicit GetTableMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTableMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableMetaResponse() = default;
};
class ListCrowdsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> crowdName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListCrowdsRequest() {}

  explicit ListCrowdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (crowdName) {
      res["CrowdName"] = boost::any(*crowdName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
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
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("CrowdName") != m.end() && !m["CrowdName"].empty()) {
      crowdName = make_shared<string>(boost::any_cast<string>(m["CrowdName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
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
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListCrowdsRequest() = default;
};
class ListCrowdsResponseBodyCrowds : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> quantity{};
  shared_ptr<string> users{};
  shared_ptr<string> workspaceId{};

  ListCrowdsResponseBodyCrowds() {}

  explicit ListCrowdsResponseBodyCrowds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListCrowdsResponseBodyCrowds() = default;
};
class ListCrowdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCrowdsResponseBodyCrowds>> crowds{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListCrowdsResponseBody() {}

  explicit ListCrowdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crowds) {
      vector<boost::any> temp1;
      for(auto item1:*crowds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Crowds"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Crowds") != m.end() && !m["Crowds"].empty()) {
      if (typeid(vector<boost::any>) == m["Crowds"].type()) {
        vector<ListCrowdsResponseBodyCrowds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Crowds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCrowdsResponseBodyCrowds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        crowds = make_shared<vector<ListCrowdsResponseBodyCrowds>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCrowdsResponseBody() = default;
};
class ListCrowdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCrowdsResponseBody> body{};

  ListCrowdsResponse() {}

  explicit ListCrowdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCrowdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCrowdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCrowdsResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> layerId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> condition{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> domainId{};
  shared_ptr<long> flow{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isDefaultDomain{};
  shared_ptr<string> layerId{};
  shared_ptr<string> layerName{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> workspaceId{};

  ListDomainsResponseBodyDomains() {}

  explicit ListDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isDefaultDomain) {
      res["IsDefaultDomain"] = boost::any(*isDefaultDomain);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (layerName) {
      res["LayerName"] = boost::any(*layerName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsDefaultDomain") != m.end() && !m["IsDefaultDomain"].empty()) {
      isDefaultDomain = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultDomain"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("LayerName") != m.end() && !m["LayerName"].empty()) {
      layerName = make_shared<string>(boost::any_cast<string>(m["LayerName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDomainsResponseBodyDomains() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDomainsResponseBodyDomains>> domains{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<ListDomainsResponseBodyDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDomainsResponseBodyDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<ListDomainsResponseBodyDomains>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListDomainsResponseBody() = default;
};
class ListDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainsResponseBody> body{};

  ListDomainsResponse() {}

  explicit ListDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainsResponse() = default;
};
class ListExperimentVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListExperimentVersionsRequest() {}

  explicit ListExperimentVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListExperimentVersionsRequest() = default;
};
class ListExperimentVersionsResponseBodyExperimentVersions : public Darabonba::Model {
public:
  shared_ptr<string> buckets{};
  shared_ptr<string> config{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> experimentVersionId{};
  shared_ptr<long> flow{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListExperimentVersionsResponseBodyExperimentVersions() {}

  explicit ListExperimentVersionsResponseBodyExperimentVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentVersionId) {
      res["ExperimentVersionId"] = boost::any(*experimentVersionId);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("ExperimentVersionId") != m.end() && !m["ExperimentVersionId"].empty()) {
      experimentVersionId = make_shared<string>(boost::any_cast<string>(m["ExperimentVersionId"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListExperimentVersionsResponseBodyExperimentVersions() = default;
};
class ListExperimentVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExperimentVersionsResponseBodyExperimentVersions>> experimentVersions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExperimentVersionsResponseBody() {}

  explicit ListExperimentVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentVersions) {
      vector<boost::any> temp1;
      for(auto item1:*experimentVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExperimentVersions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentVersions") != m.end() && !m["ExperimentVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["ExperimentVersions"].type()) {
        vector<ListExperimentVersionsResponseBodyExperimentVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExperimentVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentVersionsResponseBodyExperimentVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        experimentVersions = make_shared<vector<ListExperimentVersionsResponseBodyExperimentVersions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExperimentVersionsResponseBody() = default;
};
class ListExperimentVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentVersionsResponseBody> body{};

  ListExperimentVersionsResponse() {}

  explicit ListExperimentVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExperimentVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentVersionsResponse() = default;
};
class ListExperimentsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> experimentName{};
  shared_ptr<string> layerId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  ListExperimentsRequest() {}

  explicit ListExperimentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentName) {
      res["ExperimentName"] = boost::any(*experimentName);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("ExperimentName") != m.end() && !m["ExperimentName"].empty()) {
      experimentName = make_shared<string>(boost::any_cast<string>(m["ExperimentName"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListExperimentsRequest() = default;
};
class ListExperimentsResponseBodyExperiments : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> buckets{};
  shared_ptr<string> condition{};
  shared_ptr<string> coreMetricId{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> domainName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> experimentId{};
  shared_ptr<long> flow{};
  shared_ptr<string> focusMetricIds{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> layerId{};
  shared_ptr<string> layerName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  ListExperimentsResponseBodyExperiments() {}

  explicit ListExperimentsResponseBodyExperiments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (coreMetricId) {
      res["CoreMetricId"] = boost::any(*coreMetricId);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (focusMetricIds) {
      res["FocusMetricIds"] = boost::any(*focusMetricIds);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (layerName) {
      res["LayerName"] = boost::any(*layerName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CoreMetricId") != m.end() && !m["CoreMetricId"].empty()) {
      coreMetricId = make_shared<string>(boost::any_cast<string>(m["CoreMetricId"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("FocusMetricIds") != m.end() && !m["FocusMetricIds"].empty()) {
      focusMetricIds = make_shared<string>(boost::any_cast<string>(m["FocusMetricIds"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("LayerName") != m.end() && !m["LayerName"].empty()) {
      layerName = make_shared<string>(boost::any_cast<string>(m["LayerName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListExperimentsResponseBodyExperiments() = default;
};
class ListExperimentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExperimentsResponseBodyExperiments>> experiments{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExperimentsResponseBody() {}

  explicit ListExperimentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experiments) {
      vector<boost::any> temp1;
      for(auto item1:*experiments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Experiments"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Experiments") != m.end() && !m["Experiments"].empty()) {
      if (typeid(vector<boost::any>) == m["Experiments"].type()) {
        vector<ListExperimentsResponseBodyExperiments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Experiments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentsResponseBodyExperiments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        experiments = make_shared<vector<ListExperimentsResponseBodyExperiments>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExperimentsResponseBody() = default;
};
class ListExperimentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentsResponseBody> body{};

  ListExperimentsResponse() {}

  explicit ListExperimentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExperimentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentsResponse() = default;
};
class ListFeaturesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> domainId{};
  shared_ptr<string> featureId{};
  shared_ptr<string> featureName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  ListFeaturesRequest() {}

  explicit ListFeaturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (featureId) {
      res["FeatureId"] = boost::any(*featureId);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
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
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("FeatureId") != m.end() && !m["FeatureId"].empty()) {
      featureId = make_shared<string>(boost::any_cast<string>(m["FeatureId"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
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
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListFeaturesRequest() = default;
};
class ListFeaturesResponseBodyFeatures : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> experimentName{};
  shared_ptr<string> experimentOwner{};
  shared_ptr<string> experimentVersionId{};
  shared_ptr<string> experimentVersionName{};
  shared_ptr<string> featureId{};
  shared_ptr<string> filter{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  ListFeaturesResponseBodyFeatures() {}

  explicit ListFeaturesResponseBodyFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentName) {
      res["ExperimentName"] = boost::any(*experimentName);
    }
    if (experimentOwner) {
      res["ExperimentOwner"] = boost::any(*experimentOwner);
    }
    if (experimentVersionId) {
      res["ExperimentVersionId"] = boost::any(*experimentVersionId);
    }
    if (experimentVersionName) {
      res["ExperimentVersionName"] = boost::any(*experimentVersionName);
    }
    if (featureId) {
      res["FeatureId"] = boost::any(*featureId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("ExperimentName") != m.end() && !m["ExperimentName"].empty()) {
      experimentName = make_shared<string>(boost::any_cast<string>(m["ExperimentName"]));
    }
    if (m.find("ExperimentOwner") != m.end() && !m["ExperimentOwner"].empty()) {
      experimentOwner = make_shared<string>(boost::any_cast<string>(m["ExperimentOwner"]));
    }
    if (m.find("ExperimentVersionId") != m.end() && !m["ExperimentVersionId"].empty()) {
      experimentVersionId = make_shared<string>(boost::any_cast<string>(m["ExperimentVersionId"]));
    }
    if (m.find("ExperimentVersionName") != m.end() && !m["ExperimentVersionName"].empty()) {
      experimentVersionName = make_shared<string>(boost::any_cast<string>(m["ExperimentVersionName"]));
    }
    if (m.find("FeatureId") != m.end() && !m["FeatureId"].empty()) {
      featureId = make_shared<string>(boost::any_cast<string>(m["FeatureId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["ReleaseTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListFeaturesResponseBodyFeatures() = default;
};
class ListFeaturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFeaturesResponseBodyFeatures>> features{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFeaturesResponseBody() {}

  explicit ListFeaturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (features) {
      vector<boost::any> temp1;
      for(auto item1:*features){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Features"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<ListFeaturesResponseBodyFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Features"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeaturesResponseBodyFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        features = make_shared<vector<ListFeaturesResponseBodyFeatures>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFeaturesResponseBody() = default;
};
class ListFeaturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeaturesResponseBody> body{};

  ListFeaturesResponse() {}

  explicit ListFeaturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeaturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeaturesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeaturesResponse() = default;
};
class ListLayersRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> domainId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> layerName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListLayersRequest() {}

  explicit ListLayersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (layerName) {
      res["LayerName"] = boost::any(*layerName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("LayerName") != m.end() && !m["LayerName"].empty()) {
      layerName = make_shared<string>(boost::any_cast<string>(m["LayerName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListLayersRequest() = default;
};
class ListLayersResponseBodyLayers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<bool> isDefaultLayer{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> workspaceId{};

  ListLayersResponseBodyLayers() {}

  explicit ListLayersResponseBodyLayers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (isDefaultLayer) {
      res["IsDefaultLayer"] = boost::any(*isDefaultLayer);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("IsDefaultLayer") != m.end() && !m["IsDefaultLayer"].empty()) {
      isDefaultLayer = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultLayer"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListLayersResponseBodyLayers() = default;
};
class ListLayersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLayersResponseBodyLayers>> layers{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListLayersResponseBody() {}

  explicit ListLayersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layers) {
      vector<boost::any> temp1;
      for(auto item1:*layers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layers"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layers") != m.end() && !m["Layers"].empty()) {
      if (typeid(vector<boost::any>) == m["Layers"].type()) {
        vector<ListLayersResponseBodyLayers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLayersResponseBodyLayers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layers = make_shared<vector<ListLayersResponseBodyLayers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLayersResponseBody() = default;
};
class ListLayersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLayersResponseBody> body{};

  ListLayersResponse() {}

  explicit ListLayersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLayersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLayersResponseBody>(model1);
      }
    }
  }


  virtual ~ListLayersResponse() = default;
};
class ListMetricGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> metricGroupId{};
  shared_ptr<string> metricGroupName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListMetricGroupsRequest() {}

  explicit ListMetricGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (metricGroupName) {
      res["MetricGroupName"] = boost::any(*metricGroupName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("MetricGroupName") != m.end() && !m["MetricGroupName"].empty()) {
      metricGroupName = make_shared<string>(boost::any_cast<string>(m["MetricGroupName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListMetricGroupsRequest() = default;
};
class ListMetricGroupsResponseBodyMetricGroupsMetrics : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> metricId{};
  shared_ptr<string> name{};
  shared_ptr<long> relatedExperimentsNumber{};
  shared_ptr<string> sourceTableMetaId{};

  ListMetricGroupsResponseBodyMetricGroupsMetrics() {}

  explicit ListMetricGroupsResponseBodyMetricGroupsMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (metricId) {
      res["MetricId"] = boost::any(*metricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (relatedExperimentsNumber) {
      res["RelatedExperimentsNumber"] = boost::any(*relatedExperimentsNumber);
    }
    if (sourceTableMetaId) {
      res["SourceTableMetaId"] = boost::any(*sourceTableMetaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("MetricId") != m.end() && !m["MetricId"].empty()) {
      metricId = make_shared<string>(boost::any_cast<string>(m["MetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RelatedExperimentsNumber") != m.end() && !m["RelatedExperimentsNumber"].empty()) {
      relatedExperimentsNumber = make_shared<long>(boost::any_cast<long>(m["RelatedExperimentsNumber"]));
    }
    if (m.find("SourceTableMetaId") != m.end() && !m["SourceTableMetaId"].empty()) {
      sourceTableMetaId = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaId"]));
    }
  }


  virtual ~ListMetricGroupsResponseBodyMetricGroupsMetrics() = default;
};
class ListMetricGroupsResponseBodyMetricGroups : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> metricGroupId{};
  shared_ptr<vector<ListMetricGroupsResponseBodyMetricGroupsMetrics>> metrics{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  ListMetricGroupsResponseBodyMetricGroups() {}

  explicit ListMetricGroupsResponseBodyMetricGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<ListMetricGroupsResponseBodyMetricGroupsMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMetricGroupsResponseBodyMetricGroupsMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<ListMetricGroupsResponseBodyMetricGroupsMetrics>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListMetricGroupsResponseBodyMetricGroups() = default;
};
class ListMetricGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMetricGroupsResponseBodyMetricGroups>> metricGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMetricGroupsResponseBody() {}

  explicit ListMetricGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricGroups) {
      vector<boost::any> temp1;
      for(auto item1:*metricGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricGroups"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricGroups") != m.end() && !m["MetricGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricGroups"].type()) {
        vector<ListMetricGroupsResponseBodyMetricGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMetricGroupsResponseBodyMetricGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricGroups = make_shared<vector<ListMetricGroupsResponseBodyMetricGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMetricGroupsResponseBody() = default;
};
class ListMetricGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMetricGroupsResponseBody> body{};

  ListMetricGroupsResponse() {}

  explicit ListMetricGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMetricGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMetricGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMetricGroupsResponse() = default;
};
class ListMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> all{};
  shared_ptr<string> metricGroupId{};
  shared_ptr<string> metricId{};
  shared_ptr<string> metricName{};
  shared_ptr<string> order{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortBy{};

  ListMetricsRequest() {}

  explicit ListMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (metricId) {
      res["MetricId"] = boost::any(*metricId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<string>(boost::any_cast<string>(m["All"]));
    }
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("MetricId") != m.end() && !m["MetricId"].empty()) {
      metricId = make_shared<string>(boost::any_cast<string>(m["MetricId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListMetricsRequest() = default;
};
class ListMetricsResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> metricGroupId{};
  shared_ptr<string> metricId{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceTableMetaId{};
  shared_ptr<string> sourceTableMetaName{};

  ListMetricsResponseBodyMetrics() {}

  explicit ListMetricsResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (metricGroupId) {
      res["MetricGroupId"] = boost::any(*metricGroupId);
    }
    if (metricId) {
      res["MetricId"] = boost::any(*metricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceTableMetaId) {
      res["SourceTableMetaId"] = boost::any(*sourceTableMetaId);
    }
    if (sourceTableMetaName) {
      res["SourceTableMetaName"] = boost::any(*sourceTableMetaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("MetricGroupId") != m.end() && !m["MetricGroupId"].empty()) {
      metricGroupId = make_shared<string>(boost::any_cast<string>(m["MetricGroupId"]));
    }
    if (m.find("MetricId") != m.end() && !m["MetricId"].empty()) {
      metricId = make_shared<string>(boost::any_cast<string>(m["MetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceTableMetaId") != m.end() && !m["SourceTableMetaId"].empty()) {
      sourceTableMetaId = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaId"]));
    }
    if (m.find("SourceTableMetaName") != m.end() && !m["SourceTableMetaName"].empty()) {
      sourceTableMetaName = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaName"]));
    }
  }


  virtual ~ListMetricsResponseBodyMetrics() = default;
};
class ListMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMetricsResponseBodyMetrics>> metrics{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMetricsResponseBody() {}

  explicit ListMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<ListMetricsResponseBodyMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMetricsResponseBodyMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<ListMetricsResponseBodyMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMetricsResponseBody() = default;
};
class ListMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMetricsResponseBody> body{};

  ListMetricsResponse() {}

  explicit ListMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMetricsResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBodyProjects : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> defaultDomainId{};
  shared_ptr<string> defaultLayerId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> workspaceId{};

  ListProjectsResponseBodyProjects() {}

  explicit ListProjectsResponseBodyProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (defaultDomainId) {
      res["DefaultDomainId"] = boost::any(*defaultDomainId);
    }
    if (defaultLayerId) {
      res["DefaultLayerId"] = boost::any(*defaultLayerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("DefaultDomainId") != m.end() && !m["DefaultDomainId"].empty()) {
      defaultDomainId = make_shared<string>(boost::any_cast<string>(m["DefaultDomainId"]));
    }
    if (m.find("DefaultLayerId") != m.end() && !m["DefaultLayerId"].empty()) {
      defaultLayerId = make_shared<string>(boost::any_cast<string>(m["DefaultLayerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListProjectsResponseBodyProjects() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectsResponseBodyProjects>> projects{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Projects"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Projects") != m.end() && !m["Projects"].empty()) {
      if (typeid(vector<boost::any>) == m["Projects"].type()) {
        vector<ListProjectsResponseBodyProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectsResponseBodyProjects>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListTableMetasRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> datasourceType{};
  shared_ptr<string> order{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> tableMetaName{};
  shared_ptr<string> workspaceId{};

  ListTableMetasRequest() {}

  explicit ListTableMetasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (datasourceType) {
      res["DatasourceType"] = boost::any(*datasourceType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (tableMetaName) {
      res["TableMetaName"] = boost::any(*tableMetaName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("DatasourceType") != m.end() && !m["DatasourceType"].empty()) {
      datasourceType = make_shared<string>(boost::any_cast<string>(m["DatasourceType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("TableMetaName") != m.end() && !m["TableMetaName"].empty()) {
      tableMetaName = make_shared<string>(boost::any_cast<string>(m["TableMetaName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListTableMetasRequest() = default;
};
class ListTableMetasResponseBodyTableMetasFields : public Darabonba::Model {
public:
  shared_ptr<string> meaning{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListTableMetasResponseBodyTableMetasFields() {}

  explicit ListTableMetasResponseBodyTableMetasFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meaning) {
      res["Meaning"] = boost::any(*meaning);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Meaning") != m.end() && !m["Meaning"].empty()) {
      meaning = make_shared<string>(boost::any_cast<string>(m["Meaning"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTableMetasResponseBodyTableMetasFields() = default;
};
class ListTableMetasResponseBodyTableMetas : public Darabonba::Model {
public:
  shared_ptr<bool> canDelete{};
  shared_ptr<string> datasourceInfo{};
  shared_ptr<string> datasourceType{};
  shared_ptr<string> description{};
  shared_ptr<vector<ListTableMetasResponseBodyTableMetasFields>> fields{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> workspaceId{};

  ListTableMetasResponseBodyTableMetas() {}

  explicit ListTableMetasResponseBodyTableMetas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canDelete) {
      res["CanDelete"] = boost::any(*canDelete);
    }
    if (datasourceInfo) {
      res["DatasourceInfo"] = boost::any(*datasourceInfo);
    }
    if (datasourceType) {
      res["DatasourceType"] = boost::any(*datasourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanDelete") != m.end() && !m["CanDelete"].empty()) {
      canDelete = make_shared<bool>(boost::any_cast<bool>(m["CanDelete"]));
    }
    if (m.find("DatasourceInfo") != m.end() && !m["DatasourceInfo"].empty()) {
      datasourceInfo = make_shared<string>(boost::any_cast<string>(m["DatasourceInfo"]));
    }
    if (m.find("DatasourceType") != m.end() && !m["DatasourceType"].empty()) {
      datasourceType = make_shared<string>(boost::any_cast<string>(m["DatasourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<ListTableMetasResponseBodyTableMetasFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTableMetasResponseBodyTableMetasFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<ListTableMetasResponseBodyTableMetasFields>>(expect1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListTableMetasResponseBodyTableMetas() = default;
};
class ListTableMetasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTableMetasResponseBodyTableMetas>> tableMetas{};
  shared_ptr<long> totalCount{};

  ListTableMetasResponseBody() {}

  explicit ListTableMetasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tableMetas) {
      vector<boost::any> temp1;
      for(auto item1:*tableMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableMetas"] = boost::any(temp1);
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
    if (m.find("TableMetas") != m.end() && !m["TableMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["TableMetas"].type()) {
        vector<ListTableMetasResponseBodyTableMetas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTableMetasResponseBodyTableMetas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableMetas = make_shared<vector<ListTableMetasResponseBodyTableMetas>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTableMetasResponseBody() = default;
};
class ListTableMetasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTableMetasResponseBody> body{};

  ListTableMetasResponse() {}

  explicit ListTableMetasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTableMetasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTableMetasResponseBody>(model1);
      }
    }
  }


  virtual ~ListTableMetasResponse() = default;
};
class PushAllExperimentVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> featureName{};

  PushAllExperimentVersionRequest() {}

  explicit PushAllExperimentVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
  }


  virtual ~PushAllExperimentVersionRequest() = default;
};
class PushAllExperimentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureId{};
  shared_ptr<string> requestId{};

  PushAllExperimentVersionResponseBody() {}

  explicit PushAllExperimentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureId) {
      res["FeatureId"] = boost::any(*featureId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureId") != m.end() && !m["FeatureId"].empty()) {
      featureId = make_shared<string>(boost::any_cast<string>(m["FeatureId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PushAllExperimentVersionResponseBody() = default;
};
class PushAllExperimentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushAllExperimentVersionResponseBody> body{};

  PushAllExperimentVersionResponse() {}

  explicit PushAllExperimentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushAllExperimentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushAllExperimentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~PushAllExperimentVersionResponse() = default;
};
class StartExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartExperimentResponseBody() {}

  explicit StartExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartExperimentResponseBody() = default;
};
class StartExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartExperimentResponseBody> body{};

  StartExperimentResponse() {}

  explicit StartExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~StartExperimentResponse() = default;
};
class StopExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopExperimentResponseBody() {}

  explicit StopExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopExperimentResponseBody() = default;
};
class StopExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopExperimentResponseBody> body{};

  StopExperimentResponse() {}

  explicit StopExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~StopExperimentResponse() = default;
};
class UpdateCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> users{};

  UpdateCrowdRequest() {}

  explicit UpdateCrowdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
    }
  }


  virtual ~UpdateCrowdRequest() = default;
};
class UpdateCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCrowdResponseBody() {}

  explicit UpdateCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCrowdResponseBody() = default;
};
class UpdateCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCrowdResponseBody> body{};

  UpdateCrowdResponse() {}

  explicit UpdateCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCrowdResponse() = default;
};
class UpdateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> condition{};
  shared_ptr<string> crowIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> flow{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  UpdateDomainRequest() {}

  explicit UpdateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (crowIds) {
      res["CrowIds"] = boost::any(*crowIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CrowIds") != m.end() && !m["CrowIds"].empty()) {
      crowIds = make_shared<string>(boost::any_cast<string>(m["CrowIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~UpdateDomainRequest() = default;
};
class UpdateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDomainResponseBody() {}

  explicit UpdateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDomainResponseBody() = default;
};
class UpdateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDomainResponseBody> body{};

  UpdateDomainResponse() {}

  explicit UpdateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDomainResponse() = default;
};
class UpdateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketType{};
  shared_ptr<string> condition{};
  shared_ptr<string> coreMetricId{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<long> flow{};
  shared_ptr<string> focusMetricIds{};
  shared_ptr<string> name{};
  shared_ptr<string> startTime{};

  UpdateExperimentRequest() {}

  explicit UpdateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (coreMetricId) {
      res["CoreMetricId"] = boost::any(*coreMetricId);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (focusMetricIds) {
      res["FocusMetricIds"] = boost::any(*focusMetricIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("CoreMetricId") != m.end() && !m["CoreMetricId"].empty()) {
      coreMetricId = make_shared<string>(boost::any_cast<string>(m["CoreMetricId"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("FocusMetricIds") != m.end() && !m["FocusMetricIds"].empty()) {
      focusMetricIds = make_shared<string>(boost::any_cast<string>(m["FocusMetricIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~UpdateExperimentRequest() = default;
};
class UpdateExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExperimentResponseBody() {}

  explicit UpdateExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateExperimentResponseBody() = default;
};
class UpdateExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentResponseBody> body{};

  UpdateExperimentResponse() {}

  explicit UpdateExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentResponse() = default;
};
class UpdateExperimentVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> crowdIds{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> flow{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateExperimentVersionRequest() {}

  explicit UpdateExperimentVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdIds) {
      res["CrowdIds"] = boost::any(*crowdIds);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flow) {
      res["Flow"] = boost::any(*flow);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdIds") != m.end() && !m["CrowdIds"].empty()) {
      crowdIds = make_shared<string>(boost::any_cast<string>(m["CrowdIds"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Flow") != m.end() && !m["Flow"].empty()) {
      flow = make_shared<long>(boost::any_cast<long>(m["Flow"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateExperimentVersionRequest() = default;
};
class UpdateExperimentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExperimentVersionResponseBody() {}

  explicit UpdateExperimentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateExperimentVersionResponseBody() = default;
};
class UpdateExperimentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentVersionResponseBody> body{};

  UpdateExperimentVersionResponse() {}

  explicit UpdateExperimentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExperimentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentVersionResponse() = default;
};
class UpdateFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  UpdateFeatureRequest() {}

  explicit UpdateFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateFeatureRequest() = default;
};
class UpdateFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFeatureResponseBody() {}

  explicit UpdateFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFeatureResponseBody() = default;
};
class UpdateFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFeatureResponseBody> body{};

  UpdateFeatureResponse() {}

  explicit UpdateFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFeatureResponse() = default;
};
class UpdateLayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  UpdateLayerRequest() {}

  explicit UpdateLayerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~UpdateLayerRequest() = default;
};
class UpdateLayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLayerResponseBody() {}

  explicit UpdateLayerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLayerResponseBody() = default;
};
class UpdateLayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLayerResponseBody> body{};

  UpdateLayerResponse() {}

  explicit UpdateLayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLayerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLayerResponse() = default;
};
class UpdateMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceTableMetaId{};

  UpdateMetricRequest() {}

  explicit UpdateMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceTableMetaId) {
      res["SourceTableMetaId"] = boost::any(*sourceTableMetaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceTableMetaId") != m.end() && !m["SourceTableMetaId"].empty()) {
      sourceTableMetaId = make_shared<string>(boost::any_cast<string>(m["SourceTableMetaId"]));
    }
  }


  virtual ~UpdateMetricRequest() = default;
};
class UpdateMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMetricResponseBody() {}

  explicit UpdateMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMetricResponseBody() = default;
};
class UpdateMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMetricResponseBody> body{};

  UpdateMetricResponse() {}

  explicit UpdateMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMetricResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMetricResponse() = default;
};
class UpdateMetricGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  UpdateMetricGroupRequest() {}

  explicit UpdateMetricGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateMetricGroupRequest() = default;
};
class UpdateMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMetricGroupResponseBody() {}

  explicit UpdateMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMetricGroupResponseBody() = default;
};
class UpdateMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMetricGroupResponseBody> body{};

  UpdateMetricGroupResponse() {}

  explicit UpdateMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMetricGroupResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateTableMetaRequestFields : public Darabonba::Model {
public:
  shared_ptr<string> meaning{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateTableMetaRequestFields() {}

  explicit UpdateTableMetaRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meaning) {
      res["Meaning"] = boost::any(*meaning);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Meaning") != m.end() && !m["Meaning"].empty()) {
      meaning = make_shared<string>(boost::any_cast<string>(m["Meaning"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateTableMetaRequestFields() = default;
};
class UpdateTableMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateTableMetaRequestFields>> fields{};
  shared_ptr<string> name{};

  UpdateTableMetaRequest() {}

  explicit UpdateTableMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<UpdateTableMetaRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTableMetaRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<UpdateTableMetaRequestFields>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateTableMetaRequest() = default;
};
class UpdateTableMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateTableMetaResponseBody() {}

  explicit UpdateTableMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTableMetaResponseBody() = default;
};
class UpdateTableMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTableMetaResponseBody> body{};

  UpdateTableMetaResponse() {}

  explicit UpdateTableMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTableMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTableMetaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTableMetaResponse() = default;
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
  CheckLayerResponse checkLayerWithOptions(shared_ptr<string> LayerId,
                                           shared_ptr<CheckLayerRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckLayerResponse checkLayer(shared_ptr<string> LayerId, shared_ptr<CheckLayerRequest> request);
  CreateCrowdResponse createCrowdWithOptions(shared_ptr<CreateCrowdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCrowdResponse createCrowd(shared_ptr<CreateCrowdRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateExperimentResponse createExperimentWithOptions(shared_ptr<CreateExperimentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentResponse createExperiment(shared_ptr<CreateExperimentRequest> request);
  CreateExperimentVersionResponse createExperimentVersionWithOptions(shared_ptr<CreateExperimentVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentVersionResponse createExperimentVersion(shared_ptr<CreateExperimentVersionRequest> request);
  CreateFeatureResponse createFeatureWithOptions(shared_ptr<CreateFeatureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFeatureResponse createFeature(shared_ptr<CreateFeatureRequest> request);
  CreateLayerResponse createLayerWithOptions(shared_ptr<CreateLayerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLayerResponse createLayer(shared_ptr<CreateLayerRequest> request);
  CreateMetricResponse createMetricWithOptions(shared_ptr<CreateMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMetricResponse createMetric(shared_ptr<CreateMetricRequest> request);
  CreateMetricGroupResponse createMetricGroupWithOptions(shared_ptr<CreateMetricGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMetricGroupResponse createMetricGroup(shared_ptr<CreateMetricGroupRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateTableMetaResponse createTableMetaWithOptions(shared_ptr<CreateTableMetaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTableMetaResponse createTableMeta(shared_ptr<CreateTableMetaRequest> request);
  DeleteCrowdResponse deleteCrowdWithOptions(shared_ptr<string> CrowdId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCrowdResponse deleteCrowd(shared_ptr<string> CrowdId);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<string> DomainId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<string> DomainId);
  DeleteExperimentResponse deleteExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentResponse deleteExperiment(shared_ptr<string> ExperimentId);
  DeleteExperimentVersionResponse deleteExperimentVersionWithOptions(shared_ptr<string> ExperimentVersionId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentVersionResponse deleteExperimentVersion(shared_ptr<string> ExperimentVersionId);
  DeleteFeatureResponse deleteFeatureWithOptions(shared_ptr<string> FeatureId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFeatureResponse deleteFeature(shared_ptr<string> FeatureId);
  DeleteLayerResponse deleteLayerWithOptions(shared_ptr<string> LayerId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLayerResponse deleteLayer(shared_ptr<string> LayerId);
  DeleteMetricResponse deleteMetricWithOptions(shared_ptr<string> MetricId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMetricResponse deleteMetric(shared_ptr<string> MetricId);
  DeleteMetricGroupResponse deleteMetricGroupWithOptions(shared_ptr<string> MetricGroupId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMetricGroupResponse deleteMetricGroup(shared_ptr<string> MetricGroupId);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> ProjectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> ProjectId);
  DeleteTableMetaResponse deleteTableMetaWithOptions(shared_ptr<string> TableMetaId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTableMetaResponse deleteTableMeta(shared_ptr<string> TableMetaId);
  GetCrowdResponse getCrowdWithOptions(shared_ptr<string> CrowdId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCrowdResponse getCrowd(shared_ptr<string> CrowdId);
  GetDomainResponse getDomainWithOptions(shared_ptr<string> DomainId,
                                         shared_ptr<GetDomainRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainResponse getDomain(shared_ptr<string> DomainId, shared_ptr<GetDomainRequest> request);
  GetExperimentResponse getExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentResponse getExperiment(shared_ptr<string> ExperimentId);
  GetExperimentVersionResponse getExperimentVersionWithOptions(shared_ptr<string> ExperimentVersionId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentVersionResponse getExperimentVersion(shared_ptr<string> ExperimentVersionId);
  GetFeatureResponse getFeatureWithOptions(shared_ptr<string> FeatureId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFeatureResponse getFeature(shared_ptr<string> FeatureId);
  GetLayerResponse getLayerWithOptions(shared_ptr<string> LayerId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLayerResponse getLayer(shared_ptr<string> LayerId);
  GetMetricResponse getMetricWithOptions(shared_ptr<string> MetricId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetricResponse getMetric(shared_ptr<string> MetricId);
  GetMetricGroupResponse getMetricGroupWithOptions(shared_ptr<string> MetricGroupId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetricGroupResponse getMetricGroup(shared_ptr<string> MetricGroupId);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> ProjectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> ProjectId);
  GetTableMetaResponse getTableMetaWithOptions(shared_ptr<string> TableMetaId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableMetaResponse getTableMeta(shared_ptr<string> TableMetaId);
  ListCrowdsResponse listCrowdsWithOptions(shared_ptr<ListCrowdsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCrowdsResponse listCrowds(shared_ptr<ListCrowdsRequest> request);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<ListDomainsRequest> request);
  ListExperimentVersionsResponse listExperimentVersionsWithOptions(shared_ptr<ListExperimentVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentVersionsResponse listExperimentVersions(shared_ptr<ListExperimentVersionsRequest> request);
  ListExperimentsResponse listExperimentsWithOptions(shared_ptr<ListExperimentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentsResponse listExperiments(shared_ptr<ListExperimentsRequest> request);
  ListFeaturesResponse listFeaturesWithOptions(shared_ptr<ListFeaturesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeaturesResponse listFeatures(shared_ptr<ListFeaturesRequest> request);
  ListLayersResponse listLayersWithOptions(shared_ptr<ListLayersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLayersResponse listLayers(shared_ptr<ListLayersRequest> request);
  ListMetricGroupsResponse listMetricGroupsWithOptions(shared_ptr<ListMetricGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMetricGroupsResponse listMetricGroups(shared_ptr<ListMetricGroupsRequest> request);
  ListMetricsResponse listMetricsWithOptions(shared_ptr<ListMetricsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMetricsResponse listMetrics(shared_ptr<ListMetricsRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListTableMetasResponse listTableMetasWithOptions(shared_ptr<ListTableMetasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTableMetasResponse listTableMetas(shared_ptr<ListTableMetasRequest> request);
  PushAllExperimentVersionResponse pushAllExperimentVersionWithOptions(shared_ptr<string> ExperimentVersionId,
                                                                       shared_ptr<PushAllExperimentVersionRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushAllExperimentVersionResponse pushAllExperimentVersion(shared_ptr<string> ExperimentVersionId, shared_ptr<PushAllExperimentVersionRequest> request);
  StartExperimentResponse startExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartExperimentResponse startExperiment(shared_ptr<string> ExperimentId);
  StopExperimentResponse stopExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopExperimentResponse stopExperiment(shared_ptr<string> ExperimentId);
  UpdateCrowdResponse updateCrowdWithOptions(shared_ptr<string> CrowdId,
                                             shared_ptr<UpdateCrowdRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCrowdResponse updateCrowd(shared_ptr<string> CrowdId, shared_ptr<UpdateCrowdRequest> request);
  UpdateDomainResponse updateDomainWithOptions(shared_ptr<string> DomainId,
                                               shared_ptr<UpdateDomainRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDomainResponse updateDomain(shared_ptr<string> DomainId, shared_ptr<UpdateDomainRequest> request);
  UpdateExperimentResponse updateExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                       shared_ptr<UpdateExperimentRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentResponse updateExperiment(shared_ptr<string> ExperimentId, shared_ptr<UpdateExperimentRequest> request);
  UpdateExperimentVersionResponse updateExperimentVersionWithOptions(shared_ptr<string> ExperimentVersionId,
                                                                     shared_ptr<UpdateExperimentVersionRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentVersionResponse updateExperimentVersion(shared_ptr<string> ExperimentVersionId, shared_ptr<UpdateExperimentVersionRequest> request);
  UpdateFeatureResponse updateFeatureWithOptions(shared_ptr<string> FeatureId,
                                                 shared_ptr<UpdateFeatureRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFeatureResponse updateFeature(shared_ptr<string> FeatureId, shared_ptr<UpdateFeatureRequest> request);
  UpdateLayerResponse updateLayerWithOptions(shared_ptr<string> LayerId,
                                             shared_ptr<UpdateLayerRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLayerResponse updateLayer(shared_ptr<string> LayerId, shared_ptr<UpdateLayerRequest> request);
  UpdateMetricResponse updateMetricWithOptions(shared_ptr<string> MetricId,
                                               shared_ptr<UpdateMetricRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMetricResponse updateMetric(shared_ptr<string> MetricId, shared_ptr<UpdateMetricRequest> request);
  UpdateMetricGroupResponse updateMetricGroupWithOptions(shared_ptr<string> MetricGroupId,
                                                         shared_ptr<UpdateMetricGroupRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMetricGroupResponse updateMetricGroup(shared_ptr<string> MetricGroupId, shared_ptr<UpdateMetricGroupRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> ProjectId,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> ProjectId, shared_ptr<UpdateProjectRequest> request);
  UpdateTableMetaResponse updateTableMetaWithOptions(shared_ptr<string> TableMetaId,
                                                     shared_ptr<UpdateTableMetaRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTableMetaResponse updateTableMeta(shared_ptr<string> TableMetaId, shared_ptr<UpdateTableMetaRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PAIABTest20240119

#endif
