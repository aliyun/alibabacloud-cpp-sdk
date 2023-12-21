// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAIRECSERVICE20221213_H_
#define ALIBABACLOUD_PAIRECSERVICE20221213_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PaiRecService20221213 {
class ExperimentReportValue : public Darabonba::Model {
public:
  shared_ptr<bool> baseline{};
  shared_ptr<map<string, map<string, boost::any>>> metricResults{};

  ExperimentReportValue() {}

  explicit ExperimentReportValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseline) {
      res["Baseline"] = boost::any(*baseline);
    }
    if (metricResults) {
      res["MetricResults"] = boost::any(*metricResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Baseline") != m.end() && !m["Baseline"].empty()) {
      baseline = make_shared<bool>(boost::any_cast<bool>(m["Baseline"]));
    }
    if (m.find("MetricResults") != m.end() && !m["MetricResults"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["MetricResults"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      metricResults = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
  }


  virtual ~ExperimentReportValue() = default;
};
class BackflowFeatureConsistencyCheckJobDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> featureConsistencyCheckJobConfigId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> itemFeatures{};
  shared_ptr<string> logItemId{};
  shared_ptr<string> logRequestId{};
  shared_ptr<long> logRequestTime{};
  shared_ptr<string> logUserId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> scores{};
  shared_ptr<string> userFeatures{};

  BackflowFeatureConsistencyCheckJobDataRequest() {}

  explicit BackflowFeatureConsistencyCheckJobDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureConsistencyCheckJobConfigId) {
      res["FeatureConsistencyCheckJobConfigId"] = boost::any(*featureConsistencyCheckJobConfigId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (itemFeatures) {
      res["ItemFeatures"] = boost::any(*itemFeatures);
    }
    if (logItemId) {
      res["LogItemId"] = boost::any(*logItemId);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (logRequestTime) {
      res["LogRequestTime"] = boost::any(*logRequestTime);
    }
    if (logUserId) {
      res["LogUserId"] = boost::any(*logUserId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (scores) {
      res["Scores"] = boost::any(*scores);
    }
    if (userFeatures) {
      res["UserFeatures"] = boost::any(*userFeatures);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureConsistencyCheckJobConfigId") != m.end() && !m["FeatureConsistencyCheckJobConfigId"].empty()) {
      featureConsistencyCheckJobConfigId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ItemFeatures") != m.end() && !m["ItemFeatures"].empty()) {
      itemFeatures = make_shared<string>(boost::any_cast<string>(m["ItemFeatures"]));
    }
    if (m.find("LogItemId") != m.end() && !m["LogItemId"].empty()) {
      logItemId = make_shared<string>(boost::any_cast<string>(m["LogItemId"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("LogRequestTime") != m.end() && !m["LogRequestTime"].empty()) {
      logRequestTime = make_shared<long>(boost::any_cast<long>(m["LogRequestTime"]));
    }
    if (m.find("LogUserId") != m.end() && !m["LogUserId"].empty()) {
      logUserId = make_shared<string>(boost::any_cast<string>(m["LogUserId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("Scores") != m.end() && !m["Scores"].empty()) {
      scores = make_shared<string>(boost::any_cast<string>(m["Scores"]));
    }
    if (m.find("UserFeatures") != m.end() && !m["UserFeatures"].empty()) {
      userFeatures = make_shared<string>(boost::any_cast<string>(m["UserFeatures"]));
    }
  }


  virtual ~BackflowFeatureConsistencyCheckJobDataRequest() = default;
};
class BackflowFeatureConsistencyCheckJobDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BackflowFeatureConsistencyCheckJobDataResponseBody() {}

  explicit BackflowFeatureConsistencyCheckJobDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BackflowFeatureConsistencyCheckJobDataResponseBody() = default;
};
class BackflowFeatureConsistencyCheckJobDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BackflowFeatureConsistencyCheckJobDataResponseBody> body{};

  BackflowFeatureConsistencyCheckJobDataResponse() {}

  explicit BackflowFeatureConsistencyCheckJobDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BackflowFeatureConsistencyCheckJobDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BackflowFeatureConsistencyCheckJobDataResponseBody>(model1);
      }
    }
  }


  virtual ~BackflowFeatureConsistencyCheckJobDataResponse() = default;
};
class CheckInstanceResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> uri{};

  CheckInstanceResourcesRequest() {}

  explicit CheckInstanceResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CheckInstanceResourcesRequest() = default;
};
class CheckInstanceResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};

  CheckInstanceResourcesResponseBodyResources() {}

  explicit CheckInstanceResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CheckInstanceResourcesResponseBodyResources() = default;
};
class CheckInstanceResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CheckInstanceResourcesResponseBodyResources>> resources{};

  CheckInstanceResourcesResponseBody() {}

  explicit CheckInstanceResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<CheckInstanceResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckInstanceResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<CheckInstanceResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~CheckInstanceResourcesResponseBody() = default;
};
class CheckInstanceResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckInstanceResourcesResponseBody> body{};

  CheckInstanceResourcesResponse() {}

  explicit CheckInstanceResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckInstanceResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckInstanceResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~CheckInstanceResourcesResponse() = default;
};
class CloneExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  CloneExperimentRequest() {}

  explicit CloneExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloneExperimentRequest() = default;
};
class CloneExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> requestId{};

  CloneExperimentResponseBody() {}

  explicit CloneExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloneExperimentResponseBody() = default;
};
class CloneExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneExperimentResponseBody> body{};

  CloneExperimentResponse() {}

  explicit CloneExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CloneExperimentResponse() = default;
};
class CloneExperimentGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> layerId{};

  CloneExperimentGroupRequest() {}

  explicit CloneExperimentGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
  }


  virtual ~CloneExperimentGroupRequest() = default;
};
class CloneExperimentGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> experimentGroupId{};
  shared_ptr<string> requestId{};

  CloneExperimentGroupResponseBody() {}

  explicit CloneExperimentGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneExperimentGroupResponseBody() = default;
};
class CloneExperimentGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneExperimentGroupResponseBody> body{};

  CloneExperimentGroupResponse() {}

  explicit CloneExperimentGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneExperimentGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneExperimentGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CloneExperimentGroupResponse() = default;
};
class CloneFeatureConsistencyCheckJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  CloneFeatureConsistencyCheckJobConfigRequest() {}

  explicit CloneFeatureConsistencyCheckJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloneFeatureConsistencyCheckJobConfigRequest() = default;
};
class CloneFeatureConsistencyCheckJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureConsistencyCheckId{};
  shared_ptr<string> requestId{};

  CloneFeatureConsistencyCheckJobConfigResponseBody() {}

  explicit CloneFeatureConsistencyCheckJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureConsistencyCheckId) {
      res["FeatureConsistencyCheckId"] = boost::any(*featureConsistencyCheckId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureConsistencyCheckId") != m.end() && !m["FeatureConsistencyCheckId"].empty()) {
      featureConsistencyCheckId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneFeatureConsistencyCheckJobConfigResponseBody() = default;
};
class CloneFeatureConsistencyCheckJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneFeatureConsistencyCheckJobConfigResponseBody> body{};

  CloneFeatureConsistencyCheckJobConfigResponse() {}

  explicit CloneFeatureConsistencyCheckJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneFeatureConsistencyCheckJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneFeatureConsistencyCheckJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CloneFeatureConsistencyCheckJobConfigResponse() = default;
};
class CloneLaboratoryRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cloneExperimentGroup{};
  shared_ptr<string> environment{};
  shared_ptr<string> instanceId{};

  CloneLaboratoryRequest() {}

  explicit CloneLaboratoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloneExperimentGroup) {
      res["CloneExperimentGroup"] = boost::any(*cloneExperimentGroup);
    }
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloneExperimentGroup") != m.end() && !m["CloneExperimentGroup"].empty()) {
      cloneExperimentGroup = make_shared<bool>(boost::any_cast<bool>(m["CloneExperimentGroup"]));
    }
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CloneLaboratoryRequest() = default;
};
class CloneLaboratoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> requestId{};

  CloneLaboratoryResponseBody() {}

  explicit CloneLaboratoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneLaboratoryResponseBody() = default;
};
class CloneLaboratoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneLaboratoryResponseBody> body{};

  CloneLaboratoryResponse() {}

  explicit CloneLaboratoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneLaboratoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneLaboratoryResponseBody>(model1);
      }
    }
  }


  virtual ~CloneLaboratoryResponse() = default;
};
class CreateABMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> leftMetricId{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> resultResourceId{};
  shared_ptr<string> rightMetricId{};
  shared_ptr<string> sceneId{};
  shared_ptr<long> statisticsCycle{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> type{};

  CreateABMetricRequest() {}

  explicit CreateABMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (leftMetricId) {
      res["LeftMetricId"] = boost::any(*leftMetricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (resultResourceId) {
      res["ResultResourceId"] = boost::any(*resultResourceId);
    }
    if (rightMetricId) {
      res["RightMetricId"] = boost::any(*rightMetricId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (statisticsCycle) {
      res["StatisticsCycle"] = boost::any(*statisticsCycle);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LeftMetricId") != m.end() && !m["LeftMetricId"].empty()) {
      leftMetricId = make_shared<string>(boost::any_cast<string>(m["LeftMetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("ResultResourceId") != m.end() && !m["ResultResourceId"].empty()) {
      resultResourceId = make_shared<string>(boost::any_cast<string>(m["ResultResourceId"]));
    }
    if (m.find("RightMetricId") != m.end() && !m["RightMetricId"].empty()) {
      rightMetricId = make_shared<string>(boost::any_cast<string>(m["RightMetricId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("StatisticsCycle") != m.end() && !m["StatisticsCycle"].empty()) {
      statisticsCycle = make_shared<long>(boost::any_cast<long>(m["StatisticsCycle"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateABMetricRequest() = default;
};
class CreateABMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricId{};
  shared_ptr<string> requestId{};

  CreateABMetricResponseBody() {}

  explicit CreateABMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricId) {
      res["ABMetricId"] = boost::any(*ABMetricId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricId") != m.end() && !m["ABMetricId"].empty()) {
      ABMetricId = make_shared<string>(boost::any_cast<string>(m["ABMetricId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateABMetricResponseBody() = default;
};
class CreateABMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateABMetricResponseBody> body{};

  CreateABMetricResponse() {}

  explicit CreateABMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateABMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateABMetricResponseBody>(model1);
      }
    }
  }


  virtual ~CreateABMetricResponse() = default;
};
class CreateABMetricGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricIds{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> sceneId{};

  CreateABMetricGroupRequest() {}

  explicit CreateABMetricGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricIds) {
      res["ABMetricIds"] = boost::any(*ABMetricIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricIds") != m.end() && !m["ABMetricIds"].empty()) {
      ABMetricIds = make_shared<string>(boost::any_cast<string>(m["ABMetricIds"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~CreateABMetricGroupRequest() = default;
};
class CreateABMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricGroupId{};
  shared_ptr<string> requestId{};

  CreateABMetricGroupResponseBody() {}

  explicit CreateABMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricGroupId) {
      res["ABMetricGroupId"] = boost::any(*ABMetricGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricGroupId") != m.end() && !m["ABMetricGroupId"].empty()) {
      ABMetricGroupId = make_shared<string>(boost::any_cast<string>(m["ABMetricGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateABMetricGroupResponseBody() = default;
};
class CreateABMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateABMetricGroupResponseBody> body{};

  CreateABMetricGroupResponse() {}

  explicit CreateABMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateABMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateABMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateABMetricGroupResponse() = default;
};
class CreateCalculationJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricIds{};
  shared_ptr<string> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startDate{};

  CreateCalculationJobsRequest() {}

  explicit CreateCalculationJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricIds) {
      res["ABMetricIds"] = boost::any(*ABMetricIds);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricIds") != m.end() && !m["ABMetricIds"].empty()) {
      ABMetricIds = make_shared<string>(boost::any_cast<string>(m["ABMetricIds"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~CreateCalculationJobsRequest() = default;
};
class CreateCalculationJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> calculationJobIds{};
  shared_ptr<string> requestId{};

  CreateCalculationJobsResponseBody() {}

  explicit CreateCalculationJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calculationJobIds) {
      res["CalculationJobIds"] = boost::any(*calculationJobIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalculationJobIds") != m.end() && !m["CalculationJobIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CalculationJobIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CalculationJobIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      calculationJobIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCalculationJobsResponseBody() = default;
};
class CreateCalculationJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCalculationJobsResponseBody> body{};

  CreateCalculationJobsResponse() {}

  explicit CreateCalculationJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCalculationJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCalculationJobsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCalculationJobsResponse() = default;
};
class CreateCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> users{};

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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (source) {
      res["Source"] = boost::any(*source);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
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
        CreateCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCrowdResponse() = default;
};
class CreateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentGroupId{};
  shared_ptr<long> flowPercent{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateExperimentRequest() {}

  explicit CreateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (flowPercent) {
      res["FlowPercent"] = boost::any(*flowPercent);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("FlowPercent") != m.end() && !m["FlowPercent"].empty()) {
      flowPercent = make_shared<long>(boost::any_cast<long>(m["FlowPercent"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
        CreateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentResponse() = default;
};
class CreateExperimentGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> distributionTimeDuration{};
  shared_ptr<string> distributionType{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<bool> needAA{};
  shared_ptr<string> reservedBuckets{};

  CreateExperimentGroupRequest() {}

  explicit CreateExperimentGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (distributionTimeDuration) {
      res["DistributionTimeDuration"] = boost::any(*distributionTimeDuration);
    }
    if (distributionType) {
      res["DistributionType"] = boost::any(*distributionType);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (needAA) {
      res["NeedAA"] = boost::any(*needAA);
    }
    if (reservedBuckets) {
      res["ReservedBuckets"] = boost::any(*reservedBuckets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DistributionTimeDuration") != m.end() && !m["DistributionTimeDuration"].empty()) {
      distributionTimeDuration = make_shared<long>(boost::any_cast<long>(m["DistributionTimeDuration"]));
    }
    if (m.find("DistributionType") != m.end() && !m["DistributionType"].empty()) {
      distributionType = make_shared<string>(boost::any_cast<string>(m["DistributionType"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NeedAA") != m.end() && !m["NeedAA"].empty()) {
      needAA = make_shared<bool>(boost::any_cast<bool>(m["NeedAA"]));
    }
    if (m.find("ReservedBuckets") != m.end() && !m["ReservedBuckets"].empty()) {
      reservedBuckets = make_shared<string>(boost::any_cast<string>(m["ReservedBuckets"]));
    }
  }


  virtual ~CreateExperimentGroupRequest() = default;
};
class CreateExperimentGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> experimentGroupId{};
  shared_ptr<string> requestId{};

  CreateExperimentGroupResponseBody() {}

  explicit CreateExperimentGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateExperimentGroupResponseBody() = default;
};
class CreateExperimentGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExperimentGroupResponseBody> body{};

  CreateExperimentGroupResponse() {}

  explicit CreateExperimentGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExperimentGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentGroupResponse() = default;
};
class CreateFeatureConsistencyCheckJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> featureConsistencyCheckJobConfigId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> samplingDuration{};

  CreateFeatureConsistencyCheckJobRequest() {}

  explicit CreateFeatureConsistencyCheckJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (featureConsistencyCheckJobConfigId) {
      res["FeatureConsistencyCheckJobConfigId"] = boost::any(*featureConsistencyCheckJobConfigId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (samplingDuration) {
      res["SamplingDuration"] = boost::any(*samplingDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("FeatureConsistencyCheckJobConfigId") != m.end() && !m["FeatureConsistencyCheckJobConfigId"].empty()) {
      featureConsistencyCheckJobConfigId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SamplingDuration") != m.end() && !m["SamplingDuration"].empty()) {
      samplingDuration = make_shared<long>(boost::any_cast<long>(m["SamplingDuration"]));
    }
  }


  virtual ~CreateFeatureConsistencyCheckJobRequest() = default;
};
class CreateFeatureConsistencyCheckJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureConsistencyCheckJobId{};
  shared_ptr<string> requestId{};

  CreateFeatureConsistencyCheckJobResponseBody() {}

  explicit CreateFeatureConsistencyCheckJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureConsistencyCheckJobId) {
      res["FeatureConsistencyCheckJobId"] = boost::any(*featureConsistencyCheckJobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureConsistencyCheckJobId") != m.end() && !m["FeatureConsistencyCheckJobId"].empty()) {
      featureConsistencyCheckJobId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFeatureConsistencyCheckJobResponseBody() = default;
};
class CreateFeatureConsistencyCheckJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFeatureConsistencyCheckJobResponseBody> body{};

  CreateFeatureConsistencyCheckJobResponse() {}

  explicit CreateFeatureConsistencyCheckJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFeatureConsistencyCheckJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFeatureConsistencyCheckJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFeatureConsistencyCheckJobResponse() = default;
};
class CreateFeatureConsistencyCheckJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compareFeature{};
  shared_ptr<string> easServiceName{};
  shared_ptr<string> easyRecPackagePath{};
  shared_ptr<string> easyRecVersion{};
  shared_ptr<string> featureDisplayExclude{};
  shared_ptr<string> featureLandingResourceId{};
  shared_ptr<string> featurePriority{};
  shared_ptr<string> fgJarVersion{};
  shared_ptr<string> fgJsonFileName{};
  shared_ptr<bool> generateZip{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> itemIdField{};
  shared_ptr<string> itemTable{};
  shared_ptr<string> itemTablePartitionField{};
  shared_ptr<string> itemTablePartitionFieldFormat{};
  shared_ptr<string> name{};
  shared_ptr<string> ossResourceId{};
  shared_ptr<double> sampleRate{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> userIdField{};
  shared_ptr<string> userTable{};
  shared_ptr<string> userTablePartitionField{};
  shared_ptr<string> userTablePartitionFieldFormat{};
  shared_ptr<string> workflowName{};

  CreateFeatureConsistencyCheckJobConfigRequest() {}

  explicit CreateFeatureConsistencyCheckJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compareFeature) {
      res["CompareFeature"] = boost::any(*compareFeature);
    }
    if (easServiceName) {
      res["EasServiceName"] = boost::any(*easServiceName);
    }
    if (easyRecPackagePath) {
      res["EasyRecPackagePath"] = boost::any(*easyRecPackagePath);
    }
    if (easyRecVersion) {
      res["EasyRecVersion"] = boost::any(*easyRecVersion);
    }
    if (featureDisplayExclude) {
      res["FeatureDisplayExclude"] = boost::any(*featureDisplayExclude);
    }
    if (featureLandingResourceId) {
      res["FeatureLandingResourceId"] = boost::any(*featureLandingResourceId);
    }
    if (featurePriority) {
      res["FeaturePriority"] = boost::any(*featurePriority);
    }
    if (fgJarVersion) {
      res["FgJarVersion"] = boost::any(*fgJarVersion);
    }
    if (fgJsonFileName) {
      res["FgJsonFileName"] = boost::any(*fgJsonFileName);
    }
    if (generateZip) {
      res["GenerateZip"] = boost::any(*generateZip);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (itemIdField) {
      res["ItemIdField"] = boost::any(*itemIdField);
    }
    if (itemTable) {
      res["ItemTable"] = boost::any(*itemTable);
    }
    if (itemTablePartitionField) {
      res["ItemTablePartitionField"] = boost::any(*itemTablePartitionField);
    }
    if (itemTablePartitionFieldFormat) {
      res["ItemTablePartitionFieldFormat"] = boost::any(*itemTablePartitionFieldFormat);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossResourceId) {
      res["OssResourceId"] = boost::any(*ossResourceId);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userIdField) {
      res["UserIdField"] = boost::any(*userIdField);
    }
    if (userTable) {
      res["UserTable"] = boost::any(*userTable);
    }
    if (userTablePartitionField) {
      res["UserTablePartitionField"] = boost::any(*userTablePartitionField);
    }
    if (userTablePartitionFieldFormat) {
      res["UserTablePartitionFieldFormat"] = boost::any(*userTablePartitionFieldFormat);
    }
    if (workflowName) {
      res["WorkflowName"] = boost::any(*workflowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompareFeature") != m.end() && !m["CompareFeature"].empty()) {
      compareFeature = make_shared<bool>(boost::any_cast<bool>(m["CompareFeature"]));
    }
    if (m.find("EasServiceName") != m.end() && !m["EasServiceName"].empty()) {
      easServiceName = make_shared<string>(boost::any_cast<string>(m["EasServiceName"]));
    }
    if (m.find("EasyRecPackagePath") != m.end() && !m["EasyRecPackagePath"].empty()) {
      easyRecPackagePath = make_shared<string>(boost::any_cast<string>(m["EasyRecPackagePath"]));
    }
    if (m.find("EasyRecVersion") != m.end() && !m["EasyRecVersion"].empty()) {
      easyRecVersion = make_shared<string>(boost::any_cast<string>(m["EasyRecVersion"]));
    }
    if (m.find("FeatureDisplayExclude") != m.end() && !m["FeatureDisplayExclude"].empty()) {
      featureDisplayExclude = make_shared<string>(boost::any_cast<string>(m["FeatureDisplayExclude"]));
    }
    if (m.find("FeatureLandingResourceId") != m.end() && !m["FeatureLandingResourceId"].empty()) {
      featureLandingResourceId = make_shared<string>(boost::any_cast<string>(m["FeatureLandingResourceId"]));
    }
    if (m.find("FeaturePriority") != m.end() && !m["FeaturePriority"].empty()) {
      featurePriority = make_shared<string>(boost::any_cast<string>(m["FeaturePriority"]));
    }
    if (m.find("FgJarVersion") != m.end() && !m["FgJarVersion"].empty()) {
      fgJarVersion = make_shared<string>(boost::any_cast<string>(m["FgJarVersion"]));
    }
    if (m.find("FgJsonFileName") != m.end() && !m["FgJsonFileName"].empty()) {
      fgJsonFileName = make_shared<string>(boost::any_cast<string>(m["FgJsonFileName"]));
    }
    if (m.find("GenerateZip") != m.end() && !m["GenerateZip"].empty()) {
      generateZip = make_shared<bool>(boost::any_cast<bool>(m["GenerateZip"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ItemIdField") != m.end() && !m["ItemIdField"].empty()) {
      itemIdField = make_shared<string>(boost::any_cast<string>(m["ItemIdField"]));
    }
    if (m.find("ItemTable") != m.end() && !m["ItemTable"].empty()) {
      itemTable = make_shared<string>(boost::any_cast<string>(m["ItemTable"]));
    }
    if (m.find("ItemTablePartitionField") != m.end() && !m["ItemTablePartitionField"].empty()) {
      itemTablePartitionField = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionField"]));
    }
    if (m.find("ItemTablePartitionFieldFormat") != m.end() && !m["ItemTablePartitionFieldFormat"].empty()) {
      itemTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionFieldFormat"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssResourceId") != m.end() && !m["OssResourceId"].empty()) {
      ossResourceId = make_shared<string>(boost::any_cast<string>(m["OssResourceId"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<double>(boost::any_cast<double>(m["SampleRate"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserIdField") != m.end() && !m["UserIdField"].empty()) {
      userIdField = make_shared<string>(boost::any_cast<string>(m["UserIdField"]));
    }
    if (m.find("UserTable") != m.end() && !m["UserTable"].empty()) {
      userTable = make_shared<string>(boost::any_cast<string>(m["UserTable"]));
    }
    if (m.find("UserTablePartitionField") != m.end() && !m["UserTablePartitionField"].empty()) {
      userTablePartitionField = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionField"]));
    }
    if (m.find("UserTablePartitionFieldFormat") != m.end() && !m["UserTablePartitionFieldFormat"].empty()) {
      userTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionFieldFormat"]));
    }
    if (m.find("WorkflowName") != m.end() && !m["WorkflowName"].empty()) {
      workflowName = make_shared<string>(boost::any_cast<string>(m["WorkflowName"]));
    }
  }


  virtual ~CreateFeatureConsistencyCheckJobConfigRequest() = default;
};
class CreateFeatureConsistencyCheckJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureConsistencyCheckJobConfigId{};
  shared_ptr<string> requestId{};

  CreateFeatureConsistencyCheckJobConfigResponseBody() {}

  explicit CreateFeatureConsistencyCheckJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureConsistencyCheckJobConfigId) {
      res["FeatureConsistencyCheckJobConfigId"] = boost::any(*featureConsistencyCheckJobConfigId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureConsistencyCheckJobConfigId") != m.end() && !m["FeatureConsistencyCheckJobConfigId"].empty()) {
      featureConsistencyCheckJobConfigId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFeatureConsistencyCheckJobConfigResponseBody() = default;
};
class CreateFeatureConsistencyCheckJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFeatureConsistencyCheckJobConfigResponseBody> body{};

  CreateFeatureConsistencyCheckJobConfigResponse() {}

  explicit CreateFeatureConsistencyCheckJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFeatureConsistencyCheckJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFeatureConsistencyCheckJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFeatureConsistencyCheckJobConfigResponse() = default;
};
class CreateInstanceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> group{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};

  CreateInstanceResourceRequest() {}

  explicit CreateInstanceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CreateInstanceResourceRequest() = default;
};
class CreateInstanceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};

  CreateInstanceResourceResponseBody() {}

  explicit CreateInstanceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~CreateInstanceResourceResponseBody() = default;
};
class CreateInstanceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResourceResponseBody> body{};

  CreateInstanceResourceResponse() {}

  explicit CreateInstanceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResourceResponse() = default;
};
class CreateLaboratoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> bucketCount{};
  shared_ptr<string> bucketType{};
  shared_ptr<string> buckets{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> environment{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> type{};

  CreateLaboratoryRequest() {}

  explicit CreateLaboratoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketCount) {
      res["BucketCount"] = boost::any(*bucketCount);
    }
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketCount") != m.end() && !m["BucketCount"].empty()) {
      bucketCount = make_shared<long>(boost::any_cast<long>(m["BucketCount"]));
    }
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateLaboratoryRequest() = default;
};
class CreateLaboratoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> requestId{};

  CreateLaboratoryResponseBody() {}

  explicit CreateLaboratoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLaboratoryResponseBody() = default;
};
class CreateLaboratoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLaboratoryResponseBody> body{};

  CreateLaboratoryResponse() {}

  explicit CreateLaboratoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLaboratoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLaboratoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLaboratoryResponse() = default;
};
class CreateLayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> name{};

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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
        CreateLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLayerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLayerResponse() = default;
};
class CreateParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> value{};

  CreateParamRequest() {}

  explicit CreateParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateParamRequest() = default;
};
class CreateParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> paramId{};
  shared_ptr<string> requestId{};

  CreateParamResponseBody() {}

  explicit CreateParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramId) {
      res["ParamId"] = boost::any(*paramId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamId") != m.end() && !m["ParamId"].empty()) {
      paramId = make_shared<long>(boost::any_cast<long>(m["ParamId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateParamResponseBody() = default;
};
class CreateParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateParamResponseBody> body{};

  CreateParamResponse() {}

  explicit CreateParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateParamResponseBody>(model1);
      }
    }
  }


  virtual ~CreateParamResponse() = default;
};
class CreateSceneRequestFlows : public Darabonba::Model {
public:
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowName{};

  CreateSceneRequestFlows() {}

  explicit CreateSceneRequestFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~CreateSceneRequestFlows() = default;
};
class CreateSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<CreateSceneRequestFlows>> flows{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  CreateSceneRequest() {}

  explicit CreateSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flows) {
      vector<boost::any> temp1;
      for(auto item1:*flows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Flows"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Flows") != m.end() && !m["Flows"].empty()) {
      if (typeid(vector<boost::any>) == m["Flows"].type()) {
        vector<CreateSceneRequestFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Flows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSceneRequestFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flows = make_shared<vector<CreateSceneRequestFlows>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateSceneRequest() = default;
};
class CreateSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};

  CreateSceneResponseBody() {}

  explicit CreateSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~CreateSceneResponseBody() = default;
};
class CreateSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSceneResponseBody> body{};

  CreateSceneResponse() {}

  explicit CreateSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSceneResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSceneResponse() = default;
};
class CreateSubCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> source{};
  shared_ptr<string> users{};

  CreateSubCrowdRequest() {}

  explicit CreateSubCrowdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
    }
  }


  virtual ~CreateSubCrowdRequest() = default;
};
class CreateSubCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> subCrowdId{};

  CreateSubCrowdResponseBody() {}

  explicit CreateSubCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subCrowdId) {
      res["SubCrowdId"] = boost::any(*subCrowdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubCrowdId") != m.end() && !m["SubCrowdId"].empty()) {
      subCrowdId = make_shared<string>(boost::any_cast<string>(m["SubCrowdId"]));
    }
  }


  virtual ~CreateSubCrowdResponseBody() = default;
};
class CreateSubCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubCrowdResponseBody> body{};

  CreateSubCrowdResponse() {}

  explicit CreateSubCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSubCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubCrowdResponse() = default;
};
class CreateTableMetaRequestFields : public Darabonba::Model {
public:
  shared_ptr<bool> isDimensionField{};
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
    if (isDimensionField) {
      res["IsDimensionField"] = boost::any(*isDimensionField);
    }
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
    if (m.find("IsDimensionField") != m.end() && !m["IsDimensionField"].empty()) {
      isDimensionField = make_shared<bool>(boost::any_cast<bool>(m["IsDimensionField"]));
    }
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
  shared_ptr<string> description{};
  shared_ptr<vector<CreateTableMetaRequestFields>> fields{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> module{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tableName{};

  CreateTableMetaRequest() {}

  explicit CreateTableMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
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
        CreateTableMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTableMetaResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTableMetaResponse() = default;
};
class DeleteABMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteABMetricRequest() {}

  explicit DeleteABMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteABMetricRequest() = default;
};
class DeleteABMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteABMetricResponseBody() {}

  explicit DeleteABMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteABMetricResponseBody() = default;
};
class DeleteABMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteABMetricResponseBody> body{};

  DeleteABMetricResponse() {}

  explicit DeleteABMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteABMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteABMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteABMetricResponse() = default;
};
class DeleteABMetricGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteABMetricGroupRequest() {}

  explicit DeleteABMetricGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteABMetricGroupRequest() = default;
};
class DeleteABMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteABMetricGroupResponseBody() {}

  explicit DeleteABMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteABMetricGroupResponseBody() = default;
};
class DeleteABMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteABMetricGroupResponseBody> body{};

  DeleteABMetricGroupResponse() {}

  explicit DeleteABMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteABMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteABMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteABMetricGroupResponse() = default;
};
class DeleteCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteCrowdRequest() {}

  explicit DeleteCrowdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCrowdRequest() = default;
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
        DeleteCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCrowdResponse() = default;
};
class DeleteExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteExperimentRequest() {}

  explicit DeleteExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExperimentRequest() = default;
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
        DeleteExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentResponse() = default;
};
class DeleteExperimentGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteExperimentGroupRequest() {}

  explicit DeleteExperimentGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExperimentGroupRequest() = default;
};
class DeleteExperimentGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExperimentGroupResponseBody() {}

  explicit DeleteExperimentGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExperimentGroupResponseBody() = default;
};
class DeleteExperimentGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentGroupResponseBody> body{};

  DeleteExperimentGroupResponse() {}

  explicit DeleteExperimentGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExperimentGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentGroupResponse() = default;
};
class DeleteInstanceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceResourceResponseBody() {}

  explicit DeleteInstanceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceResourceResponseBody() = default;
};
class DeleteInstanceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResourceResponseBody> body{};

  DeleteInstanceResourceResponse() {}

  explicit DeleteInstanceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResourceResponse() = default;
};
class DeleteLaboratoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteLaboratoryRequest() {}

  explicit DeleteLaboratoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLaboratoryRequest() = default;
};
class DeleteLaboratoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLaboratoryResponseBody() {}

  explicit DeleteLaboratoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLaboratoryResponseBody() = default;
};
class DeleteLaboratoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLaboratoryResponseBody> body{};

  DeleteLaboratoryResponse() {}

  explicit DeleteLaboratoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLaboratoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLaboratoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLaboratoryResponse() = default;
};
class DeleteLayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteLayerRequest() {}

  explicit DeleteLayerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLayerRequest() = default;
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
        DeleteLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLayerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLayerResponse() = default;
};
class DeleteParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteParamRequest() {}

  explicit DeleteParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteParamRequest() = default;
};
class DeleteParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteParamResponseBody() {}

