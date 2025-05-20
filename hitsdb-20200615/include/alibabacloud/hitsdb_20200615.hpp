// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_HITSDB20200615_H_
#define ALIBABACLOUD_HITSDB20200615_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Hitsdb20200615 {
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CheckLdpsColumnarIndexStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  CheckLdpsColumnarIndexStatusRequest() {}

  explicit CheckLdpsColumnarIndexStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CheckLdpsColumnarIndexStatusRequest() = default;
};
class CheckLdpsColumnarIndexStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> opened{};
  shared_ptr<string> requestId{};

  CheckLdpsColumnarIndexStatusResponseBody() {}

  explicit CheckLdpsColumnarIndexStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (opened) {
      res["Opened"] = boost::any(*opened);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Opened") != m.end() && !m["Opened"].empty()) {
      opened = make_shared<bool>(boost::any_cast<bool>(m["Opened"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckLdpsColumnarIndexStatusResponseBody() = default;
};
class CheckLdpsColumnarIndexStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckLdpsColumnarIndexStatusResponseBody> body{};

  CheckLdpsColumnarIndexStatusResponse() {}

  explicit CheckLdpsColumnarIndexStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckLdpsColumnarIndexStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckLdpsColumnarIndexStatusResponseBody>(model1);
      }
    }
  }


  virtual ~CheckLdpsColumnarIndexStatusResponse() = default;
};
class CreateAutoScalingConfigRequestScaleRuleList : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> observationWindow{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> scaleInStep{};
  shared_ptr<long> scaleOutStep{};
  shared_ptr<long> silenceTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetMetric{};
  shared_ptr<long> targetNodes{};
  shared_ptr<long> thresholdLower{};
  shared_ptr<long> thresholdUpper{};
  shared_ptr<string> triggerCronExpr{};

  CreateAutoScalingConfigRequestScaleRuleList() {}

