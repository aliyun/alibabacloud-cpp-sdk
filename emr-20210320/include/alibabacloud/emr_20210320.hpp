// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EMR20210320_H_
#define ALIBABACLOUD_EMR20210320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Emr20210320 {
class AckNodeSelectorLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AckNodeSelectorLabels() {}

  explicit AckNodeSelectorLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AckNodeSelectorLabels() = default;
};
class AckNodeSelectorTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AckNodeSelectorTaints() {}

  explicit AckNodeSelectorTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["Effect"] = boost::any(*effect);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Effect") != m.end() && !m["Effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["Effect"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AckNodeSelectorTaints() = default;
};
class AckNodeSelector : public Darabonba::Model {
public:
  shared_ptr<vector<AckNodeSelectorLabels>> labels{};
  shared_ptr<vector<AckNodeSelectorTaints>> taints{};

  AckNodeSelector() {}

  explicit AckNodeSelector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Taints"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<AckNodeSelectorLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AckNodeSelectorLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<AckNodeSelectorLabels>>(expect1);
      }
    }
    if (m.find("Taints") != m.end() && !m["Taints"].empty()) {
      if (typeid(vector<boost::any>) == m["Taints"].type()) {
        vector<AckNodeSelectorTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AckNodeSelectorTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<AckNodeSelectorTaints>>(expect1);
      }
    }
  }


  virtual ~AckNodeSelector() = default;
};
class AckNode : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<AckNodeSelector> nodeSelector{};

  AckNode() {}

  explicit AckNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeSelector) {
      res["NodeSelector"] = nodeSelector ? boost::any(nodeSelector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeSelector") != m.end() && !m["NodeSelector"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeSelector"].type()) {
        AckNodeSelector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeSelector"]));
        nodeSelector = make_shared<AckNodeSelector>(model1);
      }
    }
  }


  virtual ~AckNode() = default;
};
class AckNodePool : public Darabonba::Model {
public:
  shared_ptr<string> nodePoolId{};
  shared_ptr<AckNodeSelector> nodeSelector{};

  AckNodePool() {}

