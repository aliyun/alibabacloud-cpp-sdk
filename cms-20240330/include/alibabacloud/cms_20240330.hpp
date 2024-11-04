// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CMS20240330_H_
#define ALIBABACLOUD_CMS20240330_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cms20240330 {
class FilterSettingConditions : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> op{};
  shared_ptr<string> value{};

  FilterSettingConditions() {}

  explicit FilterSettingConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["field"] = boost::any(*field);
    }
    if (op) {
      res["op"] = boost::any(*op);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("field") != m.end() && !m["field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["field"]));
    }
    if (m.find("op") != m.end() && !m["op"].empty()) {
      op = make_shared<string>(boost::any_cast<string>(m["op"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~FilterSettingConditions() = default;
};
class FilterSetting : public Darabonba::Model {
public:
  shared_ptr<vector<FilterSettingConditions>> conditions{};
  shared_ptr<string> expression{};
  shared_ptr<string> relation{};

  FilterSetting() {}

  explicit FilterSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    if (expression) {
      res["expression"] = boost::any(*expression);
    }
    if (relation) {
      res["relation"] = boost::any(*relation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<FilterSettingConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FilterSettingConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<FilterSettingConditions>>(expect1);
      }
    }
    if (m.find("expression") != m.end() && !m["expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["expression"]));
    }
    if (m.find("relation") != m.end() && !m["relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["relation"]));
    }
  }


  virtual ~FilterSetting() = default;
};
class TransformAction : public Darabonba::Model {
public:
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<string> labelKey{};
  shared_ptr<map<string, string>> mapping{};
  shared_ptr<string> regExp{};
  shared_ptr<string> source{};
  shared_ptr<string> target{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};
  shared_ptr<string> variable{};

  TransformAction() {}

  explicit TransformAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (labelKey) {
      res["labelKey"] = boost::any(*labelKey);
    }
    if (mapping) {
      res["mapping"] = boost::any(*mapping);
    }
    if (regExp) {
      res["regExp"] = boost::any(*regExp);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (variable) {
      res["variable"] = boost::any(*variable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("labelKey") != m.end() && !m["labelKey"].empty()) {
      labelKey = make_shared<string>(boost::any_cast<string>(m["labelKey"]));
    }
    if (m.find("mapping") != m.end() && !m["mapping"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["mapping"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      mapping = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("regExp") != m.end() && !m["regExp"].empty()) {
      regExp = make_shared<string>(boost::any_cast<string>(m["regExp"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["target"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("variable") != m.end() && !m["variable"].empty()) {
      variable = make_shared<string>(boost::any_cast<string>(m["variable"]));
    }
  }


  virtual ~TransformAction() = default;
};
class AlertEventIntegrationPolicyForModify : public Darabonba::Model {
public:
  shared_ptr<string> alertEventIntegrationPolicyName{};
  shared_ptr<string> description{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<string> integrationSetting{};
  shared_ptr<vector<TransformAction>> transformerSetting{};
  shared_ptr<string> type{};

  AlertEventIntegrationPolicyForModify() {}

  explicit AlertEventIntegrationPolicyForModify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertEventIntegrationPolicyName) {
      res["alertEventIntegrationPolicyName"] = boost::any(*alertEventIntegrationPolicyName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (integrationSetting) {
      res["integrationSetting"] = boost::any(*integrationSetting);
    }
    if (transformerSetting) {
      vector<boost::any> temp1;
      for(auto item1:*transformerSetting){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["transformerSetting"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertEventIntegrationPolicyName") != m.end() && !m["alertEventIntegrationPolicyName"].empty()) {
      alertEventIntegrationPolicyName = make_shared<string>(boost::any_cast<string>(m["alertEventIntegrationPolicyName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("integrationSetting") != m.end() && !m["integrationSetting"].empty()) {
      integrationSetting = make_shared<string>(boost::any_cast<string>(m["integrationSetting"]));
    }
    if (m.find("transformerSetting") != m.end() && !m["transformerSetting"].empty()) {
      if (typeid(vector<boost::any>) == m["transformerSetting"].type()) {
        vector<TransformAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["transformerSetting"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransformAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformerSetting = make_shared<vector<TransformAction>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AlertEventIntegrationPolicyForModify() = default;
};
class AlertEventIntegrationPolicyForView : public Darabonba::Model {
public:
  shared_ptr<string> alertEventIntegrationPolicyId{};
  shared_ptr<string> alertEventIntegrationPolicyName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<string> integrationSetting{};
  shared_ptr<vector<TransformAction>> transformerSetting{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspace{};

  AlertEventIntegrationPolicyForView() {}

  explicit AlertEventIntegrationPolicyForView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertEventIntegrationPolicyId) {
      res["alertEventIntegrationPolicyId"] = boost::any(*alertEventIntegrationPolicyId);
    }
    if (alertEventIntegrationPolicyName) {
      res["alertEventIntegrationPolicyName"] = boost::any(*alertEventIntegrationPolicyName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (integrationSetting) {
      res["integrationSetting"] = boost::any(*integrationSetting);
    }
    if (transformerSetting) {
      vector<boost::any> temp1;
      for(auto item1:*transformerSetting){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["transformerSetting"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertEventIntegrationPolicyId") != m.end() && !m["alertEventIntegrationPolicyId"].empty()) {
      alertEventIntegrationPolicyId = make_shared<string>(boost::any_cast<string>(m["alertEventIntegrationPolicyId"]));
    }
    if (m.find("alertEventIntegrationPolicyName") != m.end() && !m["alertEventIntegrationPolicyName"].empty()) {
      alertEventIntegrationPolicyName = make_shared<string>(boost::any_cast<string>(m["alertEventIntegrationPolicyName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("integrationSetting") != m.end() && !m["integrationSetting"].empty()) {
      integrationSetting = make_shared<string>(boost::any_cast<string>(m["integrationSetting"]));
    }
    if (m.find("transformerSetting") != m.end() && !m["transformerSetting"].empty()) {
      if (typeid(vector<boost::any>) == m["transformerSetting"].type()) {
        vector<TransformAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["transformerSetting"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransformAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformerSetting = make_shared<vector<TransformAction>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~AlertEventIntegrationPolicyForView() = default;
};
class AlertRuleAction : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};

  AlertRuleAction() {}

  explicit AlertRuleAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["actions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AlertRuleAction() = default;
};
class AlertRuleAlertMetricFilterDefSupportedOpts : public Darabonba::Model {
public:
  shared_ptr<string> displayNameCn{};
  shared_ptr<string> displayNameEn{};
  shared_ptr<string> value{};

  AlertRuleAlertMetricFilterDefSupportedOpts() {}

  explicit AlertRuleAlertMetricFilterDefSupportedOpts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayNameCn) {
      res["displayNameCn"] = boost::any(*displayNameCn);
    }
    if (displayNameEn) {
      res["displayNameEn"] = boost::any(*displayNameEn);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayNameCn") != m.end() && !m["displayNameCn"].empty()) {
      displayNameCn = make_shared<string>(boost::any_cast<string>(m["displayNameCn"]));
    }
    if (m.find("displayNameEn") != m.end() && !m["displayNameEn"].empty()) {
      displayNameEn = make_shared<string>(boost::any_cast<string>(m["displayNameEn"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AlertRuleAlertMetricFilterDefSupportedOpts() = default;
};
class AlertRuleAlertMetricFilterDef : public Darabonba::Model {
public:
  shared_ptr<string> dim{};
  shared_ptr<string> displayNameCn{};
  shared_ptr<string> displayNameEn{};
  shared_ptr<bool> hidden{};
  shared_ptr<string> opt{};
  shared_ptr<vector<AlertRuleAlertMetricFilterDefSupportedOpts>> supportedOpts{};

  AlertRuleAlertMetricFilterDef() {}

  explicit AlertRuleAlertMetricFilterDef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dim) {
      res["dim"] = boost::any(*dim);
    }
    if (displayNameCn) {
      res["displayNameCn"] = boost::any(*displayNameCn);
    }
    if (displayNameEn) {
      res["displayNameEn"] = boost::any(*displayNameEn);
    }
    if (hidden) {
      res["hidden"] = boost::any(*hidden);
    }
    if (opt) {
      res["opt"] = boost::any(*opt);
    }
    if (supportedOpts) {
      vector<boost::any> temp1;
      for(auto item1:*supportedOpts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["supportedOpts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dim") != m.end() && !m["dim"].empty()) {
      dim = make_shared<string>(boost::any_cast<string>(m["dim"]));
    }
    if (m.find("displayNameCn") != m.end() && !m["displayNameCn"].empty()) {
      displayNameCn = make_shared<string>(boost::any_cast<string>(m["displayNameCn"]));
    }
    if (m.find("displayNameEn") != m.end() && !m["displayNameEn"].empty()) {
      displayNameEn = make_shared<string>(boost::any_cast<string>(m["displayNameEn"]));
    }
    if (m.find("hidden") != m.end() && !m["hidden"].empty()) {
      hidden = make_shared<bool>(boost::any_cast<bool>(m["hidden"]));
    }
    if (m.find("opt") != m.end() && !m["opt"].empty()) {
      opt = make_shared<string>(boost::any_cast<string>(m["opt"]));
    }
    if (m.find("supportedOpts") != m.end() && !m["supportedOpts"].empty()) {
      if (typeid(vector<boost::any>) == m["supportedOpts"].type()) {
        vector<AlertRuleAlertMetricFilterDefSupportedOpts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["supportedOpts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleAlertMetricFilterDefSupportedOpts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedOpts = make_shared<vector<AlertRuleAlertMetricFilterDefSupportedOpts>>(expect1);
      }
    }
  }


  virtual ~AlertRuleAlertMetricFilterDef() = default;
};
class AlertRuleAlertMetricInputFilterValue : public Darabonba::Model {
public:
  shared_ptr<string> dim{};
  shared_ptr<string> opt{};
  shared_ptr<string> value{};

  AlertRuleAlertMetricInputFilterValue() {}

  explicit AlertRuleAlertMetricInputFilterValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dim) {
      res["dim"] = boost::any(*dim);
    }
    if (opt) {
      res["opt"] = boost::any(*opt);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dim") != m.end() && !m["dim"].empty()) {
      dim = make_shared<string>(boost::any_cast<string>(m["dim"]));
    }
    if (m.find("opt") != m.end() && !m["opt"].empty()) {
      opt = make_shared<string>(boost::any_cast<string>(m["opt"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AlertRuleAlertMetricInputFilterValue() = default;
};
class AlertRuleAlertMetricInputParamValue : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  AlertRuleAlertMetricInputParamValue() {}

  explicit AlertRuleAlertMetricInputParamValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AlertRuleAlertMetricInputParamValue() = default;
};
class AlertRuleAlertMetricInput : public Darabonba::Model {
public:
  shared_ptr<vector<AlertRuleAlertMetricInputFilterValue>> filterValues{};
  shared_ptr<string> groupId{};
  shared_ptr<string> metricId{};
  shared_ptr<vector<AlertRuleAlertMetricInputParamValue>> paramValues{};

  AlertRuleAlertMetricInput() {}

  explicit AlertRuleAlertMetricInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterValues) {
      vector<boost::any> temp1;
      for(auto item1:*filterValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["filterValues"] = boost::any(temp1);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (metricId) {
      res["metricId"] = boost::any(*metricId);
    }
    if (paramValues) {
      vector<boost::any> temp1;
      for(auto item1:*paramValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paramValues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterValues") != m.end() && !m["filterValues"].empty()) {
      if (typeid(vector<boost::any>) == m["filterValues"].type()) {
        vector<AlertRuleAlertMetricInputFilterValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["filterValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleAlertMetricInputFilterValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterValues = make_shared<vector<AlertRuleAlertMetricInputFilterValue>>(expect1);
      }
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("metricId") != m.end() && !m["metricId"].empty()) {
      metricId = make_shared<string>(boost::any_cast<string>(m["metricId"]));
    }
    if (m.find("paramValues") != m.end() && !m["paramValues"].empty()) {
      if (typeid(vector<boost::any>) == m["paramValues"].type()) {
        vector<AlertRuleAlertMetricInputParamValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paramValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleAlertMetricInputParamValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramValues = make_shared<vector<AlertRuleAlertMetricInputParamValue>>(expect1);
      }
    }
  }


  virtual ~AlertRuleAlertMetricInput() = default;
};
class AlertRuleAlertMetricParamDefValues : public Darabonba::Model {
public:
  shared_ptr<string> labelCn{};
  shared_ptr<string> labelEn{};
  shared_ptr<string> value{};

  AlertRuleAlertMetricParamDefValues() {}

  explicit AlertRuleAlertMetricParamDefValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelCn) {
      res["labelCn"] = boost::any(*labelCn);
    }
    if (labelEn) {
      res["labelEn"] = boost::any(*labelEn);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelCn") != m.end() && !m["labelCn"].empty()) {
      labelCn = make_shared<string>(boost::any_cast<string>(m["labelCn"]));
    }
    if (m.find("labelEn") != m.end() && !m["labelEn"].empty()) {
      labelEn = make_shared<string>(boost::any_cast<string>(m["labelEn"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AlertRuleAlertMetricParamDefValues() = default;
};
class AlertRuleAlertMetricParamDef : public Darabonba::Model {
public:
  shared_ptr<long> maxWidth{};
  shared_ptr<long> minWidth{};
  shared_ptr<string> name{};
  shared_ptr<string> placeholderCn{};
  shared_ptr<string> placeholderEn{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};
  shared_ptr<vector<AlertRuleAlertMetricParamDefValues>> values{};

  AlertRuleAlertMetricParamDef() {}

  explicit AlertRuleAlertMetricParamDef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxWidth) {
      res["maxWidth"] = boost::any(*maxWidth);
    }
    if (minWidth) {
      res["minWidth"] = boost::any(*minWidth);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (placeholderCn) {
      res["placeholderCn"] = boost::any(*placeholderCn);
    }
    if (placeholderEn) {
      res["placeholderEn"] = boost::any(*placeholderEn);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxWidth") != m.end() && !m["maxWidth"].empty()) {
      maxWidth = make_shared<long>(boost::any_cast<long>(m["maxWidth"]));
    }
    if (m.find("minWidth") != m.end() && !m["minWidth"].empty()) {
      minWidth = make_shared<long>(boost::any_cast<long>(m["minWidth"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("placeholderCn") != m.end() && !m["placeholderCn"].empty()) {
      placeholderCn = make_shared<string>(boost::any_cast<string>(m["placeholderCn"]));
    }
    if (m.find("placeholderEn") != m.end() && !m["placeholderEn"].empty()) {
      placeholderEn = make_shared<string>(boost::any_cast<string>(m["placeholderEn"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<AlertRuleAlertMetricParamDefValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleAlertMetricParamDefValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<AlertRuleAlertMetricParamDefValues>>(expect1);
      }
    }
  }


  virtual ~AlertRuleAlertMetricParamDef() = default;
};
class AlertRuleConditionCaseList : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> countCondition{};
  shared_ptr<string> level{};
  shared_ptr<string> type{};

  AlertRuleConditionCaseList() {}

  explicit AlertRuleConditionCaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = boost::any(*condition);
    }
    if (countCondition) {
      res["countCondition"] = boost::any(*countCondition);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["condition"]));
    }
    if (m.find("countCondition") != m.end() && !m["countCondition"].empty()) {
      countCondition = make_shared<string>(boost::any_cast<string>(m["countCondition"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AlertRuleConditionCaseList() = default;
};
class AlertRuleConditionCompareListValueLevelList : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<double> value{};

  AlertRuleConditionCompareListValueLevelList() {}

  explicit AlertRuleConditionCompareListValueLevelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
  }


  virtual ~AlertRuleConditionCompareListValueLevelList() = default;
};
class AlertRuleConditionCompareList : public Darabonba::Model {
public:
  shared_ptr<string> aggregate{};
  shared_ptr<string> oper{};
  shared_ptr<double> value{};
  shared_ptr<vector<AlertRuleConditionCompareListValueLevelList>> valueLevelList{};
  shared_ptr<string> yoyTimeUnit{};
  shared_ptr<long> yoyTimeValue{};

  AlertRuleConditionCompareList() {}

  explicit AlertRuleConditionCompareList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregate) {
      res["aggregate"] = boost::any(*aggregate);
    }
    if (oper) {
      res["oper"] = boost::any(*oper);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueLevelList) {
      vector<boost::any> temp1;
      for(auto item1:*valueLevelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["valueLevelList"] = boost::any(temp1);
    }
    if (yoyTimeUnit) {
      res["yoyTimeUnit"] = boost::any(*yoyTimeUnit);
    }
    if (yoyTimeValue) {
      res["yoyTimeValue"] = boost::any(*yoyTimeValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggregate") != m.end() && !m["aggregate"].empty()) {
      aggregate = make_shared<string>(boost::any_cast<string>(m["aggregate"]));
    }
    if (m.find("oper") != m.end() && !m["oper"].empty()) {
      oper = make_shared<string>(boost::any_cast<string>(m["oper"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
    if (m.find("valueLevelList") != m.end() && !m["valueLevelList"].empty()) {
      if (typeid(vector<boost::any>) == m["valueLevelList"].type()) {
        vector<AlertRuleConditionCompareListValueLevelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["valueLevelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleConditionCompareListValueLevelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valueLevelList = make_shared<vector<AlertRuleConditionCompareListValueLevelList>>(expect1);
      }
    }
    if (m.find("yoyTimeUnit") != m.end() && !m["yoyTimeUnit"].empty()) {
      yoyTimeUnit = make_shared<string>(boost::any_cast<string>(m["yoyTimeUnit"]));
    }
    if (m.find("yoyTimeValue") != m.end() && !m["yoyTimeValue"].empty()) {
      yoyTimeValue = make_shared<long>(boost::any_cast<long>(m["yoyTimeValue"]));
    }
  }


  virtual ~AlertRuleConditionCompareList() = default;
};
class AlertRuleCondition : public Darabonba::Model {
public:
  shared_ptr<long> alertCount{};
  shared_ptr<vector<AlertRuleConditionCaseList>> caseList{};
  shared_ptr<vector<AlertRuleConditionCompareList>> compareList{};
  shared_ptr<string> noDataAppendValue{};
  shared_ptr<string> nodataAlertLevel{};
  shared_ptr<string> type{};

  AlertRuleCondition() {}

  explicit AlertRuleCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertCount) {
      res["alertCount"] = boost::any(*alertCount);
    }
    if (caseList) {
      vector<boost::any> temp1;
      for(auto item1:*caseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["caseList"] = boost::any(temp1);
    }
    if (compareList) {
      vector<boost::any> temp1;
      for(auto item1:*compareList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["compareList"] = boost::any(temp1);
    }
    if (noDataAppendValue) {
      res["noDataAppendValue"] = boost::any(*noDataAppendValue);
    }
    if (nodataAlertLevel) {
      res["nodataAlertLevel"] = boost::any(*nodataAlertLevel);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertCount") != m.end() && !m["alertCount"].empty()) {
      alertCount = make_shared<long>(boost::any_cast<long>(m["alertCount"]));
    }
    if (m.find("caseList") != m.end() && !m["caseList"].empty()) {
      if (typeid(vector<boost::any>) == m["caseList"].type()) {
        vector<AlertRuleConditionCaseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["caseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleConditionCaseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        caseList = make_shared<vector<AlertRuleConditionCaseList>>(expect1);
      }
    }
    if (m.find("compareList") != m.end() && !m["compareList"].empty()) {
      if (typeid(vector<boost::any>) == m["compareList"].type()) {
        vector<AlertRuleConditionCompareList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["compareList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleConditionCompareList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compareList = make_shared<vector<AlertRuleConditionCompareList>>(expect1);
      }
    }
    if (m.find("noDataAppendValue") != m.end() && !m["noDataAppendValue"].empty()) {
      noDataAppendValue = make_shared<string>(boost::any_cast<string>(m["noDataAppendValue"]));
    }
    if (m.find("nodataAlertLevel") != m.end() && !m["nodataAlertLevel"].empty()) {
      nodataAlertLevel = make_shared<string>(boost::any_cast<string>(m["nodataAlertLevel"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AlertRuleCondition() = default;
};
class AlertRuleDataSourceDsList : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};
  shared_ptr<string> store{};
  shared_ptr<string> type{};

  AlertRuleDataSourceDsList() {}

  explicit AlertRuleDataSourceDsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (store) {
      res["store"] = boost::any(*store);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("store") != m.end() && !m["store"].empty()) {
      store = make_shared<string>(boost::any_cast<string>(m["store"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AlertRuleDataSourceDsList() = default;
};
class AlertRuleDataSource : public Darabonba::Model {
public:
  shared_ptr<vector<AlertRuleDataSourceDsList>> dsList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> type{};

  AlertRuleDataSource() {}

  explicit AlertRuleDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dsList) {
      vector<boost::any> temp1;
      for(auto item1:*dsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dsList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dsList") != m.end() && !m["dsList"].empty()) {
      if (typeid(vector<boost::any>) == m["dsList"].type()) {
        vector<AlertRuleDataSourceDsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleDataSourceDsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dsList = make_shared<vector<AlertRuleDataSourceDsList>>(expect1);
      }
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AlertRuleDataSource() = default;
};
class AlertRuleLabelFilter : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> opt{};

  AlertRuleLabelFilter() {}

  explicit AlertRuleLabelFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (opt) {
      res["opt"] = boost::any(*opt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("opt") != m.end() && !m["opt"].empty()) {
      opt = make_shared<string>(boost::any_cast<string>(m["opt"]));
    }
  }


  virtual ~AlertRuleLabelFilter() = default;
};
class AlertRuleTimeSpan : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dayOfWeek{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtOffset{};
  shared_ptr<string> startTime{};

  AlertRuleTimeSpan() {}

  explicit AlertRuleTimeSpan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dayOfWeek) {
      res["dayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (gmtOffset) {
      res["gmtOffset"] = boost::any(*gmtOffset);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dayOfWeek") != m.end() && !m["dayOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["dayOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dayOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dayOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("gmtOffset") != m.end() && !m["gmtOffset"].empty()) {
      gmtOffset = make_shared<string>(boost::any_cast<string>(m["gmtOffset"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~AlertRuleTimeSpan() = default;
};
class AlertRuleNotification : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contacts{};
  shared_ptr<vector<string>> customWebhooks{};
  shared_ptr<vector<string>> dingWebhooks{};
  shared_ptr<vector<string>> fsWebhooks{};
  shared_ptr<vector<string>> groups{};
  shared_ptr<AlertRuleTimeSpan> notifyTime{};
  shared_ptr<long> silenceTime{};
  shared_ptr<vector<string>> slackWebhooks{};
  shared_ptr<vector<string>> wxWebhooks{};

  AlertRuleNotification() {}

  explicit AlertRuleNotification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contacts) {
      res["contacts"] = boost::any(*contacts);
    }
    if (customWebhooks) {
      res["customWebhooks"] = boost::any(*customWebhooks);
    }
    if (dingWebhooks) {
      res["dingWebhooks"] = boost::any(*dingWebhooks);
    }
    if (fsWebhooks) {
      res["fsWebhooks"] = boost::any(*fsWebhooks);
    }
    if (groups) {
      res["groups"] = boost::any(*groups);
    }
    if (notifyTime) {
      res["notifyTime"] = notifyTime ? boost::any(notifyTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (silenceTime) {
      res["silenceTime"] = boost::any(*silenceTime);
    }
    if (slackWebhooks) {
      res["slackWebhooks"] = boost::any(*slackWebhooks);
    }
    if (wxWebhooks) {
      res["wxWebhooks"] = boost::any(*wxWebhooks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contacts") != m.end() && !m["contacts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["contacts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["contacts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contacts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("customWebhooks") != m.end() && !m["customWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["customWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["customWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("dingWebhooks") != m.end() && !m["dingWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dingWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dingWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dingWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("fsWebhooks") != m.end() && !m["fsWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fsWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fsWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fsWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("groups") != m.end() && !m["groups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["groups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["groups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("notifyTime") != m.end() && !m["notifyTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["notifyTime"].type()) {
        AlertRuleTimeSpan model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["notifyTime"]));
        notifyTime = make_shared<AlertRuleTimeSpan>(model1);
      }
    }
    if (m.find("silenceTime") != m.end() && !m["silenceTime"].empty()) {
      silenceTime = make_shared<long>(boost::any_cast<long>(m["silenceTime"]));
    }
    if (m.find("slackWebhooks") != m.end() && !m["slackWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["slackWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["slackWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      slackWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("wxWebhooks") != m.end() && !m["wxWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["wxWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["wxWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wxWebhooks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AlertRuleNotification() = default;
};
class AlertRuleNotificationFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contacts{};
  shared_ptr<vector<string>> customWebhooks{};
  shared_ptr<vector<string>> dingWebhooks{};
  shared_ptr<vector<string>> fsWebhooks{};
  shared_ptr<vector<string>> groups{};
  shared_ptr<vector<string>> slackWebhooks{};
  shared_ptr<vector<string>> wxWebhooks{};

  AlertRuleNotificationFilter() {}

  explicit AlertRuleNotificationFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contacts) {
      res["contacts"] = boost::any(*contacts);
    }
    if (customWebhooks) {
      res["customWebhooks"] = boost::any(*customWebhooks);
    }
    if (dingWebhooks) {
      res["dingWebhooks"] = boost::any(*dingWebhooks);
    }
    if (fsWebhooks) {
      res["fsWebhooks"] = boost::any(*fsWebhooks);
    }
    if (groups) {
      res["groups"] = boost::any(*groups);
    }
    if (slackWebhooks) {
      res["slackWebhooks"] = boost::any(*slackWebhooks);
    }
    if (wxWebhooks) {
      res["wxWebhooks"] = boost::any(*wxWebhooks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contacts") != m.end() && !m["contacts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["contacts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["contacts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contacts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("customWebhooks") != m.end() && !m["customWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["customWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["customWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("dingWebhooks") != m.end() && !m["dingWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dingWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dingWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dingWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("fsWebhooks") != m.end() && !m["fsWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fsWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fsWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fsWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("groups") != m.end() && !m["groups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["groups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["groups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("slackWebhooks") != m.end() && !m["slackWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["slackWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["slackWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      slackWebhooks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("wxWebhooks") != m.end() && !m["wxWebhooks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["wxWebhooks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["wxWebhooks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wxWebhooks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AlertRuleNotificationFilter() = default;
};
class AlertRuleQueryQueries : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> end{};
  shared_ptr<string> expr{};
  shared_ptr<long> start{};
  shared_ptr<string> timeUnit{};
  shared_ptr<string> window{};

  AlertRuleQueryQueries() {}

  explicit AlertRuleQueryQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (expr) {
      res["expr"] = boost::any(*expr);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    if (timeUnit) {
      res["timeUnit"] = boost::any(*timeUnit);
    }
    if (window) {
      res["window"] = boost::any(*window);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("expr") != m.end() && !m["expr"].empty()) {
      expr = make_shared<string>(boost::any_cast<string>(m["expr"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["start"]));
    }
    if (m.find("timeUnit") != m.end() && !m["timeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["timeUnit"]));
    }
    if (m.find("window") != m.end() && !m["window"].empty()) {
      window = make_shared<string>(boost::any_cast<string>(m["window"]));
    }
  }


  virtual ~AlertRuleQueryQueries() = default;
};
class AlertRuleSlsQueryJoinConditions : public Darabonba::Model {
public:
  shared_ptr<string> firstField{};
  shared_ptr<string> oper{};
  shared_ptr<string> secondField{};

  AlertRuleSlsQueryJoinConditions() {}

  explicit AlertRuleSlsQueryJoinConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstField) {
      res["firstField"] = boost::any(*firstField);
    }
    if (oper) {
      res["oper"] = boost::any(*oper);
    }
    if (secondField) {
      res["secondField"] = boost::any(*secondField);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("firstField") != m.end() && !m["firstField"].empty()) {
      firstField = make_shared<string>(boost::any_cast<string>(m["firstField"]));
    }
    if (m.find("oper") != m.end() && !m["oper"].empty()) {
      oper = make_shared<string>(boost::any_cast<string>(m["oper"]));
    }
    if (m.find("secondField") != m.end() && !m["secondField"].empty()) {
      secondField = make_shared<string>(boost::any_cast<string>(m["secondField"]));
    }
  }


  virtual ~AlertRuleSlsQueryJoinConditions() = default;
};
class AlertRuleSlsQueryJoin : public Darabonba::Model {
public:
  shared_ptr<vector<AlertRuleSlsQueryJoinConditions>> conditions{};
  shared_ptr<string> type{};

  AlertRuleSlsQueryJoin() {}

  explicit AlertRuleSlsQueryJoin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<AlertRuleSlsQueryJoinConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleSlsQueryJoinConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<AlertRuleSlsQueryJoinConditions>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AlertRuleSlsQueryJoin() = default;
};
class AlertRuleQuery : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> expr{};
  shared_ptr<AlertRuleSlsQueryJoin> firstJoin{};
  shared_ptr<vector<string>> groupFieldList{};
  shared_ptr<string> groupType{};
  shared_ptr<vector<AlertRuleQueryQueries>> queries{};
  shared_ptr<AlertRuleSlsQueryJoin> secondJoin{};
  shared_ptr<string> type{};

  AlertRuleQuery() {}

  explicit AlertRuleQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (expr) {
      res["expr"] = boost::any(*expr);
    }
    if (firstJoin) {
      res["firstJoin"] = firstJoin ? boost::any(firstJoin->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupFieldList) {
      res["groupFieldList"] = boost::any(*groupFieldList);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (queries) {
      vector<boost::any> temp1;
      for(auto item1:*queries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queries"] = boost::any(temp1);
    }
    if (secondJoin) {
      res["secondJoin"] = secondJoin ? boost::any(secondJoin->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("expr") != m.end() && !m["expr"].empty()) {
      expr = make_shared<string>(boost::any_cast<string>(m["expr"]));
    }
    if (m.find("firstJoin") != m.end() && !m["firstJoin"].empty()) {
      if (typeid(map<string, boost::any>) == m["firstJoin"].type()) {
        AlertRuleSlsQueryJoin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["firstJoin"]));
        firstJoin = make_shared<AlertRuleSlsQueryJoin>(model1);
      }
    }
    if (m.find("groupFieldList") != m.end() && !m["groupFieldList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["groupFieldList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["groupFieldList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupFieldList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("queries") != m.end() && !m["queries"].empty()) {
      if (typeid(vector<boost::any>) == m["queries"].type()) {
        vector<AlertRuleQueryQueries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleQueryQueries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queries = make_shared<vector<AlertRuleQueryQueries>>(expect1);
      }
    }
    if (m.find("secondJoin") != m.end() && !m["secondJoin"].empty()) {
      if (typeid(map<string, boost::any>) == m["secondJoin"].type()) {
        AlertRuleSlsQueryJoin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["secondJoin"]));
        secondJoin = make_shared<AlertRuleSlsQueryJoin>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AlertRuleQuery() = default;
};
class AlertRuleSend : public Darabonba::Model {
public:
  shared_ptr<AlertRuleAction> action{};
  shared_ptr<AlertRuleNotification> notification{};

  AlertRuleSend() {}

  explicit AlertRuleSend(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = action ? boost::any(action->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notification) {
      res["notification"] = notification ? boost::any(notification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      if (typeid(map<string, boost::any>) == m["action"].type()) {
        AlertRuleAction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["action"]));
        action = make_shared<AlertRuleAction>(model1);
      }
    }
    if (m.find("notification") != m.end() && !m["notification"].empty()) {
      if (typeid(map<string, boost::any>) == m["notification"].type()) {
        AlertRuleNotification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["notification"]));
        notification = make_shared<AlertRuleNotification>(model1);
      }
    }
  }


  virtual ~AlertRuleSend() = default;
};
class MaintainWindowForModify : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> effective{};
  shared_ptr<string> endTime{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<string> maintainWindowName{};
  shared_ptr<string> startTime{};

  MaintainWindowForModify() {}

  explicit MaintainWindowForModify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (effective) {
      res["effective"] = boost::any(*effective);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maintainWindowName) {
      res["maintainWindowName"] = boost::any(*maintainWindowName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("effective") != m.end() && !m["effective"].empty()) {
      effective = make_shared<string>(boost::any_cast<string>(m["effective"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("maintainWindowName") != m.end() && !m["maintainWindowName"].empty()) {
      maintainWindowName = make_shared<string>(boost::any_cast<string>(m["maintainWindowName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~MaintainWindowForModify() = default;
};
class MaintainWindowForView : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> effective{};
  shared_ptr<bool> enable{};
  shared_ptr<string> endTime{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<string> maintainWindowId{};
  shared_ptr<string> maintainWindowName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspace{};

  MaintainWindowForView() {}

  explicit MaintainWindowForView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (effective) {
      res["effective"] = boost::any(*effective);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maintainWindowId) {
      res["maintainWindowId"] = boost::any(*maintainWindowId);
    }
    if (maintainWindowName) {
      res["maintainWindowName"] = boost::any(*maintainWindowName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("effective") != m.end() && !m["effective"].empty()) {
      effective = make_shared<string>(boost::any_cast<string>(m["effective"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("maintainWindowId") != m.end() && !m["maintainWindowId"].empty()) {
      maintainWindowId = make_shared<string>(boost::any_cast<string>(m["maintainWindowId"]));
    }
    if (m.find("maintainWindowName") != m.end() && !m["maintainWindowName"].empty()) {
      maintainWindowName = make_shared<string>(boost::any_cast<string>(m["maintainWindowName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~MaintainWindowForView() = default;
};
class NotifyStrategyForModifyCustomTemplateEntries : public Darabonba::Model {
public:
  shared_ptr<string> targetType{};
  shared_ptr<string> templateUuid{};

  NotifyStrategyForModifyCustomTemplateEntries() {}

  explicit NotifyStrategyForModifyCustomTemplateEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    if (templateUuid) {
      res["templateUuid"] = boost::any(*templateUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
    if (m.find("templateUuid") != m.end() && !m["templateUuid"].empty()) {
      templateUuid = make_shared<string>(boost::any_cast<string>(m["templateUuid"]));
    }
  }


  virtual ~NotifyStrategyForModifyCustomTemplateEntries() = default;
};
class NotifyStrategyForModifyGroupingSetting : public Darabonba::Model {
public:
  shared_ptr<vector<string>> groupingKeys{};
  shared_ptr<long> periodMin{};
  shared_ptr<long> silenceSec{};
  shared_ptr<long> times{};

  NotifyStrategyForModifyGroupingSetting() {}

  explicit NotifyStrategyForModifyGroupingSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupingKeys) {
      res["groupingKeys"] = boost::any(*groupingKeys);
    }
    if (periodMin) {
      res["periodMin"] = boost::any(*periodMin);
    }
    if (silenceSec) {
      res["silenceSec"] = boost::any(*silenceSec);
    }
    if (times) {
      res["times"] = boost::any(*times);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupingKeys") != m.end() && !m["groupingKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["groupingKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["groupingKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupingKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("periodMin") != m.end() && !m["periodMin"].empty()) {
      periodMin = make_shared<long>(boost::any_cast<long>(m["periodMin"]));
    }
    if (m.find("silenceSec") != m.end() && !m["silenceSec"].empty()) {
      silenceSec = make_shared<long>(boost::any_cast<long>(m["silenceSec"]));
    }
    if (m.find("times") != m.end() && !m["times"].empty()) {
      times = make_shared<long>(boost::any_cast<long>(m["times"]));
    }
  }


  virtual ~NotifyStrategyForModifyGroupingSetting() = default;
};
class NotifyStrategyForModifyRoutesChannels : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<vector<string>> enabledSubChannels{};
  shared_ptr<vector<string>> receivers{};

  NotifyStrategyForModifyRoutesChannels() {}

  explicit NotifyStrategyForModifyRoutesChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["channelType"] = boost::any(*channelType);
    }
    if (enabledSubChannels) {
      res["enabledSubChannels"] = boost::any(*enabledSubChannels);
    }
    if (receivers) {
      res["receivers"] = boost::any(*receivers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelType") != m.end() && !m["channelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["channelType"]));
    }
    if (m.find("enabledSubChannels") != m.end() && !m["enabledSubChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["enabledSubChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["enabledSubChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      enabledSubChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("receivers") != m.end() && !m["receivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["receivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["receivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receivers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~NotifyStrategyForModifyRoutesChannels() = default;
};
class NotifyStrategyForModifyRoutesEffectTimeRange : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dayInWeek{};
  shared_ptr<long> endTimeInMinute{};
  shared_ptr<long> startTimeInMinute{};
  shared_ptr<string> timeZone{};

  NotifyStrategyForModifyRoutesEffectTimeRange() {}

  explicit NotifyStrategyForModifyRoutesEffectTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dayInWeek) {
      res["dayInWeek"] = boost::any(*dayInWeek);
    }
    if (endTimeInMinute) {
      res["endTimeInMinute"] = boost::any(*endTimeInMinute);
    }
    if (startTimeInMinute) {
      res["startTimeInMinute"] = boost::any(*startTimeInMinute);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dayInWeek") != m.end() && !m["dayInWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["dayInWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dayInWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dayInWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("endTimeInMinute") != m.end() && !m["endTimeInMinute"].empty()) {
      endTimeInMinute = make_shared<long>(boost::any_cast<long>(m["endTimeInMinute"]));
    }
    if (m.find("startTimeInMinute") != m.end() && !m["startTimeInMinute"].empty()) {
      startTimeInMinute = make_shared<long>(boost::any_cast<long>(m["startTimeInMinute"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~NotifyStrategyForModifyRoutesEffectTimeRange() = default;
};
class NotifyStrategyForModifyRoutes : public Darabonba::Model {
public:
  shared_ptr<vector<NotifyStrategyForModifyRoutesChannels>> channels{};
  shared_ptr<NotifyStrategyForModifyRoutesEffectTimeRange> effectTimeRange{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<vector<string>> severities{};

  NotifyStrategyForModifyRoutes() {}

  explicit NotifyStrategyForModifyRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channels) {
      vector<boost::any> temp1;
      for(auto item1:*channels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["channels"] = boost::any(temp1);
    }
    if (effectTimeRange) {
      res["effectTimeRange"] = effectTimeRange ? boost::any(effectTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (severities) {
      res["severities"] = boost::any(*severities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channels") != m.end() && !m["channels"].empty()) {
      if (typeid(vector<boost::any>) == m["channels"].type()) {
        vector<NotifyStrategyForModifyRoutesChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["channels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NotifyStrategyForModifyRoutesChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channels = make_shared<vector<NotifyStrategyForModifyRoutesChannels>>(expect1);
      }
    }
    if (m.find("effectTimeRange") != m.end() && !m["effectTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["effectTimeRange"].type()) {
        NotifyStrategyForModifyRoutesEffectTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["effectTimeRange"]));
        effectTimeRange = make_shared<NotifyStrategyForModifyRoutesEffectTimeRange>(model1);
      }
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("severities") != m.end() && !m["severities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["severities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["severities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      severities = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~NotifyStrategyForModifyRoutes() = default;
};
class NotifyStrategyForModify : public Darabonba::Model {
public:
  shared_ptr<vector<NotifyStrategyForModifyCustomTemplateEntries>> customTemplateEntries{};
  shared_ptr<string> description{};
  shared_ptr<NotifyStrategyForModifyGroupingSetting> groupingSetting{};
  shared_ptr<bool> ignoreRestoredNotification{};
  shared_ptr<string> notifyStrategyName{};
  shared_ptr<vector<NotifyStrategyForModifyRoutes>> routes{};

  NotifyStrategyForModify() {}

  explicit NotifyStrategyForModify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customTemplateEntries) {
      vector<boost::any> temp1;
      for(auto item1:*customTemplateEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customTemplateEntries"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupingSetting) {
      res["groupingSetting"] = groupingSetting ? boost::any(groupingSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ignoreRestoredNotification) {
      res["ignoreRestoredNotification"] = boost::any(*ignoreRestoredNotification);
    }
    if (notifyStrategyName) {
      res["notifyStrategyName"] = boost::any(*notifyStrategyName);
    }
    if (routes) {
      vector<boost::any> temp1;
      for(auto item1:*routes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["routes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customTemplateEntries") != m.end() && !m["customTemplateEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["customTemplateEntries"].type()) {
        vector<NotifyStrategyForModifyCustomTemplateEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customTemplateEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NotifyStrategyForModifyCustomTemplateEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customTemplateEntries = make_shared<vector<NotifyStrategyForModifyCustomTemplateEntries>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupingSetting") != m.end() && !m["groupingSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupingSetting"].type()) {
        NotifyStrategyForModifyGroupingSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupingSetting"]));
        groupingSetting = make_shared<NotifyStrategyForModifyGroupingSetting>(model1);
      }
    }
    if (m.find("ignoreRestoredNotification") != m.end() && !m["ignoreRestoredNotification"].empty()) {
      ignoreRestoredNotification = make_shared<bool>(boost::any_cast<bool>(m["ignoreRestoredNotification"]));
    }
    if (m.find("notifyStrategyName") != m.end() && !m["notifyStrategyName"].empty()) {
      notifyStrategyName = make_shared<string>(boost::any_cast<string>(m["notifyStrategyName"]));
    }
    if (m.find("routes") != m.end() && !m["routes"].empty()) {
      if (typeid(vector<boost::any>) == m["routes"].type()) {
        vector<NotifyStrategyForModifyRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["routes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NotifyStrategyForModifyRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routes = make_shared<vector<NotifyStrategyForModifyRoutes>>(expect1);
      }
    }
  }


  virtual ~NotifyStrategyForModify() = default;
};
class NotifyStrategyForViewCustomTemplateEntries : public Darabonba::Model {
public:
  shared_ptr<string> targetType{};
  shared_ptr<string> templateUuid{};

  NotifyStrategyForViewCustomTemplateEntries() {}

  explicit NotifyStrategyForViewCustomTemplateEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    if (templateUuid) {
      res["templateUuid"] = boost::any(*templateUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
    if (m.find("templateUuid") != m.end() && !m["templateUuid"].empty()) {
      templateUuid = make_shared<string>(boost::any_cast<string>(m["templateUuid"]));
    }
  }


  virtual ~NotifyStrategyForViewCustomTemplateEntries() = default;
};
class NotifyStrategyForViewGroupingSetting : public Darabonba::Model {
public:
  shared_ptr<vector<string>> groupingKeys{};
  shared_ptr<long> periodMin{};
  shared_ptr<long> silenceSec{};
  shared_ptr<long> times{};

  NotifyStrategyForViewGroupingSetting() {}

  explicit NotifyStrategyForViewGroupingSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupingKeys) {
      res["groupingKeys"] = boost::any(*groupingKeys);
    }
    if (periodMin) {
      res["periodMin"] = boost::any(*periodMin);
    }
    if (silenceSec) {
      res["silenceSec"] = boost::any(*silenceSec);
    }
    if (times) {
      res["times"] = boost::any(*times);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupingKeys") != m.end() && !m["groupingKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["groupingKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["groupingKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupingKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("periodMin") != m.end() && !m["periodMin"].empty()) {
      periodMin = make_shared<long>(boost::any_cast<long>(m["periodMin"]));
    }
    if (m.find("silenceSec") != m.end() && !m["silenceSec"].empty()) {
      silenceSec = make_shared<long>(boost::any_cast<long>(m["silenceSec"]));
    }
    if (m.find("times") != m.end() && !m["times"].empty()) {
      times = make_shared<long>(boost::any_cast<long>(m["times"]));
    }
  }


  virtual ~NotifyStrategyForViewGroupingSetting() = default;
};
class NotifyStrategyForViewRoutesChannels : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<vector<string>> enabledSubChannels{};
  shared_ptr<vector<string>> receivers{};

  NotifyStrategyForViewRoutesChannels() {}

  explicit NotifyStrategyForViewRoutesChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["channelType"] = boost::any(*channelType);
    }
    if (enabledSubChannels) {
      res["enabledSubChannels"] = boost::any(*enabledSubChannels);
    }
    if (receivers) {
      res["receivers"] = boost::any(*receivers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channelType") != m.end() && !m["channelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["channelType"]));
    }
    if (m.find("enabledSubChannels") != m.end() && !m["enabledSubChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["enabledSubChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["enabledSubChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      enabledSubChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("receivers") != m.end() && !m["receivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["receivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["receivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receivers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~NotifyStrategyForViewRoutesChannels() = default;
};
class NotifyStrategyForViewRoutesEffectTimeRange : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dayInWeek{};
  shared_ptr<long> endTimeInMinute{};
  shared_ptr<long> startTimeInMinute{};
  shared_ptr<string> timeZone{};

  NotifyStrategyForViewRoutesEffectTimeRange() {}

  explicit NotifyStrategyForViewRoutesEffectTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dayInWeek) {
      res["dayInWeek"] = boost::any(*dayInWeek);
    }
    if (endTimeInMinute) {
      res["endTimeInMinute"] = boost::any(*endTimeInMinute);
    }
    if (startTimeInMinute) {
      res["startTimeInMinute"] = boost::any(*startTimeInMinute);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dayInWeek") != m.end() && !m["dayInWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["dayInWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dayInWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dayInWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("endTimeInMinute") != m.end() && !m["endTimeInMinute"].empty()) {
      endTimeInMinute = make_shared<long>(boost::any_cast<long>(m["endTimeInMinute"]));
    }
    if (m.find("startTimeInMinute") != m.end() && !m["startTimeInMinute"].empty()) {
      startTimeInMinute = make_shared<long>(boost::any_cast<long>(m["startTimeInMinute"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~NotifyStrategyForViewRoutesEffectTimeRange() = default;
};
class NotifyStrategyForViewRoutes : public Darabonba::Model {
public:
  shared_ptr<vector<NotifyStrategyForViewRoutesChannels>> channels{};
  shared_ptr<NotifyStrategyForViewRoutesEffectTimeRange> effectTimeRange{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<vector<string>> severities{};

  NotifyStrategyForViewRoutes() {}

  explicit NotifyStrategyForViewRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channels) {
      vector<boost::any> temp1;
      for(auto item1:*channels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["channels"] = boost::any(temp1);
    }
    if (effectTimeRange) {
      res["effectTimeRange"] = effectTimeRange ? boost::any(effectTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (severities) {
      res["severities"] = boost::any(*severities);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channels") != m.end() && !m["channels"].empty()) {
      if (typeid(vector<boost::any>) == m["channels"].type()) {
        vector<NotifyStrategyForViewRoutesChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["channels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NotifyStrategyForViewRoutesChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channels = make_shared<vector<NotifyStrategyForViewRoutesChannels>>(expect1);
      }
    }
    if (m.find("effectTimeRange") != m.end() && !m["effectTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["effectTimeRange"].type()) {
        NotifyStrategyForViewRoutesEffectTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["effectTimeRange"]));
        effectTimeRange = make_shared<NotifyStrategyForViewRoutesEffectTimeRange>(model1);
      }
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("severities") != m.end() && !m["severities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["severities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["severities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      severities = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~NotifyStrategyForViewRoutes() = default;
};
class NotifyStrategyForView : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<NotifyStrategyForViewCustomTemplateEntries>> customTemplateEntries{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<NotifyStrategyForViewGroupingSetting> groupingSetting{};
  shared_ptr<bool> ignoreRestoredNotification{};
  shared_ptr<string> notifyStrategyId{};
  shared_ptr<string> notifyStrategyName{};
  shared_ptr<vector<NotifyStrategyForViewRoutes>> routes{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspace{};

  NotifyStrategyForView() {}

  explicit NotifyStrategyForView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (customTemplateEntries) {
      vector<boost::any> temp1;
      for(auto item1:*customTemplateEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customTemplateEntries"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (groupingSetting) {
      res["groupingSetting"] = groupingSetting ? boost::any(groupingSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ignoreRestoredNotification) {
      res["ignoreRestoredNotification"] = boost::any(*ignoreRestoredNotification);
    }
    if (notifyStrategyId) {
      res["notifyStrategyId"] = boost::any(*notifyStrategyId);
    }
    if (notifyStrategyName) {
      res["notifyStrategyName"] = boost::any(*notifyStrategyName);
    }
    if (routes) {
      vector<boost::any> temp1;
      for(auto item1:*routes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["routes"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("customTemplateEntries") != m.end() && !m["customTemplateEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["customTemplateEntries"].type()) {
        vector<NotifyStrategyForViewCustomTemplateEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customTemplateEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NotifyStrategyForViewCustomTemplateEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customTemplateEntries = make_shared<vector<NotifyStrategyForViewCustomTemplateEntries>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("groupingSetting") != m.end() && !m["groupingSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupingSetting"].type()) {
        NotifyStrategyForViewGroupingSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupingSetting"]));
        groupingSetting = make_shared<NotifyStrategyForViewGroupingSetting>(model1);
      }
    }
    if (m.find("ignoreRestoredNotification") != m.end() && !m["ignoreRestoredNotification"].empty()) {
      ignoreRestoredNotification = make_shared<bool>(boost::any_cast<bool>(m["ignoreRestoredNotification"]));
    }
    if (m.find("notifyStrategyId") != m.end() && !m["notifyStrategyId"].empty()) {
      notifyStrategyId = make_shared<string>(boost::any_cast<string>(m["notifyStrategyId"]));
    }
    if (m.find("notifyStrategyName") != m.end() && !m["notifyStrategyName"].empty()) {
      notifyStrategyName = make_shared<string>(boost::any_cast<string>(m["notifyStrategyName"]));
    }
    if (m.find("routes") != m.end() && !m["routes"].empty()) {
      if (typeid(vector<boost::any>) == m["routes"].type()) {
        vector<NotifyStrategyForViewRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["routes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NotifyStrategyForViewRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routes = make_shared<vector<NotifyStrategyForViewRoutes>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~NotifyStrategyForView() = default;
};
class SubscriptionForModifyPushingSetting : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alertActionIds{};
  shared_ptr<string> responsePlanId{};
  shared_ptr<vector<string>> restoreActionIds{};
  shared_ptr<string> templateUuid{};

  SubscriptionForModifyPushingSetting() {}

  explicit SubscriptionForModifyPushingSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertActionIds) {
      res["alertActionIds"] = boost::any(*alertActionIds);
    }
    if (responsePlanId) {
      res["responsePlanId"] = boost::any(*responsePlanId);
    }
    if (restoreActionIds) {
      res["restoreActionIds"] = boost::any(*restoreActionIds);
    }
    if (templateUuid) {
      res["templateUuid"] = boost::any(*templateUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertActionIds") != m.end() && !m["alertActionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["alertActionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["alertActionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alertActionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("responsePlanId") != m.end() && !m["responsePlanId"].empty()) {
      responsePlanId = make_shared<string>(boost::any_cast<string>(m["responsePlanId"]));
    }
    if (m.find("restoreActionIds") != m.end() && !m["restoreActionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["restoreActionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["restoreActionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      restoreActionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("templateUuid") != m.end() && !m["templateUuid"].empty()) {
      templateUuid = make_shared<string>(boost::any_cast<string>(m["templateUuid"]));
    }
  }


  virtual ~SubscriptionForModifyPushingSetting() = default;
};
class SubscriptionForModify : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<string> notifyStrategyId{};
  shared_ptr<SubscriptionForModifyPushingSetting> pushingSetting{};
  shared_ptr<string> subscriptionName{};

  SubscriptionForModify() {}

  explicit SubscriptionForModify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notifyStrategyId) {
      res["notifyStrategyId"] = boost::any(*notifyStrategyId);
    }
    if (pushingSetting) {
      res["pushingSetting"] = pushingSetting ? boost::any(pushingSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subscriptionName) {
      res["subscriptionName"] = boost::any(*subscriptionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("notifyStrategyId") != m.end() && !m["notifyStrategyId"].empty()) {
      notifyStrategyId = make_shared<string>(boost::any_cast<string>(m["notifyStrategyId"]));
    }
    if (m.find("pushingSetting") != m.end() && !m["pushingSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["pushingSetting"].type()) {
        SubscriptionForModifyPushingSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pushingSetting"]));
        pushingSetting = make_shared<SubscriptionForModifyPushingSetting>(model1);
      }
    }
    if (m.find("subscriptionName") != m.end() && !m["subscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["subscriptionName"]));
    }
  }


  virtual ~SubscriptionForModify() = default;
};
class SubscriptionForViewPushingSetting : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alertActionIds{};
  shared_ptr<string> responsePlanId{};
  shared_ptr<vector<string>> restoreActionIds{};
  shared_ptr<string> templateUuid{};

  SubscriptionForViewPushingSetting() {}

  explicit SubscriptionForViewPushingSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertActionIds) {
      res["alertActionIds"] = boost::any(*alertActionIds);
    }
    if (responsePlanId) {
      res["responsePlanId"] = boost::any(*responsePlanId);
    }
    if (restoreActionIds) {
      res["restoreActionIds"] = boost::any(*restoreActionIds);
    }
    if (templateUuid) {
      res["templateUuid"] = boost::any(*templateUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertActionIds") != m.end() && !m["alertActionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["alertActionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["alertActionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alertActionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("responsePlanId") != m.end() && !m["responsePlanId"].empty()) {
      responsePlanId = make_shared<string>(boost::any_cast<string>(m["responsePlanId"]));
    }
    if (m.find("restoreActionIds") != m.end() && !m["restoreActionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["restoreActionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["restoreActionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      restoreActionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("templateUuid") != m.end() && !m["templateUuid"].empty()) {
      templateUuid = make_shared<string>(boost::any_cast<string>(m["templateUuid"]));
    }
  }


  virtual ~SubscriptionForViewPushingSetting() = default;
};
class SubscriptionForView : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<string> notifyStrategyId{};
  shared_ptr<SubscriptionForViewPushingSetting> pushingSetting{};
  shared_ptr<string> subscriptionId{};
  shared_ptr<string> subscriptionName{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspace{};

  SubscriptionForView() {}

  explicit SubscriptionForView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notifyStrategyId) {
      res["notifyStrategyId"] = boost::any(*notifyStrategyId);
    }
    if (pushingSetting) {
      res["pushingSetting"] = pushingSetting ? boost::any(pushingSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subscriptionId) {
      res["subscriptionId"] = boost::any(*subscriptionId);
    }
    if (subscriptionName) {
      res["subscriptionName"] = boost::any(*subscriptionName);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("notifyStrategyId") != m.end() && !m["notifyStrategyId"].empty()) {
      notifyStrategyId = make_shared<string>(boost::any_cast<string>(m["notifyStrategyId"]));
    }
    if (m.find("pushingSetting") != m.end() && !m["pushingSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["pushingSetting"].type()) {
        SubscriptionForViewPushingSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pushingSetting"]));
        pushingSetting = make_shared<SubscriptionForViewPushingSetting>(model1);
      }
    }
    if (m.find("subscriptionId") != m.end() && !m["subscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["subscriptionId"]));
    }
    if (m.find("subscriptionName") != m.end() && !m["subscriptionName"].empty()) {
      subscriptionName = make_shared<string>(boost::any_cast<string>(m["subscriptionName"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~SubscriptionForView() = default;
};
class TransformerForModify : public Darabonba::Model {
public:
  shared_ptr<vector<TransformAction>> actions{};
  shared_ptr<string> description{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<bool> quitAfterMatch{};
  shared_ptr<long> sortId{};
  shared_ptr<string> transformerName{};

  TransformerForModify() {}

  explicit TransformerForModify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["actions"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quitAfterMatch) {
      res["quitAfterMatch"] = boost::any(*quitAfterMatch);
    }
    if (sortId) {
      res["sortId"] = boost::any(*sortId);
    }
    if (transformerName) {
      res["transformerName"] = boost::any(*transformerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<TransformAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransformAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<TransformAction>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("quitAfterMatch") != m.end() && !m["quitAfterMatch"].empty()) {
      quitAfterMatch = make_shared<bool>(boost::any_cast<bool>(m["quitAfterMatch"]));
    }
    if (m.find("sortId") != m.end() && !m["sortId"].empty()) {
      sortId = make_shared<long>(boost::any_cast<long>(m["sortId"]));
    }
    if (m.find("transformerName") != m.end() && !m["transformerName"].empty()) {
      transformerName = make_shared<string>(boost::any_cast<string>(m["transformerName"]));
    }
  }


  virtual ~TransformerForModify() = default;
};
class TransformerForView : public Darabonba::Model {
public:
  shared_ptr<vector<TransformAction>> actions{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<FilterSetting> filterSetting{};
  shared_ptr<bool> quitAfterMatch{};
  shared_ptr<long> sortId{};
  shared_ptr<string> transformerId{};
  shared_ptr<string> transformerName{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspace{};

  TransformerForView() {}

  explicit TransformerForView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["actions"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (filterSetting) {
      res["filterSetting"] = filterSetting ? boost::any(filterSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quitAfterMatch) {
      res["quitAfterMatch"] = boost::any(*quitAfterMatch);
    }
    if (sortId) {
      res["sortId"] = boost::any(*sortId);
    }
    if (transformerId) {
      res["transformerId"] = boost::any(*transformerId);
    }
    if (transformerName) {
      res["transformerName"] = boost::any(*transformerName);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<TransformAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransformAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<TransformAction>>(expect1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("filterSetting") != m.end() && !m["filterSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterSetting"].type()) {
        FilterSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterSetting"]));
        filterSetting = make_shared<FilterSetting>(model1);
      }
    }
    if (m.find("quitAfterMatch") != m.end() && !m["quitAfterMatch"].empty()) {
      quitAfterMatch = make_shared<bool>(boost::any_cast<bool>(m["quitAfterMatch"]));
    }
    if (m.find("sortId") != m.end() && !m["sortId"].empty()) {
      sortId = make_shared<long>(boost::any_cast<long>(m["sortId"]));
    }
    if (m.find("transformerId") != m.end() && !m["transformerId"].empty()) {
      transformerId = make_shared<string>(boost::any_cast<string>(m["transformerId"]));
    }
    if (m.find("transformerName") != m.end() && !m["transformerName"].empty()) {
      transformerName = make_shared<string>(boost::any_cast<string>(m["transformerName"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~TransformerForView() = default;
};
class ListAlertActionsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alertActionIds{};
  shared_ptr<string> alertActionName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListAlertActionsRequest() {}

  explicit ListAlertActionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertActionIds) {
      res["alertActionIds"] = boost::any(*alertActionIds);
    }
    if (alertActionName) {
      res["alertActionName"] = boost::any(*alertActionName);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertActionIds") != m.end() && !m["alertActionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["alertActionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["alertActionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alertActionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("alertActionName") != m.end() && !m["alertActionName"].empty()) {
      alertActionName = make_shared<string>(boost::any_cast<string>(m["alertActionName"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAlertActionsRequest() = default;
};
class ListAlertActionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertActionIdsShrink{};
  shared_ptr<string> alertActionName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListAlertActionsShrinkRequest() {}

  explicit ListAlertActionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertActionIdsShrink) {
      res["alertActionIds"] = boost::any(*alertActionIdsShrink);
    }
    if (alertActionName) {
      res["alertActionName"] = boost::any(*alertActionName);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertActionIds") != m.end() && !m["alertActionIds"].empty()) {
      alertActionIdsShrink = make_shared<string>(boost::any_cast<string>(m["alertActionIds"]));
    }
    if (m.find("alertActionName") != m.end() && !m["alertActionName"].empty()) {
      alertActionName = make_shared<string>(boost::any_cast<string>(m["alertActionName"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAlertActionsShrinkRequest() = default;
};
class ListAlertActionsResponseBodyAlertActionsEssParam : public Darabonba::Model {
public:
  shared_ptr<string> essGroupId{};
  shared_ptr<string> essRuleId{};
  shared_ptr<string> regionId{};

  ListAlertActionsResponseBodyAlertActionsEssParam() {}

  explicit ListAlertActionsResponseBodyAlertActionsEssParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (essGroupId) {
      res["essGroupId"] = boost::any(*essGroupId);
    }
    if (essRuleId) {
      res["essRuleId"] = boost::any(*essRuleId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("essGroupId") != m.end() && !m["essGroupId"].empty()) {
      essGroupId = make_shared<string>(boost::any_cast<string>(m["essGroupId"]));
    }
    if (m.find("essRuleId") != m.end() && !m["essRuleId"].empty()) {
      essRuleId = make_shared<string>(boost::any_cast<string>(m["essRuleId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsEssParam() = default;
};
class ListAlertActionsResponseBodyAlertActionsFcParam : public Darabonba::Model {
public:
  shared_ptr<string> function{};
  shared_ptr<string> regionId{};
  shared_ptr<string> service{};

  ListAlertActionsResponseBodyAlertActionsFcParam() {}

  explicit ListAlertActionsResponseBodyAlertActionsFcParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      res["function"] = boost::any(*function);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["function"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsFcParam() = default;
};
class ListAlertActionsResponseBodyAlertActionsMnsParam : public Darabonba::Model {
public:
  shared_ptr<string> mnsType{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  ListAlertActionsResponseBodyAlertActionsMnsParam() {}

  explicit ListAlertActionsResponseBodyAlertActionsMnsParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mnsType) {
      res["mnsType"] = boost::any(*mnsType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mnsType") != m.end() && !m["mnsType"].empty()) {
      mnsType = make_shared<string>(boost::any_cast<string>(m["mnsType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsMnsParam() = default;
};
class ListAlertActionsResponseBodyAlertActionsPagerDutyParam : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> url{};

  ListAlertActionsResponseBodyAlertActionsPagerDutyParam() {}

  explicit ListAlertActionsResponseBodyAlertActionsPagerDutyParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsPagerDutyParam() = default;
};
class ListAlertActionsResponseBodyAlertActionsSlsParam : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};

  ListAlertActionsResponseBodyAlertActionsSlsParam() {}

  explicit ListAlertActionsResponseBodyAlertActionsSlsParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsSlsParam() = default;
};
class ListAlertActionsResponseBodyAlertActionsWebhookParam : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<map<string, string>> headers{};
  shared_ptr<string> method{};
  shared_ptr<string> url{};

  ListAlertActionsResponseBodyAlertActionsWebhookParam() {}

  explicit ListAlertActionsResponseBodyAlertActionsWebhookParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsWebhookParam() = default;
};
class ListAlertActionsResponseBodyAlertActions : public Darabonba::Model {
public:
  shared_ptr<string> alertActionId{};
  shared_ptr<string> alertActionName{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsEssParam> essParam{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsFcParam> fcParam{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsMnsParam> mnsParam{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsPagerDutyParam> pagerDutyParam{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsSlsParam> slsParam{};
  shared_ptr<string> type{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsWebhookParam> webhookParam{};

  ListAlertActionsResponseBodyAlertActions() {}

  explicit ListAlertActionsResponseBodyAlertActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertActionId) {
      res["alertActionId"] = boost::any(*alertActionId);
    }
    if (alertActionName) {
      res["alertActionName"] = boost::any(*alertActionName);
    }
    if (essParam) {
      res["essParam"] = essParam ? boost::any(essParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fcParam) {
      res["fcParam"] = fcParam ? boost::any(fcParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mnsParam) {
      res["mnsParam"] = mnsParam ? boost::any(mnsParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pagerDutyParam) {
      res["pagerDutyParam"] = pagerDutyParam ? boost::any(pagerDutyParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (slsParam) {
      res["slsParam"] = slsParam ? boost::any(slsParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (webhookParam) {
      res["webhookParam"] = webhookParam ? boost::any(webhookParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertActionId") != m.end() && !m["alertActionId"].empty()) {
      alertActionId = make_shared<string>(boost::any_cast<string>(m["alertActionId"]));
    }
    if (m.find("alertActionName") != m.end() && !m["alertActionName"].empty()) {
      alertActionName = make_shared<string>(boost::any_cast<string>(m["alertActionName"]));
    }
    if (m.find("essParam") != m.end() && !m["essParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["essParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsEssParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["essParam"]));
        essParam = make_shared<ListAlertActionsResponseBodyAlertActionsEssParam>(model1);
      }
    }
    if (m.find("fcParam") != m.end() && !m["fcParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["fcParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsFcParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fcParam"]));
        fcParam = make_shared<ListAlertActionsResponseBodyAlertActionsFcParam>(model1);
      }
    }
    if (m.find("mnsParam") != m.end() && !m["mnsParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["mnsParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsMnsParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mnsParam"]));
        mnsParam = make_shared<ListAlertActionsResponseBodyAlertActionsMnsParam>(model1);
      }
    }
    if (m.find("pagerDutyParam") != m.end() && !m["pagerDutyParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["pagerDutyParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsPagerDutyParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pagerDutyParam"]));
        pagerDutyParam = make_shared<ListAlertActionsResponseBodyAlertActionsPagerDutyParam>(model1);
      }
    }
    if (m.find("slsParam") != m.end() && !m["slsParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["slsParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsSlsParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["slsParam"]));
        slsParam = make_shared<ListAlertActionsResponseBodyAlertActionsSlsParam>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("webhookParam") != m.end() && !m["webhookParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["webhookParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsWebhookParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["webhookParam"]));
        webhookParam = make_shared<ListAlertActionsResponseBodyAlertActionsWebhookParam>(model1);
      }
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActions() = default;
};
class ListAlertActionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlertActionsResponseBodyAlertActions>> alertActions{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListAlertActionsResponseBody() {}

  explicit ListAlertActionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertActions) {
      vector<boost::any> temp1;
      for(auto item1:*alertActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["alertActions"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertActions") != m.end() && !m["alertActions"].empty()) {
      if (typeid(vector<boost::any>) == m["alertActions"].type()) {
        vector<ListAlertActionsResponseBodyAlertActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["alertActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlertActionsResponseBodyAlertActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alertActions = make_shared<vector<ListAlertActionsResponseBodyAlertActions>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAlertActionsResponseBody() = default;
};
class ListAlertActionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlertActionsResponseBody> body{};

  ListAlertActionsResponse() {}

  explicit ListAlertActionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAlertActionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlertActionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlertActionsResponse() = default;
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
  ListAlertActionsResponse listAlertActionsWithOptions(shared_ptr<ListAlertActionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlertActionsResponse listAlertActions(shared_ptr<ListAlertActionsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cms20240330

#endif