  explicit DeleteParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteParamResponseBody() = default;
};
class DeleteParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteParamResponseBody> body{};

  DeleteParamResponse() {}

  explicit DeleteParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteParamResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteParamResponse() = default;
};
class DeleteSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteSceneRequest() {}

  explicit DeleteSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSceneRequest() = default;
};
class DeleteSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSceneResponseBody() {}

  explicit DeleteSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSceneResponseBody() = default;
};
class DeleteSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSceneResponseBody> body{};

  DeleteSceneResponse() {}

  explicit DeleteSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSceneResponse() = default;
};
class DeleteSubCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteSubCrowdRequest() {}

  explicit DeleteSubCrowdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSubCrowdRequest() = default;
};
class DeleteSubCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSubCrowdResponseBody() {}

  explicit DeleteSubCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSubCrowdResponseBody() = default;
};
class DeleteSubCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSubCrowdResponseBody> body{};

  DeleteSubCrowdResponse() {}

  explicit DeleteSubCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSubCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubCrowdResponse() = default;
};
class DeleteTableMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteTableMetaRequest() {}

  explicit DeleteTableMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTableMetaRequest() = default;
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
        DeleteTableMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTableMetaResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTableMetaResponse() = default;
};
class GetABMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetABMetricRequest() {}

  explicit GetABMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetABMetricRequest() = default;
};
class GetABMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> leftMetricId{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<string> realtime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultResourceId{};
  shared_ptr<string> resultTableMetaId{};
  shared_ptr<string> rightMetricId{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> statisticsCycle{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> type{};

  GetABMetricResponseBody() {}

  explicit GetABMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (leftMetricId) {
      res["LeftMetricId"] = boost::any(*leftMetricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultResourceId) {
      res["ResultResourceId"] = boost::any(*resultResourceId);
    }
    if (resultTableMetaId) {
      res["ResultTableMetaId"] = boost::any(*resultTableMetaId);
    }
    if (rightMetricId) {
      res["RightMetricId"] = boost::any(*rightMetricId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (statisticsCycle) {
      res["StatisticsCycle"] = boost::any(*statisticsCycle);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("LeftMetricId") != m.end() && !m["LeftMetricId"].empty()) {
      leftMetricId = make_shared<string>(boost::any_cast<string>(m["LeftMetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<string>(boost::any_cast<string>(m["Realtime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultResourceId") != m.end() && !m["ResultResourceId"].empty()) {
      resultResourceId = make_shared<string>(boost::any_cast<string>(m["ResultResourceId"]));
    }
    if (m.find("ResultTableMetaId") != m.end() && !m["ResultTableMetaId"].empty()) {
      resultTableMetaId = make_shared<string>(boost::any_cast<string>(m["ResultTableMetaId"]));
    }
    if (m.find("RightMetricId") != m.end() && !m["RightMetricId"].empty()) {
      rightMetricId = make_shared<string>(boost::any_cast<string>(m["RightMetricId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("StatisticsCycle") != m.end() && !m["StatisticsCycle"].empty()) {
      statisticsCycle = make_shared<long>(boost::any_cast<long>(m["StatisticsCycle"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetABMetricResponseBody() = default;
};
class GetABMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetABMetricResponseBody> body{};

  GetABMetricResponse() {}

  explicit GetABMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetABMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetABMetricResponseBody>(model1);
      }
    }
  }


  virtual ~GetABMetricResponse() = default;
};
class GetABMetricGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetABMetricGroupRequest() {}

  explicit GetABMetricGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetABMetricGroupRequest() = default;
};
class GetABMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricIds{};
  shared_ptr<string> ABMetricNames{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};

  GetABMetricGroupResponseBody() {}

  explicit GetABMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricIds) {
      res["ABMetricIds"] = boost::any(*ABMetricIds);
    }
    if (ABMetricNames) {
      res["ABMetricNames"] = boost::any(*ABMetricNames);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricIds") != m.end() && !m["ABMetricIds"].empty()) {
      ABMetricIds = make_shared<string>(boost::any_cast<string>(m["ABMetricIds"]));
    }
    if (m.find("ABMetricNames") != m.end() && !m["ABMetricNames"].empty()) {
      ABMetricNames = make_shared<string>(boost::any_cast<string>(m["ABMetricNames"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetABMetricGroupResponseBody() = default;
};
class GetABMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetABMetricGroupResponseBody> body{};

  GetABMetricGroupResponse() {}

  explicit GetABMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetABMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetABMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetABMetricGroupResponse() = default;
};
class GetCalculationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetCalculationJobRequest() {}

  explicit GetCalculationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetCalculationJobRequest() = default;
};
class GetCalculationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricId{};
  shared_ptr<string> ABMetricName{};
  shared_ptr<string> bizDate{};
  shared_ptr<string> config{};
  shared_ptr<string> gmtRanTime{};
  shared_ptr<vector<string>> jobMessage{};
  shared_ptr<string> jobSource{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetCalculationJobResponseBody() {}

  explicit GetCalculationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricId) {
      res["ABMetricId"] = boost::any(*ABMetricId);
    }
    if (ABMetricName) {
      res["ABMetricName"] = boost::any(*ABMetricName);
    }
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (gmtRanTime) {
      res["GmtRanTime"] = boost::any(*gmtRanTime);
    }
    if (jobMessage) {
      res["JobMessage"] = boost::any(*jobMessage);
    }
    if (jobSource) {
      res["JobSource"] = boost::any(*jobSource);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricId") != m.end() && !m["ABMetricId"].empty()) {
      ABMetricId = make_shared<string>(boost::any_cast<string>(m["ABMetricId"]));
    }
    if (m.find("ABMetricName") != m.end() && !m["ABMetricName"].empty()) {
      ABMetricName = make_shared<string>(boost::any_cast<string>(m["ABMetricName"]));
    }
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("GmtRanTime") != m.end() && !m["GmtRanTime"].empty()) {
      gmtRanTime = make_shared<string>(boost::any_cast<string>(m["GmtRanTime"]));
    }
    if (m.find("JobMessage") != m.end() && !m["JobMessage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JobMessage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobMessage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobMessage = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobSource") != m.end() && !m["JobSource"].empty()) {
      jobSource = make_shared<string>(boost::any_cast<string>(m["JobSource"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetCalculationJobResponseBody() = default;
};
class GetCalculationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCalculationJobResponseBody> body{};

  GetCalculationJobResponse() {}

  explicit GetCalculationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCalculationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCalculationJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetCalculationJobResponse() = default;
};
class GetExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetExperimentRequest() {}

  explicit GetExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetExperimentRequest() = default;
};
class GetExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aliasExperimentId{};
  shared_ptr<string> buckets{};
  shared_ptr<string> config{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentGroupId{};
  shared_ptr<long> flowPercent{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetExperimentResponseBody() {}

  explicit GetExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasExperimentId) {
      res["AliasExperimentId"] = boost::any(*aliasExperimentId);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (flowPercent) {
      res["FlowPercent"] = boost::any(*flowPercent);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
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
    if (m.find("AliasExperimentId") != m.end() && !m["AliasExperimentId"].empty()) {
      aliasExperimentId = make_shared<string>(boost::any_cast<string>(m["AliasExperimentId"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("FlowPercent") != m.end() && !m["FlowPercent"].empty()) {
      flowPercent = make_shared<long>(boost::any_cast<long>(m["FlowPercent"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
        GetExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentResponse() = default;
};
class GetExperimentGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetExperimentGroupRequest() {}

  explicit GetExperimentGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetExperimentGroupRequest() = default;
};
class GetExperimentGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> distributionTimeDuration{};
  shared_ptr<string> distributionType{};
  shared_ptr<string> filter{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<bool> needAA{};
  shared_ptr<string> owner{};
  shared_ptr<string> requestId{};
  shared_ptr<string> reservedBuckets{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  GetExperimentGroupResponseBody() {}

  explicit GetExperimentGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (distributionTimeDuration) {
      res["DistributionTimeDuration"] = boost::any(*distributionTimeDuration);
    }
    if (distributionType) {
      res["DistributionType"] = boost::any(*distributionType);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (needAA) {
      res["NeedAA"] = boost::any(*needAA);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (reservedBuckets) {
      res["ReservedBuckets"] = boost::any(*reservedBuckets);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DistributionTimeDuration") != m.end() && !m["DistributionTimeDuration"].empty()) {
      distributionTimeDuration = make_shared<long>(boost::any_cast<long>(m["DistributionTimeDuration"]));
    }
    if (m.find("DistributionType") != m.end() && !m["DistributionType"].empty()) {
      distributionType = make_shared<string>(boost::any_cast<string>(m["DistributionType"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NeedAA") != m.end() && !m["NeedAA"].empty()) {
      needAA = make_shared<bool>(boost::any_cast<bool>(m["NeedAA"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReservedBuckets") != m.end() && !m["ReservedBuckets"].empty()) {
      reservedBuckets = make_shared<string>(boost::any_cast<string>(m["ReservedBuckets"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetExperimentGroupResponseBody() = default;
};
class GetExperimentGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExperimentGroupResponseBody> body{};

  GetExperimentGroupResponse() {}

  explicit GetExperimentGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExperimentGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentGroupResponse() = default;
};
class GetFeatureConsistencyCheckJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetFeatureConsistencyCheckJobRequest() {}

  explicit GetFeatureConsistencyCheckJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetFeatureConsistencyCheckJobRequest() = default;
};
class GetFeatureConsistencyCheckJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> featureConsistencyCheckJobConfigId{};
  shared_ptr<string> featureConsistencyCheckJobConfigName{};
  shared_ptr<string> gmtEndTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<vector<string>> logs{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetFeatureConsistencyCheckJobResponseBody() {}

  explicit GetFeatureConsistencyCheckJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (featureConsistencyCheckJobConfigId) {
      res["FeatureConsistencyCheckJobConfigId"] = boost::any(*featureConsistencyCheckJobConfigId);
    }
    if (featureConsistencyCheckJobConfigName) {
      res["FeatureConsistencyCheckJobConfigName"] = boost::any(*featureConsistencyCheckJobConfigName);
    }
    if (gmtEndTime) {
      res["GmtEndTime"] = boost::any(*gmtEndTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("FeatureConsistencyCheckJobConfigId") != m.end() && !m["FeatureConsistencyCheckJobConfigId"].empty()) {
      featureConsistencyCheckJobConfigId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigId"]));
    }
    if (m.find("FeatureConsistencyCheckJobConfigName") != m.end() && !m["FeatureConsistencyCheckJobConfigName"].empty()) {
      featureConsistencyCheckJobConfigName = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigName"]));
    }
    if (m.find("GmtEndTime") != m.end() && !m["GmtEndTime"].empty()) {
      gmtEndTime = make_shared<string>(boost::any_cast<string>(m["GmtEndTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFeatureConsistencyCheckJobResponseBody() = default;
};
class GetFeatureConsistencyCheckJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFeatureConsistencyCheckJobResponseBody> body{};

  GetFeatureConsistencyCheckJobResponse() {}

  explicit GetFeatureConsistencyCheckJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFeatureConsistencyCheckJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFeatureConsistencyCheckJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetFeatureConsistencyCheckJobResponse() = default;
};
class GetFeatureConsistencyCheckJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetFeatureConsistencyCheckJobConfigRequest() {}

  explicit GetFeatureConsistencyCheckJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetFeatureConsistencyCheckJobConfigRequest() = default;
};
class GetFeatureConsistencyCheckJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> compareFeature{};
  shared_ptr<string> easServiceName{};
  shared_ptr<string> easyRecPackagePath{};
  shared_ptr<string> easyRecVersion{};
  shared_ptr<string> featureDisplayExclude{};
  shared_ptr<string> featureLandingResourceId{};
  shared_ptr<string> featureLandingResourceUri{};
  shared_ptr<string> featurePriority{};
  shared_ptr<string> fgJarVersion{};
  shared_ptr<string> fgJsonFileName{};
  shared_ptr<bool> generateZip{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> itemIdField{};
  shared_ptr<string> itemTable{};
  shared_ptr<string> itemTablePartitionField{};
  shared_ptr<string> itemTablePartitionFieldFormat{};
  shared_ptr<string> latestJobGmtSamplingEndTime{};
  shared_ptr<string> latestJobGmtSamplingStartTime{};
  shared_ptr<string> latestJobId{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossResourceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sampleRate{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> userIdField{};
  shared_ptr<string> userTable{};
  shared_ptr<string> userTablePartitionField{};
  shared_ptr<string> userTablePartitionFieldFormat{};
  shared_ptr<string> workflowName{};

  GetFeatureConsistencyCheckJobConfigResponseBody() {}

  explicit GetFeatureConsistencyCheckJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compareFeature) {
      res["CompareFeature"] = boost::any(*compareFeature);
    }
    if (easServiceName) {
      res["EasServiceName"] = boost::any(*easServiceName);
    }
    if (easyRecPackagePath) {
      res["EasyRecPackagePath"] = boost::any(*easyRecPackagePath);
    }
    if (easyRecVersion) {
      res["EasyRecVersion"] = boost::any(*easyRecVersion);
    }
    if (featureDisplayExclude) {
      res["FeatureDisplayExclude"] = boost::any(*featureDisplayExclude);
    }
    if (featureLandingResourceId) {
      res["FeatureLandingResourceId"] = boost::any(*featureLandingResourceId);
    }
    if (featureLandingResourceUri) {
      res["FeatureLandingResourceUri"] = boost::any(*featureLandingResourceUri);
    }
    if (featurePriority) {
      res["FeaturePriority"] = boost::any(*featurePriority);
    }
    if (fgJarVersion) {
      res["FgJarVersion"] = boost::any(*fgJarVersion);
    }
    if (fgJsonFileName) {
      res["FgJsonFileName"] = boost::any(*fgJsonFileName);
    }
    if (generateZip) {
      res["GenerateZip"] = boost::any(*generateZip);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (itemIdField) {
      res["ItemIdField"] = boost::any(*itemIdField);
    }
    if (itemTable) {
      res["ItemTable"] = boost::any(*itemTable);
    }
    if (itemTablePartitionField) {
      res["ItemTablePartitionField"] = boost::any(*itemTablePartitionField);
    }
    if (itemTablePartitionFieldFormat) {
      res["ItemTablePartitionFieldFormat"] = boost::any(*itemTablePartitionFieldFormat);
    }
    if (latestJobGmtSamplingEndTime) {
      res["LatestJobGmtSamplingEndTime"] = boost::any(*latestJobGmtSamplingEndTime);
    }
    if (latestJobGmtSamplingStartTime) {
      res["LatestJobGmtSamplingStartTime"] = boost::any(*latestJobGmtSamplingStartTime);
    }
    if (latestJobId) {
      res["LatestJobId"] = boost::any(*latestJobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossResourceId) {
      res["OssResourceId"] = boost::any(*ossResourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userIdField) {
      res["UserIdField"] = boost::any(*userIdField);
    }
    if (userTable) {
      res["UserTable"] = boost::any(*userTable);
    }
    if (userTablePartitionField) {
      res["UserTablePartitionField"] = boost::any(*userTablePartitionField);
    }
    if (userTablePartitionFieldFormat) {
      res["UserTablePartitionFieldFormat"] = boost::any(*userTablePartitionFieldFormat);
    }
    if (workflowName) {
      res["WorkflowName"] = boost::any(*workflowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompareFeature") != m.end() && !m["CompareFeature"].empty()) {
      compareFeature = make_shared<bool>(boost::any_cast<bool>(m["CompareFeature"]));
    }
    if (m.find("EasServiceName") != m.end() && !m["EasServiceName"].empty()) {
      easServiceName = make_shared<string>(boost::any_cast<string>(m["EasServiceName"]));
    }
    if (m.find("EasyRecPackagePath") != m.end() && !m["EasyRecPackagePath"].empty()) {
      easyRecPackagePath = make_shared<string>(boost::any_cast<string>(m["EasyRecPackagePath"]));
    }
    if (m.find("EasyRecVersion") != m.end() && !m["EasyRecVersion"].empty()) {
      easyRecVersion = make_shared<string>(boost::any_cast<string>(m["EasyRecVersion"]));
    }
    if (m.find("FeatureDisplayExclude") != m.end() && !m["FeatureDisplayExclude"].empty()) {
      featureDisplayExclude = make_shared<string>(boost::any_cast<string>(m["FeatureDisplayExclude"]));
    }
    if (m.find("FeatureLandingResourceId") != m.end() && !m["FeatureLandingResourceId"].empty()) {
      featureLandingResourceId = make_shared<string>(boost::any_cast<string>(m["FeatureLandingResourceId"]));
    }
    if (m.find("FeatureLandingResourceUri") != m.end() && !m["FeatureLandingResourceUri"].empty()) {
      featureLandingResourceUri = make_shared<string>(boost::any_cast<string>(m["FeatureLandingResourceUri"]));
    }
    if (m.find("FeaturePriority") != m.end() && !m["FeaturePriority"].empty()) {
      featurePriority = make_shared<string>(boost::any_cast<string>(m["FeaturePriority"]));
    }
    if (m.find("FgJarVersion") != m.end() && !m["FgJarVersion"].empty()) {
      fgJarVersion = make_shared<string>(boost::any_cast<string>(m["FgJarVersion"]));
    }
    if (m.find("FgJsonFileName") != m.end() && !m["FgJsonFileName"].empty()) {
      fgJsonFileName = make_shared<string>(boost::any_cast<string>(m["FgJsonFileName"]));
    }
    if (m.find("GenerateZip") != m.end() && !m["GenerateZip"].empty()) {
      generateZip = make_shared<bool>(boost::any_cast<bool>(m["GenerateZip"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ItemIdField") != m.end() && !m["ItemIdField"].empty()) {
      itemIdField = make_shared<string>(boost::any_cast<string>(m["ItemIdField"]));
    }
    if (m.find("ItemTable") != m.end() && !m["ItemTable"].empty()) {
      itemTable = make_shared<string>(boost::any_cast<string>(m["ItemTable"]));
    }
    if (m.find("ItemTablePartitionField") != m.end() && !m["ItemTablePartitionField"].empty()) {
      itemTablePartitionField = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionField"]));
    }
    if (m.find("ItemTablePartitionFieldFormat") != m.end() && !m["ItemTablePartitionFieldFormat"].empty()) {
      itemTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionFieldFormat"]));
    }
    if (m.find("LatestJobGmtSamplingEndTime") != m.end() && !m["LatestJobGmtSamplingEndTime"].empty()) {
      latestJobGmtSamplingEndTime = make_shared<string>(boost::any_cast<string>(m["LatestJobGmtSamplingEndTime"]));
    }
    if (m.find("LatestJobGmtSamplingStartTime") != m.end() && !m["LatestJobGmtSamplingStartTime"].empty()) {
      latestJobGmtSamplingStartTime = make_shared<string>(boost::any_cast<string>(m["LatestJobGmtSamplingStartTime"]));
    }
    if (m.find("LatestJobId") != m.end() && !m["LatestJobId"].empty()) {
      latestJobId = make_shared<string>(boost::any_cast<string>(m["LatestJobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssResourceId") != m.end() && !m["OssResourceId"].empty()) {
      ossResourceId = make_shared<string>(boost::any_cast<string>(m["OssResourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserIdField") != m.end() && !m["UserIdField"].empty()) {
      userIdField = make_shared<string>(boost::any_cast<string>(m["UserIdField"]));
    }
    if (m.find("UserTable") != m.end() && !m["UserTable"].empty()) {
      userTable = make_shared<string>(boost::any_cast<string>(m["UserTable"]));
    }
    if (m.find("UserTablePartitionField") != m.end() && !m["UserTablePartitionField"].empty()) {
      userTablePartitionField = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionField"]));
    }
    if (m.find("UserTablePartitionFieldFormat") != m.end() && !m["UserTablePartitionFieldFormat"].empty()) {
      userTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionFieldFormat"]));
    }
    if (m.find("WorkflowName") != m.end() && !m["WorkflowName"].empty()) {
      workflowName = make_shared<string>(boost::any_cast<string>(m["WorkflowName"]));
    }
  }


  virtual ~GetFeatureConsistencyCheckJobConfigResponseBody() = default;
};
class GetFeatureConsistencyCheckJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFeatureConsistencyCheckJobConfigResponseBody> body{};

  GetFeatureConsistencyCheckJobConfigResponse() {}

  explicit GetFeatureConsistencyCheckJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFeatureConsistencyCheckJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFeatureConsistencyCheckJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetFeatureConsistencyCheckJobConfigResponse() = default;
};
class GetInstanceResponseBodyConfigDataManagements : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> type{};

  GetInstanceResponseBodyConfigDataManagements() {}

  explicit GetInstanceResponseBodyConfigDataManagements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["ComponentCode"] = boost::any(*componentCode);
    }
    if (meta) {
      res["Meta"] = boost::any(*meta);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCode") != m.end() && !m["ComponentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["ComponentCode"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetInstanceResponseBodyConfigDataManagements() = default;
};
class GetInstanceResponseBodyConfigEngines : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> type{};

  GetInstanceResponseBodyConfigEngines() {}

  explicit GetInstanceResponseBodyConfigEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["ComponentCode"] = boost::any(*componentCode);
    }
    if (meta) {
      res["Meta"] = boost::any(*meta);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCode") != m.end() && !m["ComponentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["ComponentCode"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetInstanceResponseBodyConfigEngines() = default;
};
class GetInstanceResponseBodyConfigMonitors : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> type{};

  GetInstanceResponseBodyConfigMonitors() {}

  explicit GetInstanceResponseBodyConfigMonitors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["ComponentCode"] = boost::any(*componentCode);
    }
    if (meta) {
      res["Meta"] = boost::any(*meta);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCode") != m.end() && !m["ComponentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["ComponentCode"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetInstanceResponseBodyConfigMonitors() = default;
};
class GetInstanceResponseBodyConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceResponseBodyConfigDataManagements>> dataManagements{};
  shared_ptr<vector<GetInstanceResponseBodyConfigEngines>> engines{};
  shared_ptr<vector<GetInstanceResponseBodyConfigMonitors>> monitors{};

  GetInstanceResponseBodyConfig() {}

  explicit GetInstanceResponseBodyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataManagements) {
      vector<boost::any> temp1;
      for(auto item1:*dataManagements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataManagements"] = boost::any(temp1);
    }
    if (engines) {
      vector<boost::any> temp1;
      for(auto item1:*engines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Engines"] = boost::any(temp1);
    }
    if (monitors) {
      vector<boost::any> temp1;
      for(auto item1:*monitors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Monitors"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataManagements") != m.end() && !m["DataManagements"].empty()) {
      if (typeid(vector<boost::any>) == m["DataManagements"].type()) {
        vector<GetInstanceResponseBodyConfigDataManagements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataManagements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyConfigDataManagements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataManagements = make_shared<vector<GetInstanceResponseBodyConfigDataManagements>>(expect1);
      }
    }
    if (m.find("Engines") != m.end() && !m["Engines"].empty()) {
      if (typeid(vector<boost::any>) == m["Engines"].type()) {
        vector<GetInstanceResponseBodyConfigEngines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Engines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyConfigEngines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engines = make_shared<vector<GetInstanceResponseBodyConfigEngines>>(expect1);
      }
    }
    if (m.find("Monitors") != m.end() && !m["Monitors"].empty()) {
      if (typeid(vector<boost::any>) == m["Monitors"].type()) {
        vector<GetInstanceResponseBodyConfigMonitors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Monitors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyConfigMonitors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        monitors = make_shared<vector<GetInstanceResponseBodyConfigMonitors>>(expect1);
      }
    }
  }


  virtual ~GetInstanceResponseBodyConfig() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<GetInstanceResponseBodyConfig> config{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        GetInstanceResponseBodyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<GetInstanceResponseBodyConfig>(model1);
      }
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetInstanceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> config{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> group{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};

  GetInstanceResourceResponseBody() {}

  explicit GetInstanceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~GetInstanceResourceResponseBody() = default;
};
class GetInstanceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResourceResponseBody> body{};

  GetInstanceResourceResponse() {}

  explicit GetInstanceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResourceResponse() = default;
};
class GetInstanceResourceTableResponseBodyFields : public Darabonba::Model {
public:
  shared_ptr<bool> isDimensionField{};
  shared_ptr<string> meaning{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetInstanceResourceTableResponseBodyFields() {}

  explicit GetInstanceResourceTableResponseBodyFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDimensionField) {
      res["IsDimensionField"] = boost::any(*isDimensionField);
    }
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
    if (m.find("IsDimensionField") != m.end() && !m["IsDimensionField"].empty()) {
      isDimensionField = make_shared<bool>(boost::any_cast<bool>(m["IsDimensionField"]));
    }
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


  virtual ~GetInstanceResourceTableResponseBodyFields() = default;
};
class GetInstanceResourceTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceResourceTableResponseBodyFields>> fields{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tableName{};

  GetInstanceResourceTableResponseBody() {}

  explicit GetInstanceResourceTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<GetInstanceResourceTableResponseBodyFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResourceTableResponseBodyFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<GetInstanceResourceTableResponseBodyFields>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~GetInstanceResourceTableResponseBody() = default;
};
class GetInstanceResourceTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResourceTableResponseBody> body{};

  GetInstanceResourceTableResponse() {}

  explicit GetInstanceResourceTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResourceTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResourceTableResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResourceTableResponse() = default;
};
class GetLaboratoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetLaboratoryRequest() {}

  explicit GetLaboratoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetLaboratoryRequest() = default;
};
class GetLaboratoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> bucketCount{};
  shared_ptr<string> bucketType{};
  shared_ptr<string> buckets{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> environment{};
  shared_ptr<string> filter{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetLaboratoryResponseBody() {}

  explicit GetLaboratoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketCount) {
      res["BucketCount"] = boost::any(*bucketCount);
    }
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
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
    if (m.find("BucketCount") != m.end() && !m["BucketCount"].empty()) {
      bucketCount = make_shared<long>(boost::any_cast<long>(m["BucketCount"]));
    }
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetLaboratoryResponseBody() = default;
};
class GetLaboratoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLaboratoryResponseBody> body{};

  GetLaboratoryResponse() {}

  explicit GetLaboratoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLaboratoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLaboratoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetLaboratoryResponse() = default;
};
class GetLayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetLayerRequest() {}

  explicit GetLayerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetLayerRequest() = default;
};
class GetLayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sceneId{};

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
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
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
        GetLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLayerResponseBody>(model1);
      }
    }
  }


  virtual ~GetLayerResponse() = default;
};
class GetSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetSceneRequest() {}

  explicit GetSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSceneRequest() = default;
};
class GetSceneResponseBodyFlows : public Darabonba::Model {
public:
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowName{};

  GetSceneResponseBodyFlows() {}

  explicit GetSceneResponseBodyFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~GetSceneResponseBodyFlows() = default;
};
class GetSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<GetSceneResponseBodyFlows>> flows{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};

  GetSceneResponseBody() {}

  explicit GetSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flows) {
      vector<boost::any> temp1;
      for(auto item1:*flows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Flows"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Flows") != m.end() && !m["Flows"].empty()) {
      if (typeid(vector<boost::any>) == m["Flows"].type()) {
        vector<GetSceneResponseBodyFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Flows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSceneResponseBodyFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flows = make_shared<vector<GetSceneResponseBodyFlows>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSceneResponseBody() = default;
};
class GetSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSceneResponseBody> body{};

  GetSceneResponse() {}

  explicit GetSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSceneResponseBody>(model1);
      }
    }
  }


  virtual ~GetSceneResponse() = default;
};
class GetSubCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetSubCrowdRequest() {}

  explicit GetSubCrowdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSubCrowdRequest() = default;
};
class GetSubCrowdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> quantity{};
  shared_ptr<string> requestId{};
  shared_ptr<string> source{};
  shared_ptr<string> users{};

  GetSubCrowdResponseBody() {}

  explicit GetSubCrowdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
    }
  }


  virtual ~GetSubCrowdResponseBody() = default;
};
class GetSubCrowdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubCrowdResponseBody> body{};

  GetSubCrowdResponse() {}

  explicit GetSubCrowdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubCrowdResponse() = default;
};
class GetTableMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetTableMetaRequest() {}

  explicit GetTableMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTableMetaRequest() = default;
};
class GetTableMetaResponseBodyFields : public Darabonba::Model {
public:
  shared_ptr<bool> isDimensionField{};
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
    if (isDimensionField) {
      res["IsDimensionField"] = boost::any(*isDimensionField);
    }
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
    if (m.find("IsDimensionField") != m.end() && !m["IsDimensionField"].empty()) {
      isDimensionField = make_shared<bool>(boost::any_cast<bool>(m["IsDimensionField"]));
    }
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
  shared_ptr<bool> canDelete{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetTableMetaResponseBodyFields>> fields{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> module{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  GetTableMetaResponseBody() {}

  explicit GetTableMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canDelete) {
      res["CanDelete"] = boost::any(*canDelete);
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
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanDelete") != m.end() && !m["CanDelete"].empty()) {
      canDelete = make_shared<bool>(boost::any_cast<bool>(m["CanDelete"]));
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
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
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
        GetTableMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableMetaResponse() = default;
};
class ListABMetricGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> sceneId{};

  ListABMetricGroupsRequest() {}

  explicit ListABMetricGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ListABMetricGroupsRequest() = default;
};
class ListABMetricGroupsResponseBodyABMetricGroups : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricGroupId{};
  shared_ptr<string> ABMetricIds{};
  shared_ptr<string> ABMetricNames{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> sceneId{};

  ListABMetricGroupsResponseBodyABMetricGroups() {}

  explicit ListABMetricGroupsResponseBodyABMetricGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricGroupId) {
      res["ABMetricGroupId"] = boost::any(*ABMetricGroupId);
    }
    if (ABMetricIds) {
      res["ABMetricIds"] = boost::any(*ABMetricIds);
    }
    if (ABMetricNames) {
      res["ABMetricNames"] = boost::any(*ABMetricNames);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricGroupId") != m.end() && !m["ABMetricGroupId"].empty()) {
      ABMetricGroupId = make_shared<string>(boost::any_cast<string>(m["ABMetricGroupId"]));
    }
    if (m.find("ABMetricIds") != m.end() && !m["ABMetricIds"].empty()) {
      ABMetricIds = make_shared<string>(boost::any_cast<string>(m["ABMetricIds"]));
    }
    if (m.find("ABMetricNames") != m.end() && !m["ABMetricNames"].empty()) {
      ABMetricNames = make_shared<string>(boost::any_cast<string>(m["ABMetricNames"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ListABMetricGroupsResponseBodyABMetricGroups() = default;
};
class ListABMetricGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListABMetricGroupsResponseBodyABMetricGroups>> ABMetricGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListABMetricGroupsResponseBody() {}

  explicit ListABMetricGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricGroups) {
      vector<boost::any> temp1;
      for(auto item1:*ABMetricGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ABMetricGroups"] = boost::any(temp1);
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
    if (m.find("ABMetricGroups") != m.end() && !m["ABMetricGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ABMetricGroups"].type()) {
        vector<ListABMetricGroupsResponseBodyABMetricGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ABMetricGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListABMetricGroupsResponseBodyABMetricGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ABMetricGroups = make_shared<vector<ListABMetricGroupsResponseBodyABMetricGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListABMetricGroupsResponseBody() = default;
};
class ListABMetricGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListABMetricGroupsResponseBody> body{};

  ListABMetricGroupsResponse() {}

  explicit ListABMetricGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListABMetricGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListABMetricGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListABMetricGroupsResponse() = default;
};
class ListABMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> type{};

  ListABMetricsRequest() {}

  explicit ListABMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListABMetricsRequest() = default;
};
class ListABMetricsResponseBodyABMetrics : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricId{};
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> leftMetricId{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<string> realtime{};
  shared_ptr<string> resultResourceId{};
  shared_ptr<string> resultTableMetaId{};
  shared_ptr<string> rightMetricId{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> statisticsCycle{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> type{};

  ListABMetricsResponseBodyABMetrics() {}

  explicit ListABMetricsResponseBodyABMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricId) {
      res["ABMetricId"] = boost::any(*ABMetricId);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (leftMetricId) {
      res["LeftMetricId"] = boost::any(*leftMetricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (resultResourceId) {
      res["ResultResourceId"] = boost::any(*resultResourceId);
    }
    if (resultTableMetaId) {
      res["ResultTableMetaId"] = boost::any(*resultTableMetaId);
    }
    if (rightMetricId) {
      res["RightMetricId"] = boost::any(*rightMetricId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (statisticsCycle) {
      res["StatisticsCycle"] = boost::any(*statisticsCycle);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricId") != m.end() && !m["ABMetricId"].empty()) {
      ABMetricId = make_shared<string>(boost::any_cast<string>(m["ABMetricId"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LeftMetricId") != m.end() && !m["LeftMetricId"].empty()) {
      leftMetricId = make_shared<string>(boost::any_cast<string>(m["LeftMetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<string>(boost::any_cast<string>(m["Realtime"]));
    }
    if (m.find("ResultResourceId") != m.end() && !m["ResultResourceId"].empty()) {
      resultResourceId = make_shared<string>(boost::any_cast<string>(m["ResultResourceId"]));
    }
    if (m.find("ResultTableMetaId") != m.end() && !m["ResultTableMetaId"].empty()) {
      resultTableMetaId = make_shared<string>(boost::any_cast<string>(m["ResultTableMetaId"]));
    }
    if (m.find("RightMetricId") != m.end() && !m["RightMetricId"].empty()) {
      rightMetricId = make_shared<string>(boost::any_cast<string>(m["RightMetricId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("StatisticsCycle") != m.end() && !m["StatisticsCycle"].empty()) {
      statisticsCycle = make_shared<long>(boost::any_cast<long>(m["StatisticsCycle"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListABMetricsResponseBodyABMetrics() = default;
};
class ListABMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListABMetricsResponseBodyABMetrics>> ABMetrics{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListABMetricsResponseBody() {}

  explicit ListABMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*ABMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ABMetrics"] = boost::any(temp1);
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
    if (m.find("ABMetrics") != m.end() && !m["ABMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["ABMetrics"].type()) {
        vector<ListABMetricsResponseBodyABMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ABMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListABMetricsResponseBodyABMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ABMetrics = make_shared<vector<ListABMetricsResponseBodyABMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListABMetricsResponseBody() = default;
};
class ListABMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListABMetricsResponseBody> body{};

  ListABMetricsResponse() {}

  explicit ListABMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListABMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListABMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListABMetricsResponse() = default;
};
class ListCalculationJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  ListCalculationJobsRequest() {}

  explicit ListCalculationJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListCalculationJobsRequest() = default;
};
class ListCalculationJobsResponseBodyCalculationJobs : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricName{};
  shared_ptr<string> bizDate{};
  shared_ptr<string> calculationJobId{};
  shared_ptr<string> config{};
  shared_ptr<string> gmtRanTime{};
  shared_ptr<vector<string>> jobMessage{};
  shared_ptr<string> jobSource{};
  shared_ptr<string> status{};

  ListCalculationJobsResponseBodyCalculationJobs() {}

  explicit ListCalculationJobsResponseBodyCalculationJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricName) {
      res["ABMetricName"] = boost::any(*ABMetricName);
    }
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (calculationJobId) {
      res["CalculationJobId"] = boost::any(*calculationJobId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (gmtRanTime) {
      res["GmtRanTime"] = boost::any(*gmtRanTime);
    }
    if (jobMessage) {
      res["JobMessage"] = boost::any(*jobMessage);
    }
    if (jobSource) {
      res["JobSource"] = boost::any(*jobSource);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricName") != m.end() && !m["ABMetricName"].empty()) {
      ABMetricName = make_shared<string>(boost::any_cast<string>(m["ABMetricName"]));
    }
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("CalculationJobId") != m.end() && !m["CalculationJobId"].empty()) {
      calculationJobId = make_shared<string>(boost::any_cast<string>(m["CalculationJobId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("GmtRanTime") != m.end() && !m["GmtRanTime"].empty()) {
      gmtRanTime = make_shared<string>(boost::any_cast<string>(m["GmtRanTime"]));
    }
    if (m.find("JobMessage") != m.end() && !m["JobMessage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JobMessage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobMessage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobMessage = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobSource") != m.end() && !m["JobSource"].empty()) {
      jobSource = make_shared<string>(boost::any_cast<string>(m["JobSource"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListCalculationJobsResponseBodyCalculationJobs() = default;
};
class ListCalculationJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCalculationJobsResponseBodyCalculationJobs>> calculationJobs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListCalculationJobsResponseBody() {}

  explicit ListCalculationJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calculationJobs) {
      vector<boost::any> temp1;
      for(auto item1:*calculationJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CalculationJobs"] = boost::any(temp1);
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
    if (m.find("CalculationJobs") != m.end() && !m["CalculationJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["CalculationJobs"].type()) {
        vector<ListCalculationJobsResponseBodyCalculationJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CalculationJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCalculationJobsResponseBodyCalculationJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        calculationJobs = make_shared<vector<ListCalculationJobsResponseBodyCalculationJobs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCalculationJobsResponseBody() = default;
};
class ListCalculationJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCalculationJobsResponseBody> body{};

  ListCalculationJobsResponse() {}

  explicit ListCalculationJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCalculationJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCalculationJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCalculationJobsResponse() = default;
};
class ListCrowdUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListCrowdUsersRequest() {}

  explicit ListCrowdUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListCrowdUsersRequest() = default;
};
class ListCrowdUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> users{};

  ListCrowdUsersResponseBody() {}

  explicit ListCrowdUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListCrowdUsersResponseBody() = default;
};
class ListCrowdUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCrowdUsersResponseBody> body{};

  ListCrowdUsersResponse() {}

  explicit ListCrowdUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCrowdUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCrowdUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListCrowdUsersResponse() = default;
};
class ListCrowdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListCrowdsRequest() {}

  explicit ListCrowdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListCrowdsRequest() = default;
};
class ListCrowdsResponseBodyCrowds : public Darabonba::Model {
public:
  shared_ptr<string> crowdId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> quantity{};
  shared_ptr<string> source{};
  shared_ptr<string> users{};

  ListCrowdsResponseBodyCrowds() {}

  explicit ListCrowdsResponseBodyCrowds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (users) {
      res["Users"] = boost::any(*users);
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
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
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
        ListCrowdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCrowdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCrowdsResponse() = default;
};
class ListExperimentGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> status{};

  ListExperimentGroupsRequest() {}

  explicit ListExperimentGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListExperimentGroupsRequest() = default;
};
class ListExperimentGroupsResponseBodyExperimentGroups : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> distributionTimeDuration{};
  shared_ptr<string> distributionType{};
  shared_ptr<string> experimentGroupId{};
  shared_ptr<string> filter{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<bool> needAA{};
  shared_ptr<string> owner{};
  shared_ptr<string> reservedBuckets{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  ListExperimentGroupsResponseBodyExperimentGroups() {}

  explicit ListExperimentGroupsResponseBodyExperimentGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (distributionTimeDuration) {
      res["DistributionTimeDuration"] = boost::any(*distributionTimeDuration);
    }
    if (distributionType) {
      res["DistributionType"] = boost::any(*distributionType);
    }
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (needAA) {
      res["NeedAA"] = boost::any(*needAA);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (reservedBuckets) {
      res["ReservedBuckets"] = boost::any(*reservedBuckets);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DistributionTimeDuration") != m.end() && !m["DistributionTimeDuration"].empty()) {
      distributionTimeDuration = make_shared<long>(boost::any_cast<long>(m["DistributionTimeDuration"]));
    }
    if (m.find("DistributionType") != m.end() && !m["DistributionType"].empty()) {
      distributionType = make_shared<string>(boost::any_cast<string>(m["DistributionType"]));
    }
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NeedAA") != m.end() && !m["NeedAA"].empty()) {
      needAA = make_shared<bool>(boost::any_cast<bool>(m["NeedAA"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ReservedBuckets") != m.end() && !m["ReservedBuckets"].empty()) {
      reservedBuckets = make_shared<string>(boost::any_cast<string>(m["ReservedBuckets"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListExperimentGroupsResponseBodyExperimentGroups() = default;
};
class ListExperimentGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExperimentGroupsResponseBodyExperimentGroups>> experimentGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExperimentGroupsResponseBody() {}

  explicit ListExperimentGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentGroups) {
      vector<boost::any> temp1;
      for(auto item1:*experimentGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExperimentGroups"] = boost::any(temp1);
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
    if (m.find("ExperimentGroups") != m.end() && !m["ExperimentGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ExperimentGroups"].type()) {
        vector<ListExperimentGroupsResponseBodyExperimentGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExperimentGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentGroupsResponseBodyExperimentGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        experimentGroups = make_shared<vector<ListExperimentGroupsResponseBodyExperimentGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExperimentGroupsResponseBody() = default;
};
class ListExperimentGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentGroupsResponseBody> body{};

  ListExperimentGroupsResponse() {}

  explicit ListExperimentGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExperimentGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentGroupsResponse() = default;
};
class ListExperimentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> experimentGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> query{};
  shared_ptr<string> status{};

  ListExperimentsRequest() {}

  explicit ListExperimentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListExperimentsRequest() = default;
};
class ListExperimentsResponseBodyExperiments : public Darabonba::Model {
public:
  shared_ptr<string> aliasExperimentId{};
  shared_ptr<string> buckets{};
  shared_ptr<string> config{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> experimentGroupId{};
  shared_ptr<string> experimentId{};
  shared_ptr<long> flowPercent{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListExperimentsResponseBodyExperiments() {}

  explicit ListExperimentsResponseBodyExperiments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasExperimentId) {
      res["AliasExperimentId"] = boost::any(*aliasExperimentId);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (flowPercent) {
      res["FlowPercent"] = boost::any(*flowPercent);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
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
    if (m.find("AliasExperimentId") != m.end() && !m["AliasExperimentId"].empty()) {
      aliasExperimentId = make_shared<string>(boost::any_cast<string>(m["AliasExperimentId"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("FlowPercent") != m.end() && !m["FlowPercent"].empty()) {
      flowPercent = make_shared<long>(boost::any_cast<long>(m["FlowPercent"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
        ListExperimentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentsResponse() = default;
};
class ListFeatureConsistencyCheckJobConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> order{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortBy{};

  ListFeatureConsistencyCheckJobConfigsRequest() {}

  explicit ListFeatureConsistencyCheckJobConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~ListFeatureConsistencyCheckJobConfigsRequest() = default;
};
class ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs : public Darabonba::Model {
public:
  shared_ptr<bool> compareFeature{};
  shared_ptr<string> easServiceName{};
  shared_ptr<string> easyRecPackagePath{};
  shared_ptr<string> easyRecVersion{};
  shared_ptr<string> featureConsistencyCheckJobConfigId{};
  shared_ptr<string> featureDisplayExclude{};
  shared_ptr<string> featureLandingResourceId{};
  shared_ptr<string> featureLandingResourceUri{};
  shared_ptr<string> featurePriority{};
  shared_ptr<string> fgJarVersion{};
  shared_ptr<string> fgJsonFileName{};
  shared_ptr<bool> generateZip{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> itemIdField{};
  shared_ptr<string> itemTable{};
  shared_ptr<string> itemTablePartitionField{};
  shared_ptr<string> itemTablePartitionFieldFormat{};
  shared_ptr<string> latestJobGmtSamplingEndTime{};
  shared_ptr<string> latestJobGmtSamplingStartTime{};
  shared_ptr<string> latestJobId{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossResourceId{};
  shared_ptr<string> sampleRate{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> userIdField{};
  shared_ptr<string> userTable{};
  shared_ptr<string> userTablePartitionField{};
  shared_ptr<string> userTablePartitionFieldFormat{};
  shared_ptr<string> workflowName{};

  ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs() {}

  explicit ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compareFeature) {
      res["CompareFeature"] = boost::any(*compareFeature);
    }
    if (easServiceName) {
      res["EasServiceName"] = boost::any(*easServiceName);
    }
    if (easyRecPackagePath) {
      res["EasyRecPackagePath"] = boost::any(*easyRecPackagePath);
    }
    if (easyRecVersion) {
      res["EasyRecVersion"] = boost::any(*easyRecVersion);
    }
    if (featureConsistencyCheckJobConfigId) {
      res["FeatureConsistencyCheckJobConfigId"] = boost::any(*featureConsistencyCheckJobConfigId);
    }
    if (featureDisplayExclude) {
      res["FeatureDisplayExclude"] = boost::any(*featureDisplayExclude);
    }
    if (featureLandingResourceId) {
      res["FeatureLandingResourceId"] = boost::any(*featureLandingResourceId);
    }
    if (featureLandingResourceUri) {
      res["FeatureLandingResourceUri"] = boost::any(*featureLandingResourceUri);
    }
    if (featurePriority) {
      res["FeaturePriority"] = boost::any(*featurePriority);
    }
    if (fgJarVersion) {
      res["FgJarVersion"] = boost::any(*fgJarVersion);
    }
    if (fgJsonFileName) {
      res["FgJsonFileName"] = boost::any(*fgJsonFileName);
    }
    if (generateZip) {
      res["GenerateZip"] = boost::any(*generateZip);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (itemIdField) {
      res["ItemIdField"] = boost::any(*itemIdField);
    }
    if (itemTable) {
      res["ItemTable"] = boost::any(*itemTable);
    }
    if (itemTablePartitionField) {
      res["ItemTablePartitionField"] = boost::any(*itemTablePartitionField);
    }
    if (itemTablePartitionFieldFormat) {
      res["ItemTablePartitionFieldFormat"] = boost::any(*itemTablePartitionFieldFormat);
    }
    if (latestJobGmtSamplingEndTime) {
      res["LatestJobGmtSamplingEndTime"] = boost::any(*latestJobGmtSamplingEndTime);
    }
    if (latestJobGmtSamplingStartTime) {
      res["LatestJobGmtSamplingStartTime"] = boost::any(*latestJobGmtSamplingStartTime);
    }
    if (latestJobId) {
      res["LatestJobId"] = boost::any(*latestJobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossResourceId) {
      res["OssResourceId"] = boost::any(*ossResourceId);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userIdField) {
      res["UserIdField"] = boost::any(*userIdField);
    }
    if (userTable) {
      res["UserTable"] = boost::any(*userTable);
    }
    if (userTablePartitionField) {
      res["UserTablePartitionField"] = boost::any(*userTablePartitionField);
    }
    if (userTablePartitionFieldFormat) {
      res["UserTablePartitionFieldFormat"] = boost::any(*userTablePartitionFieldFormat);
    }
    if (workflowName) {
      res["WorkflowName"] = boost::any(*workflowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompareFeature") != m.end() && !m["CompareFeature"].empty()) {
      compareFeature = make_shared<bool>(boost::any_cast<bool>(m["CompareFeature"]));
    }
    if (m.find("EasServiceName") != m.end() && !m["EasServiceName"].empty()) {
      easServiceName = make_shared<string>(boost::any_cast<string>(m["EasServiceName"]));
    }
    if (m.find("EasyRecPackagePath") != m.end() && !m["EasyRecPackagePath"].empty()) {
      easyRecPackagePath = make_shared<string>(boost::any_cast<string>(m["EasyRecPackagePath"]));
    }
    if (m.find("EasyRecVersion") != m.end() && !m["EasyRecVersion"].empty()) {
      easyRecVersion = make_shared<string>(boost::any_cast<string>(m["EasyRecVersion"]));
    }
    if (m.find("FeatureConsistencyCheckJobConfigId") != m.end() && !m["FeatureConsistencyCheckJobConfigId"].empty()) {
      featureConsistencyCheckJobConfigId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigId"]));
    }
    if (m.find("FeatureDisplayExclude") != m.end() && !m["FeatureDisplayExclude"].empty()) {
      featureDisplayExclude = make_shared<string>(boost::any_cast<string>(m["FeatureDisplayExclude"]));
    }
    if (m.find("FeatureLandingResourceId") != m.end() && !m["FeatureLandingResourceId"].empty()) {
      featureLandingResourceId = make_shared<string>(boost::any_cast<string>(m["FeatureLandingResourceId"]));
    }
    if (m.find("FeatureLandingResourceUri") != m.end() && !m["FeatureLandingResourceUri"].empty()) {
      featureLandingResourceUri = make_shared<string>(boost::any_cast<string>(m["FeatureLandingResourceUri"]));
    }
    if (m.find("FeaturePriority") != m.end() && !m["FeaturePriority"].empty()) {
      featurePriority = make_shared<string>(boost::any_cast<string>(m["FeaturePriority"]));
    }
    if (m.find("FgJarVersion") != m.end() && !m["FgJarVersion"].empty()) {
      fgJarVersion = make_shared<string>(boost::any_cast<string>(m["FgJarVersion"]));
    }
    if (m.find("FgJsonFileName") != m.end() && !m["FgJsonFileName"].empty()) {
      fgJsonFileName = make_shared<string>(boost::any_cast<string>(m["FgJsonFileName"]));
    }
    if (m.find("GenerateZip") != m.end() && !m["GenerateZip"].empty()) {
      generateZip = make_shared<bool>(boost::any_cast<bool>(m["GenerateZip"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ItemIdField") != m.end() && !m["ItemIdField"].empty()) {
      itemIdField = make_shared<string>(boost::any_cast<string>(m["ItemIdField"]));
    }
    if (m.find("ItemTable") != m.end() && !m["ItemTable"].empty()) {
      itemTable = make_shared<string>(boost::any_cast<string>(m["ItemTable"]));
    }
    if (m.find("ItemTablePartitionField") != m.end() && !m["ItemTablePartitionField"].empty()) {
      itemTablePartitionField = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionField"]));
    }
    if (m.find("ItemTablePartitionFieldFormat") != m.end() && !m["ItemTablePartitionFieldFormat"].empty()) {
      itemTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionFieldFormat"]));
    }
    if (m.find("LatestJobGmtSamplingEndTime") != m.end() && !m["LatestJobGmtSamplingEndTime"].empty()) {
      latestJobGmtSamplingEndTime = make_shared<string>(boost::any_cast<string>(m["LatestJobGmtSamplingEndTime"]));
    }
    if (m.find("LatestJobGmtSamplingStartTime") != m.end() && !m["LatestJobGmtSamplingStartTime"].empty()) {
      latestJobGmtSamplingStartTime = make_shared<string>(boost::any_cast<string>(m["LatestJobGmtSamplingStartTime"]));
    }
    if (m.find("LatestJobId") != m.end() && !m["LatestJobId"].empty()) {
      latestJobId = make_shared<string>(boost::any_cast<string>(m["LatestJobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssResourceId") != m.end() && !m["OssResourceId"].empty()) {
      ossResourceId = make_shared<string>(boost::any_cast<string>(m["OssResourceId"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserIdField") != m.end() && !m["UserIdField"].empty()) {
      userIdField = make_shared<string>(boost::any_cast<string>(m["UserIdField"]));
    }
    if (m.find("UserTable") != m.end() && !m["UserTable"].empty()) {
      userTable = make_shared<string>(boost::any_cast<string>(m["UserTable"]));
    }
    if (m.find("UserTablePartitionField") != m.end() && !m["UserTablePartitionField"].empty()) {
      userTablePartitionField = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionField"]));
    }
    if (m.find("UserTablePartitionFieldFormat") != m.end() && !m["UserTablePartitionFieldFormat"].empty()) {
      userTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionFieldFormat"]));
    }
    if (m.find("WorkflowName") != m.end() && !m["WorkflowName"].empty()) {
      workflowName = make_shared<string>(boost::any_cast<string>(m["WorkflowName"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs() = default;
};
class ListFeatureConsistencyCheckJobConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs>> featureConsistencyCheckConfigs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFeatureConsistencyCheckJobConfigsResponseBody() {}

  explicit ListFeatureConsistencyCheckJobConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureConsistencyCheckConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*featureConsistencyCheckConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureConsistencyCheckConfigs"] = boost::any(temp1);
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
    if (m.find("FeatureConsistencyCheckConfigs") != m.end() && !m["FeatureConsistencyCheckConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureConsistencyCheckConfigs"].type()) {
        vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureConsistencyCheckConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureConsistencyCheckConfigs = make_shared<vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobConfigsResponseBody() = default;
};
class ListFeatureConsistencyCheckJobConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureConsistencyCheckJobConfigsResponseBody> body{};

  ListFeatureConsistencyCheckJobConfigsResponse() {}

  explicit ListFeatureConsistencyCheckJobConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureConsistencyCheckJobConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureConsistencyCheckJobConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureConsistencyCheckJobConfigsResponse() = default;
};
class ListFeatureConsistencyCheckJobFeatureReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> logItemId{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> logUserId{};

  ListFeatureConsistencyCheckJobFeatureReportsRequest() {}

  explicit ListFeatureConsistencyCheckJobFeatureReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (logItemId) {
      res["LogItemId"] = boost::any(*logItemId);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (logUserId) {
      res["LogUserId"] = boost::any(*logUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LogItemId") != m.end() && !m["LogItemId"].empty()) {
      logItemId = make_shared<string>(boost::any_cast<string>(m["LogItemId"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("LogUserId") != m.end() && !m["LogUserId"].empty()) {
      logUserId = make_shared<string>(boost::any_cast<string>(m["LogUserId"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobFeatureReportsRequest() = default;
};
class ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff : public Darabonba::Model {
public:
  shared_ptr<string> featureName{};
  shared_ptr<string> logItemId{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> logUserId{};
  shared_ptr<string> offlineValue{};
  shared_ptr<string> onlineValue{};

  ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff() {}

  explicit ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (logItemId) {
      res["LogItemId"] = boost::any(*logItemId);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (logUserId) {
      res["LogUserId"] = boost::any(*logUserId);
    }
    if (offlineValue) {
      res["OfflineValue"] = boost::any(*offlineValue);
    }
    if (onlineValue) {
      res["OnlineValue"] = boost::any(*onlineValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("LogItemId") != m.end() && !m["LogItemId"].empty()) {
      logItemId = make_shared<string>(boost::any_cast<string>(m["LogItemId"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("LogUserId") != m.end() && !m["LogUserId"].empty()) {
      logUserId = make_shared<string>(boost::any_cast<string>(m["LogUserId"]));
    }
    if (m.find("OfflineValue") != m.end() && !m["OfflineValue"].empty()) {
      offlineValue = make_shared<string>(boost::any_cast<string>(m["OfflineValue"]));
    }
    if (m.find("OnlineValue") != m.end() && !m["OnlineValue"].empty()) {
      onlineValue = make_shared<string>(boost::any_cast<string>(m["OnlineValue"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff() = default;
};
class ListFeatureConsistencyCheckJobFeatureReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataPath{};
  shared_ptr<string> ossPath{};
  shared_ptr<vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff>> reportsOfFeatureDiff{};
  shared_ptr<string> requestId{};

  ListFeatureConsistencyCheckJobFeatureReportsResponseBody() {}

  explicit ListFeatureConsistencyCheckJobFeatureReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    if (reportsOfFeatureDiff) {
      vector<boost::any> temp1;
      for(auto item1:*reportsOfFeatureDiff){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReportsOfFeatureDiff"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
    if (m.find("ReportsOfFeatureDiff") != m.end() && !m["ReportsOfFeatureDiff"].empty()) {
      if (typeid(vector<boost::any>) == m["ReportsOfFeatureDiff"].type()) {
        vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReportsOfFeatureDiff"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reportsOfFeatureDiff = make_shared<vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobFeatureReportsResponseBody() = default;
};
class ListFeatureConsistencyCheckJobFeatureReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureConsistencyCheckJobFeatureReportsResponseBody> body{};

  ListFeatureConsistencyCheckJobFeatureReportsResponse() {}

  explicit ListFeatureConsistencyCheckJobFeatureReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureConsistencyCheckJobFeatureReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureConsistencyCheckJobFeatureReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureConsistencyCheckJobFeatureReportsResponse() = default;
};
class ListFeatureConsistencyCheckJobScoreReportsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeRequestIds{};
  shared_ptr<string> instanceId{};

  ListFeatureConsistencyCheckJobScoreReportsRequest() {}

  explicit ListFeatureConsistencyCheckJobScoreReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeRequestIds) {
      res["ExcludeRequestIds"] = boost::any(*excludeRequestIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeRequestIds") != m.end() && !m["ExcludeRequestIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeRequestIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeRequestIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeRequestIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobScoreReportsRequest() = default;
};
class ListFeatureConsistencyCheckJobScoreReportsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludeRequestIdsShrink{};
  shared_ptr<string> instanceId{};

  ListFeatureConsistencyCheckJobScoreReportsShrinkRequest() {}

  explicit ListFeatureConsistencyCheckJobScoreReportsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeRequestIdsShrink) {
      res["ExcludeRequestIds"] = boost::any(*excludeRequestIdsShrink);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeRequestIds") != m.end() && !m["ExcludeRequestIds"].empty()) {
      excludeRequestIdsShrink = make_shared<string>(boost::any_cast<string>(m["ExcludeRequestIds"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobScoreReportsShrinkRequest() = default;
};
class ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff : public Darabonba::Model {
public:
  shared_ptr<string> logItemId{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> logUserId{};
  shared_ptr<string> scoreDiff{};
  shared_ptr<string> scoreDiffDetail{};

  ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff() {}

  explicit ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logItemId) {
      res["LogItemId"] = boost::any(*logItemId);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (logUserId) {
      res["LogUserId"] = boost::any(*logUserId);
    }
    if (scoreDiff) {
      res["ScoreDiff"] = boost::any(*scoreDiff);
    }
    if (scoreDiffDetail) {
      res["ScoreDiffDetail"] = boost::any(*scoreDiffDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogItemId") != m.end() && !m["LogItemId"].empty()) {
      logItemId = make_shared<string>(boost::any_cast<string>(m["LogItemId"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("LogUserId") != m.end() && !m["LogUserId"].empty()) {
      logUserId = make_shared<string>(boost::any_cast<string>(m["LogUserId"]));
    }
    if (m.find("ScoreDiff") != m.end() && !m["ScoreDiff"].empty()) {
      scoreDiff = make_shared<string>(boost::any_cast<string>(m["ScoreDiff"]));
    }
    if (m.find("ScoreDiffDetail") != m.end() && !m["ScoreDiffDetail"].empty()) {
      scoreDiffDetail = make_shared<string>(boost::any_cast<string>(m["ScoreDiffDetail"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff() = default;
};
class ListFeatureConsistencyCheckJobScoreReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataPath{};
  shared_ptr<string> ossPath{};
  shared_ptr<vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff>> reportsOfScoreDiff{};
  shared_ptr<string> requestId{};

  ListFeatureConsistencyCheckJobScoreReportsResponseBody() {}

  explicit ListFeatureConsistencyCheckJobScoreReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPath) {
      res["DataPath"] = boost::any(*dataPath);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    if (reportsOfScoreDiff) {
      vector<boost::any> temp1;
      for(auto item1:*reportsOfScoreDiff){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReportsOfScoreDiff"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPath") != m.end() && !m["DataPath"].empty()) {
      dataPath = make_shared<string>(boost::any_cast<string>(m["DataPath"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
    if (m.find("ReportsOfScoreDiff") != m.end() && !m["ReportsOfScoreDiff"].empty()) {
      if (typeid(vector<boost::any>) == m["ReportsOfScoreDiff"].type()) {
        vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReportsOfScoreDiff"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reportsOfScoreDiff = make_shared<vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobScoreReportsResponseBody() = default;
};
class ListFeatureConsistencyCheckJobScoreReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureConsistencyCheckJobScoreReportsResponseBody> body{};

  ListFeatureConsistencyCheckJobScoreReportsResponse() {}

  explicit ListFeatureConsistencyCheckJobScoreReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureConsistencyCheckJobScoreReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureConsistencyCheckJobScoreReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureConsistencyCheckJobScoreReportsResponse() = default;
};
class ListFeatureConsistencyCheckJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> order{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};

  ListFeatureConsistencyCheckJobsRequest() {}

  explicit ListFeatureConsistencyCheckJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobsRequest() = default;
};
class ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> featureConsistencyCheckJobConfigId{};
  shared_ptr<string> featureConsistencyCheckJobConfigName{};
  shared_ptr<string> featureConsistencyCheckJobId{};
  shared_ptr<string> gmtEndTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<vector<string>> logs{};
  shared_ptr<string> status{};

  ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs() {}

  explicit ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (featureConsistencyCheckJobConfigId) {
      res["FeatureConsistencyCheckJobConfigId"] = boost::any(*featureConsistencyCheckJobConfigId);
    }
    if (featureConsistencyCheckJobConfigName) {
      res["FeatureConsistencyCheckJobConfigName"] = boost::any(*featureConsistencyCheckJobConfigName);
    }
    if (featureConsistencyCheckJobId) {
      res["FeatureConsistencyCheckJobId"] = boost::any(*featureConsistencyCheckJobId);
    }
    if (gmtEndTime) {
      res["GmtEndTime"] = boost::any(*gmtEndTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("FeatureConsistencyCheckJobConfigId") != m.end() && !m["FeatureConsistencyCheckJobConfigId"].empty()) {
      featureConsistencyCheckJobConfigId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigId"]));
    }
    if (m.find("FeatureConsistencyCheckJobConfigName") != m.end() && !m["FeatureConsistencyCheckJobConfigName"].empty()) {
      featureConsistencyCheckJobConfigName = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigName"]));
    }
    if (m.find("FeatureConsistencyCheckJobId") != m.end() && !m["FeatureConsistencyCheckJobId"].empty()) {
      featureConsistencyCheckJobId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobId"]));
    }
    if (m.find("GmtEndTime") != m.end() && !m["GmtEndTime"].empty()) {
      gmtEndTime = make_shared<string>(boost::any_cast<string>(m["GmtEndTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs() = default;
};
class ListFeatureConsistencyCheckJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs>> featureConsistencyCheckJobs{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListFeatureConsistencyCheckJobsResponseBody() {}

  explicit ListFeatureConsistencyCheckJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureConsistencyCheckJobs) {
      vector<boost::any> temp1;
      for(auto item1:*featureConsistencyCheckJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureConsistencyCheckJobs"] = boost::any(temp1);
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
    if (m.find("FeatureConsistencyCheckJobs") != m.end() && !m["FeatureConsistencyCheckJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureConsistencyCheckJobs"].type()) {
        vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureConsistencyCheckJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureConsistencyCheckJobs = make_shared<vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListFeatureConsistencyCheckJobsResponseBody() = default;
};
class ListFeatureConsistencyCheckJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureConsistencyCheckJobsResponseBody> body{};

  ListFeatureConsistencyCheckJobsResponse() {}

  explicit ListFeatureConsistencyCheckJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureConsistencyCheckJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureConsistencyCheckJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureConsistencyCheckJobsResponse() = default;
};
class ListInstanceResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> group{};
  shared_ptr<string> type{};

  ListInstanceResourcesRequest() {}

  explicit ListInstanceResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstanceResourcesRequest() = default;
};
class ListInstanceResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> config{};
  shared_ptr<string> gmtCreateAt{};
  shared_ptr<string> gmtModifiedAt{};
  shared_ptr<string> group{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};

  ListInstanceResourcesResponseBodyResources() {}

  explicit ListInstanceResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (gmtCreateAt) {
      res["GmtCreateAt"] = boost::any(*gmtCreateAt);
    }
    if (gmtModifiedAt) {
      res["GmtModifiedAt"] = boost::any(*gmtModifiedAt);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("GmtCreateAt") != m.end() && !m["GmtCreateAt"].empty()) {
      gmtCreateAt = make_shared<string>(boost::any_cast<string>(m["GmtCreateAt"]));
    }
    if (m.find("GmtModifiedAt") != m.end() && !m["GmtModifiedAt"].empty()) {
      gmtModifiedAt = make_shared<string>(boost::any_cast<string>(m["GmtModifiedAt"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~ListInstanceResourcesResponseBodyResources() = default;
};
class ListInstanceResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInstanceResourcesResponseBodyResources>> resources{};
  shared_ptr<long> totalCount{};

  ListInstanceResourcesResponseBody() {}

  explicit ListInstanceResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
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
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListInstanceResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListInstanceResourcesResponseBodyResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstanceResourcesResponseBody() = default;
};
class ListInstanceResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceResourcesResponseBody> body{};

  ListInstanceResourcesResponse() {}

  explicit ListInstanceResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceResourcesResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> type{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstancesConfigDataManagements : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> type{};

  ListInstancesResponseBodyInstancesConfigDataManagements() {}

  explicit ListInstancesResponseBodyInstancesConfigDataManagements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["ComponentCode"] = boost::any(*componentCode);
    }
    if (meta) {
      res["Meta"] = boost::any(*meta);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCode") != m.end() && !m["ComponentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["ComponentCode"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesConfigDataManagements() = default;
};
class ListInstancesResponseBodyInstancesConfigEngines : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> type{};

  ListInstancesResponseBodyInstancesConfigEngines() {}

  explicit ListInstancesResponseBodyInstancesConfigEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["ComponentCode"] = boost::any(*componentCode);
    }
    if (meta) {
      res["Meta"] = boost::any(*meta);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCode") != m.end() && !m["ComponentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["ComponentCode"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesConfigEngines() = default;
};
class ListInstancesResponseBodyInstancesConfigMonitors : public Darabonba::Model {
public:
  shared_ptr<string> componentCode{};
  shared_ptr<map<string, boost::any>> meta{};
  shared_ptr<string> type{};

  ListInstancesResponseBodyInstancesConfigMonitors() {}

  explicit ListInstancesResponseBodyInstancesConfigMonitors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentCode) {
      res["ComponentCode"] = boost::any(*componentCode);
    }
    if (meta) {
      res["Meta"] = boost::any(*meta);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentCode") != m.end() && !m["ComponentCode"].empty()) {
      componentCode = make_shared<string>(boost::any_cast<string>(m["ComponentCode"]));
    }
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Meta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      meta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesConfigMonitors() = default;
};
class ListInstancesResponseBodyInstancesConfig : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstancesConfigDataManagements>> dataManagements{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesConfigEngines>> engines{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesConfigMonitors>> monitors{};

  ListInstancesResponseBodyInstancesConfig() {}

  explicit ListInstancesResponseBodyInstancesConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataManagements) {
      vector<boost::any> temp1;
      for(auto item1:*dataManagements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataManagements"] = boost::any(temp1);
    }
    if (engines) {
      vector<boost::any> temp1;
      for(auto item1:*engines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Engines"] = boost::any(temp1);
    }
    if (monitors) {
      vector<boost::any> temp1;
      for(auto item1:*monitors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Monitors"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataManagements") != m.end() && !m["DataManagements"].empty()) {
      if (typeid(vector<boost::any>) == m["DataManagements"].type()) {
        vector<ListInstancesResponseBodyInstancesConfigDataManagements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataManagements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesConfigDataManagements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataManagements = make_shared<vector<ListInstancesResponseBodyInstancesConfigDataManagements>>(expect1);
      }
    }
    if (m.find("Engines") != m.end() && !m["Engines"].empty()) {
      if (typeid(vector<boost::any>) == m["Engines"].type()) {
        vector<ListInstancesResponseBodyInstancesConfigEngines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Engines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesConfigEngines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engines = make_shared<vector<ListInstancesResponseBodyInstancesConfigEngines>>(expect1);
      }
    }
    if (m.find("Monitors") != m.end() && !m["Monitors"].empty()) {
      if (typeid(vector<boost::any>) == m["Monitors"].type()) {
        vector<ListInstancesResponseBodyInstancesConfigMonitors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Monitors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesConfigMonitors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        monitors = make_shared<vector<ListInstancesResponseBodyInstancesConfigMonitors>>(expect1);
      }
    }
  }


  virtual ~ListInstancesResponseBodyInstancesConfig() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<ListInstancesResponseBodyInstancesConfig> config{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        ListInstancesResponseBodyInstancesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<ListInstancesResponseBodyInstancesConfig>(model1);
      }
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListLaboratoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};

  ListLaboratoriesRequest() {}

  explicit ListLaboratoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListLaboratoriesRequest() = default;
};
class ListLaboratoriesResponseBodyLaboratories : public Darabonba::Model {
public:
  shared_ptr<long> bucketCount{};
  shared_ptr<string> bucketType{};
  shared_ptr<string> buckets{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> environment{};
  shared_ptr<string> filter{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> name{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListLaboratoriesResponseBodyLaboratories() {}

  explicit ListLaboratoriesResponseBodyLaboratories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketCount) {
      res["BucketCount"] = boost::any(*bucketCount);
    }
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
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
    if (m.find("BucketCount") != m.end() && !m["BucketCount"].empty()) {
      bucketCount = make_shared<long>(boost::any_cast<long>(m["BucketCount"]));
    }
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListLaboratoriesResponseBodyLaboratories() = default;
};
class ListLaboratoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLaboratoriesResponseBodyLaboratories>> laboratories{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListLaboratoriesResponseBody() {}

  explicit ListLaboratoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (laboratories) {
      vector<boost::any> temp1;
      for(auto item1:*laboratories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Laboratories"] = boost::any(temp1);
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
    if (m.find("Laboratories") != m.end() && !m["Laboratories"].empty()) {
      if (typeid(vector<boost::any>) == m["Laboratories"].type()) {
        vector<ListLaboratoriesResponseBodyLaboratories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Laboratories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLaboratoriesResponseBodyLaboratories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        laboratories = make_shared<vector<ListLaboratoriesResponseBodyLaboratories>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLaboratoriesResponseBody() = default;
};
class ListLaboratoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLaboratoriesResponseBody> body{};

  ListLaboratoriesResponse() {}

  explicit ListLaboratoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLaboratoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLaboratoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListLaboratoriesResponse() = default;
};
class ListLayersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> laboratoryId{};

  ListLayersRequest() {}

  explicit ListLayersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
  }


  virtual ~ListLayersRequest() = default;
};
class ListLayersResponseBodyLayers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> laboratoryId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<string> sceneId{};

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
    if (laboratoryId) {
      res["LaboratoryId"] = boost::any(*laboratoryId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LaboratoryId") != m.end() && !m["LaboratoryId"].empty()) {
      laboratoryId = make_shared<string>(boost::any_cast<string>(m["LaboratoryId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
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
        ListLayersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLayersResponseBody>(model1);
      }
    }
  }


  virtual ~ListLayersResponse() = default;
};
class ListParamsRequest : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sceneId{};

  ListParamsRequest() {}

  explicit ListParamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ListParamsRequest() = default;
};
class ListParamsResponseBodyParams : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> paramId{};
  shared_ptr<string> value{};

  ListParamsResponseBodyParams() {}

  explicit ListParamsResponseBodyParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paramId) {
      res["ParamId"] = boost::any(*paramId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParamId") != m.end() && !m["ParamId"].empty()) {
      paramId = make_shared<string>(boost::any_cast<string>(m["ParamId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListParamsResponseBodyParams() = default;
};
class ListParamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListParamsResponseBodyParams>> params{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListParamsResponseBody() {}

  explicit ListParamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
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
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<ListParamsResponseBodyParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParamsResponseBodyParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<ListParamsResponseBodyParams>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListParamsResponseBody() = default;
};
class ListParamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListParamsResponseBody> body{};

  ListParamsResponse() {}

  explicit ListParamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListParamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListParamsResponseBody>(model1);
      }
    }
  }


  virtual ~ListParamsResponse() = default;
};
class ListScenesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  ListScenesRequest() {}

  explicit ListScenesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListScenesRequest() = default;
};
class ListScenesResponseBodyScenesFlows : public Darabonba::Model {
public:
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowName{};

  ListScenesResponseBodyScenesFlows() {}

  explicit ListScenesResponseBodyScenesFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~ListScenesResponseBodyScenesFlows() = default;
};
class ListScenesResponseBodyScenes : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<ListScenesResponseBodyScenesFlows>> flows{};
  shared_ptr<string> name{};
  shared_ptr<string> sceneId{};

  ListScenesResponseBodyScenes() {}

  explicit ListScenesResponseBodyScenes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flows) {
      vector<boost::any> temp1;
      for(auto item1:*flows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Flows"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Flows") != m.end() && !m["Flows"].empty()) {
      if (typeid(vector<boost::any>) == m["Flows"].type()) {
        vector<ListScenesResponseBodyScenesFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Flows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScenesResponseBodyScenesFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flows = make_shared<vector<ListScenesResponseBodyScenesFlows>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ListScenesResponseBodyScenes() = default;
};
class ListScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListScenesResponseBodyScenes>> scenes{};
  shared_ptr<long> totalCount{};

  ListScenesResponseBody() {}

  explicit ListScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scenes) {
      vector<boost::any> temp1;
      for(auto item1:*scenes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Scenes"] = boost::any(temp1);
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
    if (m.find("Scenes") != m.end() && !m["Scenes"].empty()) {
      if (typeid(vector<boost::any>) == m["Scenes"].type()) {
        vector<ListScenesResponseBodyScenes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Scenes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScenesResponseBodyScenes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scenes = make_shared<vector<ListScenesResponseBodyScenes>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListScenesResponseBody() = default;
};
class ListScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScenesResponseBody> body{};

  ListScenesResponse() {}

  explicit ListScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScenesResponseBody>(model1);
      }
    }
  }


  virtual ~ListScenesResponse() = default;
};
class ListSubCrowdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListSubCrowdsRequest() {}

  explicit ListSubCrowdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSubCrowdsRequest() = default;
};
class ListSubCrowdsResponseBodySubCrowds : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<long> quantity{};
  shared_ptr<string> source{};
  shared_ptr<string> subCrowdId{};
  shared_ptr<string> users{};

  ListSubCrowdsResponseBodySubCrowds() {}

  explicit ListSubCrowdsResponseBodySubCrowds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subCrowdId) {
      res["SubCrowdId"] = boost::any(*subCrowdId);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubCrowdId") != m.end() && !m["SubCrowdId"].empty()) {
      subCrowdId = make_shared<string>(boost::any_cast<string>(m["SubCrowdId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<string>(boost::any_cast<string>(m["Users"]));
    }
  }


  virtual ~ListSubCrowdsResponseBodySubCrowds() = default;
};
class ListSubCrowdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSubCrowdsResponseBodySubCrowds>> subCrowds{};
  shared_ptr<long> totalCount{};

  ListSubCrowdsResponseBody() {}

  explicit ListSubCrowdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subCrowds) {
      vector<boost::any> temp1;
      for(auto item1:*subCrowds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubCrowds"] = boost::any(temp1);
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
    if (m.find("SubCrowds") != m.end() && !m["SubCrowds"].empty()) {
      if (typeid(vector<boost::any>) == m["SubCrowds"].type()) {
        vector<ListSubCrowdsResponseBodySubCrowds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubCrowds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubCrowdsResponseBodySubCrowds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subCrowds = make_shared<vector<ListSubCrowdsResponseBodySubCrowds>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSubCrowdsResponseBody() = default;
};
class ListSubCrowdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubCrowdsResponseBody> body{};

  ListSubCrowdsResponse() {}

  explicit ListSubCrowdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubCrowdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubCrowdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubCrowdsResponse() = default;
};
class ListTableMetasRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> module{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListTableMetasRequest() {}

  explicit ListTableMetasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTableMetasRequest() = default;
};
class ListTableMetasResponseBodyTableMetasFields : public Darabonba::Model {
public:
  shared_ptr<bool> isDimensionField{};
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
    if (isDimensionField) {
      res["IsDimensionField"] = boost::any(*isDimensionField);
    }
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
    if (m.find("IsDimensionField") != m.end() && !m["IsDimensionField"].empty()) {
      isDimensionField = make_shared<bool>(boost::any_cast<bool>(m["IsDimensionField"]));
    }
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
  shared_ptr<string> description{};
  shared_ptr<vector<ListTableMetasResponseBodyTableMetasFields>> fields{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtImportedTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> module{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

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
    if (gmtImportedTime) {
      res["GmtImportedTime"] = boost::any(*gmtImportedTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanDelete") != m.end() && !m["CanDelete"].empty()) {
      canDelete = make_shared<bool>(boost::any_cast<bool>(m["CanDelete"]));
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
    if (m.find("GmtImportedTime") != m.end() && !m["GmtImportedTime"].empty()) {
      gmtImportedTime = make_shared<string>(boost::any_cast<string>(m["GmtImportedTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
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
        ListTableMetasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTableMetasResponseBody>(model1);
      }
    }
  }


  virtual ~ListTableMetasResponse() = default;
};
class OfflineExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OfflineExperimentRequest() {}

  explicit OfflineExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OfflineExperimentRequest() = default;
};
class OfflineExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OfflineExperimentResponseBody() {}

  explicit OfflineExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OfflineExperimentResponseBody() = default;
};
class OfflineExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineExperimentResponseBody> body{};

  OfflineExperimentResponse() {}

  explicit OfflineExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OfflineExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineExperimentResponse() = default;
};
class OfflineExperimentGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OfflineExperimentGroupRequest() {}

  explicit OfflineExperimentGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OfflineExperimentGroupRequest() = default;
};
class OfflineExperimentGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OfflineExperimentGroupResponseBody() {}

  explicit OfflineExperimentGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OfflineExperimentGroupResponseBody() = default;
};
class OfflineExperimentGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineExperimentGroupResponseBody> body{};

  OfflineExperimentGroupResponse() {}

  explicit OfflineExperimentGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OfflineExperimentGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineExperimentGroupResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineExperimentGroupResponse() = default;
};
class OfflineLaboratoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OfflineLaboratoryRequest() {}

  explicit OfflineLaboratoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OfflineLaboratoryRequest() = default;
};
class OfflineLaboratoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OfflineLaboratoryResponseBody() {}

  explicit OfflineLaboratoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OfflineLaboratoryResponseBody() = default;
};
class OfflineLaboratoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineLaboratoryResponseBody> body{};

  OfflineLaboratoryResponse() {}

  explicit OfflineLaboratoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OfflineLaboratoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineLaboratoryResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineLaboratoryResponse() = default;
};
class OnlineExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OnlineExperimentRequest() {}

  explicit OnlineExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnlineExperimentRequest() = default;
};
class OnlineExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnlineExperimentResponseBody() {}

  explicit OnlineExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnlineExperimentResponseBody() = default;
};
class OnlineExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnlineExperimentResponseBody> body{};

  OnlineExperimentResponse() {}

  explicit OnlineExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnlineExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnlineExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~OnlineExperimentResponse() = default;
};
class OnlineExperimentGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OnlineExperimentGroupRequest() {}

  explicit OnlineExperimentGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnlineExperimentGroupRequest() = default;
};
class OnlineExperimentGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnlineExperimentGroupResponseBody() {}

  explicit OnlineExperimentGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnlineExperimentGroupResponseBody() = default;
};
class OnlineExperimentGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnlineExperimentGroupResponseBody> body{};

  OnlineExperimentGroupResponse() {}

  explicit OnlineExperimentGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnlineExperimentGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnlineExperimentGroupResponseBody>(model1);
      }
    }
  }


  virtual ~OnlineExperimentGroupResponse() = default;
};
class OnlineLaboratoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  OnlineLaboratoryRequest() {}

  explicit OnlineLaboratoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnlineLaboratoryRequest() = default;
};
class OnlineLaboratoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OnlineLaboratoryResponseBody() {}

  explicit OnlineLaboratoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OnlineLaboratoryResponseBody() = default;
};
class OnlineLaboratoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OnlineLaboratoryResponseBody> body{};

  OnlineLaboratoryResponse() {}

  explicit OnlineLaboratoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OnlineLaboratoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OnlineLaboratoryResponseBody>(model1);
      }
    }
  }


  virtual ~OnlineLaboratoryResponse() = default;
};
class PushAllExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  PushAllExperimentRequest() {}

  explicit PushAllExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PushAllExperimentRequest() = default;
};
class PushAllExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PushAllExperimentResponseBody() {}

  explicit PushAllExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PushAllExperimentResponseBody() = default;
};
class PushAllExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushAllExperimentResponseBody> body{};

  PushAllExperimentResponse() {}

  explicit PushAllExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushAllExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushAllExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~PushAllExperimentResponse() = default;
};
class ReportABMetricGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseExperimentId{};
  shared_ptr<string> dimensionFields{};
  shared_ptr<string> endDate{};
  shared_ptr<string> experimentGroupId{};
  shared_ptr<string> experimentIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> reportType{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> timeStatisticsMethod{};

  ReportABMetricGroupRequest() {}

  explicit ReportABMetricGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseExperimentId) {
      res["BaseExperimentId"] = boost::any(*baseExperimentId);
    }
    if (dimensionFields) {
      res["DimensionFields"] = boost::any(*dimensionFields);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (experimentGroupId) {
      res["ExperimentGroupId"] = boost::any(*experimentGroupId);
    }
    if (experimentIds) {
      res["ExperimentIds"] = boost::any(*experimentIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (timeStatisticsMethod) {
      res["TimeStatisticsMethod"] = boost::any(*timeStatisticsMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseExperimentId") != m.end() && !m["BaseExperimentId"].empty()) {
      baseExperimentId = make_shared<string>(boost::any_cast<string>(m["BaseExperimentId"]));
    }
    if (m.find("DimensionFields") != m.end() && !m["DimensionFields"].empty()) {
      dimensionFields = make_shared<string>(boost::any_cast<string>(m["DimensionFields"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ExperimentGroupId") != m.end() && !m["ExperimentGroupId"].empty()) {
      experimentGroupId = make_shared<string>(boost::any_cast<string>(m["ExperimentGroupId"]));
    }
    if (m.find("ExperimentIds") != m.end() && !m["ExperimentIds"].empty()) {
      experimentIds = make_shared<string>(boost::any_cast<string>(m["ExperimentIds"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TimeStatisticsMethod") != m.end() && !m["TimeStatisticsMethod"].empty()) {
      timeStatisticsMethod = make_shared<string>(boost::any_cast<string>(m["TimeStatisticsMethod"]));
    }
  }


  virtual ~ReportABMetricGroupRequest() = default;
};
class ReportABMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, ExperimentReportValue>> experimentReport{};
  shared_ptr<vector<string>> groupDimension{};
  shared_ptr<string> requestId{};

  ReportABMetricGroupResponseBody() {}

  explicit ReportABMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentReport) {
      map<string, boost::any> temp1;
      for(auto item1:*experimentReport){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["ExperimentReport"] = boost::any(temp1);
    }
    if (groupDimension) {
      res["GroupDimension"] = boost::any(*groupDimension);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentReport") != m.end() && !m["ExperimentReport"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExperimentReport"].type()) {
        map<string, ExperimentReportValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["ExperimentReport"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ExperimentReportValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        experimentReport = make_shared<map<string, ExperimentReportValue>>(expect1);
      }
    }
    if (m.find("GroupDimension") != m.end() && !m["GroupDimension"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupDimension"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupDimension"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupDimension = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReportABMetricGroupResponseBody() = default;
};
class ReportABMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportABMetricGroupResponseBody> body{};

  ReportABMetricGroupResponse() {}

  explicit ReportABMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportABMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportABMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ReportABMetricGroupResponse() = default;
};
class SyncFeatureConsistencyCheckJobReplayLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> contextFeatures{};
  shared_ptr<string> featureConsistencyCheckJobConfigId{};
  shared_ptr<string> generatedFeatures{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> logItemId{};
  shared_ptr<string> logRequestId{};
  shared_ptr<long> logRequestTime{};
  shared_ptr<string> logUserId{};
  shared_ptr<string> rawFeatures{};
  shared_ptr<string> sceneName{};

  SyncFeatureConsistencyCheckJobReplayLogRequest() {}

  explicit SyncFeatureConsistencyCheckJobReplayLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contextFeatures) {
      res["ContextFeatures"] = boost::any(*contextFeatures);
    }
    if (featureConsistencyCheckJobConfigId) {
      res["FeatureConsistencyCheckJobConfigId"] = boost::any(*featureConsistencyCheckJobConfigId);
    }
    if (generatedFeatures) {
      res["GeneratedFeatures"] = boost::any(*generatedFeatures);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (logItemId) {
      res["LogItemId"] = boost::any(*logItemId);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (logRequestTime) {
      res["LogRequestTime"] = boost::any(*logRequestTime);
    }
    if (logUserId) {
      res["LogUserId"] = boost::any(*logUserId);
    }
    if (rawFeatures) {
      res["RawFeatures"] = boost::any(*rawFeatures);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContextFeatures") != m.end() && !m["ContextFeatures"].empty()) {
      contextFeatures = make_shared<string>(boost::any_cast<string>(m["ContextFeatures"]));
    }
    if (m.find("FeatureConsistencyCheckJobConfigId") != m.end() && !m["FeatureConsistencyCheckJobConfigId"].empty()) {
      featureConsistencyCheckJobConfigId = make_shared<string>(boost::any_cast<string>(m["FeatureConsistencyCheckJobConfigId"]));
    }
    if (m.find("GeneratedFeatures") != m.end() && !m["GeneratedFeatures"].empty()) {
      generatedFeatures = make_shared<string>(boost::any_cast<string>(m["GeneratedFeatures"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LogItemId") != m.end() && !m["LogItemId"].empty()) {
      logItemId = make_shared<string>(boost::any_cast<string>(m["LogItemId"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("LogRequestTime") != m.end() && !m["LogRequestTime"].empty()) {
      logRequestTime = make_shared<long>(boost::any_cast<long>(m["LogRequestTime"]));
    }
    if (m.find("LogUserId") != m.end() && !m["LogUserId"].empty()) {
      logUserId = make_shared<string>(boost::any_cast<string>(m["LogUserId"]));
    }
    if (m.find("RawFeatures") != m.end() && !m["RawFeatures"].empty()) {
      rawFeatures = make_shared<string>(boost::any_cast<string>(m["RawFeatures"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
  }


  virtual ~SyncFeatureConsistencyCheckJobReplayLogRequest() = default;
};
class SyncFeatureConsistencyCheckJobReplayLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SyncFeatureConsistencyCheckJobReplayLogResponseBody() {}

  explicit SyncFeatureConsistencyCheckJobReplayLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncFeatureConsistencyCheckJobReplayLogResponseBody() = default;
};
class SyncFeatureConsistencyCheckJobReplayLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncFeatureConsistencyCheckJobReplayLogResponseBody> body{};

  SyncFeatureConsistencyCheckJobReplayLogResponse() {}

  explicit SyncFeatureConsistencyCheckJobReplayLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncFeatureConsistencyCheckJobReplayLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncFeatureConsistencyCheckJobReplayLogResponseBody>(model1);
      }
    }
  }


  virtual ~SyncFeatureConsistencyCheckJobReplayLogResponse() = default;
};
class TerminateFeatureConsistencyCheckJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  TerminateFeatureConsistencyCheckJobRequest() {}

  explicit TerminateFeatureConsistencyCheckJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TerminateFeatureConsistencyCheckJobRequest() = default;
};
class TerminateFeatureConsistencyCheckJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TerminateFeatureConsistencyCheckJobResponseBody() {}

  explicit TerminateFeatureConsistencyCheckJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TerminateFeatureConsistencyCheckJobResponseBody() = default;
};
class TerminateFeatureConsistencyCheckJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TerminateFeatureConsistencyCheckJobResponseBody> body{};

  TerminateFeatureConsistencyCheckJobResponse() {}

  explicit TerminateFeatureConsistencyCheckJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TerminateFeatureConsistencyCheckJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TerminateFeatureConsistencyCheckJobResponseBody>(model1);
      }
    }
  }


  virtual ~TerminateFeatureConsistencyCheckJobResponse() = default;
};
class UpdateABMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> leftMetricId{};
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> resultResourceId{};
  shared_ptr<string> rightMetricId{};
  shared_ptr<string> sceneId{};
  shared_ptr<long> statisticsCycle{};
  shared_ptr<string> tableMetaId{};
  shared_ptr<string> type{};

  UpdateABMetricRequest() {}

  explicit UpdateABMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (leftMetricId) {
      res["LeftMetricId"] = boost::any(*leftMetricId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (resultResourceId) {
      res["ResultResourceId"] = boost::any(*resultResourceId);
    }
    if (rightMetricId) {
      res["RightMetricId"] = boost::any(*rightMetricId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (statisticsCycle) {
      res["StatisticsCycle"] = boost::any(*statisticsCycle);
    }
    if (tableMetaId) {
      res["TableMetaId"] = boost::any(*tableMetaId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LeftMetricId") != m.end() && !m["LeftMetricId"].empty()) {
      leftMetricId = make_shared<string>(boost::any_cast<string>(m["LeftMetricId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("ResultResourceId") != m.end() && !m["ResultResourceId"].empty()) {
      resultResourceId = make_shared<string>(boost::any_cast<string>(m["ResultResourceId"]));
    }
    if (m.find("RightMetricId") != m.end() && !m["RightMetricId"].empty()) {
      rightMetricId = make_shared<string>(boost::any_cast<string>(m["RightMetricId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("StatisticsCycle") != m.end() && !m["StatisticsCycle"].empty()) {
      statisticsCycle = make_shared<long>(boost::any_cast<long>(m["StatisticsCycle"]));
    }
    if (m.find("TableMetaId") != m.end() && !m["TableMetaId"].empty()) {
      tableMetaId = make_shared<string>(boost::any_cast<string>(m["TableMetaId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateABMetricRequest() = default;
};
class UpdateABMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateABMetricResponseBody() {}

  explicit UpdateABMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateABMetricResponseBody() = default;
};
class UpdateABMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateABMetricResponseBody> body{};

  UpdateABMetricResponse() {}

  explicit UpdateABMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateABMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateABMetricResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateABMetricResponse() = default;
};
class UpdateABMetricGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> ABMetricIds{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<bool> realtime{};
  shared_ptr<string> sceneId{};

  UpdateABMetricGroupRequest() {}

  explicit UpdateABMetricGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ABMetricIds) {
      res["ABMetricIds"] = boost::any(*ABMetricIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (realtime) {
      res["Realtime"] = boost::any(*realtime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ABMetricIds") != m.end() && !m["ABMetricIds"].empty()) {
      ABMetricIds = make_shared<string>(boost::any_cast<string>(m["ABMetricIds"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Realtime") != m.end() && !m["Realtime"].empty()) {
      realtime = make_shared<bool>(boost::any_cast<bool>(m["Realtime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~UpdateABMetricGroupRequest() = default;
};
class UpdateABMetricGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateABMetricGroupResponseBody() {}

  explicit UpdateABMetricGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateABMetricGroupResponseBody() = default;
};
class UpdateABMetricGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateABMetricGroupResponseBody> body{};

  UpdateABMetricGroupResponse() {}

  explicit UpdateABMetricGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateABMetricGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateABMetricGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateABMetricGroupResponse() = default;
};
class UpdateCrowdRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
        UpdateCrowdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCrowdResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCrowdResponse() = default;
};
class UpdateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> flowPercent{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateExperimentRequest() {}

  explicit UpdateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flowPercent) {
      res["FlowPercent"] = boost::any(*flowPercent);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FlowPercent") != m.end() && !m["FlowPercent"].empty()) {
      flowPercent = make_shared<long>(boost::any_cast<long>(m["FlowPercent"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
        UpdateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentResponse() = default;
};
class UpdateExperimentGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> crowdId{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<long> distributionTimeDuration{};
  shared_ptr<string> distributionType{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> layerId{};
  shared_ptr<string> name{};
  shared_ptr<bool> needAA{};
  shared_ptr<string> reservcedBuckets{};

  UpdateExperimentGroupRequest() {}

  explicit UpdateExperimentGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crowdId) {
      res["CrowdId"] = boost::any(*crowdId);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (distributionTimeDuration) {
      res["DistributionTimeDuration"] = boost::any(*distributionTimeDuration);
    }
    if (distributionType) {
      res["DistributionType"] = boost::any(*distributionType);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (layerId) {
      res["LayerId"] = boost::any(*layerId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (needAA) {
      res["NeedAA"] = boost::any(*needAA);
    }
    if (reservcedBuckets) {
      res["ReservcedBuckets"] = boost::any(*reservcedBuckets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrowdId") != m.end() && !m["CrowdId"].empty()) {
      crowdId = make_shared<string>(boost::any_cast<string>(m["CrowdId"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DistributionTimeDuration") != m.end() && !m["DistributionTimeDuration"].empty()) {
      distributionTimeDuration = make_shared<long>(boost::any_cast<long>(m["DistributionTimeDuration"]));
    }
    if (m.find("DistributionType") != m.end() && !m["DistributionType"].empty()) {
      distributionType = make_shared<string>(boost::any_cast<string>(m["DistributionType"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LayerId") != m.end() && !m["LayerId"].empty()) {
      layerId = make_shared<string>(boost::any_cast<string>(m["LayerId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NeedAA") != m.end() && !m["NeedAA"].empty()) {
      needAA = make_shared<bool>(boost::any_cast<bool>(m["NeedAA"]));
    }
    if (m.find("ReservcedBuckets") != m.end() && !m["ReservcedBuckets"].empty()) {
      reservcedBuckets = make_shared<string>(boost::any_cast<string>(m["ReservcedBuckets"]));
    }
  }


  virtual ~UpdateExperimentGroupRequest() = default;
};
class UpdateExperimentGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExperimentGroupResponseBody() {}

  explicit UpdateExperimentGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateExperimentGroupResponseBody() = default;
};
class UpdateExperimentGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentGroupResponseBody> body{};

  UpdateExperimentGroupResponse() {}

  explicit UpdateExperimentGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExperimentGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentGroupResponse() = default;
};
class UpdateFeatureConsistencyCheckJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compareFeature{};
  shared_ptr<string> easServiceName{};
  shared_ptr<string> easyRecPackagePath{};
  shared_ptr<string> easyRecVersion{};
  shared_ptr<string> featureDisplayExclude{};
  shared_ptr<string> featureLandingResourceId{};
  shared_ptr<string> featurePriority{};
  shared_ptr<string> fgJarVersion{};
  shared_ptr<string> fgJsonFileName{};
  shared_ptr<bool> generateZip{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> itemIdField{};
  shared_ptr<string> itemTable{};
  shared_ptr<string> itemTablePartitionField{};
  shared_ptr<string> itemTablePartitionFieldFormat{};
  shared_ptr<string> name{};
  shared_ptr<string> ossResourceId{};
  shared_ptr<double> sampleRate{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> userIdField{};
  shared_ptr<string> userTable{};
  shared_ptr<string> userTablePartitionField{};
  shared_ptr<string> userTablePartitionFieldFormat{};
  shared_ptr<string> workflowName{};

  UpdateFeatureConsistencyCheckJobConfigRequest() {}

  explicit UpdateFeatureConsistencyCheckJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compareFeature) {
      res["CompareFeature"] = boost::any(*compareFeature);
    }
    if (easServiceName) {
      res["EasServiceName"] = boost::any(*easServiceName);
    }
    if (easyRecPackagePath) {
      res["EasyRecPackagePath"] = boost::any(*easyRecPackagePath);
    }
    if (easyRecVersion) {
      res["EasyRecVersion"] = boost::any(*easyRecVersion);
    }
    if (featureDisplayExclude) {
      res["FeatureDisplayExclude"] = boost::any(*featureDisplayExclude);
    }
    if (featureLandingResourceId) {
      res["FeatureLandingResourceId"] = boost::any(*featureLandingResourceId);
    }
    if (featurePriority) {
      res["FeaturePriority"] = boost::any(*featurePriority);
    }
    if (fgJarVersion) {
      res["FgJarVersion"] = boost::any(*fgJarVersion);
    }
    if (fgJsonFileName) {
      res["FgJsonFileName"] = boost::any(*fgJsonFileName);
    }
    if (generateZip) {
      res["GenerateZip"] = boost::any(*generateZip);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (itemIdField) {
      res["ItemIdField"] = boost::any(*itemIdField);
    }
    if (itemTable) {
      res["ItemTable"] = boost::any(*itemTable);
    }
    if (itemTablePartitionField) {
      res["ItemTablePartitionField"] = boost::any(*itemTablePartitionField);
    }
    if (itemTablePartitionFieldFormat) {
      res["ItemTablePartitionFieldFormat"] = boost::any(*itemTablePartitionFieldFormat);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossResourceId) {
      res["OssResourceId"] = boost::any(*ossResourceId);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userIdField) {
      res["UserIdField"] = boost::any(*userIdField);
    }
    if (userTable) {
      res["UserTable"] = boost::any(*userTable);
    }
    if (userTablePartitionField) {
      res["UserTablePartitionField"] = boost::any(*userTablePartitionField);
    }
    if (userTablePartitionFieldFormat) {
      res["UserTablePartitionFieldFormat"] = boost::any(*userTablePartitionFieldFormat);
    }
    if (workflowName) {
      res["WorkflowName"] = boost::any(*workflowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompareFeature") != m.end() && !m["CompareFeature"].empty()) {
      compareFeature = make_shared<bool>(boost::any_cast<bool>(m["CompareFeature"]));
    }
    if (m.find("EasServiceName") != m.end() && !m["EasServiceName"].empty()) {
      easServiceName = make_shared<string>(boost::any_cast<string>(m["EasServiceName"]));
    }
    if (m.find("EasyRecPackagePath") != m.end() && !m["EasyRecPackagePath"].empty()) {
      easyRecPackagePath = make_shared<string>(boost::any_cast<string>(m["EasyRecPackagePath"]));
    }
    if (m.find("EasyRecVersion") != m.end() && !m["EasyRecVersion"].empty()) {
      easyRecVersion = make_shared<string>(boost::any_cast<string>(m["EasyRecVersion"]));
    }
    if (m.find("FeatureDisplayExclude") != m.end() && !m["FeatureDisplayExclude"].empty()) {
      featureDisplayExclude = make_shared<string>(boost::any_cast<string>(m["FeatureDisplayExclude"]));
    }
    if (m.find("FeatureLandingResourceId") != m.end() && !m["FeatureLandingResourceId"].empty()) {
      featureLandingResourceId = make_shared<string>(boost::any_cast<string>(m["FeatureLandingResourceId"]));
    }
    if (m.find("FeaturePriority") != m.end() && !m["FeaturePriority"].empty()) {
      featurePriority = make_shared<string>(boost::any_cast<string>(m["FeaturePriority"]));
    }
    if (m.find("FgJarVersion") != m.end() && !m["FgJarVersion"].empty()) {
      fgJarVersion = make_shared<string>(boost::any_cast<string>(m["FgJarVersion"]));
    }
    if (m.find("FgJsonFileName") != m.end() && !m["FgJsonFileName"].empty()) {
      fgJsonFileName = make_shared<string>(boost::any_cast<string>(m["FgJsonFileName"]));
    }
    if (m.find("GenerateZip") != m.end() && !m["GenerateZip"].empty()) {
      generateZip = make_shared<bool>(boost::any_cast<bool>(m["GenerateZip"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ItemIdField") != m.end() && !m["ItemIdField"].empty()) {
      itemIdField = make_shared<string>(boost::any_cast<string>(m["ItemIdField"]));
    }
    if (m.find("ItemTable") != m.end() && !m["ItemTable"].empty()) {
      itemTable = make_shared<string>(boost::any_cast<string>(m["ItemTable"]));
    }
    if (m.find("ItemTablePartitionField") != m.end() && !m["ItemTablePartitionField"].empty()) {
      itemTablePartitionField = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionField"]));
    }
    if (m.find("ItemTablePartitionFieldFormat") != m.end() && !m["ItemTablePartitionFieldFormat"].empty()) {
      itemTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["ItemTablePartitionFieldFormat"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssResourceId") != m.end() && !m["OssResourceId"].empty()) {
      ossResourceId = make_shared<string>(boost::any_cast<string>(m["OssResourceId"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<double>(boost::any_cast<double>(m["SampleRate"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserIdField") != m.end() && !m["UserIdField"].empty()) {
      userIdField = make_shared<string>(boost::any_cast<string>(m["UserIdField"]));
    }
    if (m.find("UserTable") != m.end() && !m["UserTable"].empty()) {
      userTable = make_shared<string>(boost::any_cast<string>(m["UserTable"]));
    }
    if (m.find("UserTablePartitionField") != m.end() && !m["UserTablePartitionField"].empty()) {
      userTablePartitionField = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionField"]));
    }
    if (m.find("UserTablePartitionFieldFormat") != m.end() && !m["UserTablePartitionFieldFormat"].empty()) {
      userTablePartitionFieldFormat = make_shared<string>(boost::any_cast<string>(m["UserTablePartitionFieldFormat"]));
    }
    if (m.find("WorkflowName") != m.end() && !m["WorkflowName"].empty()) {
      workflowName = make_shared<string>(boost::any_cast<string>(m["WorkflowName"]));
    }
  }


  virtual ~UpdateFeatureConsistencyCheckJobConfigRequest() = default;
};
class UpdateFeatureConsistencyCheckJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFeatureConsistencyCheckJobConfigResponseBody() {}

  explicit UpdateFeatureConsistencyCheckJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFeatureConsistencyCheckJobConfigResponseBody() = default;
};
class UpdateFeatureConsistencyCheckJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFeatureConsistencyCheckJobConfigResponseBody> body{};

  UpdateFeatureConsistencyCheckJobConfigResponse() {}

  explicit UpdateFeatureConsistencyCheckJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFeatureConsistencyCheckJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFeatureConsistencyCheckJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFeatureConsistencyCheckJobConfigResponse() = default;
};
class UpdateInstanceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> uri{};

  UpdateInstanceResourceRequest() {}

  explicit UpdateInstanceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~UpdateInstanceResourceRequest() = default;
};
class UpdateInstanceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstanceResourceResponseBody() {}

  explicit UpdateInstanceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceResourceResponseBody() = default;
};
class UpdateInstanceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResourceResponseBody> body{};

  UpdateInstanceResourceResponse() {}

  explicit UpdateInstanceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResourceResponse() = default;
};
class UpdateLaboratoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> bucketCount{};
  shared_ptr<string> bucketType{};
  shared_ptr<string> buckets{};
  shared_ptr<string> debugCrowdId{};
  shared_ptr<string> debugUsers{};
  shared_ptr<string> description{};
  shared_ptr<string> environment{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateLaboratoryRequest() {}

  explicit UpdateLaboratoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketCount) {
      res["BucketCount"] = boost::any(*bucketCount);
    }
    if (bucketType) {
      res["BucketType"] = boost::any(*bucketType);
    }
    if (buckets) {
      res["Buckets"] = boost::any(*buckets);
    }
    if (debugCrowdId) {
      res["DebugCrowdId"] = boost::any(*debugCrowdId);
    }
    if (debugUsers) {
      res["DebugUsers"] = boost::any(*debugUsers);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("BucketCount") != m.end() && !m["BucketCount"].empty()) {
      bucketCount = make_shared<long>(boost::any_cast<long>(m["BucketCount"]));
    }
    if (m.find("BucketType") != m.end() && !m["BucketType"].empty()) {
      bucketType = make_shared<string>(boost::any_cast<string>(m["BucketType"]));
    }
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      buckets = make_shared<string>(boost::any_cast<string>(m["Buckets"]));
    }
    if (m.find("DebugCrowdId") != m.end() && !m["DebugCrowdId"].empty()) {
      debugCrowdId = make_shared<string>(boost::any_cast<string>(m["DebugCrowdId"]));
    }
    if (m.find("DebugUsers") != m.end() && !m["DebugUsers"].empty()) {
      debugUsers = make_shared<string>(boost::any_cast<string>(m["DebugUsers"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateLaboratoryRequest() = default;
};
class UpdateLaboratoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLaboratoryResponseBody() {}

  explicit UpdateLaboratoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLaboratoryResponseBody() = default;
};
class UpdateLaboratoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLaboratoryResponseBody> body{};

  UpdateLaboratoryResponse() {}

  explicit UpdateLaboratoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLaboratoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLaboratoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLaboratoryResponse() = default;
};
class UpdateLayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
        UpdateLayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLayerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLayerResponse() = default;
};
class UpdateParamRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> value{};

  UpdateParamRequest() {}

  explicit UpdateParamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateParamRequest() = default;
};
class UpdateParamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateParamResponseBody() {}

  explicit UpdateParamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateParamResponseBody() = default;
};
class UpdateParamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateParamResponseBody> body{};

  UpdateParamResponse() {}

  explicit UpdateParamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateParamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateParamResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateParamResponse() = default;
};
class UpdateSceneRequestFlows : public Darabonba::Model {
public:
  shared_ptr<string> flowCode{};
  shared_ptr<string> flowName{};

  UpdateSceneRequestFlows() {}

  explicit UpdateSceneRequestFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowCode) {
      res["FlowCode"] = boost::any(*flowCode);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowCode") != m.end() && !m["FlowCode"].empty()) {
      flowCode = make_shared<string>(boost::any_cast<string>(m["FlowCode"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~UpdateSceneRequestFlows() = default;
};
class UpdateSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateSceneRequestFlows>> flows{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  UpdateSceneRequest() {}

  explicit UpdateSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (flows) {
      vector<boost::any> temp1;
      for(auto item1:*flows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Flows"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Flows") != m.end() && !m["Flows"].empty()) {
      if (typeid(vector<boost::any>) == m["Flows"].type()) {
        vector<UpdateSceneRequestFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Flows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSceneRequestFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flows = make_shared<vector<UpdateSceneRequestFlows>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateSceneRequest() = default;
};
class UpdateSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSceneResponseBody() {}

  explicit UpdateSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSceneResponseBody() = default;
};
class UpdateSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSceneResponseBody> body{};

  UpdateSceneResponse() {}

  explicit UpdateSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSceneResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSceneResponse() = default;
};
class UpdateTableMetaRequestFields : public Darabonba::Model {
public:
  shared_ptr<bool> isDimensionField{};
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
    if (isDimensionField) {
      res["IsDimensionField"] = boost::any(*isDimensionField);
    }
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
    if (m.find("IsDimensionField") != m.end() && !m["IsDimensionField"].empty()) {
      isDimensionField = make_shared<bool>(boost::any_cast<bool>(m["IsDimensionField"]));
    }
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
  shared_ptr<string> instanceId{};
  shared_ptr<string> module{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tableName{};

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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
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
  BackflowFeatureConsistencyCheckJobDataResponse backflowFeatureConsistencyCheckJobDataWithOptions(shared_ptr<BackflowFeatureConsistencyCheckJobDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BackflowFeatureConsistencyCheckJobDataResponse backflowFeatureConsistencyCheckJobData(shared_ptr<BackflowFeatureConsistencyCheckJobDataRequest> request);
  CheckInstanceResourcesResponse checkInstanceResourcesWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<CheckInstanceResourcesRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckInstanceResourcesResponse checkInstanceResources(shared_ptr<string> InstanceId, shared_ptr<CheckInstanceResourcesRequest> request);
  CloneExperimentResponse cloneExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                     shared_ptr<CloneExperimentRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneExperimentResponse cloneExperiment(shared_ptr<string> ExperimentId, shared_ptr<CloneExperimentRequest> request);
  CloneExperimentGroupResponse cloneExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                               shared_ptr<CloneExperimentGroupRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneExperimentGroupResponse cloneExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<CloneExperimentGroupRequest> request);
  CloneFeatureConsistencyCheckJobConfigResponse cloneFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<string> SourceFeatureConsistencyCheckJobConfigId,
                                                                                                 shared_ptr<CloneFeatureConsistencyCheckJobConfigRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneFeatureConsistencyCheckJobConfigResponse cloneFeatureConsistencyCheckJobConfig(shared_ptr<string> SourceFeatureConsistencyCheckJobConfigId, shared_ptr<CloneFeatureConsistencyCheckJobConfigRequest> request);
  CloneLaboratoryResponse cloneLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                     shared_ptr<CloneLaboratoryRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneLaboratoryResponse cloneLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<CloneLaboratoryRequest> request);
  CreateABMetricResponse createABMetricWithOptions(shared_ptr<CreateABMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateABMetricResponse createABMetric(shared_ptr<CreateABMetricRequest> request);
  CreateABMetricGroupResponse createABMetricGroupWithOptions(shared_ptr<CreateABMetricGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateABMetricGroupResponse createABMetricGroup(shared_ptr<CreateABMetricGroupRequest> request);
  CreateCalculationJobsResponse createCalculationJobsWithOptions(shared_ptr<CreateCalculationJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCalculationJobsResponse createCalculationJobs(shared_ptr<CreateCalculationJobsRequest> request);
  CreateCrowdResponse createCrowdWithOptions(shared_ptr<CreateCrowdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCrowdResponse createCrowd(shared_ptr<CreateCrowdRequest> request);
  CreateExperimentResponse createExperimentWithOptions(shared_ptr<CreateExperimentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentResponse createExperiment(shared_ptr<CreateExperimentRequest> request);
  CreateExperimentGroupResponse createExperimentGroupWithOptions(shared_ptr<CreateExperimentGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentGroupResponse createExperimentGroup(shared_ptr<CreateExperimentGroupRequest> request);
  CreateFeatureConsistencyCheckJobResponse createFeatureConsistencyCheckJobWithOptions(shared_ptr<CreateFeatureConsistencyCheckJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFeatureConsistencyCheckJobResponse createFeatureConsistencyCheckJob(shared_ptr<CreateFeatureConsistencyCheckJobRequest> request);
  CreateFeatureConsistencyCheckJobConfigResponse createFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<CreateFeatureConsistencyCheckJobConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFeatureConsistencyCheckJobConfigResponse createFeatureConsistencyCheckJobConfig(shared_ptr<CreateFeatureConsistencyCheckJobConfigRequest> request);
  CreateInstanceResourceResponse createInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<CreateInstanceResourceRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResourceResponse createInstanceResource(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceResourceRequest> request);
  CreateLaboratoryResponse createLaboratoryWithOptions(shared_ptr<CreateLaboratoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLaboratoryResponse createLaboratory(shared_ptr<CreateLaboratoryRequest> request);
  CreateLayerResponse createLayerWithOptions(shared_ptr<CreateLayerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLayerResponse createLayer(shared_ptr<CreateLayerRequest> request);
  CreateParamResponse createParamWithOptions(shared_ptr<CreateParamRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateParamResponse createParam(shared_ptr<CreateParamRequest> request);
  CreateSceneResponse createSceneWithOptions(shared_ptr<CreateSceneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSceneResponse createScene(shared_ptr<CreateSceneRequest> request);
  CreateSubCrowdResponse createSubCrowdWithOptions(shared_ptr<string> CrowdId,
                                                   shared_ptr<CreateSubCrowdRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubCrowdResponse createSubCrowd(shared_ptr<string> CrowdId, shared_ptr<CreateSubCrowdRequest> request);
  CreateTableMetaResponse createTableMetaWithOptions(shared_ptr<CreateTableMetaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTableMetaResponse createTableMeta(shared_ptr<CreateTableMetaRequest> request);
  DeleteABMetricResponse deleteABMetricWithOptions(shared_ptr<string> ABMetricId,
                                                   shared_ptr<DeleteABMetricRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteABMetricResponse deleteABMetric(shared_ptr<string> ABMetricId, shared_ptr<DeleteABMetricRequest> request);
  DeleteABMetricGroupResponse deleteABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                             shared_ptr<DeleteABMetricGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteABMetricGroupResponse deleteABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<DeleteABMetricGroupRequest> request);
  DeleteCrowdResponse deleteCrowdWithOptions(shared_ptr<string> CrowdId,
                                             shared_ptr<DeleteCrowdRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCrowdResponse deleteCrowd(shared_ptr<string> CrowdId, shared_ptr<DeleteCrowdRequest> request);
  DeleteExperimentResponse deleteExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                       shared_ptr<DeleteExperimentRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentResponse deleteExperiment(shared_ptr<string> ExperimentId, shared_ptr<DeleteExperimentRequest> request);
  DeleteExperimentGroupResponse deleteExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                 shared_ptr<DeleteExperimentGroupRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentGroupResponse deleteExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<DeleteExperimentGroupRequest> request);
  DeleteInstanceResourceResponse deleteInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<string> ResourceId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResourceResponse deleteInstanceResource(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId);
  DeleteLaboratoryResponse deleteLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                       shared_ptr<DeleteLaboratoryRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLaboratoryResponse deleteLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<DeleteLaboratoryRequest> request);
  DeleteLayerResponse deleteLayerWithOptions(shared_ptr<string> LayerId,
                                             shared_ptr<DeleteLayerRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLayerResponse deleteLayer(shared_ptr<string> LayerId, shared_ptr<DeleteLayerRequest> request);
  DeleteParamResponse deleteParamWithOptions(shared_ptr<string> ParamId,
                                             shared_ptr<DeleteParamRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteParamResponse deleteParam(shared_ptr<string> ParamId, shared_ptr<DeleteParamRequest> request);
  DeleteSceneResponse deleteSceneWithOptions(shared_ptr<string> SceneId,
                                             shared_ptr<DeleteSceneRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSceneResponse deleteScene(shared_ptr<string> SceneId, shared_ptr<DeleteSceneRequest> request);
  DeleteSubCrowdResponse deleteSubCrowdWithOptions(shared_ptr<string> CrowdId,
                                                   shared_ptr<string> SubCrowdId,
                                                   shared_ptr<DeleteSubCrowdRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubCrowdResponse deleteSubCrowd(shared_ptr<string> CrowdId, shared_ptr<string> SubCrowdId, shared_ptr<DeleteSubCrowdRequest> request);
  DeleteTableMetaResponse deleteTableMetaWithOptions(shared_ptr<string> TableMetaId,
                                                     shared_ptr<DeleteTableMetaRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTableMetaResponse deleteTableMeta(shared_ptr<string> TableMetaId, shared_ptr<DeleteTableMetaRequest> request);
  GetABMetricResponse getABMetricWithOptions(shared_ptr<string> ABMetricId,
                                             shared_ptr<GetABMetricRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetABMetricResponse getABMetric(shared_ptr<string> ABMetricId, shared_ptr<GetABMetricRequest> request);
  GetABMetricGroupResponse getABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                       shared_ptr<GetABMetricGroupRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetABMetricGroupResponse getABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<GetABMetricGroupRequest> request);
  GetCalculationJobResponse getCalculationJobWithOptions(shared_ptr<string> CalculationJobId,
                                                         shared_ptr<GetCalculationJobRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCalculationJobResponse getCalculationJob(shared_ptr<string> CalculationJobId, shared_ptr<GetCalculationJobRequest> request);
  GetExperimentResponse getExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                 shared_ptr<GetExperimentRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentResponse getExperiment(shared_ptr<string> ExperimentId, shared_ptr<GetExperimentRequest> request);
  GetExperimentGroupResponse getExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                           shared_ptr<GetExperimentGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentGroupResponse getExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<GetExperimentGroupRequest> request);
  GetFeatureConsistencyCheckJobResponse getFeatureConsistencyCheckJobWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                 shared_ptr<GetFeatureConsistencyCheckJobRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFeatureConsistencyCheckJobResponse getFeatureConsistencyCheckJob(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<GetFeatureConsistencyCheckJobRequest> request);
  GetFeatureConsistencyCheckJobConfigResponse getFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<string> FeatureConsistencyCheckJobConfigId,
                                                                                             shared_ptr<GetFeatureConsistencyCheckJobConfigRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFeatureConsistencyCheckJobConfigResponse getFeatureConsistencyCheckJobConfig(shared_ptr<string> FeatureConsistencyCheckJobConfigId, shared_ptr<GetFeatureConsistencyCheckJobConfigRequest> request);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> InstanceId);
  GetInstanceResourceResponse getInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                             shared_ptr<string> ResourceId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResourceResponse getInstanceResource(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId);
  GetInstanceResourceTableResponse getInstanceResourceTableWithOptions(shared_ptr<string> InstanceId,
                                                                       shared_ptr<string> ResourceId,
                                                                       shared_ptr<string> TableName,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResourceTableResponse getInstanceResourceTable(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId, shared_ptr<string> TableName);
  GetLaboratoryResponse getLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                 shared_ptr<GetLaboratoryRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLaboratoryResponse getLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<GetLaboratoryRequest> request);
  GetLayerResponse getLayerWithOptions(shared_ptr<string> LayerId,
                                       shared_ptr<GetLayerRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLayerResponse getLayer(shared_ptr<string> LayerId, shared_ptr<GetLayerRequest> request);
  GetSceneResponse getSceneWithOptions(shared_ptr<string> SceneId,
                                       shared_ptr<GetSceneRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSceneResponse getScene(shared_ptr<string> SceneId, shared_ptr<GetSceneRequest> request);
  GetSubCrowdResponse getSubCrowdWithOptions(shared_ptr<string> CrowdId,
                                             shared_ptr<string> SubCrowdId,
                                             shared_ptr<GetSubCrowdRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubCrowdResponse getSubCrowd(shared_ptr<string> CrowdId, shared_ptr<string> SubCrowdId, shared_ptr<GetSubCrowdRequest> request);
  GetTableMetaResponse getTableMetaWithOptions(shared_ptr<string> TableMetaId,
                                               shared_ptr<GetTableMetaRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableMetaResponse getTableMeta(shared_ptr<string> TableMetaId, shared_ptr<GetTableMetaRequest> request);
  ListABMetricGroupsResponse listABMetricGroupsWithOptions(shared_ptr<ListABMetricGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListABMetricGroupsResponse listABMetricGroups(shared_ptr<ListABMetricGroupsRequest> request);
  ListABMetricsResponse listABMetricsWithOptions(shared_ptr<ListABMetricsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListABMetricsResponse listABMetrics(shared_ptr<ListABMetricsRequest> request);
  ListCalculationJobsResponse listCalculationJobsWithOptions(shared_ptr<ListCalculationJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCalculationJobsResponse listCalculationJobs(shared_ptr<ListCalculationJobsRequest> request);
  ListCrowdUsersResponse listCrowdUsersWithOptions(shared_ptr<string> CrowdId,
                                                   shared_ptr<ListCrowdUsersRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCrowdUsersResponse listCrowdUsers(shared_ptr<string> CrowdId, shared_ptr<ListCrowdUsersRequest> request);
  ListCrowdsResponse listCrowdsWithOptions(shared_ptr<ListCrowdsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCrowdsResponse listCrowds(shared_ptr<ListCrowdsRequest> request);
  ListExperimentGroupsResponse listExperimentGroupsWithOptions(shared_ptr<ListExperimentGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentGroupsResponse listExperimentGroups(shared_ptr<ListExperimentGroupsRequest> request);
  ListExperimentsResponse listExperimentsWithOptions(shared_ptr<ListExperimentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentsResponse listExperiments(shared_ptr<ListExperimentsRequest> request);
  ListFeatureConsistencyCheckJobConfigsResponse listFeatureConsistencyCheckJobConfigsWithOptions(shared_ptr<ListFeatureConsistencyCheckJobConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureConsistencyCheckJobConfigsResponse listFeatureConsistencyCheckJobConfigs(shared_ptr<ListFeatureConsistencyCheckJobConfigsRequest> request);
  ListFeatureConsistencyCheckJobFeatureReportsResponse listFeatureConsistencyCheckJobFeatureReportsWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                                               shared_ptr<ListFeatureConsistencyCheckJobFeatureReportsRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureConsistencyCheckJobFeatureReportsResponse listFeatureConsistencyCheckJobFeatureReports(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<ListFeatureConsistencyCheckJobFeatureReportsRequest> request);
  ListFeatureConsistencyCheckJobScoreReportsResponse listFeatureConsistencyCheckJobScoreReportsWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                                           shared_ptr<ListFeatureConsistencyCheckJobScoreReportsRequest> tmpReq,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureConsistencyCheckJobScoreReportsResponse listFeatureConsistencyCheckJobScoreReports(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<ListFeatureConsistencyCheckJobScoreReportsRequest> request);
  ListFeatureConsistencyCheckJobsResponse listFeatureConsistencyCheckJobsWithOptions(shared_ptr<ListFeatureConsistencyCheckJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureConsistencyCheckJobsResponse listFeatureConsistencyCheckJobs(shared_ptr<ListFeatureConsistencyCheckJobsRequest> request);
  ListInstanceResourcesResponse listInstanceResourcesWithOptions(shared_ptr<string> InstanceId,
                                                                 shared_ptr<ListInstanceResourcesRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceResourcesResponse listInstanceResources(shared_ptr<string> InstanceId, shared_ptr<ListInstanceResourcesRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListLaboratoriesResponse listLaboratoriesWithOptions(shared_ptr<ListLaboratoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLaboratoriesResponse listLaboratories(shared_ptr<ListLaboratoriesRequest> request);
  ListLayersResponse listLayersWithOptions(shared_ptr<ListLayersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLayersResponse listLayers(shared_ptr<ListLayersRequest> request);
  ListParamsResponse listParamsWithOptions(shared_ptr<ListParamsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParamsResponse listParams(shared_ptr<ListParamsRequest> request);
  ListScenesResponse listScenesWithOptions(shared_ptr<ListScenesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScenesResponse listScenes(shared_ptr<ListScenesRequest> request);
  ListSubCrowdsResponse listSubCrowdsWithOptions(shared_ptr<string> CrowdId,
                                                 shared_ptr<ListSubCrowdsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubCrowdsResponse listSubCrowds(shared_ptr<string> CrowdId, shared_ptr<ListSubCrowdsRequest> request);
  ListTableMetasResponse listTableMetasWithOptions(shared_ptr<ListTableMetasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTableMetasResponse listTableMetas(shared_ptr<ListTableMetasRequest> request);
  OfflineExperimentResponse offlineExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                         shared_ptr<OfflineExperimentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineExperimentResponse offlineExperiment(shared_ptr<string> ExperimentId, shared_ptr<OfflineExperimentRequest> request);
  OfflineExperimentGroupResponse offlineExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                   shared_ptr<OfflineExperimentGroupRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineExperimentGroupResponse offlineExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<OfflineExperimentGroupRequest> request);
  OfflineLaboratoryResponse offlineLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                         shared_ptr<OfflineLaboratoryRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineLaboratoryResponse offlineLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<OfflineLaboratoryRequest> request);
  OnlineExperimentResponse onlineExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                       shared_ptr<OnlineExperimentRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnlineExperimentResponse onlineExperiment(shared_ptr<string> ExperimentId, shared_ptr<OnlineExperimentRequest> request);
  OnlineExperimentGroupResponse onlineExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                 shared_ptr<OnlineExperimentGroupRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnlineExperimentGroupResponse onlineExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<OnlineExperimentGroupRequest> request);
  OnlineLaboratoryResponse onlineLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                       shared_ptr<OnlineLaboratoryRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OnlineLaboratoryResponse onlineLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<OnlineLaboratoryRequest> request);
  PushAllExperimentResponse pushAllExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                         shared_ptr<PushAllExperimentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushAllExperimentResponse pushAllExperiment(shared_ptr<string> ExperimentId, shared_ptr<PushAllExperimentRequest> request);
  ReportABMetricGroupResponse reportABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                             shared_ptr<ReportABMetricGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportABMetricGroupResponse reportABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<ReportABMetricGroupRequest> request);
  SyncFeatureConsistencyCheckJobReplayLogResponse syncFeatureConsistencyCheckJobReplayLogWithOptions(shared_ptr<SyncFeatureConsistencyCheckJobReplayLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncFeatureConsistencyCheckJobReplayLogResponse syncFeatureConsistencyCheckJobReplayLog(shared_ptr<SyncFeatureConsistencyCheckJobReplayLogRequest> request);
  TerminateFeatureConsistencyCheckJobResponse terminateFeatureConsistencyCheckJobWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                             shared_ptr<TerminateFeatureConsistencyCheckJobRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TerminateFeatureConsistencyCheckJobResponse terminateFeatureConsistencyCheckJob(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<TerminateFeatureConsistencyCheckJobRequest> request);
  UpdateABMetricResponse updateABMetricWithOptions(shared_ptr<string> ABMetricId,
                                                   shared_ptr<UpdateABMetricRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateABMetricResponse updateABMetric(shared_ptr<string> ABMetricId, shared_ptr<UpdateABMetricRequest> request);
  UpdateABMetricGroupResponse updateABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                             shared_ptr<UpdateABMetricGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateABMetricGroupResponse updateABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<UpdateABMetricGroupRequest> request);
  UpdateCrowdResponse updateCrowdWithOptions(shared_ptr<string> CrowdId,
                                             shared_ptr<UpdateCrowdRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCrowdResponse updateCrowd(shared_ptr<string> CrowdId, shared_ptr<UpdateCrowdRequest> request);
  UpdateExperimentResponse updateExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                       shared_ptr<UpdateExperimentRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentResponse updateExperiment(shared_ptr<string> ExperimentId, shared_ptr<UpdateExperimentRequest> request);
  UpdateExperimentGroupResponse updateExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                 shared_ptr<UpdateExperimentGroupRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentGroupResponse updateExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<UpdateExperimentGroupRequest> request);
  UpdateFeatureConsistencyCheckJobConfigResponse updateFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<string> FeatureConsistencyCheckJobConfigId,
                                                                                                   shared_ptr<UpdateFeatureConsistencyCheckJobConfigRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFeatureConsistencyCheckJobConfigResponse updateFeatureConsistencyCheckJobConfig(shared_ptr<string> FeatureConsistencyCheckJobConfigId, shared_ptr<UpdateFeatureConsistencyCheckJobConfigRequest> request);
  UpdateInstanceResourceResponse updateInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<string> ResourceId,
                                                                   shared_ptr<UpdateInstanceResourceRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResourceResponse updateInstanceResource(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId, shared_ptr<UpdateInstanceResourceRequest> request);
  UpdateLaboratoryResponse updateLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                       shared_ptr<UpdateLaboratoryRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLaboratoryResponse updateLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<UpdateLaboratoryRequest> request);
  UpdateLayerResponse updateLayerWithOptions(shared_ptr<string> LayerId,
                                             shared_ptr<UpdateLayerRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLayerResponse updateLayer(shared_ptr<string> LayerId, shared_ptr<UpdateLayerRequest> request);
  UpdateParamResponse updateParamWithOptions(shared_ptr<string> ParamId,
                                             shared_ptr<UpdateParamRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateParamResponse updateParam(shared_ptr<string> ParamId, shared_ptr<UpdateParamRequest> request);
  UpdateSceneResponse updateSceneWithOptions(shared_ptr<string> SceneId,
                                             shared_ptr<UpdateSceneRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSceneResponse updateScene(shared_ptr<string> SceneId, shared_ptr<UpdateSceneRequest> request);
  UpdateTableMetaResponse updateTableMetaWithOptions(shared_ptr<string> TableMetaId,
                                                     shared_ptr<UpdateTableMetaRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTableMetaResponse updateTableMeta(shared_ptr<string> TableMetaId, shared_ptr<UpdateTableMetaRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PaiRecService20221213

#endif