  explicit AckNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    if (nodeSelector) {
      res["NodeSelector"] = nodeSelector ? boost::any(nodeSelector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
    if (m.find("NodeSelector") != m.end() && !m["NodeSelector"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeSelector"].type()) {
        AckNodeSelector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeSelector"]));
        nodeSelector = make_shared<AckNodeSelector>(model1);
      }
    }
  }


  virtual ~AckNodePool() = default;
};
class Application : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};

  Application() {}

  explicit Application(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
  }


  virtual ~Application() = default;
};
class ApplicationConfig : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};
  shared_ptr<string> configScope{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};

  ApplicationConfig() {}

  explicit ApplicationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (configFileName) {
      res["ConfigFileName"] = boost::any(*configFileName);
    }
    if (configItemKey) {
      res["ConfigItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["ConfigItemValue"] = boost::any(*configItemValue);
    }
    if (configScope) {
      res["ConfigScope"] = boost::any(*configScope);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ConfigFileName") != m.end() && !m["ConfigFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["ConfigFileName"]));
    }
    if (m.find("ConfigItemKey") != m.end() && !m["ConfigItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["ConfigItemKey"]));
    }
    if (m.find("ConfigItemValue") != m.end() && !m["ConfigItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["ConfigItemValue"]));
    }
    if (m.find("ConfigScope") != m.end() && !m["ConfigScope"].empty()) {
      configScope = make_shared<string>(boost::any_cast<string>(m["ConfigScope"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
  }


  virtual ~ApplicationConfig() = default;
};
class ApplicationConfigParam : public Darabonba::Model {
public:
  shared_ptr<string> configAction{};
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemDescription{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};
  shared_ptr<string> configScope{};
  shared_ptr<string> effectiveActions{};
  shared_ptr<string> effectiveType{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeId{};

  ApplicationConfigParam() {}

  explicit ApplicationConfigParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configAction) {
      res["ConfigAction"] = boost::any(*configAction);
    }
    if (configFileName) {
      res["ConfigFileName"] = boost::any(*configFileName);
    }
    if (configItemDescription) {
      res["ConfigItemDescription"] = boost::any(*configItemDescription);
    }
    if (configItemKey) {
      res["ConfigItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["ConfigItemValue"] = boost::any(*configItemValue);
    }
    if (configScope) {
      res["ConfigScope"] = boost::any(*configScope);
    }
    if (effectiveActions) {
      res["EffectiveActions"] = boost::any(*effectiveActions);
    }
    if (effectiveType) {
      res["EffectiveType"] = boost::any(*effectiveType);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigAction") != m.end() && !m["ConfigAction"].empty()) {
      configAction = make_shared<string>(boost::any_cast<string>(m["ConfigAction"]));
    }
    if (m.find("ConfigFileName") != m.end() && !m["ConfigFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["ConfigFileName"]));
    }
    if (m.find("ConfigItemDescription") != m.end() && !m["ConfigItemDescription"].empty()) {
      configItemDescription = make_shared<string>(boost::any_cast<string>(m["ConfigItemDescription"]));
    }
    if (m.find("ConfigItemKey") != m.end() && !m["ConfigItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["ConfigItemKey"]));
    }
    if (m.find("ConfigItemValue") != m.end() && !m["ConfigItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["ConfigItemValue"]));
    }
    if (m.find("ConfigScope") != m.end() && !m["ConfigScope"].empty()) {
      configScope = make_shared<string>(boost::any_cast<string>(m["ConfigScope"]));
    }
    if (m.find("EffectiveActions") != m.end() && !m["EffectiveActions"].empty()) {
      effectiveActions = make_shared<string>(boost::any_cast<string>(m["EffectiveActions"]));
    }
    if (m.find("EffectiveType") != m.end() && !m["EffectiveType"].empty()) {
      effectiveType = make_shared<string>(boost::any_cast<string>(m["EffectiveType"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ApplicationConfigParam() = default;
};
class AutoRenewInstance : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewDuration{};
  shared_ptr<string> autoRenewDurationUnit{};
  shared_ptr<string> instanceId{};

  AutoRenewInstance() {}

  explicit AutoRenewInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewDurationUnit) {
      res["AutoRenewDurationUnit"] = boost::any(*autoRenewDurationUnit);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<long>(boost::any_cast<long>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewDurationUnit") != m.end() && !m["AutoRenewDurationUnit"].empty()) {
      autoRenewDurationUnit = make_shared<string>(boost::any_cast<string>(m["AutoRenewDurationUnit"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~AutoRenewInstance() = default;
};
class AutoRenewInstanceParam : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> autoRenewDuration{};
  shared_ptr<string> autoRenewDurationUnit{};
  shared_ptr<string> instanceId{};

  AutoRenewInstanceParam() {}

  explicit AutoRenewInstanceParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewDurationUnit) {
      res["AutoRenewDurationUnit"] = boost::any(*autoRenewDurationUnit);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<string>(boost::any_cast<string>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewDurationUnit") != m.end() && !m["AutoRenewDurationUnit"].empty()) {
      autoRenewDurationUnit = make_shared<string>(boost::any_cast<string>(m["AutoRenewDurationUnit"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~AutoRenewInstanceParam() = default;
};
class ByLoadScalingRule : public Darabonba::Model {
public:
  shared_ptr<string> comparisonOperator{};
  shared_ptr<long> coolDownInterval{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<string> metricName{};
  shared_ptr<string> statistics{};
  shared_ptr<double> threshold{};
  shared_ptr<long> timeWindow{};

  ByLoadScalingRule() {}

  explicit ByLoadScalingRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (coolDownInterval) {
      res["CoolDownInterval"] = boost::any(*coolDownInterval);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (timeWindow) {
      res["TimeWindow"] = boost::any(*timeWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("CoolDownInterval") != m.end() && !m["CoolDownInterval"].empty()) {
      coolDownInterval = make_shared<long>(boost::any_cast<long>(m["CoolDownInterval"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("TimeWindow") != m.end() && !m["TimeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["TimeWindow"]));
    }
  }


  virtual ~ByLoadScalingRule() = default;
};
class ByLoadScalingRuleSpec : public Darabonba::Model {
public:
  shared_ptr<string> comparisonOperator{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<string> metricName{};
  shared_ptr<string> statistics{};
  shared_ptr<double> threshold{};
  shared_ptr<long> timeWindow{};

  ByLoadScalingRuleSpec() {}

  explicit ByLoadScalingRuleSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (timeWindow) {
      res["TimeWindow"] = boost::any(*timeWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("TimeWindow") != m.end() && !m["TimeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["TimeWindow"]));
    }
  }


  virtual ~ByLoadScalingRuleSpec() = default;
};
class ByTimeScalingRule : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<long> launchTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};

  ByTimeScalingRule() {}

  explicit ByTimeScalingRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<long>(boost::any_cast<long>(m["LaunchTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
  }


  virtual ~ByTimeScalingRule() = default;
};
class ByTimeScalingRuleSpec : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> launchTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};

  ByTimeScalingRuleSpec() {}

  explicit ByTimeScalingRuleSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<long>(boost::any_cast<long>(m["LaunchTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
  }


  virtual ~ByTimeScalingRuleSpec() = default;
};
class ClickhouseConf : public Darabonba::Model {
public:
  shared_ptr<long> initialReplica{};
  shared_ptr<long> initialShard{};
  shared_ptr<long> newNodeCount{};
  shared_ptr<string> resizeType{};

  ClickhouseConf() {}

  explicit ClickhouseConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initialReplica) {
      res["InitialReplica"] = boost::any(*initialReplica);
    }
    if (initialShard) {
      res["InitialShard"] = boost::any(*initialShard);
    }
    if (newNodeCount) {
      res["NewNodeCount"] = boost::any(*newNodeCount);
    }
    if (resizeType) {
      res["ResizeType"] = boost::any(*resizeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitialReplica") != m.end() && !m["InitialReplica"].empty()) {
      initialReplica = make_shared<long>(boost::any_cast<long>(m["InitialReplica"]));
    }
    if (m.find("InitialShard") != m.end() && !m["InitialShard"].empty()) {
      initialShard = make_shared<long>(boost::any_cast<long>(m["InitialShard"]));
    }
    if (m.find("NewNodeCount") != m.end() && !m["NewNodeCount"].empty()) {
      newNodeCount = make_shared<long>(boost::any_cast<long>(m["NewNodeCount"]));
    }
    if (m.find("ResizeType") != m.end() && !m["ResizeType"].empty()) {
      resizeType = make_shared<string>(boost::any_cast<string>(m["ResizeType"]));
    }
  }


  virtual ~ClickhouseConf() = default;
};
class NodeAttributes : public Darabonba::Model {
public:
  shared_ptr<string> keyPairName{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  NodeAttributes() {}

  explicit NodeAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~NodeAttributes() = default;
};
class ClusterStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  ClusterStateChangeReason() {}

  explicit ClusterStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ClusterStateChangeReason() = default;
};
class SubscriptionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewDuration{};
  shared_ptr<string> autoRenewDurationUnit{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};

  SubscriptionConfig() {}

  explicit SubscriptionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewDurationUnit) {
      res["AutoRenewDurationUnit"] = boost::any(*autoRenewDurationUnit);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<long>(boost::any_cast<long>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewDurationUnit") != m.end() && !m["AutoRenewDurationUnit"].empty()) {
      autoRenewDurationUnit = make_shared<string>(boost::any_cast<string>(m["AutoRenewDurationUnit"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
  }


  virtual ~SubscriptionConfig() = default;
};
class Tag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Tag() {}

  explicit Tag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Tag() = default;
};
class Cluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterState{};
  shared_ptr<string> clusterType{};
  shared_ptr<long> createTime{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> emrDefaultRole{};
  shared_ptr<long> endTime{};
  shared_ptr<long> expireTime{};
  shared_ptr<NodeAttributes> nodeAttributes{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> readyTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityMode{};
  shared_ptr<ClusterStateChangeReason> stateChangeReason{};
  shared_ptr<SubscriptionConfig> subscriptionConfig{};
  shared_ptr<vector<Tag>> tags{};

  Cluster() {}

  explicit Cluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clusterState) {
      res["ClusterState"] = boost::any(*clusterState);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (emrDefaultRole) {
      res["EmrDefaultRole"] = boost::any(*emrDefaultRole);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (nodeAttributes) {
      res["NodeAttributes"] = nodeAttributes ? boost::any(nodeAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (readyTime) {
      res["ReadyTime"] = boost::any(*readyTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (releaseVersion) {
      res["ReleaseVersion"] = boost::any(*releaseVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityMode) {
      res["SecurityMode"] = boost::any(*securityMode);
    }
    if (stateChangeReason) {
      res["StateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subscriptionConfig) {
      res["SubscriptionConfig"] = subscriptionConfig ? boost::any(subscriptionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ClusterState") != m.end() && !m["ClusterState"].empty()) {
      clusterState = make_shared<string>(boost::any_cast<string>(m["ClusterState"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("EmrDefaultRole") != m.end() && !m["EmrDefaultRole"].empty()) {
      emrDefaultRole = make_shared<string>(boost::any_cast<string>(m["EmrDefaultRole"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("NodeAttributes") != m.end() && !m["NodeAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeAttributes"].type()) {
        NodeAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeAttributes"]));
        nodeAttributes = make_shared<NodeAttributes>(model1);
      }
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("ReadyTime") != m.end() && !m["ReadyTime"].empty()) {
      readyTime = make_shared<long>(boost::any_cast<long>(m["ReadyTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReleaseVersion") != m.end() && !m["ReleaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["ReleaseVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityMode") != m.end() && !m["SecurityMode"].empty()) {
      securityMode = make_shared<string>(boost::any_cast<string>(m["SecurityMode"]));
    }
    if (m.find("StateChangeReason") != m.end() && !m["StateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["StateChangeReason"].type()) {
        ClusterStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StateChangeReason"]));
        stateChangeReason = make_shared<ClusterStateChangeReason>(model1);
      }
    }
    if (m.find("SubscriptionConfig") != m.end() && !m["SubscriptionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionConfig"].type()) {
        SubscriptionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionConfig"]));
        subscriptionConfig = make_shared<SubscriptionConfig>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~Cluster() = default;
};
class NodeSelector : public Darabonba::Model {
public:
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<vector<string>> nodeGroupTypes{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<string> nodeSelectType{};

  NodeSelector() {}

  explicit NodeSelector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeGroupTypes) {
      res["NodeGroupTypes"] = boost::any(*nodeGroupTypes);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (nodeSelectType) {
      res["NodeSelectType"] = boost::any(*nodeSelectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeGroupTypes") != m.end() && !m["NodeGroupTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeSelectType") != m.end() && !m["NodeSelectType"].empty()) {
      nodeSelectType = make_shared<string>(boost::any_cast<string>(m["NodeSelectType"]));
    }
  }


  virtual ~NodeSelector() = default;
};
class ClusterScript : public Darabonba::Model {
public:
  shared_ptr<string> executionFailStrategy{};
  shared_ptr<string> executionMoment{};
  shared_ptr<NodeSelector> nodeSelect{};
  shared_ptr<long> priority{};
  shared_ptr<string> scriptArgs{};
  shared_ptr<string> scriptName{};
  shared_ptr<string> scriptPath{};

  ClusterScript() {}

  explicit ClusterScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionFailStrategy) {
      res["ExecutionFailStrategy"] = boost::any(*executionFailStrategy);
    }
    if (executionMoment) {
      res["ExecutionMoment"] = boost::any(*executionMoment);
    }
    if (nodeSelect) {
      res["NodeSelect"] = nodeSelect ? boost::any(nodeSelect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (scriptArgs) {
      res["ScriptArgs"] = boost::any(*scriptArgs);
    }
    if (scriptName) {
      res["ScriptName"] = boost::any(*scriptName);
    }
    if (scriptPath) {
      res["ScriptPath"] = boost::any(*scriptPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionFailStrategy") != m.end() && !m["ExecutionFailStrategy"].empty()) {
      executionFailStrategy = make_shared<string>(boost::any_cast<string>(m["ExecutionFailStrategy"]));
    }
    if (m.find("ExecutionMoment") != m.end() && !m["ExecutionMoment"].empty()) {
      executionMoment = make_shared<string>(boost::any_cast<string>(m["ExecutionMoment"]));
    }
    if (m.find("NodeSelect") != m.end() && !m["NodeSelect"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeSelect"].type()) {
        NodeSelector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeSelect"]));
        nodeSelect = make_shared<NodeSelector>(model1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ScriptArgs") != m.end() && !m["ScriptArgs"].empty()) {
      scriptArgs = make_shared<string>(boost::any_cast<string>(m["ScriptArgs"]));
    }
    if (m.find("ScriptName") != m.end() && !m["ScriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["ScriptName"]));
    }
    if (m.find("ScriptPath") != m.end() && !m["ScriptPath"].empty()) {
      scriptPath = make_shared<string>(boost::any_cast<string>(m["ScriptPath"]));
    }
  }


  virtual ~ClusterScript() = default;
};
class ClusterSummary : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterState{};
  shared_ptr<string> clusterType{};
  shared_ptr<long> createTime{};
  shared_ptr<string> emrDefaultRole{};
  shared_ptr<long> endTime{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> readyTime{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<ClusterStateChangeReason> stateChangeReason{};
  shared_ptr<vector<Tag>> tags{};

  ClusterSummary() {}

  explicit ClusterSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clusterState) {
      res["ClusterState"] = boost::any(*clusterState);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (emrDefaultRole) {
      res["EmrDefaultRole"] = boost::any(*emrDefaultRole);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (readyTime) {
      res["ReadyTime"] = boost::any(*readyTime);
    }
    if (releaseVersion) {
      res["ReleaseVersion"] = boost::any(*releaseVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stateChangeReason) {
      res["StateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ClusterState") != m.end() && !m["ClusterState"].empty()) {
      clusterState = make_shared<string>(boost::any_cast<string>(m["ClusterState"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EmrDefaultRole") != m.end() && !m["EmrDefaultRole"].empty()) {
      emrDefaultRole = make_shared<string>(boost::any_cast<string>(m["EmrDefaultRole"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("ReadyTime") != m.end() && !m["ReadyTime"].empty()) {
      readyTime = make_shared<long>(boost::any_cast<long>(m["ReadyTime"]));
    }
    if (m.find("ReleaseVersion") != m.end() && !m["ReleaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["ReleaseVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StateChangeReason") != m.end() && !m["StateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["StateChangeReason"].type()) {
        ClusterStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StateChangeReason"]));
        stateChangeReason = make_shared<ClusterStateChangeReason>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~ClusterSummary() = default;
};
class ComponentInstanceSelectorComponentInstances : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> componentName{};
  shared_ptr<string> nodeId{};

  ComponentInstanceSelectorComponentInstances() {}

  explicit ComponentInstanceSelectorComponentInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ComponentInstanceSelectorComponentInstances() = default;
};
class ComponentInstanceSelectorComponents : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> componentName{};

  ComponentInstanceSelectorComponents() {}

  explicit ComponentInstanceSelectorComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
  }


  virtual ~ComponentInstanceSelectorComponents() = default;
};
class ComponentInstanceSelector : public Darabonba::Model {
public:
  shared_ptr<string> actionScope{};
  shared_ptr<vector<string>> applicationNames{};
  shared_ptr<vector<ComponentInstanceSelectorComponentInstances>> componentInstances{};
  shared_ptr<vector<ComponentInstanceSelectorComponents>> components{};
  shared_ptr<vector<string>> nodeGroupIds{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<string> runActionScope{};

  ComponentInstanceSelector() {}

  explicit ComponentInstanceSelector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionScope) {
      res["ActionScope"] = boost::any(*actionScope);
    }
    if (applicationNames) {
      res["ApplicationNames"] = boost::any(*applicationNames);
    }
    if (componentInstances) {
      vector<boost::any> temp1;
      for(auto item1:*componentInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentInstances"] = boost::any(temp1);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (nodeGroupIds) {
      res["NodeGroupIds"] = boost::any(*nodeGroupIds);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    if (runActionScope) {
      res["RunActionScope"] = boost::any(*runActionScope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionScope") != m.end() && !m["ActionScope"].empty()) {
      actionScope = make_shared<string>(boost::any_cast<string>(m["ActionScope"]));
    }
    if (m.find("ApplicationNames") != m.end() && !m["ApplicationNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ComponentInstances") != m.end() && !m["ComponentInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentInstances"].type()) {
        vector<ComponentInstanceSelectorComponentInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ComponentInstanceSelectorComponentInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentInstances = make_shared<vector<ComponentInstanceSelectorComponentInstances>>(expect1);
      }
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<ComponentInstanceSelectorComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ComponentInstanceSelectorComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<ComponentInstanceSelectorComponents>>(expect1);
      }
    }
    if (m.find("NodeGroupIds") != m.end() && !m["NodeGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RunActionScope") != m.end() && !m["RunActionScope"].empty()) {
      runActionScope = make_shared<string>(boost::any_cast<string>(m["RunActionScope"]));
    }
  }


  virtual ~ComponentInstanceSelector() = default;
};
class ComponentLayoutNodeSelector : public Darabonba::Model {
public:
  shared_ptr<long> nodeEndIndex{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> nodeGroupIndex{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<vector<string>> nodeGroupTypes{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<string> nodeSelectType{};
  shared_ptr<long> nodeStartIndex{};

  ComponentLayoutNodeSelector() {}

  explicit ComponentLayoutNodeSelector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeEndIndex) {
      res["NodeEndIndex"] = boost::any(*nodeEndIndex);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupIndex) {
      res["NodeGroupIndex"] = boost::any(*nodeGroupIndex);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeGroupTypes) {
      res["NodeGroupTypes"] = boost::any(*nodeGroupTypes);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (nodeSelectType) {
      res["NodeSelectType"] = boost::any(*nodeSelectType);
    }
    if (nodeStartIndex) {
      res["NodeStartIndex"] = boost::any(*nodeStartIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeEndIndex") != m.end() && !m["NodeEndIndex"].empty()) {
      nodeEndIndex = make_shared<long>(boost::any_cast<long>(m["NodeEndIndex"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupIndex") != m.end() && !m["NodeGroupIndex"].empty()) {
      nodeGroupIndex = make_shared<long>(boost::any_cast<long>(m["NodeGroupIndex"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeGroupTypes") != m.end() && !m["NodeGroupTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeSelectType") != m.end() && !m["NodeSelectType"].empty()) {
      nodeSelectType = make_shared<string>(boost::any_cast<string>(m["NodeSelectType"]));
    }
    if (m.find("NodeStartIndex") != m.end() && !m["NodeStartIndex"].empty()) {
      nodeStartIndex = make_shared<long>(boost::any_cast<long>(m["NodeStartIndex"]));
    }
  }


  virtual ~ComponentLayoutNodeSelector() = default;
};
class ComponentLayout : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> componentName{};
  shared_ptr<ComponentLayoutNodeSelector> nodeSelector{};

  ComponentLayout() {}

  explicit ComponentLayout(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (nodeSelector) {
      res["NodeSelector"] = nodeSelector ? boost::any(nodeSelector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("NodeSelector") != m.end() && !m["NodeSelector"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeSelector"].type()) {
        ComponentLayoutNodeSelector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeSelector"]));
        nodeSelector = make_shared<ComponentLayoutNodeSelector>(model1);
      }
    }
  }


  virtual ~ComponentLayout() = default;
};
class ConvertNodeGroup : public Darabonba::Model {
public:
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentType{};

  ConvertNodeGroup() {}

  explicit ConvertNodeGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
  }


  virtual ~ConvertNodeGroup() = default;
};
class ConvertNodeGroupParam : public Darabonba::Model {
public:
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentType{};

  ConvertNodeGroupParam() {}

  explicit ConvertNodeGroupParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
  }


  virtual ~ConvertNodeGroupParam() = default;
};
class CostOptimizedConfig : public Darabonba::Model {
public:
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<long> spotInstancePools{};

  CostOptimizedConfig() {}

  explicit CostOptimizedConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onDemandBaseCapacity) {
      res["OnDemandBaseCapacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["OnDemandPercentageAboveBaseCapacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstancePools) {
      res["SpotInstancePools"] = boost::any(*spotInstancePools);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnDemandBaseCapacity") != m.end() && !m["OnDemandBaseCapacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandBaseCapacity"]));
    }
    if (m.find("OnDemandPercentageAboveBaseCapacity") != m.end() && !m["OnDemandPercentageAboveBaseCapacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandPercentageAboveBaseCapacity"]));
    }
    if (m.find("SpotInstancePools") != m.end() && !m["SpotInstancePools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["SpotInstancePools"]));
    }
  }


  virtual ~CostOptimizedConfig() = default;
};
class DiskInfo : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> count{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  DiskInfo() {}

  explicit DiskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DiskInfo() = default;
};
class SystemDiskParam : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  SystemDiskParam() {}

  explicit SystemDiskParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~SystemDiskParam() = default;
};
class CreateNodeGroupParam : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewDuration{};
  shared_ptr<string> autoRenewDurationUnit{};
  shared_ptr<vector<DiskInfo>> dataDisks{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<string> nodeKeyPairName{};
  shared_ptr<string> nodeRamRole{};
  shared_ptr<string> nodeRootPassword{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<SystemDiskParam> systemDisk{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<bool> withPublicIp{};
  shared_ptr<string> zoneId{};

  CreateNodeGroupParam() {}

  explicit CreateNodeGroupParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewDurationUnit) {
      res["AutoRenewDurationUnit"] = boost::any(*autoRenewDurationUnit);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (nodeKeyPairName) {
      res["NodeKeyPairName"] = boost::any(*nodeKeyPairName);
    }
    if (nodeRamRole) {
      res["NodeRamRole"] = boost::any(*nodeRamRole);
    }
    if (nodeRootPassword) {
      res["NodeRootPassword"] = boost::any(*nodeRootPassword);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (withPublicIp) {
      res["WithPublicIp"] = boost::any(*withPublicIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<long>(boost::any_cast<long>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewDurationUnit") != m.end() && !m["AutoRenewDurationUnit"].empty()) {
      autoRenewDurationUnit = make_shared<string>(boost::any_cast<string>(m["AutoRenewDurationUnit"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<DiskInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DiskInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DiskInfo>>(expect1);
      }
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("NodeKeyPairName") != m.end() && !m["NodeKeyPairName"].empty()) {
      nodeKeyPairName = make_shared<string>(boost::any_cast<string>(m["NodeKeyPairName"]));
    }
    if (m.find("NodeRamRole") != m.end() && !m["NodeRamRole"].empty()) {
      nodeRamRole = make_shared<string>(boost::any_cast<string>(m["NodeRamRole"]));
    }
    if (m.find("NodeRootPassword") != m.end() && !m["NodeRootPassword"].empty()) {
      nodeRootPassword = make_shared<string>(boost::any_cast<string>(m["NodeRootPassword"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        SystemDiskParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<SystemDiskParam>(model1);
      }
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WithPublicIp") != m.end() && !m["WithPublicIp"].empty()) {
      withPublicIp = make_shared<bool>(boost::any_cast<bool>(m["WithPublicIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateNodeGroupParam() = default;
};
class DataDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> count{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  DataDisk() {}

  explicit DataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DataDisk() = default;
};
class DecreaseNodeGroupParam : public Darabonba::Model {
public:
  shared_ptr<string> nodeGroupId{};
  shared_ptr<vector<string>> releaseInstanceIds{};

  DecreaseNodeGroupParam() {}

  explicit DecreaseNodeGroupParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (releaseInstanceIds) {
      res["ReleaseInstanceIds"] = boost::any(*releaseInstanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("ReleaseInstanceIds") != m.end() && !m["ReleaseInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReleaseInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReleaseInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      releaseInstanceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DecreaseNodeGroupParam() = default;
};
class DeploymentLayout : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> componentName{};
  shared_ptr<NodeSelector> nodeSelector{};

  DeploymentLayout() {}

  explicit DeploymentLayout(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (nodeSelector) {
      res["NodeSelector"] = nodeSelector ? boost::any(nodeSelector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("NodeSelector") != m.end() && !m["NodeSelector"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeSelector"].type()) {
        NodeSelector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeSelector"]));
        nodeSelector = make_shared<NodeSelector>(model1);
      }
    }
  }


  virtual ~DeploymentLayout() = default;
};
class Disk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> count{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  Disk() {}

  explicit Disk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~Disk() = default;
};
class DiskSize : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> size{};

  DiskSize() {}

  explicit DiskSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DiskSize() = default;
};
class FailedReason : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> service{};

  FailedReason() {}

  explicit FailedReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~FailedReason() = default;
};
class HealthSummary : public Darabonba::Model {
public:
  shared_ptr<long> badCount{};
  shared_ptr<long> goodCount{};
  shared_ptr<long> noneCount{};
  shared_ptr<long> stoppedCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> unknownCount{};
  shared_ptr<long> warningCount{};

  HealthSummary() {}

  explicit HealthSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (badCount) {
      res["BadCount"] = boost::any(*badCount);
    }
    if (goodCount) {
      res["GoodCount"] = boost::any(*goodCount);
    }
    if (noneCount) {
      res["NoneCount"] = boost::any(*noneCount);
    }
    if (stoppedCount) {
      res["StoppedCount"] = boost::any(*stoppedCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (unknownCount) {
      res["UnknownCount"] = boost::any(*unknownCount);
    }
    if (warningCount) {
      res["WarningCount"] = boost::any(*warningCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BadCount") != m.end() && !m["BadCount"].empty()) {
      badCount = make_shared<long>(boost::any_cast<long>(m["BadCount"]));
    }
    if (m.find("GoodCount") != m.end() && !m["GoodCount"].empty()) {
      goodCount = make_shared<long>(boost::any_cast<long>(m["GoodCount"]));
    }
    if (m.find("NoneCount") != m.end() && !m["NoneCount"].empty()) {
      noneCount = make_shared<long>(boost::any_cast<long>(m["NoneCount"]));
    }
    if (m.find("StoppedCount") != m.end() && !m["StoppedCount"].empty()) {
      stoppedCount = make_shared<long>(boost::any_cast<long>(m["StoppedCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UnknownCount") != m.end() && !m["UnknownCount"].empty()) {
      unknownCount = make_shared<long>(boost::any_cast<long>(m["UnknownCount"]));
    }
    if (m.find("WarningCount") != m.end() && !m["WarningCount"].empty()) {
      warningCount = make_shared<long>(boost::any_cast<long>(m["WarningCount"]));
    }
  }


  virtual ~HealthSummary() = default;
};
class IncreaseNodeGroup : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> vSwitchId{};

  IncreaseNodeGroup() {}

  explicit IncreaseNodeGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~IncreaseNodeGroup() = default;
};
class IncreaseNodeGroupParam : public Darabonba::Model {
public:
  shared_ptr<long> nodeCount{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> vSwitchId{};

  IncreaseNodeGroupParam() {}

  explicit IncreaseNodeGroupParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~IncreaseNodeGroupParam() = default;
};
class KeyValue : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  KeyValue() {}

  explicit KeyValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~KeyValue() = default;
};
class MetaStoreConf : public Darabonba::Model {
public:
  shared_ptr<string> dbPassword{};
  shared_ptr<string> dbUrl{};
  shared_ptr<string> dbUserName{};

  MetaStoreConf() {}

  explicit MetaStoreConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbPassword) {
      res["DbPassword"] = boost::any(*dbPassword);
    }
    if (dbUrl) {
      res["DbUrl"] = boost::any(*dbUrl);
    }
    if (dbUserName) {
      res["DbUserName"] = boost::any(*dbUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbPassword") != m.end() && !m["DbPassword"].empty()) {
      dbPassword = make_shared<string>(boost::any_cast<string>(m["DbPassword"]));
    }
    if (m.find("DbUrl") != m.end() && !m["DbUrl"].empty()) {
      dbUrl = make_shared<string>(boost::any_cast<string>(m["DbUrl"]));
    }
    if (m.find("DbUserName") != m.end() && !m["DbUserName"].empty()) {
      dbUserName = make_shared<string>(boost::any_cast<string>(m["DbUserName"]));
    }
  }


  virtual ~MetaStoreConf() = default;
};
class MetricsTrigger : public Darabonba::Model {
public:
  shared_ptr<string> comparisonOperator{};
  shared_ptr<long> coolDownInterval{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<string> metricName{};
  shared_ptr<string> statistics{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<double> threshold{};
  shared_ptr<long> timeWindow{};

  MetricsTrigger() {}

  explicit MetricsTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (coolDownInterval) {
      res["CoolDownInterval"] = boost::any(*coolDownInterval);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (timeWindow) {
      res["TimeWindow"] = boost::any(*timeWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("CoolDownInterval") != m.end() && !m["CoolDownInterval"].empty()) {
      coolDownInterval = make_shared<long>(boost::any_cast<long>(m["CoolDownInterval"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("TimeWindow") != m.end() && !m["TimeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["TimeWindow"]));
    }
  }


  virtual ~MetricsTrigger() = default;
};
class Node : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewDuration{};
  shared_ptr<string> autoRenewDurationUnit{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> maintenanceStatus{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeState{};
  shared_ptr<string> privateIp{};
  shared_ptr<string> publicIp{};
  shared_ptr<string> zoneId{};

  Node() {}

  explicit Node(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewDurationUnit) {
      res["AutoRenewDurationUnit"] = boost::any(*autoRenewDurationUnit);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (maintenanceStatus) {
      res["MaintenanceStatus"] = boost::any(*maintenanceStatus);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeState) {
      res["NodeState"] = boost::any(*nodeState);
    }
    if (privateIp) {
      res["PrivateIp"] = boost::any(*privateIp);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<long>(boost::any_cast<long>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewDurationUnit") != m.end() && !m["AutoRenewDurationUnit"].empty()) {
      autoRenewDurationUnit = make_shared<string>(boost::any_cast<string>(m["AutoRenewDurationUnit"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MaintenanceStatus") != m.end() && !m["MaintenanceStatus"].empty()) {
      maintenanceStatus = make_shared<string>(boost::any_cast<string>(m["MaintenanceStatus"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeState") != m.end() && !m["NodeState"].empty()) {
      nodeState = make_shared<string>(boost::any_cast<string>(m["NodeState"]));
    }
    if (m.find("PrivateIp") != m.end() && !m["PrivateIp"].empty()) {
      privateIp = make_shared<string>(boost::any_cast<string>(m["PrivateIp"]));
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~Node() = default;
};
class NodeCountConstraint : public Darabonba::Model {
public:
  shared_ptr<long> max{};
  shared_ptr<long> min{};
  shared_ptr<string> type{};
  shared_ptr<vector<long>> values{};

  NodeCountConstraint() {}

  explicit NodeCountConstraint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (values) {
      res["Values"] = boost::any(*values);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      values = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~NodeCountConstraint() = default;
};
class SpotBidPrice : public Darabonba::Model {
public:
  shared_ptr<double> bidPrice{};
  shared_ptr<string> instanceType{};

  SpotBidPrice() {}

  explicit SpotBidPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bidPrice) {
      res["BidPrice"] = boost::any(*bidPrice);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BidPrice") != m.end() && !m["BidPrice"].empty()) {
      bidPrice = make_shared<double>(boost::any_cast<double>(m["BidPrice"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~SpotBidPrice() = default;
};
class NodeGroupStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  NodeGroupStateChangeReason() {}

  explicit NodeGroupStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~NodeGroupStateChangeReason() = default;
};
class SystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> count{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  SystemDisk() {}

  explicit SystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~SystemDisk() = default;
};
class NodeGroup : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalSecurityGroupIds{};
  shared_ptr<CostOptimizedConfig> costOptimizedConfig{};
  shared_ptr<vector<DataDisk>> dataDisks{};
  shared_ptr<string> deploymentSetStrategy{};
  shared_ptr<bool> gracefulShutdown{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeGroupState{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<string> nodeResizeStrategy{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> runningNodeCount{};
  shared_ptr<vector<SpotBidPrice>> spotBidPrices{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<NodeGroupStateChangeReason> stateChangeReason{};
  shared_ptr<SystemDisk> systemDisk{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<bool> withPublicIp{};
  shared_ptr<string> zoneId{};

  NodeGroup() {}

  explicit NodeGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalSecurityGroupIds) {
      res["AdditionalSecurityGroupIds"] = boost::any(*additionalSecurityGroupIds);
    }
    if (costOptimizedConfig) {
      res["CostOptimizedConfig"] = costOptimizedConfig ? boost::any(costOptimizedConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (deploymentSetStrategy) {
      res["DeploymentSetStrategy"] = boost::any(*deploymentSetStrategy);
    }
    if (gracefulShutdown) {
      res["GracefulShutdown"] = boost::any(*gracefulShutdown);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeGroupState) {
      res["NodeGroupState"] = boost::any(*nodeGroupState);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (nodeResizeStrategy) {
      res["NodeResizeStrategy"] = boost::any(*nodeResizeStrategy);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (runningNodeCount) {
      res["RunningNodeCount"] = boost::any(*runningNodeCount);
    }
    if (spotBidPrices) {
      vector<boost::any> temp1;
      for(auto item1:*spotBidPrices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotBidPrices"] = boost::any(temp1);
    }
    if (spotInstanceRemedy) {
      res["SpotInstanceRemedy"] = boost::any(*spotInstanceRemedy);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (stateChangeReason) {
      res["StateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (withPublicIp) {
      res["WithPublicIp"] = boost::any(*withPublicIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalSecurityGroupIds") != m.end() && !m["AdditionalSecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdditionalSecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdditionalSecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalSecurityGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CostOptimizedConfig") != m.end() && !m["CostOptimizedConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CostOptimizedConfig"].type()) {
        CostOptimizedConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CostOptimizedConfig"]));
        costOptimizedConfig = make_shared<CostOptimizedConfig>(model1);
      }
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<DataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DataDisk>>(expect1);
      }
    }
    if (m.find("DeploymentSetStrategy") != m.end() && !m["DeploymentSetStrategy"].empty()) {
      deploymentSetStrategy = make_shared<string>(boost::any_cast<string>(m["DeploymentSetStrategy"]));
    }
    if (m.find("GracefulShutdown") != m.end() && !m["GracefulShutdown"].empty()) {
      gracefulShutdown = make_shared<bool>(boost::any_cast<bool>(m["GracefulShutdown"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeGroupState") != m.end() && !m["NodeGroupState"].empty()) {
      nodeGroupState = make_shared<string>(boost::any_cast<string>(m["NodeGroupState"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("NodeResizeStrategy") != m.end() && !m["NodeResizeStrategy"].empty()) {
      nodeResizeStrategy = make_shared<string>(boost::any_cast<string>(m["NodeResizeStrategy"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("RunningNodeCount") != m.end() && !m["RunningNodeCount"].empty()) {
      runningNodeCount = make_shared<long>(boost::any_cast<long>(m["RunningNodeCount"]));
    }
    if (m.find("SpotBidPrices") != m.end() && !m["SpotBidPrices"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotBidPrices"].type()) {
        vector<SpotBidPrice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotBidPrices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SpotBidPrice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotBidPrices = make_shared<vector<SpotBidPrice>>(expect1);
      }
    }
    if (m.find("SpotInstanceRemedy") != m.end() && !m["SpotInstanceRemedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["SpotInstanceRemedy"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("StateChangeReason") != m.end() && !m["StateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["StateChangeReason"].type()) {
        NodeGroupStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StateChangeReason"]));
        stateChangeReason = make_shared<NodeGroupStateChangeReason>(model1);
      }
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        SystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<SystemDisk>(model1);
      }
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WithPublicIp") != m.end() && !m["WithPublicIp"].empty()) {
      withPublicIp = make_shared<bool>(boost::any_cast<bool>(m["WithPublicIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~NodeGroup() = default;
};
class NodeGroupConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalSecurityGroupIds{};
  shared_ptr<CostOptimizedConfig> costOptimizedConfig{};
  shared_ptr<vector<DataDisk>> dataDisks{};
  shared_ptr<string> deploymentSetStrategy{};
  shared_ptr<bool> gracefulShutdown{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<string> nodeResizeStrategy{};
  shared_ptr<string> paymentType{};
  shared_ptr<vector<SpotBidPrice>> spotBidPrices{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<SubscriptionConfig> subscriptionConfig{};
  shared_ptr<SystemDisk> systemDisk{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<bool> withPublicIp{};

  NodeGroupConfig() {}

  explicit NodeGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalSecurityGroupIds) {
      res["AdditionalSecurityGroupIds"] = boost::any(*additionalSecurityGroupIds);
    }
    if (costOptimizedConfig) {
      res["CostOptimizedConfig"] = costOptimizedConfig ? boost::any(costOptimizedConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (deploymentSetStrategy) {
      res["DeploymentSetStrategy"] = boost::any(*deploymentSetStrategy);
    }
    if (gracefulShutdown) {
      res["GracefulShutdown"] = boost::any(*gracefulShutdown);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (nodeResizeStrategy) {
      res["NodeResizeStrategy"] = boost::any(*nodeResizeStrategy);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (spotBidPrices) {
      vector<boost::any> temp1;
      for(auto item1:*spotBidPrices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotBidPrices"] = boost::any(temp1);
    }
    if (spotInstanceRemedy) {
      res["SpotInstanceRemedy"] = boost::any(*spotInstanceRemedy);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (subscriptionConfig) {
      res["SubscriptionConfig"] = subscriptionConfig ? boost::any(subscriptionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (withPublicIp) {
      res["WithPublicIp"] = boost::any(*withPublicIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalSecurityGroupIds") != m.end() && !m["AdditionalSecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdditionalSecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdditionalSecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalSecurityGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CostOptimizedConfig") != m.end() && !m["CostOptimizedConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CostOptimizedConfig"].type()) {
        CostOptimizedConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CostOptimizedConfig"]));
        costOptimizedConfig = make_shared<CostOptimizedConfig>(model1);
      }
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<DataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DataDisk>>(expect1);
      }
    }
    if (m.find("DeploymentSetStrategy") != m.end() && !m["DeploymentSetStrategy"].empty()) {
      deploymentSetStrategy = make_shared<string>(boost::any_cast<string>(m["DeploymentSetStrategy"]));
    }
    if (m.find("GracefulShutdown") != m.end() && !m["GracefulShutdown"].empty()) {
      gracefulShutdown = make_shared<bool>(boost::any_cast<bool>(m["GracefulShutdown"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("NodeResizeStrategy") != m.end() && !m["NodeResizeStrategy"].empty()) {
      nodeResizeStrategy = make_shared<string>(boost::any_cast<string>(m["NodeResizeStrategy"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("SpotBidPrices") != m.end() && !m["SpotBidPrices"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotBidPrices"].type()) {
        vector<SpotBidPrice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotBidPrices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SpotBidPrice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotBidPrices = make_shared<vector<SpotBidPrice>>(expect1);
      }
    }
    if (m.find("SpotInstanceRemedy") != m.end() && !m["SpotInstanceRemedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["SpotInstanceRemedy"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("SubscriptionConfig") != m.end() && !m["SubscriptionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionConfig"].type()) {
        SubscriptionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionConfig"]));
        subscriptionConfig = make_shared<SubscriptionConfig>(model1);
      }
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        SystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<SystemDisk>(model1);
      }
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WithPublicIp") != m.end() && !m["WithPublicIp"].empty()) {
      withPublicIp = make_shared<bool>(boost::any_cast<bool>(m["WithPublicIp"]));
    }
  }


  virtual ~NodeGroupConfig() = default;
};
class NodeGroupParam : public Darabonba::Model {
public:
  shared_ptr<bool> autoPayOrder{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewDuration{};
  shared_ptr<string> autoRenewDurationUnit{};
  shared_ptr<vector<DiskInfo>> dataDisks{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<long> nodeCount{};
  shared_ptr<long> nodeGroupIndex{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeGroupType{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentType{};
  shared_ptr<SystemDiskParam> systemDisk{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> zoneId{};

  NodeGroupParam() {}

  explicit NodeGroupParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPayOrder) {
      res["AutoPayOrder"] = boost::any(*autoPayOrder);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewDurationUnit) {
      res["AutoRenewDurationUnit"] = boost::any(*autoRenewDurationUnit);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupIndex) {
      res["NodeGroupIndex"] = boost::any(*nodeGroupIndex);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeGroupType) {
      res["NodeGroupType"] = boost::any(*nodeGroupType);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPayOrder") != m.end() && !m["AutoPayOrder"].empty()) {
      autoPayOrder = make_shared<bool>(boost::any_cast<bool>(m["AutoPayOrder"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<long>(boost::any_cast<long>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewDurationUnit") != m.end() && !m["AutoRenewDurationUnit"].empty()) {
      autoRenewDurationUnit = make_shared<string>(boost::any_cast<string>(m["AutoRenewDurationUnit"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<DiskInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DiskInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DiskInfo>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupIndex") != m.end() && !m["NodeGroupIndex"].empty()) {
      nodeGroupIndex = make_shared<long>(boost::any_cast<long>(m["NodeGroupIndex"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeGroupType") != m.end() && !m["NodeGroupType"].empty()) {
      nodeGroupType = make_shared<string>(boost::any_cast<string>(m["NodeGroupType"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        SystemDiskParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<SystemDiskParam>(model1);
      }
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~NodeGroupParam() = default;
};
class OSUser : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<string> password{};
  shared_ptr<string> user{};

  OSUser() {}

  explicit OSUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~OSUser() = default;
};
class OnKubeClusterResource : public Darabonba::Model {
public:
  shared_ptr<string> cpu{};
  shared_ptr<string> memory{};

  OnKubeClusterResource() {}

  explicit OnKubeClusterResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
  }


  virtual ~OnKubeClusterResource() = default;
};
class OperationStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  OperationStateChangeReason() {}

  explicit OperationStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~OperationStateChangeReason() = default;
};
class Operation : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> operationId{};
  shared_ptr<string> operationState{};
  shared_ptr<string> operationType{};
  shared_ptr<long> startTime{};
  shared_ptr<OperationStateChangeReason> stateChangeReason{};

  Operation() {}

  explicit Operation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (operationState) {
      res["OperationState"] = boost::any(*operationState);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (stateChangeReason) {
      res["StateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("OperationState") != m.end() && !m["OperationState"].empty()) {
      operationState = make_shared<string>(boost::any_cast<string>(m["OperationState"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("StateChangeReason") != m.end() && !m["StateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["StateChangeReason"].type()) {
        OperationStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StateChangeReason"]));
        stateChangeReason = make_shared<OperationStateChangeReason>(model1);
      }
    }
  }


  virtual ~Operation() = default;
};
class Order : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> orderId{};

  Order() {}

  explicit Order(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~Order() = default;
};
class Page : public Darabonba::Model {
public:
  shared_ptr<vector<string>> items{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  Page() {}

  explicit Page(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = boost::any(*items);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Items"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      items = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~Page() = default;
};
class Pod : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> podName{};
  shared_ptr<string> podStatus{};
  shared_ptr<string> reason{};

  Pod() {}

  explicit Pod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (podStatus) {
      res["PodStatus"] = boost::any(*podStatus);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("PodStatus") != m.end() && !m["PodStatus"].empty()) {
      podStatus = make_shared<string>(boost::any_cast<string>(m["PodStatus"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~Pod() = default;
};
class PromotionInfo : public Darabonba::Model {
public:
  shared_ptr<string> canPromFee{};
  shared_ptr<string> isSelected{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionOptionCode{};
  shared_ptr<string> promotionOptionNo{};

  PromotionInfo() {}

  explicit PromotionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canPromFee) {
      res["CanPromFee"] = boost::any(*canPromFee);
    }
    if (isSelected) {
      res["IsSelected"] = boost::any(*isSelected);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionOptionCode) {
      res["PromotionOptionCode"] = boost::any(*promotionOptionCode);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanPromFee") != m.end() && !m["CanPromFee"].empty()) {
      canPromFee = make_shared<string>(boost::any_cast<string>(m["CanPromFee"]));
    }
    if (m.find("IsSelected") != m.end() && !m["IsSelected"].empty()) {
      isSelected = make_shared<string>(boost::any_cast<string>(m["IsSelected"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionOptionCode") != m.end() && !m["PromotionOptionCode"].empty()) {
      promotionOptionCode = make_shared<string>(boost::any_cast<string>(m["PromotionOptionCode"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
  }


  virtual ~PromotionInfo() = default;
};
class PriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> discountPrice{};
  shared_ptr<string> originalPrice{};
  shared_ptr<string> payType{};
  shared_ptr<vector<PromotionInfo>> promotionResults{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> spotInstanceTypeOriginalPrice{};
  shared_ptr<string> spotInstanceTypePrice{};
  shared_ptr<string> spotOriginalPrice{};
  shared_ptr<string> spotPrice{};
  shared_ptr<string> taxPrice{};
  shared_ptr<string> tradePrice{};

  PriceInfo() {}

  explicit PriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (promotionResults) {
      vector<boost::any> temp1;
      for(auto item1:*promotionResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PromotionResults"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spotInstanceTypeOriginalPrice) {
      res["SpotInstanceTypeOriginalPrice"] = boost::any(*spotInstanceTypeOriginalPrice);
    }
    if (spotInstanceTypePrice) {
      res["SpotInstanceTypePrice"] = boost::any(*spotInstanceTypePrice);
    }
    if (spotOriginalPrice) {
      res["SpotOriginalPrice"] = boost::any(*spotOriginalPrice);
    }
    if (spotPrice) {
      res["SpotPrice"] = boost::any(*spotPrice);
    }
    if (taxPrice) {
      res["TaxPrice"] = boost::any(*taxPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<string>(boost::any_cast<string>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<string>(boost::any_cast<string>(m["OriginalPrice"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PromotionResults") != m.end() && !m["PromotionResults"].empty()) {
      if (typeid(vector<boost::any>) == m["PromotionResults"].type()) {
        vector<PromotionInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PromotionResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PromotionInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotionResults = make_shared<vector<PromotionInfo>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SpotInstanceTypeOriginalPrice") != m.end() && !m["SpotInstanceTypeOriginalPrice"].empty()) {
      spotInstanceTypeOriginalPrice = make_shared<string>(boost::any_cast<string>(m["SpotInstanceTypeOriginalPrice"]));
    }
    if (m.find("SpotInstanceTypePrice") != m.end() && !m["SpotInstanceTypePrice"].empty()) {
      spotInstanceTypePrice = make_shared<string>(boost::any_cast<string>(m["SpotInstanceTypePrice"]));
    }
    if (m.find("SpotOriginalPrice") != m.end() && !m["SpotOriginalPrice"].empty()) {
      spotOriginalPrice = make_shared<string>(boost::any_cast<string>(m["SpotOriginalPrice"]));
    }
    if (m.find("SpotPrice") != m.end() && !m["SpotPrice"].empty()) {
      spotPrice = make_shared<string>(boost::any_cast<string>(m["SpotPrice"]));
    }
    if (m.find("TaxPrice") != m.end() && !m["TaxPrice"].empty()) {
      taxPrice = make_shared<string>(boost::any_cast<string>(m["TaxPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<string>(boost::any_cast<string>(m["TradePrice"]));
    }
  }


  virtual ~PriceInfo() = default;
};
class Promotion : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> promotionOptionCode{};
  shared_ptr<string> promotionOptionNo{};

  Promotion() {}

  explicit Promotion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (promotionOptionCode) {
      res["PromotionOptionCode"] = boost::any(*promotionOptionCode);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("PromotionOptionCode") != m.end() && !m["PromotionOptionCode"].empty()) {
      promotionOptionCode = make_shared<string>(boost::any_cast<string>(m["PromotionOptionCode"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
  }


  virtual ~Promotion() = default;
};
class PromotionParam : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> promotionOptionCode{};
  shared_ptr<string> promotionOptionNo{};

  PromotionParam() {}

  explicit PromotionParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (promotionOptionCode) {
      res["PromotionOptionCode"] = boost::any(*promotionOptionCode);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("PromotionOptionCode") != m.end() && !m["PromotionOptionCode"].empty()) {
      promotionOptionCode = make_shared<string>(boost::any_cast<string>(m["PromotionOptionCode"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
  }


  virtual ~PromotionParam() = default;
};
class RenewInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> renewDuration{};
  shared_ptr<string> renewDurationUnit{};

  RenewInstance() {}

  explicit RenewInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (renewDuration) {
      res["RenewDuration"] = boost::any(*renewDuration);
    }
    if (renewDurationUnit) {
      res["RenewDurationUnit"] = boost::any(*renewDurationUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RenewDuration") != m.end() && !m["RenewDuration"].empty()) {
      renewDuration = make_shared<long>(boost::any_cast<long>(m["RenewDuration"]));
    }
    if (m.find("RenewDurationUnit") != m.end() && !m["RenewDurationUnit"].empty()) {
      renewDurationUnit = make_shared<string>(boost::any_cast<string>(m["RenewDurationUnit"]));
    }
  }


  virtual ~RenewInstance() = default;
};
class RenewInstanceParam : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> renewDuration{};
  shared_ptr<string> renewDurationUnit{};

  RenewInstanceParam() {}

  explicit RenewInstanceParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (renewDuration) {
      res["RenewDuration"] = boost::any(*renewDuration);
    }
    if (renewDurationUnit) {
      res["RenewDurationUnit"] = boost::any(*renewDurationUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RenewDuration") != m.end() && !m["RenewDuration"].empty()) {
      renewDuration = make_shared<long>(boost::any_cast<long>(m["RenewDuration"]));
    }
    if (m.find("RenewDurationUnit") != m.end() && !m["RenewDurationUnit"].empty()) {
      renewDurationUnit = make_shared<string>(boost::any_cast<string>(m["RenewDurationUnit"]));
    }
  }


  virtual ~RenewInstanceParam() = default;
};
class RequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  RequestTag() {}

  explicit RequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RequestTag() = default;
};
class ResizeDiskNodeGroupParam : public Darabonba::Model {
public:
  shared_ptr<long> dataDiskCapacity{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<bool> rollingRestart{};

  ResizeDiskNodeGroupParam() {}

  explicit ResizeDiskNodeGroupParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDiskCapacity) {
      res["DataDiskCapacity"] = boost::any(*dataDiskCapacity);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (rollingRestart) {
      res["RollingRestart"] = boost::any(*rollingRestart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDiskCapacity") != m.end() && !m["DataDiskCapacity"].empty()) {
      dataDiskCapacity = make_shared<long>(boost::any_cast<long>(m["DataDiskCapacity"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("RollingRestart") != m.end() && !m["RollingRestart"].empty()) {
      rollingRestart = make_shared<bool>(boost::any_cast<bool>(m["RollingRestart"]));
    }
  }


  virtual ~ResizeDiskNodeGroupParam() = default;
};
class ScalingActivity : public Darabonba::Model {
public:
  shared_ptr<string> cause{};
  shared_ptr<string> description{};
  shared_ptr<long> endTime{};
  shared_ptr<string> essScalingRuleId{};
  shared_ptr<long> expectNum{};
  shared_ptr<string> hostGroupName{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceIds{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingRuleName{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> totalCapacity{};
  shared_ptr<string> transition{};

  ScalingActivity() {}

  explicit ScalingActivity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cause) {
      res["Cause"] = boost::any(*cause);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (essScalingRuleId) {
      res["EssScalingRuleId"] = boost::any(*essScalingRuleId);
    }
    if (expectNum) {
      res["ExpectNum"] = boost::any(*expectNum);
    }
    if (hostGroupName) {
      res["HostGroupName"] = boost::any(*hostGroupName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalCapacity) {
      res["TotalCapacity"] = boost::any(*totalCapacity);
    }
    if (transition) {
      res["Transition"] = boost::any(*transition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cause") != m.end() && !m["Cause"].empty()) {
      cause = make_shared<string>(boost::any_cast<string>(m["Cause"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EssScalingRuleId") != m.end() && !m["EssScalingRuleId"].empty()) {
      essScalingRuleId = make_shared<string>(boost::any_cast<string>(m["EssScalingRuleId"]));
    }
    if (m.find("ExpectNum") != m.end() && !m["ExpectNum"].empty()) {
      expectNum = make_shared<long>(boost::any_cast<long>(m["ExpectNum"]));
    }
    if (m.find("HostGroupName") != m.end() && !m["HostGroupName"].empty()) {
      hostGroupName = make_shared<string>(boost::any_cast<string>(m["HostGroupName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalCapacity") != m.end() && !m["TotalCapacity"].empty()) {
      totalCapacity = make_shared<long>(boost::any_cast<long>(m["TotalCapacity"]));
    }
    if (m.find("Transition") != m.end() && !m["Transition"].empty()) {
      transition = make_shared<string>(boost::any_cast<string>(m["Transition"]));
    }
  }


  virtual ~ScalingActivity() = default;
};
class ScalingConstraints : public Darabonba::Model {
public:
  shared_ptr<long> maxCapacity{};
  shared_ptr<long> minCapacity{};

  ScalingConstraints() {}

  explicit ScalingConstraints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxCapacity) {
      res["MaxCapacity"] = boost::any(*maxCapacity);
    }
    if (minCapacity) {
      res["MinCapacity"] = boost::any(*minCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxCapacity") != m.end() && !m["MaxCapacity"].empty()) {
      maxCapacity = make_shared<long>(boost::any_cast<long>(m["MaxCapacity"]));
    }
    if (m.find("MinCapacity") != m.end() && !m["MinCapacity"].empty()) {
      minCapacity = make_shared<long>(boost::any_cast<long>(m["MinCapacity"]));
    }
  }


  virtual ~ScalingConstraints() = default;
};
class ScalingGroupConfigInstanceTypeList : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<double> spotPriceLimit{};

  ScalingGroupConfigInstanceTypeList() {}

  explicit ScalingGroupConfigInstanceTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
  }


  virtual ~ScalingGroupConfigInstanceTypeList() = default;
};
class ScalingGroupConfigMultiAvailablePolicyPolicyParam : public Darabonba::Model {
public:
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<long> spotInstancePools{};
  shared_ptr<bool> spotInstanceRemedy{};

  ScalingGroupConfigMultiAvailablePolicyPolicyParam() {}

  explicit ScalingGroupConfigMultiAvailablePolicyPolicyParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onDemandBaseCapacity) {
      res["OnDemandBaseCapacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["OnDemandPercentageAboveBaseCapacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstancePools) {
      res["SpotInstancePools"] = boost::any(*spotInstancePools);
    }
    if (spotInstanceRemedy) {
      res["SpotInstanceRemedy"] = boost::any(*spotInstanceRemedy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnDemandBaseCapacity") != m.end() && !m["OnDemandBaseCapacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandBaseCapacity"]));
    }
    if (m.find("OnDemandPercentageAboveBaseCapacity") != m.end() && !m["OnDemandPercentageAboveBaseCapacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandPercentageAboveBaseCapacity"]));
    }
    if (m.find("SpotInstancePools") != m.end() && !m["SpotInstancePools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["SpotInstancePools"]));
    }
    if (m.find("SpotInstanceRemedy") != m.end() && !m["SpotInstanceRemedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["SpotInstanceRemedy"]));
    }
  }


  virtual ~ScalingGroupConfigMultiAvailablePolicyPolicyParam() = default;
};
class ScalingGroupConfigMultiAvailablePolicy : public Darabonba::Model {
public:
  shared_ptr<ScalingGroupConfigMultiAvailablePolicyPolicyParam> policyParam{};
  shared_ptr<string> policyType{};

  ScalingGroupConfigMultiAvailablePolicy() {}

  explicit ScalingGroupConfigMultiAvailablePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyParam) {
      res["PolicyParam"] = policyParam ? boost::any(policyParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyParam") != m.end() && !m["PolicyParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyParam"].type()) {
        ScalingGroupConfigMultiAvailablePolicyPolicyParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyParam"]));
        policyParam = make_shared<ScalingGroupConfigMultiAvailablePolicyPolicyParam>(model1);
      }
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ScalingGroupConfigMultiAvailablePolicy() = default;
};
class ScalingGroupConfigNodeOfflinePolicy : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<long> timeoutMs{};

  ScalingGroupConfigNodeOfflinePolicy() {}

  explicit ScalingGroupConfigNodeOfflinePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (timeoutMs) {
      res["TimeoutMs"] = boost::any(*timeoutMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("TimeoutMs") != m.end() && !m["TimeoutMs"].empty()) {
      timeoutMs = make_shared<long>(boost::any_cast<long>(m["TimeoutMs"]));
    }
  }


  virtual ~ScalingGroupConfigNodeOfflinePolicy() = default;
};
class ScalingGroupConfigPrivatePoolOptions : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> matchCriteria{};

  ScalingGroupConfigPrivatePoolOptions() {}

  explicit ScalingGroupConfigPrivatePoolOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchCriteria) {
      res["MatchCriteria"] = boost::any(*matchCriteria);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchCriteria") != m.end() && !m["MatchCriteria"].empty()) {
      matchCriteria = make_shared<string>(boost::any_cast<string>(m["MatchCriteria"]));
    }
  }


  virtual ~ScalingGroupConfigPrivatePoolOptions() = default;
};
class ScalingGroupConfig : public Darabonba::Model {
public:
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<long> dataDiskCount{};
  shared_ptr<long> dataDiskSize{};
  shared_ptr<long> defaultCoolDownTime{};
  shared_ptr<vector<ScalingGroupConfigInstanceTypeList>> instanceTypeList{};
  shared_ptr<ScalingGroupConfigMultiAvailablePolicy> multiAvailablePolicy{};
  shared_ptr<ScalingGroupConfigNodeOfflinePolicy> nodeOfflinePolicy{};
  shared_ptr<ScalingGroupConfigPrivatePoolOptions> privatePoolOptions{};
  shared_ptr<long> scalingMaxSize{};
  shared_ptr<long> scalingMinSize{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> sysDiskCategory{};
  shared_ptr<long> sysDiskSize{};
  shared_ptr<string> triggerMode{};

  ScalingGroupConfig() {}

  explicit ScalingGroupConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (dataDiskCount) {
      res["DataDiskCount"] = boost::any(*dataDiskCount);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (defaultCoolDownTime) {
      res["DefaultCoolDownTime"] = boost::any(*defaultCoolDownTime);
    }
    if (instanceTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeList"] = boost::any(temp1);
    }
    if (multiAvailablePolicy) {
      res["MultiAvailablePolicy"] = multiAvailablePolicy ? boost::any(multiAvailablePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeOfflinePolicy) {
      res["NodeOfflinePolicy"] = nodeOfflinePolicy ? boost::any(nodeOfflinePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privatePoolOptions) {
      res["PrivatePoolOptions"] = privatePoolOptions ? boost::any(privatePoolOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingMaxSize) {
      res["ScalingMaxSize"] = boost::any(*scalingMaxSize);
    }
    if (scalingMinSize) {
      res["ScalingMinSize"] = boost::any(*scalingMinSize);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (sysDiskCategory) {
      res["SysDiskCategory"] = boost::any(*sysDiskCategory);
    }
    if (sysDiskSize) {
      res["SysDiskSize"] = boost::any(*sysDiskSize);
    }
    if (triggerMode) {
      res["TriggerMode"] = boost::any(*triggerMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("DataDiskCount") != m.end() && !m["DataDiskCount"].empty()) {
      dataDiskCount = make_shared<long>(boost::any_cast<long>(m["DataDiskCount"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
    if (m.find("DefaultCoolDownTime") != m.end() && !m["DefaultCoolDownTime"].empty()) {
      defaultCoolDownTime = make_shared<long>(boost::any_cast<long>(m["DefaultCoolDownTime"]));
    }
    if (m.find("InstanceTypeList") != m.end() && !m["InstanceTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeList"].type()) {
        vector<ScalingGroupConfigInstanceTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScalingGroupConfigInstanceTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeList = make_shared<vector<ScalingGroupConfigInstanceTypeList>>(expect1);
      }
    }
    if (m.find("MultiAvailablePolicy") != m.end() && !m["MultiAvailablePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["MultiAvailablePolicy"].type()) {
        ScalingGroupConfigMultiAvailablePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MultiAvailablePolicy"]));
        multiAvailablePolicy = make_shared<ScalingGroupConfigMultiAvailablePolicy>(model1);
      }
    }
    if (m.find("NodeOfflinePolicy") != m.end() && !m["NodeOfflinePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeOfflinePolicy"].type()) {
        ScalingGroupConfigNodeOfflinePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeOfflinePolicy"]));
        nodeOfflinePolicy = make_shared<ScalingGroupConfigNodeOfflinePolicy>(model1);
      }
    }
    if (m.find("PrivatePoolOptions") != m.end() && !m["PrivatePoolOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivatePoolOptions"].type()) {
        ScalingGroupConfigPrivatePoolOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivatePoolOptions"]));
        privatePoolOptions = make_shared<ScalingGroupConfigPrivatePoolOptions>(model1);
      }
    }
    if (m.find("ScalingMaxSize") != m.end() && !m["ScalingMaxSize"].empty()) {
      scalingMaxSize = make_shared<long>(boost::any_cast<long>(m["ScalingMaxSize"]));
    }
    if (m.find("ScalingMinSize") != m.end() && !m["ScalingMinSize"].empty()) {
      scalingMinSize = make_shared<long>(boost::any_cast<long>(m["ScalingMinSize"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("SysDiskCategory") != m.end() && !m["SysDiskCategory"].empty()) {
      sysDiskCategory = make_shared<string>(boost::any_cast<string>(m["SysDiskCategory"]));
    }
    if (m.find("SysDiskSize") != m.end() && !m["SysDiskSize"].empty()) {
      sysDiskSize = make_shared<long>(boost::any_cast<long>(m["SysDiskSize"]));
    }
    if (m.find("TriggerMode") != m.end() && !m["TriggerMode"].empty()) {
      triggerMode = make_shared<string>(boost::any_cast<string>(m["TriggerMode"]));
    }
  }


  virtual ~ScalingGroupConfig() = default;
};
class TimeTrigger : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<long> launchTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};

  TimeTrigger() {}

  explicit TimeTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<long>(boost::any_cast<long>(m["LaunchTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
  }


  virtual ~TimeTrigger() = default;
};
class ScalingRule : public Darabonba::Model {
public:
  shared_ptr<string> activityType{};
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<MetricsTrigger> metricsTrigger{};
  shared_ptr<string> ruleName{};
  shared_ptr<TimeTrigger> timeTrigger{};
  shared_ptr<string> triggerType{};

  ScalingRule() {}

  explicit ScalingRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityType) {
      res["ActivityType"] = boost::any(*activityType);
    }
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (metricsTrigger) {
      res["MetricsTrigger"] = metricsTrigger ? boost::any(metricsTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (timeTrigger) {
      res["TimeTrigger"] = timeTrigger ? boost::any(timeTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityType") != m.end() && !m["ActivityType"].empty()) {
      activityType = make_shared<string>(boost::any_cast<string>(m["ActivityType"]));
    }
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("MetricsTrigger") != m.end() && !m["MetricsTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetricsTrigger"].type()) {
        MetricsTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetricsTrigger"]));
        metricsTrigger = make_shared<MetricsTrigger>(model1);
      }
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("TimeTrigger") != m.end() && !m["TimeTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeTrigger"].type()) {
        TimeTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeTrigger"]));
        timeTrigger = make_shared<TimeTrigger>(model1);
      }
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
  }


  virtual ~ScalingRule() = default;
};
class ScalingRuleSpecByLoadScalingRuleSpec : public Darabonba::Model {
public:
  shared_ptr<string> comparisonOperator{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<string> metricName{};
  shared_ptr<string> statistics{};
  shared_ptr<double> threshold{};
  shared_ptr<long> timeWindow{};

  ScalingRuleSpecByLoadScalingRuleSpec() {}

  explicit ScalingRuleSpecByLoadScalingRuleSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (timeWindow) {
      res["TimeWindow"] = boost::any(*timeWindow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("TimeWindow") != m.end() && !m["TimeWindow"].empty()) {
      timeWindow = make_shared<long>(boost::any_cast<long>(m["TimeWindow"]));
    }
  }


  virtual ~ScalingRuleSpecByLoadScalingRuleSpec() = default;
};
class ScalingRuleSpecByTimeScalingRuleSpec : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> launchTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};

  ScalingRuleSpecByTimeScalingRuleSpec() {}

  explicit ScalingRuleSpecByTimeScalingRuleSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<long>(boost::any_cast<long>(m["LaunchTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
  }


  virtual ~ScalingRuleSpecByTimeScalingRuleSpec() = default;
};
class ScalingRuleSpec : public Darabonba::Model {
public:
  shared_ptr<long> adjustmentValue{};
  shared_ptr<ScalingRuleSpecByLoadScalingRuleSpec> byLoadScalingRuleSpec{};
  shared_ptr<ScalingRuleSpecByTimeScalingRuleSpec> byTimeScalingRuleSpec{};
  shared_ptr<long> coolDownInterval{};
  shared_ptr<string> scalingActivityType{};
  shared_ptr<string> scalingRuleName{};
  shared_ptr<string> scalingRuleType{};

  ScalingRuleSpec() {}

  explicit ScalingRuleSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (byLoadScalingRuleSpec) {
      res["ByLoadScalingRuleSpec"] = byLoadScalingRuleSpec ? boost::any(byLoadScalingRuleSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (byTimeScalingRuleSpec) {
      res["ByTimeScalingRuleSpec"] = byTimeScalingRuleSpec ? boost::any(byTimeScalingRuleSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (coolDownInterval) {
      res["CoolDownInterval"] = boost::any(*coolDownInterval);
    }
    if (scalingActivityType) {
      res["ScalingActivityType"] = boost::any(*scalingActivityType);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (scalingRuleType) {
      res["ScalingRuleType"] = boost::any(*scalingRuleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("ByLoadScalingRuleSpec") != m.end() && !m["ByLoadScalingRuleSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ByLoadScalingRuleSpec"].type()) {
        ScalingRuleSpecByLoadScalingRuleSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ByLoadScalingRuleSpec"]));
        byLoadScalingRuleSpec = make_shared<ScalingRuleSpecByLoadScalingRuleSpec>(model1);
      }
    }
    if (m.find("ByTimeScalingRuleSpec") != m.end() && !m["ByTimeScalingRuleSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ByTimeScalingRuleSpec"].type()) {
        ScalingRuleSpecByTimeScalingRuleSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ByTimeScalingRuleSpec"]));
        byTimeScalingRuleSpec = make_shared<ScalingRuleSpecByTimeScalingRuleSpec>(model1);
      }
    }
    if (m.find("CoolDownInterval") != m.end() && !m["CoolDownInterval"].empty()) {
      coolDownInterval = make_shared<long>(boost::any_cast<long>(m["CoolDownInterval"]));
    }
    if (m.find("ScalingActivityType") != m.end() && !m["ScalingActivityType"].empty()) {
      scalingActivityType = make_shared<string>(boost::any_cast<string>(m["ScalingActivityType"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
    if (m.find("ScalingRuleType") != m.end() && !m["ScalingRuleType"].empty()) {
      scalingRuleType = make_shared<string>(boost::any_cast<string>(m["ScalingRuleType"]));
    }
  }


  virtual ~ScalingRuleSpec() = default;
};
class ScalingRuleV1RuleParam : public Darabonba::Model {
public:
  shared_ptr<string> comparisonOperator{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<string> launchTime{};
  shared_ptr<string> metricName{};
  shared_ptr<long> period{};
  shared_ptr<string> recurrenceEndTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};
  shared_ptr<string> statistics{};
  shared_ptr<long> threshold{};

  ScalingRuleV1RuleParam() {}

  explicit ScalingRuleV1RuleParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (recurrenceEndTime) {
      res["RecurrenceEndTime"] = boost::any(*recurrenceEndTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<string>(boost::any_cast<string>(m["LaunchTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RecurrenceEndTime") != m.end() && !m["RecurrenceEndTime"].empty()) {
      recurrenceEndTime = make_shared<string>(boost::any_cast<string>(m["RecurrenceEndTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["Threshold"]));
    }
  }


  virtual ~ScalingRuleV1RuleParam() = default;
};
class ScalingRuleV1 : public Darabonba::Model {
public:
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<long> coolDownTime{};
  shared_ptr<string> ruleName{};
  shared_ptr<ScalingRuleV1RuleParam> ruleParam{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> scalingConfigBizId{};

  ScalingRuleV1() {}

  explicit ScalingRuleV1(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (coolDownTime) {
      res["CoolDownTime"] = boost::any(*coolDownTime);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleParam) {
      res["RuleParam"] = ruleParam ? boost::any(ruleParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scalingConfigBizId) {
      res["ScalingConfigBizId"] = boost::any(*scalingConfigBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("CoolDownTime") != m.end() && !m["CoolDownTime"].empty()) {
      coolDownTime = make_shared<long>(boost::any_cast<long>(m["CoolDownTime"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleParam") != m.end() && !m["RuleParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleParam"].type()) {
        ScalingRuleV1RuleParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleParam"]));
        ruleParam = make_shared<ScalingRuleV1RuleParam>(model1);
      }
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScalingConfigBizId") != m.end() && !m["ScalingConfigBizId"].empty()) {
      scalingConfigBizId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigBizId"]));
    }
  }


  virtual ~ScalingRuleV1() = default;
};
class Script : public Darabonba::Model {
public:
  shared_ptr<string> executionFailStrategy{};
  shared_ptr<string> executionMoment{};
  shared_ptr<NodeSelector> nodeSelector{};
  shared_ptr<long> priority{};
  shared_ptr<string> scriptArgs{};
  shared_ptr<string> scriptName{};
  shared_ptr<string> scriptPath{};

  Script() {}

  explicit Script(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionFailStrategy) {
      res["ExecutionFailStrategy"] = boost::any(*executionFailStrategy);
    }
    if (executionMoment) {
      res["ExecutionMoment"] = boost::any(*executionMoment);
    }
    if (nodeSelector) {
      res["NodeSelector"] = nodeSelector ? boost::any(nodeSelector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (scriptArgs) {
      res["ScriptArgs"] = boost::any(*scriptArgs);
    }
    if (scriptName) {
      res["ScriptName"] = boost::any(*scriptName);
    }
    if (scriptPath) {
      res["ScriptPath"] = boost::any(*scriptPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionFailStrategy") != m.end() && !m["ExecutionFailStrategy"].empty()) {
      executionFailStrategy = make_shared<string>(boost::any_cast<string>(m["ExecutionFailStrategy"]));
    }
    if (m.find("ExecutionMoment") != m.end() && !m["ExecutionMoment"].empty()) {
      executionMoment = make_shared<string>(boost::any_cast<string>(m["ExecutionMoment"]));
    }
    if (m.find("NodeSelector") != m.end() && !m["NodeSelector"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeSelector"].type()) {
        NodeSelector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeSelector"]));
        nodeSelector = make_shared<NodeSelector>(model1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ScriptArgs") != m.end() && !m["ScriptArgs"].empty()) {
      scriptArgs = make_shared<string>(boost::any_cast<string>(m["ScriptArgs"]));
    }
    if (m.find("ScriptName") != m.end() && !m["ScriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["ScriptName"]));
    }
    if (m.find("ScriptPath") != m.end() && !m["ScriptPath"].empty()) {
      scriptPath = make_shared<string>(boost::any_cast<string>(m["ScriptPath"]));
    }
  }


  virtual ~Script() = default;
};
class SpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<double> priceLimit{};

  SpotPriceLimit() {}

  explicit SpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<double>(boost::any_cast<double>(m["PriceLimit"]));
    }
  }


  virtual ~SpotPriceLimit() = default;
};
class StateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  StateChangeReason() {}

  explicit StateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~StateChangeReason() = default;
};
class TagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  TagResource() {}

  explicit TagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResource() = default;
};
class UpdateApplicationConfig : public Darabonba::Model {
public:
  shared_ptr<string> configAction{};
  shared_ptr<string> configDescription{};
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};
  shared_ptr<string> configScope{};
  shared_ptr<string> effectiveActions{};
  shared_ptr<string> effectiveType{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeId{};

  UpdateApplicationConfig() {}

  explicit UpdateApplicationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configAction) {
      res["ConfigAction"] = boost::any(*configAction);
    }
    if (configDescription) {
      res["ConfigDescription"] = boost::any(*configDescription);
    }
    if (configFileName) {
      res["ConfigFileName"] = boost::any(*configFileName);
    }
    if (configItemKey) {
      res["ConfigItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["ConfigItemValue"] = boost::any(*configItemValue);
    }
    if (configScope) {
      res["ConfigScope"] = boost::any(*configScope);
    }
    if (effectiveActions) {
      res["EffectiveActions"] = boost::any(*effectiveActions);
    }
    if (effectiveType) {
      res["EffectiveType"] = boost::any(*effectiveType);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigAction") != m.end() && !m["ConfigAction"].empty()) {
      configAction = make_shared<string>(boost::any_cast<string>(m["ConfigAction"]));
    }
    if (m.find("ConfigDescription") != m.end() && !m["ConfigDescription"].empty()) {
      configDescription = make_shared<string>(boost::any_cast<string>(m["ConfigDescription"]));
    }
    if (m.find("ConfigFileName") != m.end() && !m["ConfigFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["ConfigFileName"]));
    }
    if (m.find("ConfigItemKey") != m.end() && !m["ConfigItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["ConfigItemKey"]));
    }
    if (m.find("ConfigItemValue") != m.end() && !m["ConfigItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["ConfigItemValue"]));
    }
    if (m.find("ConfigScope") != m.end() && !m["ConfigScope"].empty()) {
      configScope = make_shared<string>(boost::any_cast<string>(m["ConfigScope"]));
    }
    if (m.find("EffectiveActions") != m.end() && !m["EffectiveActions"].empty()) {
      effectiveActions = make_shared<string>(boost::any_cast<string>(m["EffectiveActions"]));
    }
    if (m.find("EffectiveType") != m.end() && !m["EffectiveType"].empty()) {
      effectiveType = make_shared<string>(boost::any_cast<string>(m["EffectiveType"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~UpdateApplicationConfig() = default;
};
class UpdateSpecNodeGroup : public Darabonba::Model {
public:
  shared_ptr<string> newInstanceType{};
  shared_ptr<string> nodeGroupId{};

  UpdateSpecNodeGroup() {}

  explicit UpdateSpecNodeGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newInstanceType) {
      res["NewInstanceType"] = boost::any(*newInstanceType);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewInstanceType") != m.end() && !m["NewInstanceType"].empty()) {
      newInstanceType = make_shared<string>(boost::any_cast<string>(m["NewInstanceType"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
  }


  virtual ~UpdateSpecNodeGroup() = default;
};
class UpdateSpecNodeGroupParam : public Darabonba::Model {
public:
  shared_ptr<string> newInstanceType{};
  shared_ptr<string> nodeGroupId{};

  UpdateSpecNodeGroupParam() {}

  explicit UpdateSpecNodeGroupParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newInstanceType) {
      res["NewInstanceType"] = boost::any(*newInstanceType);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewInstanceType") != m.end() && !m["NewInstanceType"].empty()) {
      newInstanceType = make_shared<string>(boost::any_cast<string>(m["NewInstanceType"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
  }


  virtual ~UpdateSpecNodeGroupParam() = default;
};
class User : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<string> password{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> userType{};

  User() {}

  explicit User(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~User() = default;
};
class UserParam : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  UserParam() {}

  explicit UserParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UserParam() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ApplicationConfig>> applicationConfigs{};
  shared_ptr<vector<Application>> applications{};
  shared_ptr<vector<Script>> bootstrapScripts{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> deployMode{};
  shared_ptr<NodeAttributes> nodeAttributes{};
  shared_ptr<vector<NodeGroupConfig>> nodeGroups{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityMode{};
  shared_ptr<SubscriptionConfig> subscriptionConfig{};
  shared_ptr<vector<Tag>> tags{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*applicationConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationConfigs"] = boost::any(temp1);
    }
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (bootstrapScripts) {
      vector<boost::any> temp1;
      for(auto item1:*bootstrapScripts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BootstrapScripts"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (nodeAttributes) {
      res["NodeAttributes"] = nodeAttributes ? boost::any(nodeAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroups"] = boost::any(temp1);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (releaseVersion) {
      res["ReleaseVersion"] = boost::any(*releaseVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityMode) {
      res["SecurityMode"] = boost::any(*securityMode);
    }
    if (subscriptionConfig) {
      res["SubscriptionConfig"] = subscriptionConfig ? boost::any(subscriptionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationConfigs") != m.end() && !m["ApplicationConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationConfigs"].type()) {
        vector<ApplicationConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplicationConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationConfigs = make_shared<vector<ApplicationConfig>>(expect1);
      }
    }
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<Application> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Application model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<Application>>(expect1);
      }
    }
    if (m.find("BootstrapScripts") != m.end() && !m["BootstrapScripts"].empty()) {
      if (typeid(vector<boost::any>) == m["BootstrapScripts"].type()) {
        vector<Script> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BootstrapScripts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Script model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bootstrapScripts = make_shared<vector<Script>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("NodeAttributes") != m.end() && !m["NodeAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeAttributes"].type()) {
        NodeAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeAttributes"]));
        nodeAttributes = make_shared<NodeAttributes>(model1);
      }
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroups"].type()) {
        vector<NodeGroupConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeGroupConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroups = make_shared<vector<NodeGroupConfig>>(expect1);
      }
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReleaseVersion") != m.end() && !m["ReleaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["ReleaseVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityMode") != m.end() && !m["SecurityMode"].empty()) {
      securityMode = make_shared<string>(boost::any_cast<string>(m["SecurityMode"]));
    }
    if (m.find("SubscriptionConfig") != m.end() && !m["SubscriptionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionConfig"].type()) {
        SubscriptionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionConfig"]));
        subscriptionConfig = make_shared<SubscriptionConfig>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class DecreaseNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> decreaseNodeCount{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<string> regionId{};

  DecreaseNodesRequest() {}

  explicit DecreaseNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (decreaseNodeCount) {
      res["DecreaseNodeCount"] = boost::any(*decreaseNodeCount);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
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
    if (m.find("DecreaseNodeCount") != m.end() && !m["DecreaseNodeCount"].empty()) {
      decreaseNodeCount = make_shared<long>(boost::any_cast<long>(m["DecreaseNodeCount"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DecreaseNodesRequest() = default;
};
class DecreaseNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  DecreaseNodesResponseBody() {}

  explicit DecreaseNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DecreaseNodesResponseBody() = default;
};
class DecreaseNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DecreaseNodesResponseBody> body{};

  DecreaseNodesResponse() {}

  explicit DecreaseNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DecreaseNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DecreaseNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DecreaseNodesResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteClusterResponseBody() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class GetClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  GetClusterRequest() {}

  explicit GetClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetClusterRequest() = default;
};
class GetClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<Cluster> cluster{};
  shared_ptr<string> requestId{};

  GetClusterResponseBody() {}

  explicit GetClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["Cluster"] = cluster ? boost::any(cluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cluster"].type()) {
        Cluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cluster"]));
        cluster = make_shared<Cluster>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetClusterResponseBody() = default;
};
class GetClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterResponseBody> body{};

  GetClusterResponse() {}

  explicit GetClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterResponse() = default;
};
class GetNodeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> regionId{};

  GetNodeGroupRequest() {}

  explicit GetNodeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
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
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetNodeGroupRequest() = default;
};
class GetNodeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<NodeGroup> nodeGroup{};
  shared_ptr<string> requestId{};

  GetNodeGroupResponseBody() {}

  explicit GetNodeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroup) {
      res["NodeGroup"] = nodeGroup ? boost::any(nodeGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroup") != m.end() && !m["NodeGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeGroup"].type()) {
        NodeGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeGroup"]));
        nodeGroup = make_shared<NodeGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNodeGroupResponseBody() = default;
};
class GetNodeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeGroupResponseBody> body{};

  GetNodeGroupResponse() {}

  explicit GetNodeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNodeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeGroupResponse() = default;
};
class GetOperationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> operationId{};
  shared_ptr<string> regionId{};

  GetOperationRequest() {}

  explicit GetOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
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
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetOperationRequest() = default;
};
class GetOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<Operation> operation{};
  shared_ptr<string> requestId{};

  GetOperationResponseBody() {}

  explicit GetOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["Operation"] = operation ? boost::any(operation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operation"].type()) {
        Operation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operation"]));
        operation = make_shared<Operation>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOperationResponseBody() = default;
};
class GetOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOperationResponseBody> body{};

  GetOperationResponse() {}

  explicit GetOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOperationResponseBody>(model1);
      }
    }
  }


  virtual ~GetOperationResponse() = default;
};
class IncreaseNodesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ApplicationConfig>> applicationConfigs{};
  shared_ptr<bool> autoPayOrder{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> increaseNodeCount{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> paymentDuration{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> regionId{};

  IncreaseNodesRequest() {}

  explicit IncreaseNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*applicationConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationConfigs"] = boost::any(temp1);
    }
    if (autoPayOrder) {
      res["AutoPayOrder"] = boost::any(*autoPayOrder);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (increaseNodeCount) {
      res["IncreaseNodeCount"] = boost::any(*increaseNodeCount);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (paymentDuration) {
      res["PaymentDuration"] = boost::any(*paymentDuration);
    }
    if (paymentDurationUnit) {
      res["PaymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationConfigs") != m.end() && !m["ApplicationConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationConfigs"].type()) {
        vector<ApplicationConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplicationConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationConfigs = make_shared<vector<ApplicationConfig>>(expect1);
      }
    }
    if (m.find("AutoPayOrder") != m.end() && !m["AutoPayOrder"].empty()) {
      autoPayOrder = make_shared<bool>(boost::any_cast<bool>(m["AutoPayOrder"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IncreaseNodeCount") != m.end() && !m["IncreaseNodeCount"].empty()) {
      increaseNodeCount = make_shared<long>(boost::any_cast<long>(m["IncreaseNodeCount"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PaymentDuration") != m.end() && !m["PaymentDuration"].empty()) {
      paymentDuration = make_shared<long>(boost::any_cast<long>(m["PaymentDuration"]));
    }
    if (m.find("PaymentDurationUnit") != m.end() && !m["PaymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["PaymentDurationUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~IncreaseNodesRequest() = default;
};
class IncreaseNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  IncreaseNodesResponseBody() {}

  explicit IncreaseNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IncreaseNodesResponseBody() = default;
};
class IncreaseNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IncreaseNodesResponseBody> body{};

  IncreaseNodesResponse() {}

  explicit IncreaseNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IncreaseNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IncreaseNodesResponseBody>(model1);
      }
    }
  }


  virtual ~IncreaseNodesResponse() = default;
};
class JoinResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  JoinResourceGroupRequest() {}

  explicit JoinResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~JoinResourceGroupRequest() = default;
};
class JoinResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  JoinResourceGroupResponseBody() {}

  explicit JoinResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~JoinResourceGroupResponseBody() = default;
};
class JoinResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<JoinResourceGroupResponseBody> body{};

  JoinResourceGroupResponse() {}

  explicit JoinResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        JoinResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JoinResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~JoinResourceGroupResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusterIds{};
  shared_ptr<string> clusterName{};
  shared_ptr<vector<string>> clusterStates{};
  shared_ptr<vector<string>> clusterTypes{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> paymentTypes{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<Tag>> tags{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterStates) {
      res["ClusterStates"] = boost::any(*clusterStates);
    }
    if (clusterTypes) {
      res["ClusterTypes"] = boost::any(*clusterTypes);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (paymentTypes) {
      res["PaymentTypes"] = boost::any(*paymentTypes);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterStates") != m.end() && !m["ClusterStates"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterStates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterStates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterStates = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClusterTypes") != m.end() && !m["ClusterTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PaymentTypes") != m.end() && !m["PaymentTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PaymentTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PaymentTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paymentTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ClusterSummary>> clusters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<ClusterSummary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ClusterSummary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<ClusterSummary>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListNodeGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> nodeGroupIds{};
  shared_ptr<vector<string>> nodeGroupNames{};
  shared_ptr<vector<string>> nodeGroupStates{};
  shared_ptr<vector<string>> nodeGroupTypes{};
  shared_ptr<string> regionId{};

  ListNodeGroupsRequest() {}

  explicit ListNodeGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (nodeGroupIds) {
      res["NodeGroupIds"] = boost::any(*nodeGroupIds);
    }
    if (nodeGroupNames) {
      res["NodeGroupNames"] = boost::any(*nodeGroupNames);
    }
    if (nodeGroupStates) {
      res["NodeGroupStates"] = boost::any(*nodeGroupStates);
    }
    if (nodeGroupTypes) {
      res["NodeGroupTypes"] = boost::any(*nodeGroupTypes);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("NodeGroupIds") != m.end() && !m["NodeGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeGroupNames") != m.end() && !m["NodeGroupNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeGroupStates") != m.end() && !m["NodeGroupStates"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupStates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupStates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupStates = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeGroupTypes") != m.end() && !m["NodeGroupTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListNodeGroupsRequest() = default;
};
class ListNodeGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<NodeGroup>> nodeGroups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodeGroupsResponseBody() {}

  explicit ListNodeGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (nodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroups"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroups"].type()) {
        vector<NodeGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroups = make_shared<vector<NodeGroup>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListNodeGroupsResponseBody() = default;
};
class ListNodeGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeGroupsResponseBody> body{};

  ListNodeGroupsResponse() {}

  explicit ListNodeGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodeGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeGroupsResponse() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> nodeGroupIds{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<vector<string>> nodeStates{};
  shared_ptr<vector<string>> privateIps{};
  shared_ptr<vector<string>> publicIps{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<Tag>> tags{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (nodeGroupIds) {
      res["NodeGroupIds"] = boost::any(*nodeGroupIds);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (nodeStates) {
      res["NodeStates"] = boost::any(*nodeStates);
    }
    if (privateIps) {
      res["PrivateIps"] = boost::any(*privateIps);
    }
    if (publicIps) {
      res["PublicIps"] = boost::any(*publicIps);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("NodeGroupIds") != m.end() && !m["NodeGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeStates") != m.end() && !m["NodeStates"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeStates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeStates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeStates = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PrivateIps") != m.end() && !m["PrivateIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrivateIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrivateIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privateIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PublicIps") != m.end() && !m["PublicIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PublicIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PublicIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      publicIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<Node>> nodes{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<Node> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Node model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<Node>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListNodesResponseBody() = default;
};
class ListNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesResponse() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<Tag>> tags{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};
  shared_ptr<long> totalCount{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<Tag>> tags{};

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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
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
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKeys{};

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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
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
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
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
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  DecreaseNodesResponse decreaseNodesWithOptions(shared_ptr<DecreaseNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DecreaseNodesResponse decreaseNodes(shared_ptr<DecreaseNodesRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  GetClusterResponse getClusterWithOptions(shared_ptr<GetClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterResponse getCluster(shared_ptr<GetClusterRequest> request);
  GetNodeGroupResponse getNodeGroupWithOptions(shared_ptr<GetNodeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeGroupResponse getNodeGroup(shared_ptr<GetNodeGroupRequest> request);
  GetOperationResponse getOperationWithOptions(shared_ptr<GetOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOperationResponse getOperation(shared_ptr<GetOperationRequest> request);
  IncreaseNodesResponse increaseNodesWithOptions(shared_ptr<IncreaseNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IncreaseNodesResponse increaseNodes(shared_ptr<IncreaseNodesRequest> request);
  JoinResourceGroupResponse joinResourceGroupWithOptions(shared_ptr<JoinResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JoinResourceGroupResponse joinResourceGroup(shared_ptr<JoinResourceGroupRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListNodeGroupsResponse listNodeGroupsWithOptions(shared_ptr<ListNodeGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeGroupsResponse listNodeGroups(shared_ptr<ListNodeGroupsRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Emr20210320

#endif