  explicit CreateAutoScalingConfigRequestScaleRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (observationWindow) {
      res["ObservationWindow"] = boost::any(*observationWindow);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scaleInStep) {
      res["ScaleInStep"] = boost::any(*scaleInStep);
    }
    if (scaleOutStep) {
      res["ScaleOutStep"] = boost::any(*scaleOutStep);
    }
    if (silenceTime) {
      res["SilenceTime"] = boost::any(*silenceTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetMetric) {
      res["TargetMetric"] = boost::any(*targetMetric);
    }
    if (targetNodes) {
      res["TargetNodes"] = boost::any(*targetNodes);
    }
    if (thresholdLower) {
      res["ThresholdLower"] = boost::any(*thresholdLower);
    }
    if (thresholdUpper) {
      res["ThresholdUpper"] = boost::any(*thresholdUpper);
    }
    if (triggerCronExpr) {
      res["TriggerCronExpr"] = boost::any(*triggerCronExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ObservationWindow") != m.end() && !m["ObservationWindow"].empty()) {
      observationWindow = make_shared<long>(boost::any_cast<long>(m["ObservationWindow"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScaleInStep") != m.end() && !m["ScaleInStep"].empty()) {
      scaleInStep = make_shared<long>(boost::any_cast<long>(m["ScaleInStep"]));
    }
    if (m.find("ScaleOutStep") != m.end() && !m["ScaleOutStep"].empty()) {
      scaleOutStep = make_shared<long>(boost::any_cast<long>(m["ScaleOutStep"]));
    }
    if (m.find("SilenceTime") != m.end() && !m["SilenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["SilenceTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetMetric") != m.end() && !m["TargetMetric"].empty()) {
      targetMetric = make_shared<string>(boost::any_cast<string>(m["TargetMetric"]));
    }
    if (m.find("TargetNodes") != m.end() && !m["TargetNodes"].empty()) {
      targetNodes = make_shared<long>(boost::any_cast<long>(m["TargetNodes"]));
    }
    if (m.find("ThresholdLower") != m.end() && !m["ThresholdLower"].empty()) {
      thresholdLower = make_shared<long>(boost::any_cast<long>(m["ThresholdLower"]));
    }
    if (m.find("ThresholdUpper") != m.end() && !m["ThresholdUpper"].empty()) {
      thresholdUpper = make_shared<long>(boost::any_cast<long>(m["ThresholdUpper"]));
    }
    if (m.find("TriggerCronExpr") != m.end() && !m["TriggerCronExpr"].empty()) {
      triggerCronExpr = make_shared<string>(boost::any_cast<string>(m["TriggerCronExpr"]));
    }
  }


  virtual ~CreateAutoScalingConfigRequestScaleRuleList() = default;
};
class CreateAutoScalingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> effectiveTimeEnd{};
  shared_ptr<string> effectiveTimeStart{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodesMax{};
  shared_ptr<long> nodesMin{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<CreateAutoScalingConfigRequestScaleRuleList>> scaleRuleList{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> specId{};

  CreateAutoScalingConfigRequest() {}

  explicit CreateAutoScalingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (effectiveTimeEnd) {
      res["EffectiveTimeEnd"] = boost::any(*effectiveTimeEnd);
    }
    if (effectiveTimeStart) {
      res["EffectiveTimeStart"] = boost::any(*effectiveTimeStart);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodesMax) {
      res["NodesMax"] = boost::any(*nodesMax);
    }
    if (nodesMin) {
      res["NodesMin"] = boost::any(*nodesMin);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scaleRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*scaleRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleRuleList"] = boost::any(temp1);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("EffectiveTimeEnd") != m.end() && !m["EffectiveTimeEnd"].empty()) {
      effectiveTimeEnd = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeEnd"]));
    }
    if (m.find("EffectiveTimeStart") != m.end() && !m["EffectiveTimeStart"].empty()) {
      effectiveTimeStart = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeStart"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodesMax") != m.end() && !m["NodesMax"].empty()) {
      nodesMax = make_shared<long>(boost::any_cast<long>(m["NodesMax"]));
    }
    if (m.find("NodesMin") != m.end() && !m["NodesMin"].empty()) {
      nodesMin = make_shared<long>(boost::any_cast<long>(m["NodesMin"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScaleRuleList") != m.end() && !m["ScaleRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleRuleList"].type()) {
        vector<CreateAutoScalingConfigRequestScaleRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAutoScalingConfigRequestScaleRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleRuleList = make_shared<vector<CreateAutoScalingConfigRequestScaleRuleList>>(expect1);
      }
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
  }


  virtual ~CreateAutoScalingConfigRequest() = default;
};
class CreateAutoScalingConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> effectiveTimeEnd{};
  shared_ptr<string> effectiveTimeStart{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodesMax{};
  shared_ptr<long> nodesMin{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scaleRuleListShrink{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> specId{};

  CreateAutoScalingConfigShrinkRequest() {}

  explicit CreateAutoScalingConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (effectiveTimeEnd) {
      res["EffectiveTimeEnd"] = boost::any(*effectiveTimeEnd);
    }
    if (effectiveTimeStart) {
      res["EffectiveTimeStart"] = boost::any(*effectiveTimeStart);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodesMax) {
      res["NodesMax"] = boost::any(*nodesMax);
    }
    if (nodesMin) {
      res["NodesMin"] = boost::any(*nodesMin);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scaleRuleListShrink) {
      res["ScaleRuleList"] = boost::any(*scaleRuleListShrink);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("EffectiveTimeEnd") != m.end() && !m["EffectiveTimeEnd"].empty()) {
      effectiveTimeEnd = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeEnd"]));
    }
    if (m.find("EffectiveTimeStart") != m.end() && !m["EffectiveTimeStart"].empty()) {
      effectiveTimeStart = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeStart"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodesMax") != m.end() && !m["NodesMax"].empty()) {
      nodesMax = make_shared<long>(boost::any_cast<long>(m["NodesMax"]));
    }
    if (m.find("NodesMin") != m.end() && !m["NodesMin"].empty()) {
      nodesMin = make_shared<long>(boost::any_cast<long>(m["NodesMin"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScaleRuleList") != m.end() && !m["ScaleRuleList"].empty()) {
      scaleRuleListShrink = make_shared<string>(boost::any_cast<string>(m["ScaleRuleList"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
  }


  virtual ~CreateAutoScalingConfigShrinkRequest() = default;
};
class CreateAutoScalingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAutoScalingConfigResponseBody() {}

  explicit CreateAutoScalingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateAutoScalingConfigResponseBody() = default;
};
class CreateAutoScalingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAutoScalingConfigResponseBody> body{};

  CreateAutoScalingConfigResponse() {}

  explicit CreateAutoScalingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAutoScalingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAutoScalingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAutoScalingConfigResponse() = default;
};
class CreateAutoScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> observationWindow{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> scaleInStep{};
  shared_ptr<long> scaleOutStep{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> silenceTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetMetric{};
  shared_ptr<long> targetNodes{};
  shared_ptr<long> thresholdLower{};
  shared_ptr<long> thresholdUpper{};
  shared_ptr<string> triggerCronExpr{};

  CreateAutoScalingRuleRequest() {}

  explicit CreateAutoScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (observationWindow) {
      res["ObservationWindow"] = boost::any(*observationWindow);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scaleInStep) {
      res["ScaleInStep"] = boost::any(*scaleInStep);
    }
    if (scaleOutStep) {
      res["ScaleOutStep"] = boost::any(*scaleOutStep);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (silenceTime) {
      res["SilenceTime"] = boost::any(*silenceTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetMetric) {
      res["TargetMetric"] = boost::any(*targetMetric);
    }
    if (targetNodes) {
      res["TargetNodes"] = boost::any(*targetNodes);
    }
    if (thresholdLower) {
      res["ThresholdLower"] = boost::any(*thresholdLower);
    }
    if (thresholdUpper) {
      res["ThresholdUpper"] = boost::any(*thresholdUpper);
    }
    if (triggerCronExpr) {
      res["TriggerCronExpr"] = boost::any(*triggerCronExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ObservationWindow") != m.end() && !m["ObservationWindow"].empty()) {
      observationWindow = make_shared<long>(boost::any_cast<long>(m["ObservationWindow"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScaleInStep") != m.end() && !m["ScaleInStep"].empty()) {
      scaleInStep = make_shared<long>(boost::any_cast<long>(m["ScaleInStep"]));
    }
    if (m.find("ScaleOutStep") != m.end() && !m["ScaleOutStep"].empty()) {
      scaleOutStep = make_shared<long>(boost::any_cast<long>(m["ScaleOutStep"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SilenceTime") != m.end() && !m["SilenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["SilenceTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetMetric") != m.end() && !m["TargetMetric"].empty()) {
      targetMetric = make_shared<string>(boost::any_cast<string>(m["TargetMetric"]));
    }
    if (m.find("TargetNodes") != m.end() && !m["TargetNodes"].empty()) {
      targetNodes = make_shared<long>(boost::any_cast<long>(m["TargetNodes"]));
    }
    if (m.find("ThresholdLower") != m.end() && !m["ThresholdLower"].empty()) {
      thresholdLower = make_shared<long>(boost::any_cast<long>(m["ThresholdLower"]));
    }
    if (m.find("ThresholdUpper") != m.end() && !m["ThresholdUpper"].empty()) {
      thresholdUpper = make_shared<long>(boost::any_cast<long>(m["ThresholdUpper"]));
    }
    if (m.find("TriggerCronExpr") != m.end() && !m["TriggerCronExpr"].empty()) {
      triggerCronExpr = make_shared<string>(boost::any_cast<string>(m["TriggerCronExpr"]));
    }
  }


  virtual ~CreateAutoScalingRuleRequest() = default;
};
class CreateAutoScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAutoScalingRuleResponseBody() {}

  explicit CreateAutoScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateAutoScalingRuleResponseBody() = default;
};
class CreateAutoScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAutoScalingRuleResponseBody> body{};

  CreateAutoScalingRuleResponse() {}

  explicit CreateAutoScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAutoScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAutoScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAutoScalingRuleResponse() = default;
};
class CreateLdpsComputeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> properties{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  CreateLdpsComputeGroupRequest() {}

  explicit CreateLdpsComputeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateLdpsComputeGroupRequest() = default;
};
class CreateLdpsComputeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  CreateLdpsComputeGroupResponseBody() {}

  explicit CreateLdpsComputeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLdpsComputeGroupResponseBody() = default;
};
class CreateLdpsComputeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLdpsComputeGroupResponseBody> body{};

  CreateLdpsComputeGroupResponse() {}

  explicit CreateLdpsComputeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLdpsComputeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLdpsComputeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLdpsComputeGroupResponse() = default;
};
class CreateLindormInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateLindormInstanceRequestTag() {}

  explicit CreateLindormInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLindormInstanceRequestTag() = default;
};
class CreateLindormInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> arbiterVSwitchId{};
  shared_ptr<string> arbiterZoneId{};
  shared_ptr<string> archVersion{};
  shared_ptr<string> autoRenewDuration{};
  shared_ptr<bool> autoRenewal{};
  shared_ptr<long> coldStorage{};
  shared_ptr<long> coreSingleStorage{};
  shared_ptr<string> coreSpec{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> duration{};
  shared_ptr<long> filestoreNum{};
  shared_ptr<string> filestoreSpec{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> instanceStorage{};
  shared_ptr<long> lindormNum{};
  shared_ptr<string> lindormSpec{};
  shared_ptr<string> logDiskCategory{};
  shared_ptr<long> logNum{};
  shared_ptr<long> logSingleStorage{};
  shared_ptr<string> logSpec{};
  shared_ptr<string> ltsNum{};
  shared_ptr<string> ltsSpec{};
  shared_ptr<string> multiZoneCombination{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> primaryVSwitchId{};
  shared_ptr<string> primaryZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> solrNum{};
  shared_ptr<string> solrSpec{};
  shared_ptr<string> standbyVSwitchId{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<long> streamNum{};
  shared_ptr<string> streamSpec{};
  shared_ptr<vector<CreateLindormInstanceRequestTag>> tag{};
  shared_ptr<long> tsdbNum{};
  shared_ptr<string> tsdbSpec{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateLindormInstanceRequest() {}

  explicit CreateLindormInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arbiterVSwitchId) {
      res["ArbiterVSwitchId"] = boost::any(*arbiterVSwitchId);
    }
    if (arbiterZoneId) {
      res["ArbiterZoneId"] = boost::any(*arbiterZoneId);
    }
    if (archVersion) {
      res["ArchVersion"] = boost::any(*archVersion);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (coldStorage) {
      res["ColdStorage"] = boost::any(*coldStorage);
    }
    if (coreSingleStorage) {
      res["CoreSingleStorage"] = boost::any(*coreSingleStorage);
    }
    if (coreSpec) {
      res["CoreSpec"] = boost::any(*coreSpec);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (filestoreNum) {
      res["FilestoreNum"] = boost::any(*filestoreNum);
    }
    if (filestoreSpec) {
      res["FilestoreSpec"] = boost::any(*filestoreSpec);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (instanceStorage) {
      res["InstanceStorage"] = boost::any(*instanceStorage);
    }
    if (lindormNum) {
      res["LindormNum"] = boost::any(*lindormNum);
    }
    if (lindormSpec) {
      res["LindormSpec"] = boost::any(*lindormSpec);
    }
    if (logDiskCategory) {
      res["LogDiskCategory"] = boost::any(*logDiskCategory);
    }
    if (logNum) {
      res["LogNum"] = boost::any(*logNum);
    }
    if (logSingleStorage) {
      res["LogSingleStorage"] = boost::any(*logSingleStorage);
    }
    if (logSpec) {
      res["LogSpec"] = boost::any(*logSpec);
    }
    if (ltsNum) {
      res["LtsNum"] = boost::any(*ltsNum);
    }
    if (ltsSpec) {
      res["LtsSpec"] = boost::any(*ltsSpec);
    }
    if (multiZoneCombination) {
      res["MultiZoneCombination"] = boost::any(*multiZoneCombination);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (primaryVSwitchId) {
      res["PrimaryVSwitchId"] = boost::any(*primaryVSwitchId);
    }
    if (primaryZoneId) {
      res["PrimaryZoneId"] = boost::any(*primaryZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (solrNum) {
      res["SolrNum"] = boost::any(*solrNum);
    }
    if (solrSpec) {
      res["SolrSpec"] = boost::any(*solrSpec);
    }
    if (standbyVSwitchId) {
      res["StandbyVSwitchId"] = boost::any(*standbyVSwitchId);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (streamNum) {
      res["StreamNum"] = boost::any(*streamNum);
    }
    if (streamSpec) {
      res["StreamSpec"] = boost::any(*streamSpec);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (tsdbNum) {
      res["TsdbNum"] = boost::any(*tsdbNum);
    }
    if (tsdbSpec) {
      res["TsdbSpec"] = boost::any(*tsdbSpec);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArbiterVSwitchId") != m.end() && !m["ArbiterVSwitchId"].empty()) {
      arbiterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchId"]));
    }
    if (m.find("ArbiterZoneId") != m.end() && !m["ArbiterZoneId"].empty()) {
      arbiterZoneId = make_shared<string>(boost::any_cast<string>(m["ArbiterZoneId"]));
    }
    if (m.find("ArchVersion") != m.end() && !m["ArchVersion"].empty()) {
      archVersion = make_shared<string>(boost::any_cast<string>(m["ArchVersion"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<string>(boost::any_cast<string>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("ColdStorage") != m.end() && !m["ColdStorage"].empty()) {
      coldStorage = make_shared<long>(boost::any_cast<long>(m["ColdStorage"]));
    }
    if (m.find("CoreSingleStorage") != m.end() && !m["CoreSingleStorage"].empty()) {
      coreSingleStorage = make_shared<long>(boost::any_cast<long>(m["CoreSingleStorage"]));
    }
    if (m.find("CoreSpec") != m.end() && !m["CoreSpec"].empty()) {
      coreSpec = make_shared<string>(boost::any_cast<string>(m["CoreSpec"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FilestoreNum") != m.end() && !m["FilestoreNum"].empty()) {
      filestoreNum = make_shared<long>(boost::any_cast<long>(m["FilestoreNum"]));
    }
    if (m.find("FilestoreSpec") != m.end() && !m["FilestoreSpec"].empty()) {
      filestoreSpec = make_shared<string>(boost::any_cast<string>(m["FilestoreSpec"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("InstanceStorage") != m.end() && !m["InstanceStorage"].empty()) {
      instanceStorage = make_shared<string>(boost::any_cast<string>(m["InstanceStorage"]));
    }
    if (m.find("LindormNum") != m.end() && !m["LindormNum"].empty()) {
      lindormNum = make_shared<long>(boost::any_cast<long>(m["LindormNum"]));
    }
    if (m.find("LindormSpec") != m.end() && !m["LindormSpec"].empty()) {
      lindormSpec = make_shared<string>(boost::any_cast<string>(m["LindormSpec"]));
    }
    if (m.find("LogDiskCategory") != m.end() && !m["LogDiskCategory"].empty()) {
      logDiskCategory = make_shared<string>(boost::any_cast<string>(m["LogDiskCategory"]));
    }
    if (m.find("LogNum") != m.end() && !m["LogNum"].empty()) {
      logNum = make_shared<long>(boost::any_cast<long>(m["LogNum"]));
    }
    if (m.find("LogSingleStorage") != m.end() && !m["LogSingleStorage"].empty()) {
      logSingleStorage = make_shared<long>(boost::any_cast<long>(m["LogSingleStorage"]));
    }
    if (m.find("LogSpec") != m.end() && !m["LogSpec"].empty()) {
      logSpec = make_shared<string>(boost::any_cast<string>(m["LogSpec"]));
    }
    if (m.find("LtsNum") != m.end() && !m["LtsNum"].empty()) {
      ltsNum = make_shared<string>(boost::any_cast<string>(m["LtsNum"]));
    }
    if (m.find("LtsSpec") != m.end() && !m["LtsSpec"].empty()) {
      ltsSpec = make_shared<string>(boost::any_cast<string>(m["LtsSpec"]));
    }
    if (m.find("MultiZoneCombination") != m.end() && !m["MultiZoneCombination"].empty()) {
      multiZoneCombination = make_shared<string>(boost::any_cast<string>(m["MultiZoneCombination"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("PrimaryVSwitchId") != m.end() && !m["PrimaryVSwitchId"].empty()) {
      primaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchId"]));
    }
    if (m.find("PrimaryZoneId") != m.end() && !m["PrimaryZoneId"].empty()) {
      primaryZoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SolrNum") != m.end() && !m["SolrNum"].empty()) {
      solrNum = make_shared<long>(boost::any_cast<long>(m["SolrNum"]));
    }
    if (m.find("SolrSpec") != m.end() && !m["SolrSpec"].empty()) {
      solrSpec = make_shared<string>(boost::any_cast<string>(m["SolrSpec"]));
    }
    if (m.find("StandbyVSwitchId") != m.end() && !m["StandbyVSwitchId"].empty()) {
      standbyVSwitchId = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchId"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("StreamNum") != m.end() && !m["StreamNum"].empty()) {
      streamNum = make_shared<long>(boost::any_cast<long>(m["StreamNum"]));
    }
    if (m.find("StreamSpec") != m.end() && !m["StreamSpec"].empty()) {
      streamSpec = make_shared<string>(boost::any_cast<string>(m["StreamSpec"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateLindormInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLindormInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateLindormInstanceRequestTag>>(expect1);
      }
    }
    if (m.find("TsdbNum") != m.end() && !m["TsdbNum"].empty()) {
      tsdbNum = make_shared<long>(boost::any_cast<long>(m["TsdbNum"]));
    }
    if (m.find("TsdbSpec") != m.end() && !m["TsdbSpec"].empty()) {
      tsdbSpec = make_shared<string>(boost::any_cast<string>(m["TsdbSpec"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateLindormInstanceRequest() = default;
};
class CreateLindormInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateLindormInstanceResponseBody() {}

  explicit CreateLindormInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLindormInstanceResponseBody() = default;
};
class CreateLindormInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLindormInstanceResponseBody> body{};

  CreateLindormInstanceResponse() {}

  explicit CreateLindormInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLindormInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLindormInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLindormInstanceResponse() = default;
};
class CreateLindormV2InstanceRequestEngineListNodeGroupList : public Darabonba::Model {
public:
  shared_ptr<long> nodeCount{};
  shared_ptr<long> nodeDiskSize{};
  shared_ptr<string> nodeDiskType{};
  shared_ptr<string> nodeSpec{};
  shared_ptr<string> resourceGroupName{};

  CreateLindormV2InstanceRequestEngineListNodeGroupList() {}

  explicit CreateLindormV2InstanceRequestEngineListNodeGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeDiskSize) {
      res["NodeDiskSize"] = boost::any(*nodeDiskSize);
    }
    if (nodeDiskType) {
      res["NodeDiskType"] = boost::any(*nodeDiskType);
    }
    if (nodeSpec) {
      res["NodeSpec"] = boost::any(*nodeSpec);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeDiskSize") != m.end() && !m["NodeDiskSize"].empty()) {
      nodeDiskSize = make_shared<long>(boost::any_cast<long>(m["NodeDiskSize"]));
    }
    if (m.find("NodeDiskType") != m.end() && !m["NodeDiskType"].empty()) {
      nodeDiskType = make_shared<string>(boost::any_cast<string>(m["NodeDiskType"]));
    }
    if (m.find("NodeSpec") != m.end() && !m["NodeSpec"].empty()) {
      nodeSpec = make_shared<string>(boost::any_cast<string>(m["NodeSpec"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~CreateLindormV2InstanceRequestEngineListNodeGroupList() = default;
};
class CreateLindormV2InstanceRequestEngineList : public Darabonba::Model {
public:
  shared_ptr<string> engineType{};
  shared_ptr<vector<CreateLindormV2InstanceRequestEngineListNodeGroupList>> nodeGroupList{};

  CreateLindormV2InstanceRequestEngineList() {}

  explicit CreateLindormV2InstanceRequestEngineList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (nodeGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroupList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("NodeGroupList") != m.end() && !m["NodeGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroupList"].type()) {
        vector<CreateLindormV2InstanceRequestEngineListNodeGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLindormV2InstanceRequestEngineListNodeGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroupList = make_shared<vector<CreateLindormV2InstanceRequestEngineListNodeGroupList>>(expect1);
      }
    }
  }


  virtual ~CreateLindormV2InstanceRequestEngineList() = default;
};
class CreateLindormV2InstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> arbiterVSwitchId{};
  shared_ptr<string> arbiterZoneId{};
  shared_ptr<string> archVersion{};
  shared_ptr<string> autoRenewDuration{};
  shared_ptr<bool> autoRenewal{};
  shared_ptr<long> capacityStorageSize{};
  shared_ptr<long> cloudStorageSize{};
  shared_ptr<string> cloudStorageType{};
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterPattern{};
  shared_ptr<long> duration{};
  shared_ptr<bool> enableCapacityStorage{};
  shared_ptr<vector<CreateLindormV2InstanceRequestEngineList>> engineList{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> primaryVSwitchId{};
  shared_ptr<string> primaryZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> standbyVSwitchId{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateLindormV2InstanceRequest() {}

  explicit CreateLindormV2InstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arbiterVSwitchId) {
      res["ArbiterVSwitchId"] = boost::any(*arbiterVSwitchId);
    }
    if (arbiterZoneId) {
      res["ArbiterZoneId"] = boost::any(*arbiterZoneId);
    }
    if (archVersion) {
      res["ArchVersion"] = boost::any(*archVersion);
    }
    if (autoRenewDuration) {
      res["AutoRenewDuration"] = boost::any(*autoRenewDuration);
    }
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (capacityStorageSize) {
      res["CapacityStorageSize"] = boost::any(*capacityStorageSize);
    }
    if (cloudStorageSize) {
      res["CloudStorageSize"] = boost::any(*cloudStorageSize);
    }
    if (cloudStorageType) {
      res["CloudStorageType"] = boost::any(*cloudStorageType);
    }
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterPattern) {
      res["ClusterPattern"] = boost::any(*clusterPattern);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (enableCapacityStorage) {
      res["EnableCapacityStorage"] = boost::any(*enableCapacityStorage);
    }
    if (engineList) {
      vector<boost::any> temp1;
      for(auto item1:*engineList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EngineList"] = boost::any(temp1);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (primaryVSwitchId) {
      res["PrimaryVSwitchId"] = boost::any(*primaryVSwitchId);
    }
    if (primaryZoneId) {
      res["PrimaryZoneId"] = boost::any(*primaryZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (standbyVSwitchId) {
      res["StandbyVSwitchId"] = boost::any(*standbyVSwitchId);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArbiterVSwitchId") != m.end() && !m["ArbiterVSwitchId"].empty()) {
      arbiterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchId"]));
    }
    if (m.find("ArbiterZoneId") != m.end() && !m["ArbiterZoneId"].empty()) {
      arbiterZoneId = make_shared<string>(boost::any_cast<string>(m["ArbiterZoneId"]));
    }
    if (m.find("ArchVersion") != m.end() && !m["ArchVersion"].empty()) {
      archVersion = make_shared<string>(boost::any_cast<string>(m["ArchVersion"]));
    }
    if (m.find("AutoRenewDuration") != m.end() && !m["AutoRenewDuration"].empty()) {
      autoRenewDuration = make_shared<string>(boost::any_cast<string>(m["AutoRenewDuration"]));
    }
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("CapacityStorageSize") != m.end() && !m["CapacityStorageSize"].empty()) {
      capacityStorageSize = make_shared<long>(boost::any_cast<long>(m["CapacityStorageSize"]));
    }
    if (m.find("CloudStorageSize") != m.end() && !m["CloudStorageSize"].empty()) {
      cloudStorageSize = make_shared<long>(boost::any_cast<long>(m["CloudStorageSize"]));
    }
    if (m.find("CloudStorageType") != m.end() && !m["CloudStorageType"].empty()) {
      cloudStorageType = make_shared<string>(boost::any_cast<string>(m["CloudStorageType"]));
    }
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterPattern") != m.end() && !m["ClusterPattern"].empty()) {
      clusterPattern = make_shared<string>(boost::any_cast<string>(m["ClusterPattern"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EnableCapacityStorage") != m.end() && !m["EnableCapacityStorage"].empty()) {
      enableCapacityStorage = make_shared<bool>(boost::any_cast<bool>(m["EnableCapacityStorage"]));
    }
    if (m.find("EngineList") != m.end() && !m["EngineList"].empty()) {
      if (typeid(vector<boost::any>) == m["EngineList"].type()) {
        vector<CreateLindormV2InstanceRequestEngineList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EngineList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLindormV2InstanceRequestEngineList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engineList = make_shared<vector<CreateLindormV2InstanceRequestEngineList>>(expect1);
      }
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("PrimaryVSwitchId") != m.end() && !m["PrimaryVSwitchId"].empty()) {
      primaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchId"]));
    }
    if (m.find("PrimaryZoneId") != m.end() && !m["PrimaryZoneId"].empty()) {
      primaryZoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StandbyVSwitchId") != m.end() && !m["StandbyVSwitchId"].empty()) {
      standbyVSwitchId = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchId"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateLindormV2InstanceRequest() = default;
};
class CreateLindormV2InstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateLindormV2InstanceResponseBody() {}

  explicit CreateLindormV2InstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLindormV2InstanceResponseBody() = default;
};
class CreateLindormV2InstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLindormV2InstanceResponseBody> body{};

  CreateLindormV2InstanceResponse() {}

  explicit CreateLindormV2InstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLindormV2InstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLindormV2InstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLindormV2InstanceResponse() = default;
};
class DeleteAutoScalingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DeleteAutoScalingConfigRequest() {}

  explicit DeleteAutoScalingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteAutoScalingConfigRequest() = default;
};
class DeleteAutoScalingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAutoScalingConfigResponseBody() {}

  explicit DeleteAutoScalingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeleteAutoScalingConfigResponseBody() = default;
};
class DeleteAutoScalingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAutoScalingConfigResponseBody> body{};

  DeleteAutoScalingConfigResponse() {}

  explicit DeleteAutoScalingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAutoScalingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutoScalingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutoScalingConfigResponse() = default;
};
class DeleteAutoScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> securityToken{};

  DeleteAutoScalingRuleRequest() {}

  explicit DeleteAutoScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteAutoScalingRuleRequest() = default;
};
class DeleteAutoScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAutoScalingRuleResponseBody() {}

  explicit DeleteAutoScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeleteAutoScalingRuleResponseBody() = default;
};
class DeleteAutoScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAutoScalingRuleResponseBody> body{};

  DeleteAutoScalingRuleResponse() {}

  explicit DeleteAutoScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAutoScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutoScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutoScalingRuleResponse() = default;
};
class DeleteCustomResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DeleteCustomResourceRequest() {}

  explicit DeleteCustomResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteCustomResourceRequest() = default;
};
class DeleteCustomResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCustomResourceResponseBody() {}

  explicit DeleteCustomResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCustomResourceResponseBody() = default;
};
class DeleteCustomResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCustomResourceResponseBody> body{};

  DeleteCustomResourceResponse() {}

  explicit DeleteCustomResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCustomResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCustomResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCustomResourceResponse() = default;
};
class DeleteLdpsComputeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DeleteLdpsComputeGroupRequest() {}

  explicit DeleteLdpsComputeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteLdpsComputeGroupRequest() = default;
};
class DeleteLdpsComputeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  DeleteLdpsComputeGroupResponseBody() {}

  explicit DeleteLdpsComputeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteLdpsComputeGroupResponseBody() = default;
};
class DeleteLdpsComputeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLdpsComputeGroupResponseBody> body{};

  DeleteLdpsComputeGroupResponse() {}

  explicit DeleteLdpsComputeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLdpsComputeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLdpsComputeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLdpsComputeGroupResponse() = default;
};
class DeployLdpsSemiManagedComponentRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DeployLdpsSemiManagedComponentRequest() {}

  explicit DeployLdpsSemiManagedComponentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeployLdpsSemiManagedComponentRequest() = default;
};
class DeployLdpsSemiManagedComponentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployLdpsSemiManagedComponentResponseBody() {}

  explicit DeployLdpsSemiManagedComponentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployLdpsSemiManagedComponentResponseBody() = default;
};
class DeployLdpsSemiManagedComponentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployLdpsSemiManagedComponentResponseBody> body{};

  DeployLdpsSemiManagedComponentResponse() {}

  explicit DeployLdpsSemiManagedComponentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployLdpsSemiManagedComponentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployLdpsSemiManagedComponentResponseBody>(model1);
      }
    }
  }


  virtual ~DeployLdpsSemiManagedComponentResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class GetAutoScalingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetAutoScalingConfigRequest() {}

  explicit GetAutoScalingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetAutoScalingConfigRequest() = default;
};
class GetAutoScalingConfigResponseBodyDataScaleRuleList : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> observationWindow{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> scaleInStep{};
  shared_ptr<long> scaleOutStep{};
  shared_ptr<long> silenceTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetMetric{};
  shared_ptr<long> targetNodes{};
  shared_ptr<long> thresholdLower{};
  shared_ptr<long> thresholdUpper{};
  shared_ptr<string> triggerCronExpr{};

  GetAutoScalingConfigResponseBodyDataScaleRuleList() {}

  explicit GetAutoScalingConfigResponseBodyDataScaleRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (observationWindow) {
      res["ObservationWindow"] = boost::any(*observationWindow);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scaleInStep) {
      res["ScaleInStep"] = boost::any(*scaleInStep);
    }
    if (scaleOutStep) {
      res["ScaleOutStep"] = boost::any(*scaleOutStep);
    }
    if (silenceTime) {
      res["SilenceTime"] = boost::any(*silenceTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetMetric) {
      res["TargetMetric"] = boost::any(*targetMetric);
    }
    if (targetNodes) {
      res["TargetNodes"] = boost::any(*targetNodes);
    }
    if (thresholdLower) {
      res["ThresholdLower"] = boost::any(*thresholdLower);
    }
    if (thresholdUpper) {
      res["ThresholdUpper"] = boost::any(*thresholdUpper);
    }
    if (triggerCronExpr) {
      res["TriggerCronExpr"] = boost::any(*triggerCronExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ObservationWindow") != m.end() && !m["ObservationWindow"].empty()) {
      observationWindow = make_shared<long>(boost::any_cast<long>(m["ObservationWindow"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScaleInStep") != m.end() && !m["ScaleInStep"].empty()) {
      scaleInStep = make_shared<long>(boost::any_cast<long>(m["ScaleInStep"]));
    }
    if (m.find("ScaleOutStep") != m.end() && !m["ScaleOutStep"].empty()) {
      scaleOutStep = make_shared<long>(boost::any_cast<long>(m["ScaleOutStep"]));
    }
    if (m.find("SilenceTime") != m.end() && !m["SilenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["SilenceTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetMetric") != m.end() && !m["TargetMetric"].empty()) {
      targetMetric = make_shared<string>(boost::any_cast<string>(m["TargetMetric"]));
    }
    if (m.find("TargetNodes") != m.end() && !m["TargetNodes"].empty()) {
      targetNodes = make_shared<long>(boost::any_cast<long>(m["TargetNodes"]));
    }
    if (m.find("ThresholdLower") != m.end() && !m["ThresholdLower"].empty()) {
      thresholdLower = make_shared<long>(boost::any_cast<long>(m["ThresholdLower"]));
    }
    if (m.find("ThresholdUpper") != m.end() && !m["ThresholdUpper"].empty()) {
      thresholdUpper = make_shared<long>(boost::any_cast<long>(m["ThresholdUpper"]));
    }
    if (m.find("TriggerCronExpr") != m.end() && !m["TriggerCronExpr"].empty()) {
      triggerCronExpr = make_shared<string>(boost::any_cast<string>(m["TriggerCronExpr"]));
    }
  }


  virtual ~GetAutoScalingConfigResponseBodyDataScaleRuleList() = default;
};
class GetAutoScalingConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> configName{};
  shared_ptr<string> effectiveTimeEnd{};
  shared_ptr<string> effectiveTimeStart{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodesMax{};
  shared_ptr<long> nodesMin{};
  shared_ptr<vector<GetAutoScalingConfigResponseBodyDataScaleRuleList>> scaleRuleList{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> specId{};

  GetAutoScalingConfigResponseBodyData() {}

  explicit GetAutoScalingConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (effectiveTimeEnd) {
      res["EffectiveTimeEnd"] = boost::any(*effectiveTimeEnd);
    }
    if (effectiveTimeStart) {
      res["EffectiveTimeStart"] = boost::any(*effectiveTimeStart);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodesMax) {
      res["NodesMax"] = boost::any(*nodesMax);
    }
    if (nodesMin) {
      res["NodesMin"] = boost::any(*nodesMin);
    }
    if (scaleRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*scaleRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleRuleList"] = boost::any(temp1);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("EffectiveTimeEnd") != m.end() && !m["EffectiveTimeEnd"].empty()) {
      effectiveTimeEnd = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeEnd"]));
    }
    if (m.find("EffectiveTimeStart") != m.end() && !m["EffectiveTimeStart"].empty()) {
      effectiveTimeStart = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeStart"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodesMax") != m.end() && !m["NodesMax"].empty()) {
      nodesMax = make_shared<long>(boost::any_cast<long>(m["NodesMax"]));
    }
    if (m.find("NodesMin") != m.end() && !m["NodesMin"].empty()) {
      nodesMin = make_shared<long>(boost::any_cast<long>(m["NodesMin"]));
    }
    if (m.find("ScaleRuleList") != m.end() && !m["ScaleRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleRuleList"].type()) {
        vector<GetAutoScalingConfigResponseBodyDataScaleRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAutoScalingConfigResponseBodyDataScaleRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleRuleList = make_shared<vector<GetAutoScalingConfigResponseBodyDataScaleRuleList>>(expect1);
      }
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
  }


  virtual ~GetAutoScalingConfigResponseBodyData() = default;
};
class GetAutoScalingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetAutoScalingConfigResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAutoScalingConfigResponseBody() {}

  explicit GetAutoScalingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAutoScalingConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAutoScalingConfigResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetAutoScalingConfigResponseBody() = default;
};
class GetAutoScalingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAutoScalingConfigResponseBody> body{};

  GetAutoScalingConfigResponse() {}

  explicit GetAutoScalingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoScalingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoScalingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoScalingConfigResponse() = default;
};
class GetAutoScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> securityToken{};

  GetAutoScalingRuleRequest() {}

  explicit GetAutoScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetAutoScalingRuleRequest() = default;
};
class GetAutoScalingRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> observationWindow{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> scaleInStep{};
  shared_ptr<long> scaleOutStep{};
  shared_ptr<long> silenceTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetMetric{};
  shared_ptr<long> targetNodes{};
  shared_ptr<long> thresholdLower{};
  shared_ptr<long> thresholdUpper{};
  shared_ptr<string> triggerCronExpr{};

  GetAutoScalingRuleResponseBodyData() {}

  explicit GetAutoScalingRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (observationWindow) {
      res["ObservationWindow"] = boost::any(*observationWindow);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scaleInStep) {
      res["ScaleInStep"] = boost::any(*scaleInStep);
    }
    if (scaleOutStep) {
      res["ScaleOutStep"] = boost::any(*scaleOutStep);
    }
    if (silenceTime) {
      res["SilenceTime"] = boost::any(*silenceTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetMetric) {
      res["TargetMetric"] = boost::any(*targetMetric);
    }
    if (targetNodes) {
      res["TargetNodes"] = boost::any(*targetNodes);
    }
    if (thresholdLower) {
      res["ThresholdLower"] = boost::any(*thresholdLower);
    }
    if (thresholdUpper) {
      res["ThresholdUpper"] = boost::any(*thresholdUpper);
    }
    if (triggerCronExpr) {
      res["TriggerCronExpr"] = boost::any(*triggerCronExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ObservationWindow") != m.end() && !m["ObservationWindow"].empty()) {
      observationWindow = make_shared<long>(boost::any_cast<long>(m["ObservationWindow"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScaleInStep") != m.end() && !m["ScaleInStep"].empty()) {
      scaleInStep = make_shared<long>(boost::any_cast<long>(m["ScaleInStep"]));
    }
    if (m.find("ScaleOutStep") != m.end() && !m["ScaleOutStep"].empty()) {
      scaleOutStep = make_shared<long>(boost::any_cast<long>(m["ScaleOutStep"]));
    }
    if (m.find("SilenceTime") != m.end() && !m["SilenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["SilenceTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetMetric") != m.end() && !m["TargetMetric"].empty()) {
      targetMetric = make_shared<string>(boost::any_cast<string>(m["TargetMetric"]));
    }
    if (m.find("TargetNodes") != m.end() && !m["TargetNodes"].empty()) {
      targetNodes = make_shared<long>(boost::any_cast<long>(m["TargetNodes"]));
    }
    if (m.find("ThresholdLower") != m.end() && !m["ThresholdLower"].empty()) {
      thresholdLower = make_shared<long>(boost::any_cast<long>(m["ThresholdLower"]));
    }
    if (m.find("ThresholdUpper") != m.end() && !m["ThresholdUpper"].empty()) {
      thresholdUpper = make_shared<long>(boost::any_cast<long>(m["ThresholdUpper"]));
    }
    if (m.find("TriggerCronExpr") != m.end() && !m["TriggerCronExpr"].empty()) {
      triggerCronExpr = make_shared<string>(boost::any_cast<string>(m["TriggerCronExpr"]));
    }
  }


  virtual ~GetAutoScalingRuleResponseBodyData() = default;
};
class GetAutoScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetAutoScalingRuleResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAutoScalingRuleResponseBody() {}

  explicit GetAutoScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAutoScalingRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAutoScalingRuleResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetAutoScalingRuleResponseBody() = default;
};
class GetAutoScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAutoScalingRuleResponseBody> body{};

  GetAutoScalingRuleResponse() {}

  explicit GetAutoScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoScalingRuleResponse() = default;
};
class GetClientSourceIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetClientSourceIpRequest() {}

  explicit GetClientSourceIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetClientSourceIpRequest() = default;
};
class GetClientSourceIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> requestId{};

  GetClientSourceIpResponseBody() {}

  explicit GetClientSourceIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetClientSourceIpResponseBody() = default;
};
class GetClientSourceIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClientSourceIpResponseBody> body{};

  GetClientSourceIpResponse() {}

  explicit GetClientSourceIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClientSourceIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClientSourceIpResponseBody>(model1);
      }
    }
  }


  virtual ~GetClientSourceIpResponse() = default;
};
class GetEngineDefaultAuthRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetEngineDefaultAuthRequest() {}

  explicit GetEngineDefaultAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetEngineDefaultAuthRequest() = default;
};
class GetEngineDefaultAuthResponseBodyAuthInfos : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  GetEngineDefaultAuthResponseBodyAuthInfos() {}

  explicit GetEngineDefaultAuthResponseBodyAuthInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetEngineDefaultAuthResponseBodyAuthInfos() = default;
};
class GetEngineDefaultAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<GetEngineDefaultAuthResponseBodyAuthInfos>> authInfos{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  GetEngineDefaultAuthResponseBody() {}

  explicit GetEngineDefaultAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (authInfos) {
      vector<boost::any> temp1;
      for(auto item1:*authInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthInfos"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("AuthInfos") != m.end() && !m["AuthInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthInfos"].type()) {
        vector<GetEngineDefaultAuthResponseBodyAuthInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEngineDefaultAuthResponseBodyAuthInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authInfos = make_shared<vector<GetEngineDefaultAuthResponseBodyAuthInfos>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEngineDefaultAuthResponseBody() = default;
};
class GetEngineDefaultAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEngineDefaultAuthResponseBody> body{};

  GetEngineDefaultAuthResponse() {}

  explicit GetEngineDefaultAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEngineDefaultAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEngineDefaultAuthResponseBody>(model1);
      }
    }
  }


  virtual ~GetEngineDefaultAuthResponse() = default;
};
class GetInstanceIpWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetInstanceIpWhiteListRequest() {}

  explicit GetInstanceIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetInstanceIpWhiteListRequest() = default;
};
class GetInstanceIpWhiteListResponseBodyGroupList : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> securityIpList{};

  GetInstanceIpWhiteListResponseBodyGroupList() {}

  explicit GetInstanceIpWhiteListResponseBodyGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (securityIpList) {
      res["SecurityIpList"] = boost::any(*securityIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      securityIpList = make_shared<string>(boost::any_cast<string>(m["SecurityIpList"]));
    }
  }


  virtual ~GetInstanceIpWhiteListResponseBodyGroupList() = default;
};
class GetInstanceIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<GetInstanceIpWhiteListResponseBodyGroupList>> groupList{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> ipList{};
  shared_ptr<string> requestId{};

  GetInstanceIpWhiteListResponseBody() {}

  explicit GetInstanceIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (groupList) {
      vector<boost::any> temp1;
      for(auto item1:*groupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<GetInstanceIpWhiteListResponseBodyGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceIpWhiteListResponseBodyGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupList = make_shared<vector<GetInstanceIpWhiteListResponseBodyGroupList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceIpWhiteListResponseBody() = default;
};
class GetInstanceIpWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceIpWhiteListResponseBody> body{};

  GetInstanceIpWhiteListResponse() {}

  explicit GetInstanceIpWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceIpWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceIpWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceIpWhiteListResponse() = default;
};
class GetInstanceSecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetInstanceSecurityGroupsRequest() {}

  explicit GetInstanceSecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetInstanceSecurityGroupsRequest() = default;
};
class GetInstanceSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> securityGroups{};

  GetInstanceSecurityGroupsResponseBody() {}

  explicit GetInstanceSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityGroups) {
      res["SecurityGroups"] = boost::any(*securityGroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroups = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetInstanceSecurityGroupsResponseBody() = default;
};
class GetInstanceSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceSecurityGroupsResponseBody> body{};

  GetInstanceSecurityGroupsResponse() {}

  explicit GetInstanceSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceSecurityGroupsResponse() = default;
};
class GetLdpsComputeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLdpsComputeGroupRequest() {}

  explicit GetLdpsComputeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLdpsComputeGroupRequest() = default;
};
class GetLdpsComputeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> requestId{};

  GetLdpsComputeGroupResponseBody() {}

  explicit GetLdpsComputeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLdpsComputeGroupResponseBody() = default;
};
class GetLdpsComputeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLdpsComputeGroupResponseBody> body{};

  GetLdpsComputeGroupResponse() {}

  explicit GetLdpsComputeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLdpsComputeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLdpsComputeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetLdpsComputeGroupResponse() = default;
};
class GetLdpsNamespacedQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLdpsNamespacedQuotaRequest() {}

  explicit GetLdpsNamespacedQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLdpsNamespacedQuotaRequest() = default;
};
class GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas : public Darabonba::Model {
public:
  shared_ptr<string> cpuAmount{};
  shared_ptr<string> memoryAmount{};
  shared_ptr<string> name{};
  shared_ptr<string> usedCpu{};
  shared_ptr<string> usedMemory{};

  GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas() {}

  explicit GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuAmount) {
      res["CpuAmount"] = boost::any(*cpuAmount);
    }
    if (memoryAmount) {
      res["MemoryAmount"] = boost::any(*memoryAmount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (usedCpu) {
      res["UsedCpu"] = boost::any(*usedCpu);
    }
    if (usedMemory) {
      res["UsedMemory"] = boost::any(*usedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuAmount") != m.end() && !m["CpuAmount"].empty()) {
      cpuAmount = make_shared<string>(boost::any_cast<string>(m["CpuAmount"]));
    }
    if (m.find("MemoryAmount") != m.end() && !m["MemoryAmount"].empty()) {
      memoryAmount = make_shared<string>(boost::any_cast<string>(m["MemoryAmount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UsedCpu") != m.end() && !m["UsedCpu"].empty()) {
      usedCpu = make_shared<string>(boost::any_cast<string>(m["UsedCpu"]));
    }
    if (m.find("UsedMemory") != m.end() && !m["UsedMemory"].empty()) {
      usedMemory = make_shared<string>(boost::any_cast<string>(m["UsedMemory"]));
    }
  }


  virtual ~GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas() = default;
};
class GetLdpsNamespacedQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas>> namespacedQuotas{};
  shared_ptr<string> requestId{};

  GetLdpsNamespacedQuotaResponseBody() {}

  explicit GetLdpsNamespacedQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespacedQuotas) {
      vector<boost::any> temp1;
      for(auto item1:*namespacedQuotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NamespacedQuotas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespacedQuotas") != m.end() && !m["NamespacedQuotas"].empty()) {
      if (typeid(vector<boost::any>) == m["NamespacedQuotas"].type()) {
        vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NamespacedQuotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespacedQuotas = make_shared<vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLdpsNamespacedQuotaResponseBody() = default;
};
class GetLdpsNamespacedQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLdpsNamespacedQuotaResponseBody> body{};

  GetLdpsNamespacedQuotaResponse() {}

  explicit GetLdpsNamespacedQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLdpsNamespacedQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLdpsNamespacedQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetLdpsNamespacedQuotaResponse() = default;
};
class GetLdpsResourceCostRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> startTime{};

  GetLdpsResourceCostRequest() {}

  explicit GetLdpsResourceCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetLdpsResourceCostRequest() = default;
};
class GetLdpsResourceCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> totalResource{};

  GetLdpsResourceCostResponseBody() {}

  explicit GetLdpsResourceCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totalResource) {
      res["TotalResource"] = boost::any(*totalResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TotalResource") != m.end() && !m["TotalResource"].empty()) {
      totalResource = make_shared<long>(boost::any_cast<long>(m["TotalResource"]));
    }
  }


  virtual ~GetLdpsResourceCostResponseBody() = default;
};
class GetLdpsResourceCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLdpsResourceCostResponseBody> body{};

  GetLdpsResourceCostResponse() {}

  explicit GetLdpsResourceCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLdpsResourceCostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLdpsResourceCostResponseBody>(model1);
      }
    }
  }


  virtual ~GetLdpsResourceCostResponse() = default;
};
class GetLindormFsUsedDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLindormFsUsedDetailRequest() {}

  explicit GetLindormFsUsedDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLindormFsUsedDetailRequest() = default;
};
class GetLindormFsUsedDetailResponseBodyLStorageUsageList : public Darabonba::Model {
public:
  shared_ptr<string> capacity{};
  shared_ptr<string> diskType{};
  shared_ptr<string> used{};
  shared_ptr<string> usedLindormSearch{};
  shared_ptr<string> usedLindormSpark{};
  shared_ptr<string> usedLindormTable{};
  shared_ptr<string> usedLindormTsdb{};
  shared_ptr<string> usedOther{};

  GetLindormFsUsedDetailResponseBodyLStorageUsageList() {}

  explicit GetLindormFsUsedDetailResponseBodyLStorageUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    if (usedLindormSearch) {
      res["UsedLindormSearch"] = boost::any(*usedLindormSearch);
    }
    if (usedLindormSpark) {
      res["UsedLindormSpark"] = boost::any(*usedLindormSpark);
    }
    if (usedLindormTable) {
      res["UsedLindormTable"] = boost::any(*usedLindormTable);
    }
    if (usedLindormTsdb) {
      res["UsedLindormTsdb"] = boost::any(*usedLindormTsdb);
    }
    if (usedOther) {
      res["UsedOther"] = boost::any(*usedOther);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<string>(boost::any_cast<string>(m["Used"]));
    }
    if (m.find("UsedLindormSearch") != m.end() && !m["UsedLindormSearch"].empty()) {
      usedLindormSearch = make_shared<string>(boost::any_cast<string>(m["UsedLindormSearch"]));
    }
    if (m.find("UsedLindormSpark") != m.end() && !m["UsedLindormSpark"].empty()) {
      usedLindormSpark = make_shared<string>(boost::any_cast<string>(m["UsedLindormSpark"]));
    }
    if (m.find("UsedLindormTable") != m.end() && !m["UsedLindormTable"].empty()) {
      usedLindormTable = make_shared<string>(boost::any_cast<string>(m["UsedLindormTable"]));
    }
    if (m.find("UsedLindormTsdb") != m.end() && !m["UsedLindormTsdb"].empty()) {
      usedLindormTsdb = make_shared<string>(boost::any_cast<string>(m["UsedLindormTsdb"]));
    }
    if (m.find("UsedOther") != m.end() && !m["UsedOther"].empty()) {
      usedOther = make_shared<string>(boost::any_cast<string>(m["UsedOther"]));
    }
  }


  virtual ~GetLindormFsUsedDetailResponseBodyLStorageUsageList() = default;
};
class GetLindormFsUsedDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> fsCapacity{};
  shared_ptr<string> fsCapacityCold{};
  shared_ptr<string> fsCapacityHot{};
  shared_ptr<string> fsUsedCold{};
  shared_ptr<string> fsUsedColdOnLindormSearch{};
  shared_ptr<string> fsUsedColdOnLindormTSDB{};
  shared_ptr<string> fsUsedColdOnLindormTable{};
  shared_ptr<string> fsUsedHot{};
  shared_ptr<string> fsUsedHotOnLindormSearch{};
  shared_ptr<string> fsUsedHotOnLindormTSDB{};
  shared_ptr<string> fsUsedHotOnLindormTable{};
  shared_ptr<string> fsUsedOnLindormSearch{};
  shared_ptr<string> fsUsedOnLindormTSDB{};
  shared_ptr<string> fsUsedOnLindormTable{};
  shared_ptr<string> fsUsedOnLindormTableData{};
  shared_ptr<string> fsUsedOnLindormTableWAL{};
  shared_ptr<vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList>> LStorageUsageList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> valid{};

  GetLindormFsUsedDetailResponseBody() {}

  explicit GetLindormFsUsedDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (fsCapacity) {
      res["FsCapacity"] = boost::any(*fsCapacity);
    }
    if (fsCapacityCold) {
      res["FsCapacityCold"] = boost::any(*fsCapacityCold);
    }
    if (fsCapacityHot) {
      res["FsCapacityHot"] = boost::any(*fsCapacityHot);
    }
    if (fsUsedCold) {
      res["FsUsedCold"] = boost::any(*fsUsedCold);
    }
    if (fsUsedColdOnLindormSearch) {
      res["FsUsedColdOnLindormSearch"] = boost::any(*fsUsedColdOnLindormSearch);
    }
    if (fsUsedColdOnLindormTSDB) {
      res["FsUsedColdOnLindormTSDB"] = boost::any(*fsUsedColdOnLindormTSDB);
    }
    if (fsUsedColdOnLindormTable) {
      res["FsUsedColdOnLindormTable"] = boost::any(*fsUsedColdOnLindormTable);
    }
    if (fsUsedHot) {
      res["FsUsedHot"] = boost::any(*fsUsedHot);
    }
    if (fsUsedHotOnLindormSearch) {
      res["FsUsedHotOnLindormSearch"] = boost::any(*fsUsedHotOnLindormSearch);
    }
    if (fsUsedHotOnLindormTSDB) {
      res["FsUsedHotOnLindormTSDB"] = boost::any(*fsUsedHotOnLindormTSDB);
    }
    if (fsUsedHotOnLindormTable) {
      res["FsUsedHotOnLindormTable"] = boost::any(*fsUsedHotOnLindormTable);
    }
    if (fsUsedOnLindormSearch) {
      res["FsUsedOnLindormSearch"] = boost::any(*fsUsedOnLindormSearch);
    }
    if (fsUsedOnLindormTSDB) {
      res["FsUsedOnLindormTSDB"] = boost::any(*fsUsedOnLindormTSDB);
    }
    if (fsUsedOnLindormTable) {
      res["FsUsedOnLindormTable"] = boost::any(*fsUsedOnLindormTable);
    }
    if (fsUsedOnLindormTableData) {
      res["FsUsedOnLindormTableData"] = boost::any(*fsUsedOnLindormTableData);
    }
    if (fsUsedOnLindormTableWAL) {
      res["FsUsedOnLindormTableWAL"] = boost::any(*fsUsedOnLindormTableWAL);
    }
    if (LStorageUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*LStorageUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LStorageUsageList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("FsCapacity") != m.end() && !m["FsCapacity"].empty()) {
      fsCapacity = make_shared<string>(boost::any_cast<string>(m["FsCapacity"]));
    }
    if (m.find("FsCapacityCold") != m.end() && !m["FsCapacityCold"].empty()) {
      fsCapacityCold = make_shared<string>(boost::any_cast<string>(m["FsCapacityCold"]));
    }
    if (m.find("FsCapacityHot") != m.end() && !m["FsCapacityHot"].empty()) {
      fsCapacityHot = make_shared<string>(boost::any_cast<string>(m["FsCapacityHot"]));
    }
    if (m.find("FsUsedCold") != m.end() && !m["FsUsedCold"].empty()) {
      fsUsedCold = make_shared<string>(boost::any_cast<string>(m["FsUsedCold"]));
    }
    if (m.find("FsUsedColdOnLindormSearch") != m.end() && !m["FsUsedColdOnLindormSearch"].empty()) {
      fsUsedColdOnLindormSearch = make_shared<string>(boost::any_cast<string>(m["FsUsedColdOnLindormSearch"]));
    }
    if (m.find("FsUsedColdOnLindormTSDB") != m.end() && !m["FsUsedColdOnLindormTSDB"].empty()) {
      fsUsedColdOnLindormTSDB = make_shared<string>(boost::any_cast<string>(m["FsUsedColdOnLindormTSDB"]));
    }
    if (m.find("FsUsedColdOnLindormTable") != m.end() && !m["FsUsedColdOnLindormTable"].empty()) {
      fsUsedColdOnLindormTable = make_shared<string>(boost::any_cast<string>(m["FsUsedColdOnLindormTable"]));
    }
    if (m.find("FsUsedHot") != m.end() && !m["FsUsedHot"].empty()) {
      fsUsedHot = make_shared<string>(boost::any_cast<string>(m["FsUsedHot"]));
    }
    if (m.find("FsUsedHotOnLindormSearch") != m.end() && !m["FsUsedHotOnLindormSearch"].empty()) {
      fsUsedHotOnLindormSearch = make_shared<string>(boost::any_cast<string>(m["FsUsedHotOnLindormSearch"]));
    }
    if (m.find("FsUsedHotOnLindormTSDB") != m.end() && !m["FsUsedHotOnLindormTSDB"].empty()) {
      fsUsedHotOnLindormTSDB = make_shared<string>(boost::any_cast<string>(m["FsUsedHotOnLindormTSDB"]));
    }
    if (m.find("FsUsedHotOnLindormTable") != m.end() && !m["FsUsedHotOnLindormTable"].empty()) {
      fsUsedHotOnLindormTable = make_shared<string>(boost::any_cast<string>(m["FsUsedHotOnLindormTable"]));
    }
    if (m.find("FsUsedOnLindormSearch") != m.end() && !m["FsUsedOnLindormSearch"].empty()) {
      fsUsedOnLindormSearch = make_shared<string>(boost::any_cast<string>(m["FsUsedOnLindormSearch"]));
    }
    if (m.find("FsUsedOnLindormTSDB") != m.end() && !m["FsUsedOnLindormTSDB"].empty()) {
      fsUsedOnLindormTSDB = make_shared<string>(boost::any_cast<string>(m["FsUsedOnLindormTSDB"]));
    }
    if (m.find("FsUsedOnLindormTable") != m.end() && !m["FsUsedOnLindormTable"].empty()) {
      fsUsedOnLindormTable = make_shared<string>(boost::any_cast<string>(m["FsUsedOnLindormTable"]));
    }
    if (m.find("FsUsedOnLindormTableData") != m.end() && !m["FsUsedOnLindormTableData"].empty()) {
      fsUsedOnLindormTableData = make_shared<string>(boost::any_cast<string>(m["FsUsedOnLindormTableData"]));
    }
    if (m.find("FsUsedOnLindormTableWAL") != m.end() && !m["FsUsedOnLindormTableWAL"].empty()) {
      fsUsedOnLindormTableWAL = make_shared<string>(boost::any_cast<string>(m["FsUsedOnLindormTableWAL"]));
    }
    if (m.find("LStorageUsageList") != m.end() && !m["LStorageUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["LStorageUsageList"].type()) {
        vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LStorageUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormFsUsedDetailResponseBodyLStorageUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        LStorageUsageList = make_shared<vector<GetLindormFsUsedDetailResponseBodyLStorageUsageList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
  }


  virtual ~GetLindormFsUsedDetailResponseBody() = default;
};
class GetLindormFsUsedDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLindormFsUsedDetailResponseBody> body{};

  GetLindormFsUsedDetailResponse() {}

  explicit GetLindormFsUsedDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLindormFsUsedDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLindormFsUsedDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetLindormFsUsedDetailResponse() = default;
};
class GetLindormInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLindormInstanceRequest() {}

  explicit GetLindormInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLindormInstanceRequest() = default;
};
class GetLindormInstanceResponseBodyEngineList : public Darabonba::Model {
public:
  shared_ptr<string> arbiterCoreCount{};
  shared_ptr<string> coreCount{};
  shared_ptr<string> cpuCount{};
  shared_ptr<string> engine{};
  shared_ptr<bool> isLastVersion{};
  shared_ptr<string> latestVersion{};
  shared_ptr<string> memorySize{};
  shared_ptr<string> primaryCoreCount{};
  shared_ptr<string> specification{};
  shared_ptr<string> standbyCoreCount{};
  shared_ptr<string> version{};

  GetLindormInstanceResponseBodyEngineList() {}

  explicit GetLindormInstanceResponseBodyEngineList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arbiterCoreCount) {
      res["ArbiterCoreCount"] = boost::any(*arbiterCoreCount);
    }
    if (coreCount) {
      res["CoreCount"] = boost::any(*coreCount);
    }
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (isLastVersion) {
      res["IsLastVersion"] = boost::any(*isLastVersion);
    }
    if (latestVersion) {
      res["LatestVersion"] = boost::any(*latestVersion);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (primaryCoreCount) {
      res["PrimaryCoreCount"] = boost::any(*primaryCoreCount);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (standbyCoreCount) {
      res["StandbyCoreCount"] = boost::any(*standbyCoreCount);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArbiterCoreCount") != m.end() && !m["ArbiterCoreCount"].empty()) {
      arbiterCoreCount = make_shared<string>(boost::any_cast<string>(m["ArbiterCoreCount"]));
    }
    if (m.find("CoreCount") != m.end() && !m["CoreCount"].empty()) {
      coreCount = make_shared<string>(boost::any_cast<string>(m["CoreCount"]));
    }
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<string>(boost::any_cast<string>(m["CpuCount"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("IsLastVersion") != m.end() && !m["IsLastVersion"].empty()) {
      isLastVersion = make_shared<bool>(boost::any_cast<bool>(m["IsLastVersion"]));
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["LatestVersion"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<string>(boost::any_cast<string>(m["MemorySize"]));
    }
    if (m.find("PrimaryCoreCount") != m.end() && !m["PrimaryCoreCount"].empty()) {
      primaryCoreCount = make_shared<string>(boost::any_cast<string>(m["PrimaryCoreCount"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("StandbyCoreCount") != m.end() && !m["StandbyCoreCount"].empty()) {
      standbyCoreCount = make_shared<string>(boost::any_cast<string>(m["StandbyCoreCount"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetLindormInstanceResponseBodyEngineList() = default;
};
class GetLindormInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> arbiterVSwitchId{};
  shared_ptr<string> arbiterZoneId{};
  shared_ptr<string> archVersion{};
  shared_ptr<long> archiveStorage{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> coldStorage{};
  shared_ptr<string> coreDiskCategory{};
  shared_ptr<long> coreNum{};
  shared_ptr<long> coreSingleStorage{};
  shared_ptr<string> coreSpec{};
  shared_ptr<long> createMilliseconds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> diskThreshold{};
  shared_ptr<string> diskUsage{};
  shared_ptr<bool> enableBlob{};
  shared_ptr<bool> enableCdc{};
  shared_ptr<bool> enableCompute{};
  shared_ptr<bool> enableKms{};
  shared_ptr<bool> enableLProxy{};
  shared_ptr<bool> enableLTS{};
  shared_ptr<bool> enableLsqlVersionV3{};
  shared_ptr<bool> enableMLCtrl{};
  shared_ptr<bool> enableSSL{};
  shared_ptr<bool> enableShs{};
  shared_ptr<bool> enableStoreTDE{};
  shared_ptr<bool> enableStream{};
  shared_ptr<vector<GetLindormInstanceResponseBodyEngineList>> engineList{};
  shared_ptr<long> engineType{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> expiredMilliseconds{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceStorage{};
  shared_ptr<string> logDiskCategory{};
  shared_ptr<long> logNum{};
  shared_ptr<long> logSingleStorage{};
  shared_ptr<string> logSpec{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> multiZoneCombination{};
  shared_ptr<string> networkType{};
  shared_ptr<string> payType{};
  shared_ptr<string> primaryVSwitchId{};
  shared_ptr<string> primaryZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> standbyVSwitchId{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  GetLindormInstanceResponseBody() {}

  explicit GetLindormInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (arbiterVSwitchId) {
      res["ArbiterVSwitchId"] = boost::any(*arbiterVSwitchId);
    }
    if (arbiterZoneId) {
      res["ArbiterZoneId"] = boost::any(*arbiterZoneId);
    }
    if (archVersion) {
      res["ArchVersion"] = boost::any(*archVersion);
    }
    if (archiveStorage) {
      res["ArchiveStorage"] = boost::any(*archiveStorage);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (coldStorage) {
      res["ColdStorage"] = boost::any(*coldStorage);
    }
    if (coreDiskCategory) {
      res["CoreDiskCategory"] = boost::any(*coreDiskCategory);
    }
    if (coreNum) {
      res["CoreNum"] = boost::any(*coreNum);
    }
    if (coreSingleStorage) {
      res["CoreSingleStorage"] = boost::any(*coreSingleStorage);
    }
    if (coreSpec) {
      res["CoreSpec"] = boost::any(*coreSpec);
    }
    if (createMilliseconds) {
      res["CreateMilliseconds"] = boost::any(*createMilliseconds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (diskThreshold) {
      res["DiskThreshold"] = boost::any(*diskThreshold);
    }
    if (diskUsage) {
      res["DiskUsage"] = boost::any(*diskUsage);
    }
    if (enableBlob) {
      res["EnableBlob"] = boost::any(*enableBlob);
    }
    if (enableCdc) {
      res["EnableCdc"] = boost::any(*enableCdc);
    }
    if (enableCompute) {
      res["EnableCompute"] = boost::any(*enableCompute);
    }
    if (enableKms) {
      res["EnableKms"] = boost::any(*enableKms);
    }
    if (enableLProxy) {
      res["EnableLProxy"] = boost::any(*enableLProxy);
    }
    if (enableLTS) {
      res["EnableLTS"] = boost::any(*enableLTS);
    }
    if (enableLsqlVersionV3) {
      res["EnableLsqlVersionV3"] = boost::any(*enableLsqlVersionV3);
    }
    if (enableMLCtrl) {
      res["EnableMLCtrl"] = boost::any(*enableMLCtrl);
    }
    if (enableSSL) {
      res["EnableSSL"] = boost::any(*enableSSL);
    }
    if (enableShs) {
      res["EnableShs"] = boost::any(*enableShs);
    }
    if (enableStoreTDE) {
      res["EnableStoreTDE"] = boost::any(*enableStoreTDE);
    }
    if (enableStream) {
      res["EnableStream"] = boost::any(*enableStream);
    }
    if (engineList) {
      vector<boost::any> temp1;
      for(auto item1:*engineList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EngineList"] = boost::any(temp1);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expiredMilliseconds) {
      res["ExpiredMilliseconds"] = boost::any(*expiredMilliseconds);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceStorage) {
      res["InstanceStorage"] = boost::any(*instanceStorage);
    }
    if (logDiskCategory) {
      res["LogDiskCategory"] = boost::any(*logDiskCategory);
    }
    if (logNum) {
      res["LogNum"] = boost::any(*logNum);
    }
    if (logSingleStorage) {
      res["LogSingleStorage"] = boost::any(*logSingleStorage);
    }
    if (logSpec) {
      res["LogSpec"] = boost::any(*logSpec);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (multiZoneCombination) {
      res["MultiZoneCombination"] = boost::any(*multiZoneCombination);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (primaryVSwitchId) {
      res["PrimaryVSwitchId"] = boost::any(*primaryVSwitchId);
    }
    if (primaryZoneId) {
      res["PrimaryZoneId"] = boost::any(*primaryZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (standbyVSwitchId) {
      res["StandbyVSwitchId"] = boost::any(*standbyVSwitchId);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ArbiterVSwitchId") != m.end() && !m["ArbiterVSwitchId"].empty()) {
      arbiterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchId"]));
    }
    if (m.find("ArbiterZoneId") != m.end() && !m["ArbiterZoneId"].empty()) {
      arbiterZoneId = make_shared<string>(boost::any_cast<string>(m["ArbiterZoneId"]));
    }
    if (m.find("ArchVersion") != m.end() && !m["ArchVersion"].empty()) {
      archVersion = make_shared<string>(boost::any_cast<string>(m["ArchVersion"]));
    }
    if (m.find("ArchiveStorage") != m.end() && !m["ArchiveStorage"].empty()) {
      archiveStorage = make_shared<long>(boost::any_cast<long>(m["ArchiveStorage"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ColdStorage") != m.end() && !m["ColdStorage"].empty()) {
      coldStorage = make_shared<long>(boost::any_cast<long>(m["ColdStorage"]));
    }
    if (m.find("CoreDiskCategory") != m.end() && !m["CoreDiskCategory"].empty()) {
      coreDiskCategory = make_shared<string>(boost::any_cast<string>(m["CoreDiskCategory"]));
    }
    if (m.find("CoreNum") != m.end() && !m["CoreNum"].empty()) {
      coreNum = make_shared<long>(boost::any_cast<long>(m["CoreNum"]));
    }
    if (m.find("CoreSingleStorage") != m.end() && !m["CoreSingleStorage"].empty()) {
      coreSingleStorage = make_shared<long>(boost::any_cast<long>(m["CoreSingleStorage"]));
    }
    if (m.find("CoreSpec") != m.end() && !m["CoreSpec"].empty()) {
      coreSpec = make_shared<string>(boost::any_cast<string>(m["CoreSpec"]));
    }
    if (m.find("CreateMilliseconds") != m.end() && !m["CreateMilliseconds"].empty()) {
      createMilliseconds = make_shared<long>(boost::any_cast<long>(m["CreateMilliseconds"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("DiskThreshold") != m.end() && !m["DiskThreshold"].empty()) {
      diskThreshold = make_shared<string>(boost::any_cast<string>(m["DiskThreshold"]));
    }
    if (m.find("DiskUsage") != m.end() && !m["DiskUsage"].empty()) {
      diskUsage = make_shared<string>(boost::any_cast<string>(m["DiskUsage"]));
    }
    if (m.find("EnableBlob") != m.end() && !m["EnableBlob"].empty()) {
      enableBlob = make_shared<bool>(boost::any_cast<bool>(m["EnableBlob"]));
    }
    if (m.find("EnableCdc") != m.end() && !m["EnableCdc"].empty()) {
      enableCdc = make_shared<bool>(boost::any_cast<bool>(m["EnableCdc"]));
    }
    if (m.find("EnableCompute") != m.end() && !m["EnableCompute"].empty()) {
      enableCompute = make_shared<bool>(boost::any_cast<bool>(m["EnableCompute"]));
    }
    if (m.find("EnableKms") != m.end() && !m["EnableKms"].empty()) {
      enableKms = make_shared<bool>(boost::any_cast<bool>(m["EnableKms"]));
    }
    if (m.find("EnableLProxy") != m.end() && !m["EnableLProxy"].empty()) {
      enableLProxy = make_shared<bool>(boost::any_cast<bool>(m["EnableLProxy"]));
    }
    if (m.find("EnableLTS") != m.end() && !m["EnableLTS"].empty()) {
      enableLTS = make_shared<bool>(boost::any_cast<bool>(m["EnableLTS"]));
    }
    if (m.find("EnableLsqlVersionV3") != m.end() && !m["EnableLsqlVersionV3"].empty()) {
      enableLsqlVersionV3 = make_shared<bool>(boost::any_cast<bool>(m["EnableLsqlVersionV3"]));
    }
    if (m.find("EnableMLCtrl") != m.end() && !m["EnableMLCtrl"].empty()) {
      enableMLCtrl = make_shared<bool>(boost::any_cast<bool>(m["EnableMLCtrl"]));
    }
    if (m.find("EnableSSL") != m.end() && !m["EnableSSL"].empty()) {
      enableSSL = make_shared<bool>(boost::any_cast<bool>(m["EnableSSL"]));
    }
    if (m.find("EnableShs") != m.end() && !m["EnableShs"].empty()) {
      enableShs = make_shared<bool>(boost::any_cast<bool>(m["EnableShs"]));
    }
    if (m.find("EnableStoreTDE") != m.end() && !m["EnableStoreTDE"].empty()) {
      enableStoreTDE = make_shared<bool>(boost::any_cast<bool>(m["EnableStoreTDE"]));
    }
    if (m.find("EnableStream") != m.end() && !m["EnableStream"].empty()) {
      enableStream = make_shared<bool>(boost::any_cast<bool>(m["EnableStream"]));
    }
    if (m.find("EngineList") != m.end() && !m["EngineList"].empty()) {
      if (typeid(vector<boost::any>) == m["EngineList"].type()) {
        vector<GetLindormInstanceResponseBodyEngineList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EngineList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormInstanceResponseBodyEngineList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engineList = make_shared<vector<GetLindormInstanceResponseBodyEngineList>>(expect1);
      }
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<long>(boost::any_cast<long>(m["EngineType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExpiredMilliseconds") != m.end() && !m["ExpiredMilliseconds"].empty()) {
      expiredMilliseconds = make_shared<long>(boost::any_cast<long>(m["ExpiredMilliseconds"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceStorage") != m.end() && !m["InstanceStorage"].empty()) {
      instanceStorage = make_shared<string>(boost::any_cast<string>(m["InstanceStorage"]));
    }
    if (m.find("LogDiskCategory") != m.end() && !m["LogDiskCategory"].empty()) {
      logDiskCategory = make_shared<string>(boost::any_cast<string>(m["LogDiskCategory"]));
    }
    if (m.find("LogNum") != m.end() && !m["LogNum"].empty()) {
      logNum = make_shared<long>(boost::any_cast<long>(m["LogNum"]));
    }
    if (m.find("LogSingleStorage") != m.end() && !m["LogSingleStorage"].empty()) {
      logSingleStorage = make_shared<long>(boost::any_cast<long>(m["LogSingleStorage"]));
    }
    if (m.find("LogSpec") != m.end() && !m["LogSpec"].empty()) {
      logSpec = make_shared<string>(boost::any_cast<string>(m["LogSpec"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MultiZoneCombination") != m.end() && !m["MultiZoneCombination"].empty()) {
      multiZoneCombination = make_shared<string>(boost::any_cast<string>(m["MultiZoneCombination"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PrimaryVSwitchId") != m.end() && !m["PrimaryVSwitchId"].empty()) {
      primaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchId"]));
    }
    if (m.find("PrimaryZoneId") != m.end() && !m["PrimaryZoneId"].empty()) {
      primaryZoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("StandbyVSwitchId") != m.end() && !m["StandbyVSwitchId"].empty()) {
      standbyVSwitchId = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchId"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetLindormInstanceResponseBody() = default;
};
class GetLindormInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLindormInstanceResponseBody> body{};

  GetLindormInstanceResponse() {}

  explicit GetLindormInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLindormInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLindormInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetLindormInstanceResponse() = default;
};
class GetLindormInstanceEngineListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLindormInstanceEngineListRequest() {}

  explicit GetLindormInstanceEngineListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLindormInstanceEngineListRequest() = default;
};
class GetLindormInstanceEngineListResponseBodyEngineListNetInfoList : public Darabonba::Model {
public:
  shared_ptr<long> accessType{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> netType{};
  shared_ptr<long> port{};

  GetLindormInstanceEngineListResponseBodyEngineListNetInfoList() {}

  explicit GetLindormInstanceEngineListResponseBodyEngineListNetInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<long>(boost::any_cast<long>(m["AccessType"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~GetLindormInstanceEngineListResponseBodyEngineListNetInfoList() = default;
};
class GetLindormInstanceEngineListResponseBodyEngineList : public Darabonba::Model {
public:
  shared_ptr<string> engineType{};
  shared_ptr<vector<GetLindormInstanceEngineListResponseBodyEngineListNetInfoList>> netInfoList{};

  GetLindormInstanceEngineListResponseBodyEngineList() {}

  explicit GetLindormInstanceEngineListResponseBodyEngineList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (netInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*netInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("NetInfoList") != m.end() && !m["NetInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["NetInfoList"].type()) {
        vector<GetLindormInstanceEngineListResponseBodyEngineListNetInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormInstanceEngineListResponseBodyEngineListNetInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netInfoList = make_shared<vector<GetLindormInstanceEngineListResponseBodyEngineListNetInfoList>>(expect1);
      }
    }
  }


  virtual ~GetLindormInstanceEngineListResponseBodyEngineList() = default;
};
class GetLindormInstanceEngineListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<GetLindormInstanceEngineListResponseBodyEngineList>> engineList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  GetLindormInstanceEngineListResponseBody() {}

  explicit GetLindormInstanceEngineListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (engineList) {
      vector<boost::any> temp1;
      for(auto item1:*engineList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EngineList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("EngineList") != m.end() && !m["EngineList"].empty()) {
      if (typeid(vector<boost::any>) == m["EngineList"].type()) {
        vector<GetLindormInstanceEngineListResponseBodyEngineList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EngineList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormInstanceEngineListResponseBodyEngineList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engineList = make_shared<vector<GetLindormInstanceEngineListResponseBodyEngineList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLindormInstanceEngineListResponseBody() = default;
};
class GetLindormInstanceEngineListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLindormInstanceEngineListResponseBody> body{};

  GetLindormInstanceEngineListResponse() {}

  explicit GetLindormInstanceEngineListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLindormInstanceEngineListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLindormInstanceEngineListResponseBody>(model1);
      }
    }
  }


  virtual ~GetLindormInstanceEngineListResponse() = default;
};
class GetLindormInstanceListRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetLindormInstanceListRequestTag() {}

  explicit GetLindormInstanceListRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetLindormInstanceListRequestTag() = default;
};
class GetLindormInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryStr{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serviceType{};
  shared_ptr<long> supportEngine{};
  shared_ptr<vector<GetLindormInstanceListRequestTag>> tag{};

  GetLindormInstanceListRequest() {}

  explicit GetLindormInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryStr) {
      res["QueryStr"] = boost::any(*queryStr);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (supportEngine) {
      res["SupportEngine"] = boost::any(*supportEngine);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryStr") != m.end() && !m["QueryStr"].empty()) {
      queryStr = make_shared<string>(boost::any_cast<string>(m["QueryStr"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("SupportEngine") != m.end() && !m["SupportEngine"].empty()) {
      supportEngine = make_shared<long>(boost::any_cast<long>(m["SupportEngine"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetLindormInstanceListRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormInstanceListRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetLindormInstanceListRequestTag>>(expect1);
      }
    }
  }


  virtual ~GetLindormInstanceListRequest() = default;
};
class GetLindormInstanceListResponseBodyInstanceListTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetLindormInstanceListResponseBodyInstanceListTags() {}

  explicit GetLindormInstanceListResponseBodyInstanceListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetLindormInstanceListResponseBodyInstanceListTags() = default;
};
class GetLindormInstanceListResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> createMilliseconds{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableColumn{};
  shared_ptr<bool> enableCompute{};
  shared_ptr<bool> enableLts{};
  shared_ptr<bool> enableMessage{};
  shared_ptr<bool> enableRow{};
  shared_ptr<bool> enableStream{};
  shared_ptr<bool> enableVector{};
  shared_ptr<string> engineType{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> expiredMilliseconds{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceStorage{};
  shared_ptr<string> networkType{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceType{};
  shared_ptr<vector<GetLindormInstanceListResponseBodyInstanceListTags>> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  GetLindormInstanceListResponseBodyInstanceList() {}

  explicit GetLindormInstanceListResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (createMilliseconds) {
      res["CreateMilliseconds"] = boost::any(*createMilliseconds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableColumn) {
      res["EnableColumn"] = boost::any(*enableColumn);
    }
    if (enableCompute) {
      res["EnableCompute"] = boost::any(*enableCompute);
    }
    if (enableLts) {
      res["EnableLts"] = boost::any(*enableLts);
    }
    if (enableMessage) {
      res["EnableMessage"] = boost::any(*enableMessage);
    }
    if (enableRow) {
      res["EnableRow"] = boost::any(*enableRow);
    }
    if (enableStream) {
      res["EnableStream"] = boost::any(*enableStream);
    }
    if (enableVector) {
      res["EnableVector"] = boost::any(*enableVector);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expiredMilliseconds) {
      res["ExpiredMilliseconds"] = boost::any(*expiredMilliseconds);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceStorage) {
      res["InstanceStorage"] = boost::any(*instanceStorage);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("CreateMilliseconds") != m.end() && !m["CreateMilliseconds"].empty()) {
      createMilliseconds = make_shared<long>(boost::any_cast<long>(m["CreateMilliseconds"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableColumn") != m.end() && !m["EnableColumn"].empty()) {
      enableColumn = make_shared<bool>(boost::any_cast<bool>(m["EnableColumn"]));
    }
    if (m.find("EnableCompute") != m.end() && !m["EnableCompute"].empty()) {
      enableCompute = make_shared<bool>(boost::any_cast<bool>(m["EnableCompute"]));
    }
    if (m.find("EnableLts") != m.end() && !m["EnableLts"].empty()) {
      enableLts = make_shared<bool>(boost::any_cast<bool>(m["EnableLts"]));
    }
    if (m.find("EnableMessage") != m.end() && !m["EnableMessage"].empty()) {
      enableMessage = make_shared<bool>(boost::any_cast<bool>(m["EnableMessage"]));
    }
    if (m.find("EnableRow") != m.end() && !m["EnableRow"].empty()) {
      enableRow = make_shared<bool>(boost::any_cast<bool>(m["EnableRow"]));
    }
    if (m.find("EnableStream") != m.end() && !m["EnableStream"].empty()) {
      enableStream = make_shared<bool>(boost::any_cast<bool>(m["EnableStream"]));
    }
    if (m.find("EnableVector") != m.end() && !m["EnableVector"].empty()) {
      enableVector = make_shared<bool>(boost::any_cast<bool>(m["EnableVector"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExpiredMilliseconds") != m.end() && !m["ExpiredMilliseconds"].empty()) {
      expiredMilliseconds = make_shared<long>(boost::any_cast<long>(m["ExpiredMilliseconds"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceStorage") != m.end() && !m["InstanceStorage"].empty()) {
      instanceStorage = make_shared<string>(boost::any_cast<string>(m["InstanceStorage"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetLindormInstanceListResponseBodyInstanceListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormInstanceListResponseBodyInstanceListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetLindormInstanceListResponseBodyInstanceListTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetLindormInstanceListResponseBodyInstanceList() = default;
};
class GetLindormInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetLindormInstanceListResponseBodyInstanceList>> instanceList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  GetLindormInstanceListResponseBody() {}

  explicit GetLindormInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<GetLindormInstanceListResponseBodyInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormInstanceListResponseBodyInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<GetLindormInstanceListResponseBodyInstanceList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetLindormInstanceListResponseBody() = default;
};
class GetLindormInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLindormInstanceListResponseBody> body{};

  GetLindormInstanceListResponse() {}

  explicit GetLindormInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLindormInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLindormInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetLindormInstanceListResponse() = default;
};
class GetLindormV2InstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLindormV2InstanceRequest() {}

  explicit GetLindormV2InstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLindormV2InstanceRequest() = default;
};
class GetLindormV2InstanceResponseBodyEngineListConnectAddressList : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};

  GetLindormV2InstanceResponseBodyEngineListConnectAddressList() {}

  explicit GetLindormV2InstanceResponseBodyEngineListConnectAddressList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetLindormV2InstanceResponseBodyEngineListConnectAddressList() = default;
};
class GetLindormV2InstanceResponseBodyEngineListNodeGroup : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> cpuCoreCount{};
  shared_ptr<bool> enableAttachLocalDisk{};
  shared_ptr<long> localDiskCapacity{};
  shared_ptr<string> localDiskCategory{};
  shared_ptr<long> memorySizeGiB{};
  shared_ptr<string> nodeSpec{};
  shared_ptr<long> quantity{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> specId{};
  shared_ptr<string> status{};

  GetLindormV2InstanceResponseBodyEngineListNodeGroup() {}

  explicit GetLindormV2InstanceResponseBodyEngineListNodeGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (cpuCoreCount) {
      res["CpuCoreCount"] = boost::any(*cpuCoreCount);
    }
    if (enableAttachLocalDisk) {
      res["EnableAttachLocalDisk"] = boost::any(*enableAttachLocalDisk);
    }
    if (localDiskCapacity) {
      res["LocalDiskCapacity"] = boost::any(*localDiskCapacity);
    }
    if (localDiskCategory) {
      res["LocalDiskCategory"] = boost::any(*localDiskCategory);
    }
    if (memorySizeGiB) {
      res["MemorySizeGiB"] = boost::any(*memorySizeGiB);
    }
    if (nodeSpec) {
      res["NodeSpec"] = boost::any(*nodeSpec);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CpuCoreCount") != m.end() && !m["CpuCoreCount"].empty()) {
      cpuCoreCount = make_shared<long>(boost::any_cast<long>(m["CpuCoreCount"]));
    }
    if (m.find("EnableAttachLocalDisk") != m.end() && !m["EnableAttachLocalDisk"].empty()) {
      enableAttachLocalDisk = make_shared<bool>(boost::any_cast<bool>(m["EnableAttachLocalDisk"]));
    }
    if (m.find("LocalDiskCapacity") != m.end() && !m["LocalDiskCapacity"].empty()) {
      localDiskCapacity = make_shared<long>(boost::any_cast<long>(m["LocalDiskCapacity"]));
    }
    if (m.find("LocalDiskCategory") != m.end() && !m["LocalDiskCategory"].empty()) {
      localDiskCategory = make_shared<string>(boost::any_cast<string>(m["LocalDiskCategory"]));
    }
    if (m.find("MemorySizeGiB") != m.end() && !m["MemorySizeGiB"].empty()) {
      memorySizeGiB = make_shared<long>(boost::any_cast<long>(m["MemorySizeGiB"]));
    }
    if (m.find("NodeSpec") != m.end() && !m["NodeSpec"].empty()) {
      nodeSpec = make_shared<string>(boost::any_cast<string>(m["NodeSpec"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetLindormV2InstanceResponseBodyEngineListNodeGroup() = default;
};
class GetLindormV2InstanceResponseBodyEngineList : public Darabonba::Model {
public:
  shared_ptr<vector<GetLindormV2InstanceResponseBodyEngineListConnectAddressList>> connectAddressList{};
  shared_ptr<string> engine{};
  shared_ptr<bool> isLastVersion{};
  shared_ptr<string> latestVersion{};
  shared_ptr<vector<GetLindormV2InstanceResponseBodyEngineListNodeGroup>> nodeGroup{};
  shared_ptr<string> version{};

  GetLindormV2InstanceResponseBodyEngineList() {}

  explicit GetLindormV2InstanceResponseBodyEngineList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectAddressList) {
      vector<boost::any> temp1;
      for(auto item1:*connectAddressList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectAddressList"] = boost::any(temp1);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (isLastVersion) {
      res["IsLastVersion"] = boost::any(*isLastVersion);
    }
    if (latestVersion) {
      res["LatestVersion"] = boost::any(*latestVersion);
    }
    if (nodeGroup) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroup"] = boost::any(temp1);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectAddressList") != m.end() && !m["ConnectAddressList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectAddressList"].type()) {
        vector<GetLindormV2InstanceResponseBodyEngineListConnectAddressList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectAddressList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormV2InstanceResponseBodyEngineListConnectAddressList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectAddressList = make_shared<vector<GetLindormV2InstanceResponseBodyEngineListConnectAddressList>>(expect1);
      }
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("IsLastVersion") != m.end() && !m["IsLastVersion"].empty()) {
      isLastVersion = make_shared<bool>(boost::any_cast<bool>(m["IsLastVersion"]));
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["LatestVersion"]));
    }
    if (m.find("NodeGroup") != m.end() && !m["NodeGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroup"].type()) {
        vector<GetLindormV2InstanceResponseBodyEngineListNodeGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormV2InstanceResponseBodyEngineListNodeGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroup = make_shared<vector<GetLindormV2InstanceResponseBodyEngineListNodeGroup>>(expect1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetLindormV2InstanceResponseBodyEngineList() = default;
};
class GetLindormV2InstanceResponseBodyStorageUsage : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> capacityByDiskCategory{};
  shared_ptr<map<string, boost::any>> engineUsage{};

  GetLindormV2InstanceResponseBodyStorageUsage() {}

  explicit GetLindormV2InstanceResponseBodyStorageUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacityByDiskCategory) {
      res["CapacityByDiskCategory"] = boost::any(*capacityByDiskCategory);
    }
    if (engineUsage) {
      res["EngineUsage"] = boost::any(*engineUsage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapacityByDiskCategory") != m.end() && !m["CapacityByDiskCategory"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["CapacityByDiskCategory"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CapacityByDiskCategory"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      capacityByDiskCategory = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("EngineUsage") != m.end() && !m["EngineUsage"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EngineUsage"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      engineUsage = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetLindormV2InstanceResponseBodyStorageUsage() = default;
};
class GetLindormV2InstanceResponseBodyWhiteIpList : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> ipList{};

  GetLindormV2InstanceResponseBodyWhiteIpList() {}

  explicit GetLindormV2InstanceResponseBodyWhiteIpList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["IpList"]));
    }
  }


  virtual ~GetLindormV2InstanceResponseBodyWhiteIpList() = default;
};
class GetLindormV2InstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> arbiterVSwitchId{};
  shared_ptr<string> arbiterZoneId{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> coldStorage{};
  shared_ptr<long> createMilliseconds{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> diskThreshold{};
  shared_ptr<string> diskUsage{};
  shared_ptr<bool> enableCompute{};
  shared_ptr<vector<GetLindormV2InstanceResponseBodyEngineList>> engineList{};
  shared_ptr<long> expiredMilliseconds{};
  shared_ptr<string> initialRootPassword{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> networkType{};
  shared_ptr<string> payType{};
  shared_ptr<string> primaryVSwitchId{};
  shared_ptr<string> primaryZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> standbyVSwitchId{};
  shared_ptr<string> standbyZoneId{};
  shared_ptr<GetLindormV2InstanceResponseBodyStorageUsage> storageUsage{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<vector<GetLindormV2InstanceResponseBodyWhiteIpList>> whiteIpList{};
  shared_ptr<map<string, boost::any>> zoneEngineInfoMap{};
  shared_ptr<string> zoneId{};

  GetLindormV2InstanceResponseBody() {}

  explicit GetLindormV2InstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (arbiterVSwitchId) {
      res["ArbiterVSwitchId"] = boost::any(*arbiterVSwitchId);
    }
    if (arbiterZoneId) {
      res["ArbiterZoneId"] = boost::any(*arbiterZoneId);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (coldStorage) {
      res["ColdStorage"] = boost::any(*coldStorage);
    }
    if (createMilliseconds) {
      res["CreateMilliseconds"] = boost::any(*createMilliseconds);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (diskThreshold) {
      res["DiskThreshold"] = boost::any(*diskThreshold);
    }
    if (diskUsage) {
      res["DiskUsage"] = boost::any(*diskUsage);
    }
    if (enableCompute) {
      res["EnableCompute"] = boost::any(*enableCompute);
    }
    if (engineList) {
      vector<boost::any> temp1;
      for(auto item1:*engineList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EngineList"] = boost::any(temp1);
    }
    if (expiredMilliseconds) {
      res["ExpiredMilliseconds"] = boost::any(*expiredMilliseconds);
    }
    if (initialRootPassword) {
      res["InitialRootPassword"] = boost::any(*initialRootPassword);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (primaryVSwitchId) {
      res["PrimaryVSwitchId"] = boost::any(*primaryVSwitchId);
    }
    if (primaryZoneId) {
      res["PrimaryZoneId"] = boost::any(*primaryZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (standbyVSwitchId) {
      res["StandbyVSwitchId"] = boost::any(*standbyVSwitchId);
    }
    if (standbyZoneId) {
      res["StandbyZoneId"] = boost::any(*standbyZoneId);
    }
    if (storageUsage) {
      res["StorageUsage"] = storageUsage ? boost::any(storageUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (whiteIpList) {
      vector<boost::any> temp1;
      for(auto item1:*whiteIpList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WhiteIpList"] = boost::any(temp1);
    }
    if (zoneEngineInfoMap) {
      res["ZoneEngineInfoMap"] = boost::any(*zoneEngineInfoMap);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ArbiterVSwitchId") != m.end() && !m["ArbiterVSwitchId"].empty()) {
      arbiterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ArbiterVSwitchId"]));
    }
    if (m.find("ArbiterZoneId") != m.end() && !m["ArbiterZoneId"].empty()) {
      arbiterZoneId = make_shared<string>(boost::any_cast<string>(m["ArbiterZoneId"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ColdStorage") != m.end() && !m["ColdStorage"].empty()) {
      coldStorage = make_shared<long>(boost::any_cast<long>(m["ColdStorage"]));
    }
    if (m.find("CreateMilliseconds") != m.end() && !m["CreateMilliseconds"].empty()) {
      createMilliseconds = make_shared<long>(boost::any_cast<long>(m["CreateMilliseconds"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("DiskThreshold") != m.end() && !m["DiskThreshold"].empty()) {
      diskThreshold = make_shared<string>(boost::any_cast<string>(m["DiskThreshold"]));
    }
    if (m.find("DiskUsage") != m.end() && !m["DiskUsage"].empty()) {
      diskUsage = make_shared<string>(boost::any_cast<string>(m["DiskUsage"]));
    }
    if (m.find("EnableCompute") != m.end() && !m["EnableCompute"].empty()) {
      enableCompute = make_shared<bool>(boost::any_cast<bool>(m["EnableCompute"]));
    }
    if (m.find("EngineList") != m.end() && !m["EngineList"].empty()) {
      if (typeid(vector<boost::any>) == m["EngineList"].type()) {
        vector<GetLindormV2InstanceResponseBodyEngineList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EngineList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormV2InstanceResponseBodyEngineList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engineList = make_shared<vector<GetLindormV2InstanceResponseBodyEngineList>>(expect1);
      }
    }
    if (m.find("ExpiredMilliseconds") != m.end() && !m["ExpiredMilliseconds"].empty()) {
      expiredMilliseconds = make_shared<long>(boost::any_cast<long>(m["ExpiredMilliseconds"]));
    }
    if (m.find("InitialRootPassword") != m.end() && !m["InitialRootPassword"].empty()) {
      initialRootPassword = make_shared<string>(boost::any_cast<string>(m["InitialRootPassword"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PrimaryVSwitchId") != m.end() && !m["PrimaryVSwitchId"].empty()) {
      primaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["PrimaryVSwitchId"]));
    }
    if (m.find("PrimaryZoneId") != m.end() && !m["PrimaryZoneId"].empty()) {
      primaryZoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("StandbyVSwitchId") != m.end() && !m["StandbyVSwitchId"].empty()) {
      standbyVSwitchId = make_shared<string>(boost::any_cast<string>(m["StandbyVSwitchId"]));
    }
    if (m.find("StandbyZoneId") != m.end() && !m["StandbyZoneId"].empty()) {
      standbyZoneId = make_shared<string>(boost::any_cast<string>(m["StandbyZoneId"]));
    }
    if (m.find("StorageUsage") != m.end() && !m["StorageUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageUsage"].type()) {
        GetLindormV2InstanceResponseBodyStorageUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageUsage"]));
        storageUsage = make_shared<GetLindormV2InstanceResponseBodyStorageUsage>(model1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("WhiteIpList") != m.end() && !m["WhiteIpList"].empty()) {
      if (typeid(vector<boost::any>) == m["WhiteIpList"].type()) {
        vector<GetLindormV2InstanceResponseBodyWhiteIpList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WhiteIpList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormV2InstanceResponseBodyWhiteIpList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        whiteIpList = make_shared<vector<GetLindormV2InstanceResponseBodyWhiteIpList>>(expect1);
      }
    }
    if (m.find("ZoneEngineInfoMap") != m.end() && !m["ZoneEngineInfoMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ZoneEngineInfoMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      zoneEngineInfoMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetLindormV2InstanceResponseBody() = default;
};
class GetLindormV2InstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLindormV2InstanceResponseBody> body{};

  GetLindormV2InstanceResponse() {}

  explicit GetLindormV2InstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLindormV2InstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLindormV2InstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetLindormV2InstanceResponse() = default;
};
class GetLindormV2InstanceEngineListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLindormV2InstanceEngineListRequest() {}

  explicit GetLindormV2InstanceEngineListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLindormV2InstanceEngineListRequest() = default;
};
class GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList : public Darabonba::Model {
public:
  shared_ptr<long> accessType{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> netType{};
  shared_ptr<long> port{};

  GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList() {}

  explicit GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<long>(boost::any_cast<long>(m["AccessType"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList() = default;
};
class GetLindormV2InstanceEngineListResponseBodyEngineList : public Darabonba::Model {
public:
  shared_ptr<string> engineType{};
  shared_ptr<vector<GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList>> netInfoList{};

  GetLindormV2InstanceEngineListResponseBodyEngineList() {}

  explicit GetLindormV2InstanceEngineListResponseBodyEngineList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (netInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*netInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("NetInfoList") != m.end() && !m["NetInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["NetInfoList"].type()) {
        vector<GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netInfoList = make_shared<vector<GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList>>(expect1);
      }
    }
  }


  virtual ~GetLindormV2InstanceEngineListResponseBodyEngineList() = default;
};
class GetLindormV2InstanceEngineListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<GetLindormV2InstanceEngineListResponseBodyEngineList>> engineList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  GetLindormV2InstanceEngineListResponseBody() {}

  explicit GetLindormV2InstanceEngineListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (engineList) {
      vector<boost::any> temp1;
      for(auto item1:*engineList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EngineList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("EngineList") != m.end() && !m["EngineList"].empty()) {
      if (typeid(vector<boost::any>) == m["EngineList"].type()) {
        vector<GetLindormV2InstanceEngineListResponseBodyEngineList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EngineList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLindormV2InstanceEngineListResponseBodyEngineList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        engineList = make_shared<vector<GetLindormV2InstanceEngineListResponseBodyEngineList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLindormV2InstanceEngineListResponseBody() = default;
};
class GetLindormV2InstanceEngineListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLindormV2InstanceEngineListResponseBody> body{};

  GetLindormV2InstanceEngineListResponse() {}

  explicit GetLindormV2InstanceEngineListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLindormV2InstanceEngineListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLindormV2InstanceEngineListResponseBody>(model1);
      }
    }
  }


  virtual ~GetLindormV2InstanceEngineListResponse() = default;
};
class GetLindormV2StorageUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  GetLindormV2StorageUsageRequest() {}

  explicit GetLindormV2StorageUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetLindormV2StorageUsageRequest() = default;
};
class GetLindormV2StorageUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<map<string, boost::any>>> capacityByDiskCategory{};
  shared_ptr<map<string, boost::any>> instanceStorageZoneMap{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> usageByDiskCategory{};

  GetLindormV2StorageUsageResponseBody() {}

  explicit GetLindormV2StorageUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (capacityByDiskCategory) {
      res["CapacityByDiskCategory"] = boost::any(*capacityByDiskCategory);
    }
    if (instanceStorageZoneMap) {
      res["InstanceStorageZoneMap"] = boost::any(*instanceStorageZoneMap);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageByDiskCategory) {
      res["UsageByDiskCategory"] = boost::any(*usageByDiskCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("CapacityByDiskCategory") != m.end() && !m["CapacityByDiskCategory"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["CapacityByDiskCategory"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CapacityByDiskCategory"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      capacityByDiskCategory = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("InstanceStorageZoneMap") != m.end() && !m["InstanceStorageZoneMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceStorageZoneMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceStorageZoneMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageByDiskCategory") != m.end() && !m["UsageByDiskCategory"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["UsageByDiskCategory"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UsageByDiskCategory"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      usageByDiskCategory = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetLindormV2StorageUsageResponseBody() = default;
};
class GetLindormV2StorageUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLindormV2StorageUsageResponseBody> body{};

  GetLindormV2StorageUsageResponse() {}

  explicit GetLindormV2StorageUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLindormV2StorageUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLindormV2StorageUsageResponseBody>(model1);
      }
    }
  }


  virtual ~GetLindormV2StorageUsageResponse() = default;
};
class ListAutoScalingConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ListAutoScalingConfigsRequest() {}

  explicit ListAutoScalingConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ListAutoScalingConfigsRequest() = default;
};
class ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> observationWindow{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> scaleInStep{};
  shared_ptr<long> scaleOutStep{};
  shared_ptr<long> silenceTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetMetric{};
  shared_ptr<long> targetNodes{};
  shared_ptr<long> thresholdLower{};
  shared_ptr<long> thresholdUpper{};
  shared_ptr<string> triggerCronExpr{};

  ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList() {}

  explicit ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (observationWindow) {
      res["ObservationWindow"] = boost::any(*observationWindow);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scaleInStep) {
      res["ScaleInStep"] = boost::any(*scaleInStep);
    }
    if (scaleOutStep) {
      res["ScaleOutStep"] = boost::any(*scaleOutStep);
    }
    if (silenceTime) {
      res["SilenceTime"] = boost::any(*silenceTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetMetric) {
      res["TargetMetric"] = boost::any(*targetMetric);
    }
    if (targetNodes) {
      res["TargetNodes"] = boost::any(*targetNodes);
    }
    if (thresholdLower) {
      res["ThresholdLower"] = boost::any(*thresholdLower);
    }
    if (thresholdUpper) {
      res["ThresholdUpper"] = boost::any(*thresholdUpper);
    }
    if (triggerCronExpr) {
      res["TriggerCronExpr"] = boost::any(*triggerCronExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ObservationWindow") != m.end() && !m["ObservationWindow"].empty()) {
      observationWindow = make_shared<long>(boost::any_cast<long>(m["ObservationWindow"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScaleInStep") != m.end() && !m["ScaleInStep"].empty()) {
      scaleInStep = make_shared<long>(boost::any_cast<long>(m["ScaleInStep"]));
    }
    if (m.find("ScaleOutStep") != m.end() && !m["ScaleOutStep"].empty()) {
      scaleOutStep = make_shared<long>(boost::any_cast<long>(m["ScaleOutStep"]));
    }
    if (m.find("SilenceTime") != m.end() && !m["SilenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["SilenceTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetMetric") != m.end() && !m["TargetMetric"].empty()) {
      targetMetric = make_shared<string>(boost::any_cast<string>(m["TargetMetric"]));
    }
    if (m.find("TargetNodes") != m.end() && !m["TargetNodes"].empty()) {
      targetNodes = make_shared<long>(boost::any_cast<long>(m["TargetNodes"]));
    }
    if (m.find("ThresholdLower") != m.end() && !m["ThresholdLower"].empty()) {
      thresholdLower = make_shared<long>(boost::any_cast<long>(m["ThresholdLower"]));
    }
    if (m.find("ThresholdUpper") != m.end() && !m["ThresholdUpper"].empty()) {
      thresholdUpper = make_shared<long>(boost::any_cast<long>(m["ThresholdUpper"]));
    }
    if (m.find("TriggerCronExpr") != m.end() && !m["TriggerCronExpr"].empty()) {
      triggerCronExpr = make_shared<string>(boost::any_cast<string>(m["TriggerCronExpr"]));
    }
  }


  virtual ~ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList() = default;
};
class ListAutoScalingConfigsResponseBodyDataScaleConfigs : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> configName{};
  shared_ptr<string> effectiveTimeEnd{};
  shared_ptr<string> effectiveTimeStart{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodesMax{};
  shared_ptr<long> nodesMin{};
  shared_ptr<vector<ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList>> scaleRuleList{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> specId{};

  ListAutoScalingConfigsResponseBodyDataScaleConfigs() {}

  explicit ListAutoScalingConfigsResponseBodyDataScaleConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (effectiveTimeEnd) {
      res["EffectiveTimeEnd"] = boost::any(*effectiveTimeEnd);
    }
    if (effectiveTimeStart) {
      res["EffectiveTimeStart"] = boost::any(*effectiveTimeStart);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodesMax) {
      res["NodesMax"] = boost::any(*nodesMax);
    }
    if (nodesMin) {
      res["NodesMin"] = boost::any(*nodesMin);
    }
    if (scaleRuleList) {
      vector<boost::any> temp1;
      for(auto item1:*scaleRuleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleRuleList"] = boost::any(temp1);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("EffectiveTimeEnd") != m.end() && !m["EffectiveTimeEnd"].empty()) {
      effectiveTimeEnd = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeEnd"]));
    }
    if (m.find("EffectiveTimeStart") != m.end() && !m["EffectiveTimeStart"].empty()) {
      effectiveTimeStart = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeStart"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodesMax") != m.end() && !m["NodesMax"].empty()) {
      nodesMax = make_shared<long>(boost::any_cast<long>(m["NodesMax"]));
    }
    if (m.find("NodesMin") != m.end() && !m["NodesMin"].empty()) {
      nodesMin = make_shared<long>(boost::any_cast<long>(m["NodesMin"]));
    }
    if (m.find("ScaleRuleList") != m.end() && !m["ScaleRuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleRuleList"].type()) {
        vector<ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleRuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleRuleList = make_shared<vector<ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList>>(expect1);
      }
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
  }


  virtual ~ListAutoScalingConfigsResponseBodyDataScaleConfigs() = default;
};
class ListAutoScalingConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAutoScalingConfigsResponseBodyDataScaleConfigs>> scaleConfigs{};

  ListAutoScalingConfigsResponseBodyData() {}

  explicit ListAutoScalingConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scaleConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*scaleConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScaleConfigs") != m.end() && !m["ScaleConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleConfigs"].type()) {
        vector<ListAutoScalingConfigsResponseBodyDataScaleConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAutoScalingConfigsResponseBodyDataScaleConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleConfigs = make_shared<vector<ListAutoScalingConfigsResponseBodyDataScaleConfigs>>(expect1);
      }
    }
  }


  virtual ~ListAutoScalingConfigsResponseBodyData() = default;
};
class ListAutoScalingConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListAutoScalingConfigsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAutoScalingConfigsResponseBody() {}

  explicit ListAutoScalingConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAutoScalingConfigsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAutoScalingConfigsResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ListAutoScalingConfigsResponseBody() = default;
};
class ListAutoScalingConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAutoScalingConfigsResponseBody> body{};

  ListAutoScalingConfigsResponse() {}

  explicit ListAutoScalingConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAutoScalingConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAutoScalingConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAutoScalingConfigsResponse() = default;
};
class ListAutoScalingRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ListAutoScalingRecordsRequest() {}

  explicit ListAutoScalingRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ListAutoScalingRecordsRequest() = default;
};
class ListAutoScalingRecordsResponseBodyDataScaleRecords : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> oldValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> specGroupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> strategy{};
  shared_ptr<string> targetValue{};

  ListAutoScalingRecordsResponseBodyDataScaleRecords() {}

  explicit ListAutoScalingRecordsResponseBodyDataScaleRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (oldValue) {
      res["OldValue"] = boost::any(*oldValue);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (specGroupId) {
      res["SpecGroupId"] = boost::any(*specGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (strategy) {
      res["Strategy"] = boost::any(*strategy);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OldValue") != m.end() && !m["OldValue"].empty()) {
      oldValue = make_shared<string>(boost::any_cast<string>(m["OldValue"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SpecGroupId") != m.end() && !m["SpecGroupId"].empty()) {
      specGroupId = make_shared<string>(boost::any_cast<string>(m["SpecGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      strategy = make_shared<string>(boost::any_cast<string>(m["Strategy"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
  }


  virtual ~ListAutoScalingRecordsResponseBodyDataScaleRecords() = default;
};
class ListAutoScalingRecordsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListAutoScalingRecordsResponseBodyDataScaleRecords>> scaleRecords{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  ListAutoScalingRecordsResponseBodyData() {}

  explicit ListAutoScalingRecordsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scaleRecords) {
      vector<boost::any> temp1;
      for(auto item1:*scaleRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleRecords"] = boost::any(temp1);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ScaleRecords") != m.end() && !m["ScaleRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleRecords"].type()) {
        vector<ListAutoScalingRecordsResponseBodyDataScaleRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAutoScalingRecordsResponseBodyDataScaleRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleRecords = make_shared<vector<ListAutoScalingRecordsResponseBodyDataScaleRecords>>(expect1);
      }
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListAutoScalingRecordsResponseBodyData() = default;
};
class ListAutoScalingRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListAutoScalingRecordsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAutoScalingRecordsResponseBody() {}

  explicit ListAutoScalingRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAutoScalingRecordsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAutoScalingRecordsResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ListAutoScalingRecordsResponseBody() = default;
};
class ListAutoScalingRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAutoScalingRecordsResponseBody> body{};

  ListAutoScalingRecordsResponse() {}

  explicit ListAutoScalingRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAutoScalingRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAutoScalingRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAutoScalingRecordsResponse() = default;
};
class ListAutoScalingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ListAutoScalingRulesRequest() {}

  explicit ListAutoScalingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ListAutoScalingRulesRequest() = default;
};
class ListAutoScalingRulesResponseBodyDataScaleRules : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> observationWindow{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> scaleInStep{};
  shared_ptr<long> scaleOutStep{};
  shared_ptr<long> silenceTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetMetric{};
  shared_ptr<long> targetNodes{};
  shared_ptr<long> thresholdLower{};
  shared_ptr<long> thresholdUpper{};
  shared_ptr<string> triggerCronExpr{};

  ListAutoScalingRulesResponseBodyDataScaleRules() {}

  explicit ListAutoScalingRulesResponseBodyDataScaleRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (observationWindow) {
      res["ObservationWindow"] = boost::any(*observationWindow);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scaleInStep) {
      res["ScaleInStep"] = boost::any(*scaleInStep);
    }
    if (scaleOutStep) {
      res["ScaleOutStep"] = boost::any(*scaleOutStep);
    }
    if (silenceTime) {
      res["SilenceTime"] = boost::any(*silenceTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetMetric) {
      res["TargetMetric"] = boost::any(*targetMetric);
    }
    if (targetNodes) {
      res["TargetNodes"] = boost::any(*targetNodes);
    }
    if (thresholdLower) {
      res["ThresholdLower"] = boost::any(*thresholdLower);
    }
    if (thresholdUpper) {
      res["ThresholdUpper"] = boost::any(*thresholdUpper);
    }
    if (triggerCronExpr) {
      res["TriggerCronExpr"] = boost::any(*triggerCronExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ObservationWindow") != m.end() && !m["ObservationWindow"].empty()) {
      observationWindow = make_shared<long>(boost::any_cast<long>(m["ObservationWindow"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScaleInStep") != m.end() && !m["ScaleInStep"].empty()) {
      scaleInStep = make_shared<long>(boost::any_cast<long>(m["ScaleInStep"]));
    }
    if (m.find("ScaleOutStep") != m.end() && !m["ScaleOutStep"].empty()) {
      scaleOutStep = make_shared<long>(boost::any_cast<long>(m["ScaleOutStep"]));
    }
    if (m.find("SilenceTime") != m.end() && !m["SilenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["SilenceTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetMetric") != m.end() && !m["TargetMetric"].empty()) {
      targetMetric = make_shared<string>(boost::any_cast<string>(m["TargetMetric"]));
    }
    if (m.find("TargetNodes") != m.end() && !m["TargetNodes"].empty()) {
      targetNodes = make_shared<long>(boost::any_cast<long>(m["TargetNodes"]));
    }
    if (m.find("ThresholdLower") != m.end() && !m["ThresholdLower"].empty()) {
      thresholdLower = make_shared<long>(boost::any_cast<long>(m["ThresholdLower"]));
    }
    if (m.find("ThresholdUpper") != m.end() && !m["ThresholdUpper"].empty()) {
      thresholdUpper = make_shared<long>(boost::any_cast<long>(m["ThresholdUpper"]));
    }
    if (m.find("TriggerCronExpr") != m.end() && !m["TriggerCronExpr"].empty()) {
      triggerCronExpr = make_shared<string>(boost::any_cast<string>(m["TriggerCronExpr"]));
    }
  }


  virtual ~ListAutoScalingRulesResponseBodyDataScaleRules() = default;
};
class ListAutoScalingRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAutoScalingRulesResponseBodyDataScaleRules>> scaleRules{};

  ListAutoScalingRulesResponseBodyData() {}

  explicit ListAutoScalingRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scaleRules) {
      vector<boost::any> temp1;
      for(auto item1:*scaleRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScaleRules") != m.end() && !m["ScaleRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleRules"].type()) {
        vector<ListAutoScalingRulesResponseBodyDataScaleRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAutoScalingRulesResponseBodyDataScaleRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleRules = make_shared<vector<ListAutoScalingRulesResponseBodyDataScaleRules>>(expect1);
      }
    }
  }


  virtual ~ListAutoScalingRulesResponseBodyData() = default;
};
class ListAutoScalingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListAutoScalingRulesResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAutoScalingRulesResponseBody() {}

  explicit ListAutoScalingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAutoScalingRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAutoScalingRulesResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ListAutoScalingRulesResponseBody() = default;
};
class ListAutoScalingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAutoScalingRulesResponseBody> body{};

  ListAutoScalingRulesResponse() {}

  explicit ListAutoScalingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAutoScalingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAutoScalingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAutoScalingRulesResponse() = default;
};
class ListLdpsComputeGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ListLdpsComputeGroupsRequest() {}

  explicit ListLdpsComputeGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ListLdpsComputeGroupsRequest() = default;
};
class ListLdpsComputeGroupsResponseBodyGroupList : public Darabonba::Model {
public:
  shared_ptr<string> exceptionInfo{};
  shared_ptr<string> groupName{};
  shared_ptr<bool> isDefault{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> state{};
  shared_ptr<string> webUI{};

  ListLdpsComputeGroupsResponseBodyGroupList() {}

  explicit ListLdpsComputeGroupsResponseBodyGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionInfo) {
      res["ExceptionInfo"] = boost::any(*exceptionInfo);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (webUI) {
      res["WebUI"] = boost::any(*webUI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionInfo") != m.end() && !m["ExceptionInfo"].empty()) {
      exceptionInfo = make_shared<string>(boost::any_cast<string>(m["ExceptionInfo"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("WebUI") != m.end() && !m["WebUI"].empty()) {
      webUI = make_shared<string>(boost::any_cast<string>(m["WebUI"]));
    }
  }


  virtual ~ListLdpsComputeGroupsResponseBodyGroupList() = default;
};
class ListLdpsComputeGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<ListLdpsComputeGroupsResponseBodyGroupList>> groupList{};
  shared_ptr<string> requestId{};

  ListLdpsComputeGroupsResponseBody() {}

  explicit ListLdpsComputeGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (groupList) {
      vector<boost::any> temp1;
      for(auto item1:*groupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("GroupList") != m.end() && !m["GroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupList"].type()) {
        vector<ListLdpsComputeGroupsResponseBodyGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLdpsComputeGroupsResponseBodyGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupList = make_shared<vector<ListLdpsComputeGroupsResponseBodyGroupList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListLdpsComputeGroupsResponseBody() = default;
};
class ListLdpsComputeGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLdpsComputeGroupsResponseBody> body{};

  ListLdpsComputeGroupsResponse() {}

  explicit ListLdpsComputeGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLdpsComputeGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLdpsComputeGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLdpsComputeGroupsResponse() = default;
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> securityToken{};
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
class ModifyAutoScalingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> configName{};
  shared_ptr<string> effectiveTimeEnd{};
  shared_ptr<string> effectiveTimeStart{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> nodesMax{};
  shared_ptr<long> nodesMin{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> specId{};

  ModifyAutoScalingConfigRequest() {}

  explicit ModifyAutoScalingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (effectiveTimeEnd) {
      res["EffectiveTimeEnd"] = boost::any(*effectiveTimeEnd);
    }
    if (effectiveTimeStart) {
      res["EffectiveTimeStart"] = boost::any(*effectiveTimeStart);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodesMax) {
      res["NodesMax"] = boost::any(*nodesMax);
    }
    if (nodesMin) {
      res["NodesMin"] = boost::any(*nodesMin);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("EffectiveTimeEnd") != m.end() && !m["EffectiveTimeEnd"].empty()) {
      effectiveTimeEnd = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeEnd"]));
    }
    if (m.find("EffectiveTimeStart") != m.end() && !m["EffectiveTimeStart"].empty()) {
      effectiveTimeStart = make_shared<string>(boost::any_cast<string>(m["EffectiveTimeStart"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodesMax") != m.end() && !m["NodesMax"].empty()) {
      nodesMax = make_shared<long>(boost::any_cast<long>(m["NodesMax"]));
    }
    if (m.find("NodesMin") != m.end() && !m["NodesMin"].empty()) {
      nodesMin = make_shared<long>(boost::any_cast<long>(m["NodesMin"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
  }


  virtual ~ModifyAutoScalingConfigRequest() = default;
};
class ModifyAutoScalingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyAutoScalingConfigResponseBody() {}

  explicit ModifyAutoScalingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ModifyAutoScalingConfigResponseBody() = default;
};
class ModifyAutoScalingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAutoScalingConfigResponseBody> body{};

  ModifyAutoScalingConfigResponse() {}

  explicit ModifyAutoScalingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAutoScalingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAutoScalingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAutoScalingConfigResponse() = default;
};
class ModifyAutoScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> observationWindow{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<long> scaleInStep{};
  shared_ptr<long> scaleOutStep{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> silenceTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> targetMetric{};
  shared_ptr<long> targetNodes{};
  shared_ptr<long> thresholdLower{};
  shared_ptr<long> thresholdUpper{};
  shared_ptr<string> triggerCronExpr{};

  ModifyAutoScalingRuleRequest() {}

  explicit ModifyAutoScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (observationWindow) {
      res["ObservationWindow"] = boost::any(*observationWindow);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (scaleInStep) {
      res["ScaleInStep"] = boost::any(*scaleInStep);
    }
    if (scaleOutStep) {
      res["ScaleOutStep"] = boost::any(*scaleOutStep);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (silenceTime) {
      res["SilenceTime"] = boost::any(*silenceTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetMetric) {
      res["TargetMetric"] = boost::any(*targetMetric);
    }
    if (targetNodes) {
      res["TargetNodes"] = boost::any(*targetNodes);
    }
    if (thresholdLower) {
      res["ThresholdLower"] = boost::any(*thresholdLower);
    }
    if (thresholdUpper) {
      res["ThresholdUpper"] = boost::any(*thresholdUpper);
    }
    if (triggerCronExpr) {
      res["TriggerCronExpr"] = boost::any(*triggerCronExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ObservationWindow") != m.end() && !m["ObservationWindow"].empty()) {
      observationWindow = make_shared<long>(boost::any_cast<long>(m["ObservationWindow"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("ScaleInStep") != m.end() && !m["ScaleInStep"].empty()) {
      scaleInStep = make_shared<long>(boost::any_cast<long>(m["ScaleInStep"]));
    }
    if (m.find("ScaleOutStep") != m.end() && !m["ScaleOutStep"].empty()) {
      scaleOutStep = make_shared<long>(boost::any_cast<long>(m["ScaleOutStep"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SilenceTime") != m.end() && !m["SilenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["SilenceTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TargetMetric") != m.end() && !m["TargetMetric"].empty()) {
      targetMetric = make_shared<string>(boost::any_cast<string>(m["TargetMetric"]));
    }
    if (m.find("TargetNodes") != m.end() && !m["TargetNodes"].empty()) {
      targetNodes = make_shared<long>(boost::any_cast<long>(m["TargetNodes"]));
    }
    if (m.find("ThresholdLower") != m.end() && !m["ThresholdLower"].empty()) {
      thresholdLower = make_shared<long>(boost::any_cast<long>(m["ThresholdLower"]));
    }
    if (m.find("ThresholdUpper") != m.end() && !m["ThresholdUpper"].empty()) {
      thresholdUpper = make_shared<long>(boost::any_cast<long>(m["ThresholdUpper"]));
    }
    if (m.find("TriggerCronExpr") != m.end() && !m["TriggerCronExpr"].empty()) {
      triggerCronExpr = make_shared<string>(boost::any_cast<string>(m["TriggerCronExpr"]));
    }
  }


  virtual ~ModifyAutoScalingRuleRequest() = default;
};
class ModifyAutoScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyAutoScalingRuleResponseBody() {}

  explicit ModifyAutoScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ModifyAutoScalingRuleResponseBody() = default;
};
class ModifyAutoScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAutoScalingRuleResponseBody> body{};

  ModifyAutoScalingRuleResponse() {}

  explicit ModifyAutoScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAutoScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAutoScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAutoScalingRuleResponse() = default;
};
class ModifyInstancePayTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyInstancePayTypeRequest() {}

  explicit ModifyInstancePayTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyInstancePayTypeRequest() = default;
};
class ModifyInstancePayTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  ModifyInstancePayTypeResponseBody() {}

  explicit ModifyInstancePayTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyInstancePayTypeResponseBody() = default;
};
class ModifyInstancePayTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstancePayTypeResponseBody> body{};

  ModifyInstancePayTypeResponse() {}

  explicit ModifyInstancePayTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstancePayTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstancePayTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstancePayTypeResponse() = default;
};
class ModifyLindormV2InstanceRequestNodeGroupList : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> nodeCount{};
  shared_ptr<long> nodeDiskSize{};
  shared_ptr<string> nodeDiskType{};
  shared_ptr<string> nodeSpec{};
  shared_ptr<string> resourceGroupName{};

  ModifyLindormV2InstanceRequestNodeGroupList() {}

  explicit ModifyLindormV2InstanceRequestNodeGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeDiskSize) {
      res["NodeDiskSize"] = boost::any(*nodeDiskSize);
    }
    if (nodeDiskType) {
      res["NodeDiskType"] = boost::any(*nodeDiskType);
    }
    if (nodeSpec) {
      res["NodeSpec"] = boost::any(*nodeSpec);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<string>(boost::any_cast<string>(m["NodeCount"]));
    }
    if (m.find("NodeDiskSize") != m.end() && !m["NodeDiskSize"].empty()) {
      nodeDiskSize = make_shared<long>(boost::any_cast<long>(m["NodeDiskSize"]));
    }
    if (m.find("NodeDiskType") != m.end() && !m["NodeDiskType"].empty()) {
      nodeDiskType = make_shared<string>(boost::any_cast<string>(m["NodeDiskType"]));
    }
    if (m.find("NodeSpec") != m.end() && !m["NodeSpec"].empty()) {
      nodeSpec = make_shared<string>(boost::any_cast<string>(m["NodeSpec"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
  }


  virtual ~ModifyLindormV2InstanceRequestNodeGroupList() = default;
};
class ModifyLindormV2InstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> cloudStorageSize{};
  shared_ptr<string> cloudStorageType{};
  shared_ptr<string> engineType{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<ModifyLindormV2InstanceRequestNodeGroupList>> nodeGroupList{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> upgradeType{};

  ModifyLindormV2InstanceRequest() {}

  explicit ModifyLindormV2InstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudStorageSize) {
      res["CloudStorageSize"] = boost::any(*cloudStorageSize);
    }
    if (cloudStorageType) {
      res["CloudStorageType"] = boost::any(*cloudStorageType);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroupList"] = boost::any(temp1);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (upgradeType) {
      res["UpgradeType"] = boost::any(*upgradeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudStorageSize") != m.end() && !m["CloudStorageSize"].empty()) {
      cloudStorageSize = make_shared<long>(boost::any_cast<long>(m["CloudStorageSize"]));
    }
    if (m.find("CloudStorageType") != m.end() && !m["CloudStorageType"].empty()) {
      cloudStorageType = make_shared<string>(boost::any_cast<string>(m["CloudStorageType"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupList") != m.end() && !m["NodeGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroupList"].type()) {
        vector<ModifyLindormV2InstanceRequestNodeGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyLindormV2InstanceRequestNodeGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroupList = make_shared<vector<ModifyLindormV2InstanceRequestNodeGroupList>>(expect1);
      }
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("UpgradeType") != m.end() && !m["UpgradeType"].empty()) {
      upgradeType = make_shared<string>(boost::any_cast<string>(m["UpgradeType"]));
    }
  }


  virtual ~ModifyLindormV2InstanceRequest() = default;
};
class ModifyLindormV2InstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  ModifyLindormV2InstanceResponseBody() {}

  explicit ModifyLindormV2InstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyLindormV2InstanceResponseBody() = default;
};
class ModifyLindormV2InstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyLindormV2InstanceResponseBody> body{};

  ModifyLindormV2InstanceResponse() {}

  explicit ModifyLindormV2InstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLindormV2InstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLindormV2InstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLindormV2InstanceResponse() = default;
};
class ModifyLindormV2WhiteIpListRequest : public Darabonba::Model {
public:
  shared_ptr<bool> deleteGroup{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> whiteIpList{};

  ModifyLindormV2WhiteIpListRequest() {}

  explicit ModifyLindormV2WhiteIpListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteGroup) {
      res["DeleteGroup"] = boost::any(*deleteGroup);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (whiteIpList) {
      res["WhiteIpList"] = boost::any(*whiteIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteGroup") != m.end() && !m["DeleteGroup"].empty()) {
      deleteGroup = make_shared<bool>(boost::any_cast<bool>(m["DeleteGroup"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("WhiteIpList") != m.end() && !m["WhiteIpList"].empty()) {
      whiteIpList = make_shared<string>(boost::any_cast<string>(m["WhiteIpList"]));
    }
  }


  virtual ~ModifyLindormV2WhiteIpListRequest() = default;
};
class ModifyLindormV2WhiteIpListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  ModifyLindormV2WhiteIpListResponseBody() {}

  explicit ModifyLindormV2WhiteIpListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyLindormV2WhiteIpListResponseBody() = default;
};
class ModifyLindormV2WhiteIpListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyLindormV2WhiteIpListResponseBody> body{};

  ModifyLindormV2WhiteIpListResponse() {}

  explicit ModifyLindormV2WhiteIpListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLindormV2WhiteIpListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLindormV2WhiteIpListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLindormV2WhiteIpListResponse() = default;
};
class OpenComputeEngineRequest : public Darabonba::Model {
public:
  shared_ptr<string> cpuLimit{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> memoryLimit{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  OpenComputeEngineRequest() {}

  explicit OpenComputeEngineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuLimit) {
      res["CpuLimit"] = boost::any(*cpuLimit);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuLimit") != m.end() && !m["CpuLimit"].empty()) {
      cpuLimit = make_shared<string>(boost::any_cast<string>(m["CpuLimit"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<string>(boost::any_cast<string>(m["MemoryLimit"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~OpenComputeEngineRequest() = default;
};
class OpenComputeEngineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  OpenComputeEngineResponseBody() {}

  explicit OpenComputeEngineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenComputeEngineResponseBody() = default;
};
class OpenComputeEngineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenComputeEngineResponseBody> body{};

  OpenComputeEngineResponse() {}

  explicit OpenComputeEngineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenComputeEngineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenComputeEngineResponseBody>(model1);
      }
    }
  }


  virtual ~OpenComputeEngineResponse() = default;
};
class OpenComputePreCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> cpuLimit{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> memoryLimit{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  OpenComputePreCheckRequest() {}

  explicit OpenComputePreCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuLimit) {
      res["CpuLimit"] = boost::any(*cpuLimit);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuLimit") != m.end() && !m["CpuLimit"].empty()) {
      cpuLimit = make_shared<string>(boost::any_cast<string>(m["CpuLimit"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<string>(boost::any_cast<string>(m["MemoryLimit"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~OpenComputePreCheckRequest() = default;
};
class OpenComputePreCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  OpenComputePreCheckResponseBody() {}

  explicit OpenComputePreCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenComputePreCheckResponseBody() = default;
};
class OpenComputePreCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenComputePreCheckResponseBody> body{};

  OpenComputePreCheckResponse() {}

  explicit OpenComputePreCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenComputePreCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenComputePreCheckResponseBody>(model1);
      }
    }
  }


  virtual ~OpenComputePreCheckResponse() = default;
};
class ReleaseLindormInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> immediately{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ReleaseLindormInstanceRequest() {}

  explicit ReleaseLindormInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (immediately) {
      res["Immediately"] = boost::any(*immediately);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Immediately") != m.end() && !m["Immediately"].empty()) {
      immediately = make_shared<bool>(boost::any_cast<bool>(m["Immediately"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ReleaseLindormInstanceRequest() = default;
};
class ReleaseLindormInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseLindormInstanceResponseBody() {}

  explicit ReleaseLindormInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseLindormInstanceResponseBody() = default;
};
class ReleaseLindormInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseLindormInstanceResponseBody> body{};

  ReleaseLindormInstanceResponse() {}

  explicit ReleaseLindormInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseLindormInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseLindormInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseLindormInstanceResponse() = default;
};
class ReleaseLindormV2InstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> immediately{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ReleaseLindormV2InstanceRequest() {}

  explicit ReleaseLindormV2InstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (immediately) {
      res["Immediately"] = boost::any(*immediately);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Immediately") != m.end() && !m["Immediately"].empty()) {
      immediately = make_shared<bool>(boost::any_cast<bool>(m["Immediately"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ReleaseLindormV2InstanceRequest() = default;
};
class ReleaseLindormV2InstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  ReleaseLindormV2InstanceResponseBody() {}

  explicit ReleaseLindormV2InstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleaseLindormV2InstanceResponseBody() = default;
};
class ReleaseLindormV2InstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseLindormV2InstanceResponseBody> body{};

  ReleaseLindormV2InstanceResponse() {}

  explicit ReleaseLindormV2InstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseLindormV2InstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseLindormV2InstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseLindormV2InstanceResponse() = default;
};
class RenewLindormInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  RenewLindormInstanceRequest() {}

  explicit RenewLindormInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RenewLindormInstanceRequest() = default;
};
class RenewLindormInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  RenewLindormInstanceResponseBody() {}

  explicit RenewLindormInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewLindormInstanceResponseBody() = default;
};
class RenewLindormInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewLindormInstanceResponseBody> body{};

  RenewLindormInstanceResponse() {}

  explicit RenewLindormInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewLindormInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewLindormInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewLindormInstanceResponse() = default;
};
class RestartLdpsComputeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  RestartLdpsComputeGroupRequest() {}

  explicit RestartLdpsComputeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RestartLdpsComputeGroupRequest() = default;
};
class RestartLdpsComputeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  RestartLdpsComputeGroupResponseBody() {}

  explicit RestartLdpsComputeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestartLdpsComputeGroupResponseBody() = default;
};
class RestartLdpsComputeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartLdpsComputeGroupResponseBody> body{};

  RestartLdpsComputeGroupResponse() {}

  explicit RestartLdpsComputeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartLdpsComputeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartLdpsComputeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RestartLdpsComputeGroupResponse() = default;
};
class SetDefaultOlapComputeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  SetDefaultOlapComputeGroupRequest() {}

  explicit SetDefaultOlapComputeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SetDefaultOlapComputeGroupRequest() = default;
};
class SetDefaultOlapComputeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDefaultOlapComputeGroupResponseBody() {}

  explicit SetDefaultOlapComputeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDefaultOlapComputeGroupResponseBody() = default;
};
class SetDefaultOlapComputeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDefaultOlapComputeGroupResponseBody> body{};

  SetDefaultOlapComputeGroupResponse() {}

  explicit SetDefaultOlapComputeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDefaultOlapComputeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultOlapComputeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultOlapComputeGroupResponse() = default;
};
class SwitchLSQLV3MySQLServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> actionType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  SwitchLSQLV3MySQLServiceRequest() {}

  explicit SwitchLSQLV3MySQLServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<long>(boost::any_cast<long>(m["ActionType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SwitchLSQLV3MySQLServiceRequest() = default;
};
class SwitchLSQLV3MySQLServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  SwitchLSQLV3MySQLServiceResponseBody() {}

  explicit SwitchLSQLV3MySQLServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SwitchLSQLV3MySQLServiceResponseBody() = default;
};
class SwitchLSQLV3MySQLServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchLSQLV3MySQLServiceResponseBody> body{};

  SwitchLSQLV3MySQLServiceResponse() {}

  explicit SwitchLSQLV3MySQLServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchLSQLV3MySQLServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchLSQLV3MySQLServiceResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchLSQLV3MySQLServiceResponse() = default;
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> securityToken{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> securityToken{};
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
class UpdateInstanceIpWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<bool> delete_{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIpList{};
  shared_ptr<string> securityToken{};

  UpdateInstanceIpWhiteListRequest() {}

  explicit UpdateInstanceIpWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delete_) {
      res["Delete"] = boost::any(*delete_);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityIpList) {
      res["SecurityIpList"] = boost::any(*securityIpList);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delete") != m.end() && !m["Delete"].empty()) {
      delete_ = make_shared<bool>(boost::any_cast<bool>(m["Delete"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      securityIpList = make_shared<string>(boost::any_cast<string>(m["SecurityIpList"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~UpdateInstanceIpWhiteListRequest() = default;
};
class UpdateInstanceIpWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  UpdateInstanceIpWhiteListResponseBody() {}

  explicit UpdateInstanceIpWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateInstanceIpWhiteListResponseBody() = default;
};
class UpdateInstanceIpWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceIpWhiteListResponseBody> body{};

  UpdateInstanceIpWhiteListResponse() {}

  explicit UpdateInstanceIpWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceIpWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceIpWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceIpWhiteListResponse() = default;
};
class UpdateInstanceSecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroups{};
  shared_ptr<string> securityToken{};

  UpdateInstanceSecurityGroupsRequest() {}

  explicit UpdateInstanceSecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityGroups) {
      res["SecurityGroups"] = boost::any(*securityGroups);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      securityGroups = make_shared<string>(boost::any_cast<string>(m["SecurityGroups"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~UpdateInstanceSecurityGroupsRequest() = default;
};
class UpdateInstanceSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstanceSecurityGroupsResponseBody() {}

  explicit UpdateInstanceSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceSecurityGroupsResponseBody() = default;
};
class UpdateInstanceSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceSecurityGroupsResponseBody> body{};

  UpdateInstanceSecurityGroupsResponse() {}

  explicit UpdateInstanceSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceSecurityGroupsResponse() = default;
};
class UpdateLdpsComputeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> properties{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  UpdateLdpsComputeGroupRequest() {}

  explicit UpdateLdpsComputeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~UpdateLdpsComputeGroupRequest() = default;
};
class UpdateLdpsComputeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  UpdateLdpsComputeGroupResponseBody() {}

  explicit UpdateLdpsComputeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLdpsComputeGroupResponseBody() = default;
};
class UpdateLdpsComputeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLdpsComputeGroupResponseBody> body{};

  UpdateLdpsComputeGroupResponse() {}

  explicit UpdateLdpsComputeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLdpsComputeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLdpsComputeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLdpsComputeGroupResponse() = default;
};
class UpdateLindormV2InstanceParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> updateType{};

  UpdateLindormV2InstanceParameterRequest() {}

  explicit UpdateLindormV2InstanceParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (updateType) {
      res["UpdateType"] = boost::any(*updateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("UpdateType") != m.end() && !m["UpdateType"].empty()) {
      updateType = make_shared<string>(boost::any_cast<string>(m["UpdateType"]));
    }
  }


  virtual ~UpdateLindormV2InstanceParameterRequest() = default;
};
class UpdateLindormV2InstanceParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  UpdateLindormV2InstanceParameterResponseBody() {}

  explicit UpdateLindormV2InstanceParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLindormV2InstanceParameterResponseBody() = default;
};
class UpdateLindormV2InstanceParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLindormV2InstanceParameterResponseBody> body{};

  UpdateLindormV2InstanceParameterResponse() {}

  explicit UpdateLindormV2InstanceParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLindormV2InstanceParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLindormV2InstanceParameterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLindormV2InstanceParameterResponse() = default;
};
class UpgradeLindormInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> clusterStorage{};
  shared_ptr<long> coldStorage{};
  shared_ptr<long> coreSingleStorage{};
  shared_ptr<long> filestoreNum{};
  shared_ptr<string> filestoreSpec{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lindormNum{};
  shared_ptr<string> lindormSpec{};
  shared_ptr<long> logNum{};
  shared_ptr<long> logSingleStorage{};
  shared_ptr<string> logSpec{};
  shared_ptr<long> ltsCoreNum{};
  shared_ptr<string> ltsCoreSpec{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> solrNum{};
  shared_ptr<string> solrSpec{};
  shared_ptr<long> streamNum{};
  shared_ptr<string> streamSpec{};
  shared_ptr<long> tsdbNum{};
  shared_ptr<string> tsdbSpec{};
  shared_ptr<string> upgradeType{};
  shared_ptr<string> zoneId{};

  UpgradeLindormInstanceRequest() {}

  explicit UpgradeLindormInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterStorage) {
      res["ClusterStorage"] = boost::any(*clusterStorage);
    }
    if (coldStorage) {
      res["ColdStorage"] = boost::any(*coldStorage);
    }
    if (coreSingleStorage) {
      res["CoreSingleStorage"] = boost::any(*coreSingleStorage);
    }
    if (filestoreNum) {
      res["FilestoreNum"] = boost::any(*filestoreNum);
    }
    if (filestoreSpec) {
      res["FilestoreSpec"] = boost::any(*filestoreSpec);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lindormNum) {
      res["LindormNum"] = boost::any(*lindormNum);
    }
    if (lindormSpec) {
      res["LindormSpec"] = boost::any(*lindormSpec);
    }
    if (logNum) {
      res["LogNum"] = boost::any(*logNum);
    }
    if (logSingleStorage) {
      res["LogSingleStorage"] = boost::any(*logSingleStorage);
    }
    if (logSpec) {
      res["LogSpec"] = boost::any(*logSpec);
    }
    if (ltsCoreNum) {
      res["LtsCoreNum"] = boost::any(*ltsCoreNum);
    }
    if (ltsCoreSpec) {
      res["LtsCoreSpec"] = boost::any(*ltsCoreSpec);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (solrNum) {
      res["SolrNum"] = boost::any(*solrNum);
    }
    if (solrSpec) {
      res["SolrSpec"] = boost::any(*solrSpec);
    }
    if (streamNum) {
      res["StreamNum"] = boost::any(*streamNum);
    }
    if (streamSpec) {
      res["StreamSpec"] = boost::any(*streamSpec);
    }
    if (tsdbNum) {
      res["TsdbNum"] = boost::any(*tsdbNum);
    }
    if (tsdbSpec) {
      res["TsdbSpec"] = boost::any(*tsdbSpec);
    }
    if (upgradeType) {
      res["UpgradeType"] = boost::any(*upgradeType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterStorage") != m.end() && !m["ClusterStorage"].empty()) {
      clusterStorage = make_shared<long>(boost::any_cast<long>(m["ClusterStorage"]));
    }
    if (m.find("ColdStorage") != m.end() && !m["ColdStorage"].empty()) {
      coldStorage = make_shared<long>(boost::any_cast<long>(m["ColdStorage"]));
    }
    if (m.find("CoreSingleStorage") != m.end() && !m["CoreSingleStorage"].empty()) {
      coreSingleStorage = make_shared<long>(boost::any_cast<long>(m["CoreSingleStorage"]));
    }
    if (m.find("FilestoreNum") != m.end() && !m["FilestoreNum"].empty()) {
      filestoreNum = make_shared<long>(boost::any_cast<long>(m["FilestoreNum"]));
    }
    if (m.find("FilestoreSpec") != m.end() && !m["FilestoreSpec"].empty()) {
      filestoreSpec = make_shared<string>(boost::any_cast<string>(m["FilestoreSpec"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LindormNum") != m.end() && !m["LindormNum"].empty()) {
      lindormNum = make_shared<long>(boost::any_cast<long>(m["LindormNum"]));
    }
    if (m.find("LindormSpec") != m.end() && !m["LindormSpec"].empty()) {
      lindormSpec = make_shared<string>(boost::any_cast<string>(m["LindormSpec"]));
    }
    if (m.find("LogNum") != m.end() && !m["LogNum"].empty()) {
      logNum = make_shared<long>(boost::any_cast<long>(m["LogNum"]));
    }
    if (m.find("LogSingleStorage") != m.end() && !m["LogSingleStorage"].empty()) {
      logSingleStorage = make_shared<long>(boost::any_cast<long>(m["LogSingleStorage"]));
    }
    if (m.find("LogSpec") != m.end() && !m["LogSpec"].empty()) {
      logSpec = make_shared<string>(boost::any_cast<string>(m["LogSpec"]));
    }
    if (m.find("LtsCoreNum") != m.end() && !m["LtsCoreNum"].empty()) {
      ltsCoreNum = make_shared<long>(boost::any_cast<long>(m["LtsCoreNum"]));
    }
    if (m.find("LtsCoreSpec") != m.end() && !m["LtsCoreSpec"].empty()) {
      ltsCoreSpec = make_shared<string>(boost::any_cast<string>(m["LtsCoreSpec"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SolrNum") != m.end() && !m["SolrNum"].empty()) {
      solrNum = make_shared<long>(boost::any_cast<long>(m["SolrNum"]));
    }
    if (m.find("SolrSpec") != m.end() && !m["SolrSpec"].empty()) {
      solrSpec = make_shared<string>(boost::any_cast<string>(m["SolrSpec"]));
    }
    if (m.find("StreamNum") != m.end() && !m["StreamNum"].empty()) {
      streamNum = make_shared<long>(boost::any_cast<long>(m["StreamNum"]));
    }
    if (m.find("StreamSpec") != m.end() && !m["StreamSpec"].empty()) {
      streamSpec = make_shared<string>(boost::any_cast<string>(m["StreamSpec"]));
    }
    if (m.find("TsdbNum") != m.end() && !m["TsdbNum"].empty()) {
      tsdbNum = make_shared<long>(boost::any_cast<long>(m["TsdbNum"]));
    }
    if (m.find("TsdbSpec") != m.end() && !m["TsdbSpec"].empty()) {
      tsdbSpec = make_shared<string>(boost::any_cast<string>(m["TsdbSpec"]));
    }
    if (m.find("UpgradeType") != m.end() && !m["UpgradeType"].empty()) {
      upgradeType = make_shared<string>(boost::any_cast<string>(m["UpgradeType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpgradeLindormInstanceRequest() = default;
};
class UpgradeLindormInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  UpgradeLindormInstanceResponseBody() {}

  explicit UpgradeLindormInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeLindormInstanceResponseBody() = default;
};
class UpgradeLindormInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeLindormInstanceResponseBody> body{};

  UpgradeLindormInstanceResponse() {}

  explicit UpgradeLindormInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeLindormInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeLindormInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeLindormInstanceResponse() = default;
};
class UpgradeLindormV2StreamEngineRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> spec{};
  shared_ptr<string> specId{};
  shared_ptr<string> upgradeType{};

  UpgradeLindormV2StreamEngineRequest() {}

  explicit UpgradeLindormV2StreamEngineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (upgradeType) {
      res["UpgradeType"] = boost::any(*upgradeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
    if (m.find("UpgradeType") != m.end() && !m["UpgradeType"].empty()) {
      upgradeType = make_shared<string>(boost::any_cast<string>(m["UpgradeType"]));
    }
  }


  virtual ~UpgradeLindormV2StreamEngineRequest() = default;
};
class UpgradeLindormV2StreamEngineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> requestId{};

  UpgradeLindormV2StreamEngineResponseBody() {}

  explicit UpgradeLindormV2StreamEngineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeLindormV2StreamEngineResponseBody() = default;
};
class UpgradeLindormV2StreamEngineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeLindormV2StreamEngineResponseBody> body{};

  UpgradeLindormV2StreamEngineResponse() {}

  explicit UpgradeLindormV2StreamEngineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeLindormV2StreamEngineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeLindormV2StreamEngineResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeLindormV2StreamEngineResponse() = default;
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
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CheckLdpsColumnarIndexStatusResponse checkLdpsColumnarIndexStatusWithOptions(shared_ptr<CheckLdpsColumnarIndexStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckLdpsColumnarIndexStatusResponse checkLdpsColumnarIndexStatus(shared_ptr<CheckLdpsColumnarIndexStatusRequest> request);
  CreateAutoScalingConfigResponse createAutoScalingConfigWithOptions(shared_ptr<CreateAutoScalingConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoScalingConfigResponse createAutoScalingConfig(shared_ptr<CreateAutoScalingConfigRequest> request);
  CreateAutoScalingRuleResponse createAutoScalingRuleWithOptions(shared_ptr<CreateAutoScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoScalingRuleResponse createAutoScalingRule(shared_ptr<CreateAutoScalingRuleRequest> request);
  CreateLdpsComputeGroupResponse createLdpsComputeGroupWithOptions(shared_ptr<CreateLdpsComputeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLdpsComputeGroupResponse createLdpsComputeGroup(shared_ptr<CreateLdpsComputeGroupRequest> request);
  CreateLindormInstanceResponse createLindormInstanceWithOptions(shared_ptr<CreateLindormInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLindormInstanceResponse createLindormInstance(shared_ptr<CreateLindormInstanceRequest> request);
  CreateLindormV2InstanceResponse createLindormV2InstanceWithOptions(shared_ptr<CreateLindormV2InstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLindormV2InstanceResponse createLindormV2Instance(shared_ptr<CreateLindormV2InstanceRequest> request);
  DeleteAutoScalingConfigResponse deleteAutoScalingConfigWithOptions(shared_ptr<DeleteAutoScalingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutoScalingConfigResponse deleteAutoScalingConfig(shared_ptr<DeleteAutoScalingConfigRequest> request);
  DeleteAutoScalingRuleResponse deleteAutoScalingRuleWithOptions(shared_ptr<DeleteAutoScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutoScalingRuleResponse deleteAutoScalingRule(shared_ptr<DeleteAutoScalingRuleRequest> request);
  DeleteCustomResourceResponse deleteCustomResourceWithOptions(shared_ptr<DeleteCustomResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomResourceResponse deleteCustomResource(shared_ptr<DeleteCustomResourceRequest> request);
  DeleteLdpsComputeGroupResponse deleteLdpsComputeGroupWithOptions(shared_ptr<DeleteLdpsComputeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLdpsComputeGroupResponse deleteLdpsComputeGroup(shared_ptr<DeleteLdpsComputeGroupRequest> request);
  DeployLdpsSemiManagedComponentResponse deployLdpsSemiManagedComponentWithOptions(shared_ptr<DeployLdpsSemiManagedComponentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployLdpsSemiManagedComponentResponse deployLdpsSemiManagedComponent(shared_ptr<DeployLdpsSemiManagedComponentRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  GetAutoScalingConfigResponse getAutoScalingConfigWithOptions(shared_ptr<GetAutoScalingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoScalingConfigResponse getAutoScalingConfig(shared_ptr<GetAutoScalingConfigRequest> request);
  GetAutoScalingRuleResponse getAutoScalingRuleWithOptions(shared_ptr<GetAutoScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoScalingRuleResponse getAutoScalingRule(shared_ptr<GetAutoScalingRuleRequest> request);
  GetClientSourceIpResponse getClientSourceIpWithOptions(shared_ptr<GetClientSourceIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClientSourceIpResponse getClientSourceIp(shared_ptr<GetClientSourceIpRequest> request);
  GetEngineDefaultAuthResponse getEngineDefaultAuthWithOptions(shared_ptr<GetEngineDefaultAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEngineDefaultAuthResponse getEngineDefaultAuth(shared_ptr<GetEngineDefaultAuthRequest> request);
  GetInstanceIpWhiteListResponse getInstanceIpWhiteListWithOptions(shared_ptr<GetInstanceIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceIpWhiteListResponse getInstanceIpWhiteList(shared_ptr<GetInstanceIpWhiteListRequest> request);
  GetInstanceSecurityGroupsResponse getInstanceSecurityGroupsWithOptions(shared_ptr<GetInstanceSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceSecurityGroupsResponse getInstanceSecurityGroups(shared_ptr<GetInstanceSecurityGroupsRequest> request);
  GetLdpsComputeGroupResponse getLdpsComputeGroupWithOptions(shared_ptr<GetLdpsComputeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLdpsComputeGroupResponse getLdpsComputeGroup(shared_ptr<GetLdpsComputeGroupRequest> request);
  GetLdpsNamespacedQuotaResponse getLdpsNamespacedQuotaWithOptions(shared_ptr<GetLdpsNamespacedQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLdpsNamespacedQuotaResponse getLdpsNamespacedQuota(shared_ptr<GetLdpsNamespacedQuotaRequest> request);
  GetLdpsResourceCostResponse getLdpsResourceCostWithOptions(shared_ptr<GetLdpsResourceCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLdpsResourceCostResponse getLdpsResourceCost(shared_ptr<GetLdpsResourceCostRequest> request);
  GetLindormFsUsedDetailResponse getLindormFsUsedDetailWithOptions(shared_ptr<GetLindormFsUsedDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLindormFsUsedDetailResponse getLindormFsUsedDetail(shared_ptr<GetLindormFsUsedDetailRequest> request);
  GetLindormInstanceResponse getLindormInstanceWithOptions(shared_ptr<GetLindormInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLindormInstanceResponse getLindormInstance(shared_ptr<GetLindormInstanceRequest> request);
  GetLindormInstanceEngineListResponse getLindormInstanceEngineListWithOptions(shared_ptr<GetLindormInstanceEngineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLindormInstanceEngineListResponse getLindormInstanceEngineList(shared_ptr<GetLindormInstanceEngineListRequest> request);
  GetLindormInstanceListResponse getLindormInstanceListWithOptions(shared_ptr<GetLindormInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLindormInstanceListResponse getLindormInstanceList(shared_ptr<GetLindormInstanceListRequest> request);
  GetLindormV2InstanceResponse getLindormV2InstanceWithOptions(shared_ptr<GetLindormV2InstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLindormV2InstanceResponse getLindormV2Instance(shared_ptr<GetLindormV2InstanceRequest> request);
  GetLindormV2InstanceEngineListResponse getLindormV2InstanceEngineListWithOptions(shared_ptr<GetLindormV2InstanceEngineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLindormV2InstanceEngineListResponse getLindormV2InstanceEngineList(shared_ptr<GetLindormV2InstanceEngineListRequest> request);
  GetLindormV2StorageUsageResponse getLindormV2StorageUsageWithOptions(shared_ptr<GetLindormV2StorageUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLindormV2StorageUsageResponse getLindormV2StorageUsage(shared_ptr<GetLindormV2StorageUsageRequest> request);
  ListAutoScalingConfigsResponse listAutoScalingConfigsWithOptions(shared_ptr<ListAutoScalingConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAutoScalingConfigsResponse listAutoScalingConfigs(shared_ptr<ListAutoScalingConfigsRequest> request);
  ListAutoScalingRecordsResponse listAutoScalingRecordsWithOptions(shared_ptr<ListAutoScalingRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAutoScalingRecordsResponse listAutoScalingRecords(shared_ptr<ListAutoScalingRecordsRequest> request);
  ListAutoScalingRulesResponse listAutoScalingRulesWithOptions(shared_ptr<ListAutoScalingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAutoScalingRulesResponse listAutoScalingRules(shared_ptr<ListAutoScalingRulesRequest> request);
  ListLdpsComputeGroupsResponse listLdpsComputeGroupsWithOptions(shared_ptr<ListLdpsComputeGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLdpsComputeGroupsResponse listLdpsComputeGroups(shared_ptr<ListLdpsComputeGroupsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyAutoScalingConfigResponse modifyAutoScalingConfigWithOptions(shared_ptr<ModifyAutoScalingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAutoScalingConfigResponse modifyAutoScalingConfig(shared_ptr<ModifyAutoScalingConfigRequest> request);
  ModifyAutoScalingRuleResponse modifyAutoScalingRuleWithOptions(shared_ptr<ModifyAutoScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAutoScalingRuleResponse modifyAutoScalingRule(shared_ptr<ModifyAutoScalingRuleRequest> request);
  ModifyInstancePayTypeResponse modifyInstancePayTypeWithOptions(shared_ptr<ModifyInstancePayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstancePayTypeResponse modifyInstancePayType(shared_ptr<ModifyInstancePayTypeRequest> request);
  ModifyLindormV2InstanceResponse modifyLindormV2InstanceWithOptions(shared_ptr<ModifyLindormV2InstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLindormV2InstanceResponse modifyLindormV2Instance(shared_ptr<ModifyLindormV2InstanceRequest> request);
  ModifyLindormV2WhiteIpListResponse modifyLindormV2WhiteIpListWithOptions(shared_ptr<ModifyLindormV2WhiteIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLindormV2WhiteIpListResponse modifyLindormV2WhiteIpList(shared_ptr<ModifyLindormV2WhiteIpListRequest> request);
  OpenComputeEngineResponse openComputeEngineWithOptions(shared_ptr<OpenComputeEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenComputeEngineResponse openComputeEngine(shared_ptr<OpenComputeEngineRequest> request);
  OpenComputePreCheckResponse openComputePreCheckWithOptions(shared_ptr<OpenComputePreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenComputePreCheckResponse openComputePreCheck(shared_ptr<OpenComputePreCheckRequest> request);
  ReleaseLindormInstanceResponse releaseLindormInstanceWithOptions(shared_ptr<ReleaseLindormInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseLindormInstanceResponse releaseLindormInstance(shared_ptr<ReleaseLindormInstanceRequest> request);
  ReleaseLindormV2InstanceResponse releaseLindormV2InstanceWithOptions(shared_ptr<ReleaseLindormV2InstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseLindormV2InstanceResponse releaseLindormV2Instance(shared_ptr<ReleaseLindormV2InstanceRequest> request);
  RenewLindormInstanceResponse renewLindormInstanceWithOptions(shared_ptr<RenewLindormInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewLindormInstanceResponse renewLindormInstance(shared_ptr<RenewLindormInstanceRequest> request);
  RestartLdpsComputeGroupResponse restartLdpsComputeGroupWithOptions(shared_ptr<RestartLdpsComputeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartLdpsComputeGroupResponse restartLdpsComputeGroup(shared_ptr<RestartLdpsComputeGroupRequest> request);
  SetDefaultOlapComputeGroupResponse setDefaultOlapComputeGroupWithOptions(shared_ptr<SetDefaultOlapComputeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultOlapComputeGroupResponse setDefaultOlapComputeGroup(shared_ptr<SetDefaultOlapComputeGroupRequest> request);
  SwitchLSQLV3MySQLServiceResponse switchLSQLV3MySQLServiceWithOptions(shared_ptr<SwitchLSQLV3MySQLServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchLSQLV3MySQLServiceResponse switchLSQLV3MySQLService(shared_ptr<SwitchLSQLV3MySQLServiceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateInstanceIpWhiteListResponse updateInstanceIpWhiteListWithOptions(shared_ptr<UpdateInstanceIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceIpWhiteListResponse updateInstanceIpWhiteList(shared_ptr<UpdateInstanceIpWhiteListRequest> request);
  UpdateInstanceSecurityGroupsResponse updateInstanceSecurityGroupsWithOptions(shared_ptr<UpdateInstanceSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceSecurityGroupsResponse updateInstanceSecurityGroups(shared_ptr<UpdateInstanceSecurityGroupsRequest> request);
  UpdateLdpsComputeGroupResponse updateLdpsComputeGroupWithOptions(shared_ptr<UpdateLdpsComputeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLdpsComputeGroupResponse updateLdpsComputeGroup(shared_ptr<UpdateLdpsComputeGroupRequest> request);
  UpdateLindormV2InstanceParameterResponse updateLindormV2InstanceParameterWithOptions(shared_ptr<UpdateLindormV2InstanceParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLindormV2InstanceParameterResponse updateLindormV2InstanceParameter(shared_ptr<UpdateLindormV2InstanceParameterRequest> request);
  UpgradeLindormInstanceResponse upgradeLindormInstanceWithOptions(shared_ptr<UpgradeLindormInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeLindormInstanceResponse upgradeLindormInstance(shared_ptr<UpgradeLindormInstanceRequest> request);
  UpgradeLindormV2StreamEngineResponse upgradeLindormV2StreamEngineWithOptions(shared_ptr<UpgradeLindormV2StreamEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeLindormV2StreamEngineResponse upgradeLindormV2StreamEngine(shared_ptr<UpgradeLindormV2StreamEngineRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Hitsdb20200615

#endif
