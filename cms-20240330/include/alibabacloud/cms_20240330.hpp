// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CMS20240330_H_
#define ALIBABACLOUD_CMS20240330_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cms20240330 {
class AddonMetaDashboards : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  AddonMetaDashboards() {}

  explicit AddonMetaDashboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~AddonMetaDashboards() = default;
};
class AddonMetaEnvironmentsDependencies : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusterTypes{};
  shared_ptr<map<string, bool>> features{};
  shared_ptr<vector<string>> services{};

  AddonMetaEnvironmentsDependencies() {}

  explicit AddonMetaEnvironmentsDependencies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterTypes) {
      res["clusterTypes"] = boost::any(*clusterTypes);
    }
    if (features) {
      res["features"] = boost::any(*features);
    }
    if (services) {
      res["services"] = boost::any(*services);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterTypes") != m.end() && !m["clusterTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["clusterTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["clusterTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("features") != m.end() && !m["features"].empty()) {
      map<string, bool> map1 = boost::any_cast<map<string, bool>>(m["features"]);
      map<string, bool> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      features = make_shared<map<string, bool>>(toMap1);
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["services"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      services = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddonMetaEnvironmentsDependencies() = default;
};
class AddonMetaEnvironmentsPoliciesBindEntity : public Darabonba::Model {
public:
  shared_ptr<bool> entityGroupMode{};
  shared_ptr<string> entityType{};
  shared_ptr<bool> singleEntityMode{};
  shared_ptr<string> vpcIdFieldKey{};

  AddonMetaEnvironmentsPoliciesBindEntity() {}

  explicit AddonMetaEnvironmentsPoliciesBindEntity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityGroupMode) {
      res["entityGroupMode"] = boost::any(*entityGroupMode);
    }
    if (entityType) {
      res["entityType"] = boost::any(*entityType);
    }
    if (singleEntityMode) {
      res["singleEntityMode"] = boost::any(*singleEntityMode);
    }
    if (vpcIdFieldKey) {
      res["vpcIdFieldKey"] = boost::any(*vpcIdFieldKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entityGroupMode") != m.end() && !m["entityGroupMode"].empty()) {
      entityGroupMode = make_shared<bool>(boost::any_cast<bool>(m["entityGroupMode"]));
    }
    if (m.find("entityType") != m.end() && !m["entityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["entityType"]));
    }
    if (m.find("singleEntityMode") != m.end() && !m["singleEntityMode"].empty()) {
      singleEntityMode = make_shared<bool>(boost::any_cast<bool>(m["singleEntityMode"]));
    }
    if (m.find("vpcIdFieldKey") != m.end() && !m["vpcIdFieldKey"].empty()) {
      vpcIdFieldKey = make_shared<string>(boost::any_cast<string>(m["vpcIdFieldKey"]));
    }
  }


  virtual ~AddonMetaEnvironmentsPoliciesBindEntity() = default;
};
class AddonMetaEnvironmentsPoliciesMetricCheckRule : public Darabonba::Model {
public:
  shared_ptr<vector<string>> promQL{};

  AddonMetaEnvironmentsPoliciesMetricCheckRule() {}

  explicit AddonMetaEnvironmentsPoliciesMetricCheckRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promQL) {
      res["promQL"] = boost::any(*promQL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("promQL") != m.end() && !m["promQL"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["promQL"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["promQL"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      promQL = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddonMetaEnvironmentsPoliciesMetricCheckRule() = default;
};
class AddonMetaEnvironmentsPoliciesProtocols : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};

  AddonMetaEnvironmentsPoliciesProtocols() {}

  explicit AddonMetaEnvironmentsPoliciesProtocols(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (icon) {
      res["icon"] = boost::any(*icon);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("icon") != m.end() && !m["icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["icon"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~AddonMetaEnvironmentsPoliciesProtocols() = default;
};
class AddonMetaEnvironmentsPolicies : public Darabonba::Model {
public:
  shared_ptr<string> alertDefaultStatus{};
  shared_ptr<bool> bindDefaultPolicy{};
  shared_ptr<AddonMetaEnvironmentsPoliciesBindEntity> bindEntity{};
  shared_ptr<bool> defaultInstall{};
  shared_ptr<bool> enableServiceAccount{};
  shared_ptr<AddonMetaEnvironmentsPoliciesMetricCheckRule> metricCheckRule{};
  shared_ptr<bool> needRestartAfterIntegration{};
  shared_ptr<vector<AddonMetaEnvironmentsPoliciesProtocols>> protocols{};
  shared_ptr<string> targetAddonName{};

  AddonMetaEnvironmentsPolicies() {}

  explicit AddonMetaEnvironmentsPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertDefaultStatus) {
      res["alertDefaultStatus"] = boost::any(*alertDefaultStatus);
    }
    if (bindDefaultPolicy) {
      res["bindDefaultPolicy"] = boost::any(*bindDefaultPolicy);
    }
    if (bindEntity) {
      res["bindEntity"] = bindEntity ? boost::any(bindEntity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultInstall) {
      res["defaultInstall"] = boost::any(*defaultInstall);
    }
    if (enableServiceAccount) {
      res["enableServiceAccount"] = boost::any(*enableServiceAccount);
    }
    if (metricCheckRule) {
      res["metricCheckRule"] = metricCheckRule ? boost::any(metricCheckRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (needRestartAfterIntegration) {
      res["needRestartAfterIntegration"] = boost::any(*needRestartAfterIntegration);
    }
    if (protocols) {
      vector<boost::any> temp1;
      for(auto item1:*protocols){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["protocols"] = boost::any(temp1);
    }
    if (targetAddonName) {
      res["targetAddonName"] = boost::any(*targetAddonName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertDefaultStatus") != m.end() && !m["alertDefaultStatus"].empty()) {
      alertDefaultStatus = make_shared<string>(boost::any_cast<string>(m["alertDefaultStatus"]));
    }
    if (m.find("bindDefaultPolicy") != m.end() && !m["bindDefaultPolicy"].empty()) {
      bindDefaultPolicy = make_shared<bool>(boost::any_cast<bool>(m["bindDefaultPolicy"]));
    }
    if (m.find("bindEntity") != m.end() && !m["bindEntity"].empty()) {
      if (typeid(map<string, boost::any>) == m["bindEntity"].type()) {
        AddonMetaEnvironmentsPoliciesBindEntity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["bindEntity"]));
        bindEntity = make_shared<AddonMetaEnvironmentsPoliciesBindEntity>(model1);
      }
    }
    if (m.find("defaultInstall") != m.end() && !m["defaultInstall"].empty()) {
      defaultInstall = make_shared<bool>(boost::any_cast<bool>(m["defaultInstall"]));
    }
    if (m.find("enableServiceAccount") != m.end() && !m["enableServiceAccount"].empty()) {
      enableServiceAccount = make_shared<bool>(boost::any_cast<bool>(m["enableServiceAccount"]));
    }
    if (m.find("metricCheckRule") != m.end() && !m["metricCheckRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["metricCheckRule"].type()) {
        AddonMetaEnvironmentsPoliciesMetricCheckRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metricCheckRule"]));
        metricCheckRule = make_shared<AddonMetaEnvironmentsPoliciesMetricCheckRule>(model1);
      }
    }
    if (m.find("needRestartAfterIntegration") != m.end() && !m["needRestartAfterIntegration"].empty()) {
      needRestartAfterIntegration = make_shared<bool>(boost::any_cast<bool>(m["needRestartAfterIntegration"]));
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<AddonMetaEnvironmentsPoliciesProtocols> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["protocols"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddonMetaEnvironmentsPoliciesProtocols model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        protocols = make_shared<vector<AddonMetaEnvironmentsPoliciesProtocols>>(expect1);
      }
    }
    if (m.find("targetAddonName") != m.end() && !m["targetAddonName"].empty()) {
      targetAddonName = make_shared<string>(boost::any_cast<string>(m["targetAddonName"]));
    }
  }


  virtual ~AddonMetaEnvironmentsPolicies() = default;
};
class AddonMetaEnvironments : public Darabonba::Model {
public:
  shared_ptr<AddonMetaEnvironmentsDependencies> dependencies{};
  shared_ptr<string> description{};
  shared_ptr<bool> enable{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<AddonMetaEnvironmentsPolicies> policies{};
  shared_ptr<string> policyType{};

  AddonMetaEnvironments() {}

  explicit AddonMetaEnvironments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dependencies) {
      res["dependencies"] = dependencies ? boost::any(dependencies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (policies) {
      res["policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyType) {
      res["policyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dependencies") != m.end() && !m["dependencies"].empty()) {
      if (typeid(map<string, boost::any>) == m["dependencies"].type()) {
        AddonMetaEnvironmentsDependencies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dependencies"]));
        dependencies = make_shared<AddonMetaEnvironmentsDependencies>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("policies") != m.end() && !m["policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["policies"].type()) {
        AddonMetaEnvironmentsPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policies"]));
        policies = make_shared<AddonMetaEnvironmentsPolicies>(model1);
      }
    }
    if (m.find("policyType") != m.end() && !m["policyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["policyType"]));
    }
  }


  virtual ~AddonMetaEnvironments() = default;
};
class AddonMeta : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<vector<string>> categories{};
  shared_ptr<vector<AddonMetaDashboards>> dashboards{};
  shared_ptr<string> description{};
  shared_ptr<vector<AddonMetaEnvironments>> environments{};
  shared_ptr<string> icon{};
  shared_ptr<vector<string>> keywords{};
  shared_ptr<string> language{};
  shared_ptr<string> latestReleaseCreateTime{};
  shared_ptr<string> name{};
  shared_ptr<bool> once{};
  shared_ptr<string> scene{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  AddonMeta() {}

  explicit AddonMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (categories) {
      res["categories"] = boost::any(*categories);
    }
    if (dashboards) {
      vector<boost::any> temp1;
      for(auto item1:*dashboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dashboards"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environments) {
      vector<boost::any> temp1;
      for(auto item1:*environments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["environments"] = boost::any(temp1);
    }
    if (icon) {
      res["icon"] = boost::any(*icon);
    }
    if (keywords) {
      res["keywords"] = boost::any(*keywords);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (latestReleaseCreateTime) {
      res["latestReleaseCreateTime"] = boost::any(*latestReleaseCreateTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (once) {
      res["once"] = boost::any(*once);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("dashboards") != m.end() && !m["dashboards"].empty()) {
      if (typeid(vector<boost::any>) == m["dashboards"].type()) {
        vector<AddonMetaDashboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dashboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddonMetaDashboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboards = make_shared<vector<AddonMetaDashboards>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environments") != m.end() && !m["environments"].empty()) {
      if (typeid(vector<boost::any>) == m["environments"].type()) {
        vector<AddonMetaEnvironments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["environments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddonMetaEnvironments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environments = make_shared<vector<AddonMetaEnvironments>>(expect1);
      }
    }
    if (m.find("icon") != m.end() && !m["icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["icon"]));
    }
    if (m.find("keywords") != m.end() && !m["keywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("latestReleaseCreateTime") != m.end() && !m["latestReleaseCreateTime"].empty()) {
      latestReleaseCreateTime = make_shared<string>(boost::any_cast<string>(m["latestReleaseCreateTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("once") != m.end() && !m["once"].empty()) {
      once = make_shared<bool>(boost::any_cast<bool>(m["once"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~AddonMeta() = default;
};
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
  shared_ptr<string> token{};
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
    if (token) {
      res["token"] = boost::any(*token);
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
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
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
  shared_ptr<bool> dimDisabled{};
  shared_ptr<string> displayNameCn{};
  shared_ptr<string> displayNameEn{};
  shared_ptr<bool> hidden{};
  shared_ptr<bool> labelDisabled{};
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
    if (dimDisabled) {
      res["dimDisabled"] = boost::any(*dimDisabled);
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
    if (labelDisabled) {
      res["labelDisabled"] = boost::any(*labelDisabled);
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
    if (m.find("dimDisabled") != m.end() && !m["dimDisabled"].empty()) {
      dimDisabled = make_shared<bool>(boost::any_cast<bool>(m["dimDisabled"]));
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
    if (m.find("labelDisabled") != m.end() && !m["labelDisabled"].empty()) {
      labelDisabled = make_shared<bool>(boost::any_cast<bool>(m["labelDisabled"]));
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
class AlertRuleConditionCompositeEscalationEscalations : public Darabonba::Model {
public:
  shared_ptr<string> comparisonOperator{};
  shared_ptr<string> metricName{};
  shared_ptr<long> period{};
  shared_ptr<string> statistics{};
  shared_ptr<double> threshold{};

  AlertRuleConditionCompositeEscalationEscalations() {}

  explicit AlertRuleConditionCompositeEscalationEscalations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonOperator) {
      res["comparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (metricName) {
      res["metricName"] = boost::any(*metricName);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (statistics) {
      res["statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comparisonOperator") != m.end() && !m["comparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["comparisonOperator"]));
    }
    if (m.find("metricName") != m.end() && !m["metricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["metricName"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("statistics") != m.end() && !m["statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["statistics"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["threshold"]));
    }
  }


  virtual ~AlertRuleConditionCompositeEscalationEscalations() = default;
};
class AlertRuleConditionCompositeEscalation : public Darabonba::Model {
public:
  shared_ptr<vector<AlertRuleConditionCompositeEscalationEscalations>> escalations{};
  shared_ptr<string> level{};
  shared_ptr<string> relation{};
  shared_ptr<long> times{};

  AlertRuleConditionCompositeEscalation() {}

  explicit AlertRuleConditionCompositeEscalation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalations) {
      vector<boost::any> temp1;
      for(auto item1:*escalations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalations"] = boost::any(temp1);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (relation) {
      res["relation"] = boost::any(*relation);
    }
    if (times) {
      res["times"] = boost::any(*times);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalations") != m.end() && !m["escalations"].empty()) {
      if (typeid(vector<boost::any>) == m["escalations"].type()) {
        vector<AlertRuleConditionCompositeEscalationEscalations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleConditionCompositeEscalationEscalations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalations = make_shared<vector<AlertRuleConditionCompositeEscalationEscalations>>(expect1);
      }
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("relation") != m.end() && !m["relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["relation"]));
    }
    if (m.find("times") != m.end() && !m["times"].empty()) {
      times = make_shared<long>(boost::any_cast<long>(m["times"]));
    }
  }


  virtual ~AlertRuleConditionCompositeEscalation() = default;
};
class AlertRuleConditionExpressEscalation : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<string> rawExpression{};
  shared_ptr<long> times{};

  AlertRuleConditionExpressEscalation() {}

  explicit AlertRuleConditionExpressEscalation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (rawExpression) {
      res["rawExpression"] = boost::any(*rawExpression);
    }
    if (times) {
      res["times"] = boost::any(*times);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("rawExpression") != m.end() && !m["rawExpression"].empty()) {
      rawExpression = make_shared<string>(boost::any_cast<string>(m["rawExpression"]));
    }
    if (m.find("times") != m.end() && !m["times"].empty()) {
      times = make_shared<long>(boost::any_cast<long>(m["times"]));
    }
  }


  virtual ~AlertRuleConditionExpressEscalation() = default;
};
class AlertRuleConditionSimpleEscalationEscalations : public Darabonba::Model {
public:
  shared_ptr<string> comparisonOperator{};
  shared_ptr<string> level{};
  shared_ptr<string> statistics{};
  shared_ptr<double> threshold{};
  shared_ptr<long> times{};

  AlertRuleConditionSimpleEscalationEscalations() {}

  explicit AlertRuleConditionSimpleEscalationEscalations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparisonOperator) {
      res["comparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (statistics) {
      res["statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["threshold"] = boost::any(*threshold);
    }
    if (times) {
      res["times"] = boost::any(*times);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("comparisonOperator") != m.end() && !m["comparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["comparisonOperator"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("statistics") != m.end() && !m["statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["statistics"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["threshold"]));
    }
    if (m.find("times") != m.end() && !m["times"].empty()) {
      times = make_shared<long>(boost::any_cast<long>(m["times"]));
    }
  }


  virtual ~AlertRuleConditionSimpleEscalationEscalations() = default;
};
class AlertRuleConditionSimpleEscalation : public Darabonba::Model {
public:
  shared_ptr<vector<AlertRuleConditionSimpleEscalationEscalations>> escalations{};
  shared_ptr<string> metricName{};
  shared_ptr<long> period{};

  AlertRuleConditionSimpleEscalation() {}

  explicit AlertRuleConditionSimpleEscalation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (escalations) {
      vector<boost::any> temp1;
      for(auto item1:*escalations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalations"] = boost::any(temp1);
    }
    if (metricName) {
      res["metricName"] = boost::any(*metricName);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("escalations") != m.end() && !m["escalations"].empty()) {
      if (typeid(vector<boost::any>) == m["escalations"].type()) {
        vector<AlertRuleConditionSimpleEscalationEscalations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleConditionSimpleEscalationEscalations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalations = make_shared<vector<AlertRuleConditionSimpleEscalationEscalations>>(expect1);
      }
    }
    if (m.find("metricName") != m.end() && !m["metricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["metricName"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
  }


  virtual ~AlertRuleConditionSimpleEscalation() = default;
};
class AlertRuleCondition : public Darabonba::Model {
public:
  shared_ptr<long> alertCount{};
  shared_ptr<vector<AlertRuleConditionCaseList>> caseList{};
  shared_ptr<vector<AlertRuleConditionCompareList>> compareList{};
  shared_ptr<AlertRuleConditionCompositeEscalation> compositeEscalation{};
  shared_ptr<string> escalationType{};
  shared_ptr<AlertRuleConditionExpressEscalation> expressEscalation{};
  shared_ptr<string> noDataAlertLevel{};
  shared_ptr<string> noDataAppendValue{};
  shared_ptr<string> noDataPolicy{};
  shared_ptr<string> relation{};
  shared_ptr<AlertRuleConditionSimpleEscalation> simpleEscalation{};
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
    if (compositeEscalation) {
      res["compositeEscalation"] = compositeEscalation ? boost::any(compositeEscalation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (escalationType) {
      res["escalationType"] = boost::any(*escalationType);
    }
    if (expressEscalation) {
      res["expressEscalation"] = expressEscalation ? boost::any(expressEscalation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (noDataAlertLevel) {
      res["noDataAlertLevel"] = boost::any(*noDataAlertLevel);
    }
    if (noDataAppendValue) {
      res["noDataAppendValue"] = boost::any(*noDataAppendValue);
    }
    if (noDataPolicy) {
      res["noDataPolicy"] = boost::any(*noDataPolicy);
    }
    if (relation) {
      res["relation"] = boost::any(*relation);
    }
    if (simpleEscalation) {
      res["simpleEscalation"] = simpleEscalation ? boost::any(simpleEscalation->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("compositeEscalation") != m.end() && !m["compositeEscalation"].empty()) {
      if (typeid(map<string, boost::any>) == m["compositeEscalation"].type()) {
        AlertRuleConditionCompositeEscalation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["compositeEscalation"]));
        compositeEscalation = make_shared<AlertRuleConditionCompositeEscalation>(model1);
      }
    }
    if (m.find("escalationType") != m.end() && !m["escalationType"].empty()) {
      escalationType = make_shared<string>(boost::any_cast<string>(m["escalationType"]));
    }
    if (m.find("expressEscalation") != m.end() && !m["expressEscalation"].empty()) {
      if (typeid(map<string, boost::any>) == m["expressEscalation"].type()) {
        AlertRuleConditionExpressEscalation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["expressEscalation"]));
        expressEscalation = make_shared<AlertRuleConditionExpressEscalation>(model1);
      }
    }
    if (m.find("noDataAlertLevel") != m.end() && !m["noDataAlertLevel"].empty()) {
      noDataAlertLevel = make_shared<string>(boost::any_cast<string>(m["noDataAlertLevel"]));
    }
    if (m.find("noDataAppendValue") != m.end() && !m["noDataAppendValue"].empty()) {
      noDataAppendValue = make_shared<string>(boost::any_cast<string>(m["noDataAppendValue"]));
    }
    if (m.find("noDataPolicy") != m.end() && !m["noDataPolicy"].empty()) {
      noDataPolicy = make_shared<string>(boost::any_cast<string>(m["noDataPolicy"]));
    }
    if (m.find("relation") != m.end() && !m["relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["relation"]));
    }
    if (m.find("simpleEscalation") != m.end() && !m["simpleEscalation"].empty()) {
      if (typeid(map<string, boost::any>) == m["simpleEscalation"].type()) {
        AlertRuleConditionSimpleEscalation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["simpleEscalation"]));
        simpleEscalation = make_shared<AlertRuleConditionSimpleEscalation>(model1);
      }
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
  shared_ptr<string> appType{};
  shared_ptr<vector<AlertRuleDataSourceDsList>> dsList{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  AlertRuleDataSource() {}

  explicit AlertRuleDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["appType"] = boost::any(*appType);
    }
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
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appType") != m.end() && !m["appType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["appType"]));
    }
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
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
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
class AlertRuleQueryQueriesApmFilters : public Darabonba::Model {
public:
  shared_ptr<string> dim{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  AlertRuleQueryQueriesApmFilters() {}

  explicit AlertRuleQueryQueriesApmFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dim) {
      res["dim"] = boost::any(*dim);
    }
    if (type) {
      res["type"] = boost::any(*type);
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
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AlertRuleQueryQueriesApmFilters() = default;
};
class AlertRuleQueryQueries : public Darabonba::Model {
public:
  shared_ptr<string> apmAlertMetricId{};
  shared_ptr<vector<AlertRuleQueryQueriesApmFilters>> apmFilters{};
  shared_ptr<vector<string>> apmGroupBy{};
  shared_ptr<long> duration{};
  shared_ptr<long> end{};
  shared_ptr<string> expr{};
  shared_ptr<long> start{};
  shared_ptr<string> timeUnit{};
  shared_ptr<long> window{};

  AlertRuleQueryQueries() {}

  explicit AlertRuleQueryQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apmAlertMetricId) {
      res["apmAlertMetricId"] = boost::any(*apmAlertMetricId);
    }
    if (apmFilters) {
      vector<boost::any> temp1;
      for(auto item1:*apmFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["apmFilters"] = boost::any(temp1);
    }
    if (apmGroupBy) {
      res["apmGroupBy"] = boost::any(*apmGroupBy);
    }
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
    if (m.find("apmAlertMetricId") != m.end() && !m["apmAlertMetricId"].empty()) {
      apmAlertMetricId = make_shared<string>(boost::any_cast<string>(m["apmAlertMetricId"]));
    }
    if (m.find("apmFilters") != m.end() && !m["apmFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["apmFilters"].type()) {
        vector<AlertRuleQueryQueriesApmFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["apmFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertRuleQueryQueriesApmFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apmFilters = make_shared<vector<AlertRuleQueryQueriesApmFilters>>(expect1);
      }
    }
    if (m.find("apmGroupBy") != m.end() && !m["apmGroupBy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["apmGroupBy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["apmGroupBy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      apmGroupBy = make_shared<vector<string>>(toVec1);
    }
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
      window = make_shared<long>(boost::any_cast<long>(m["window"]));
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
  shared_ptr<bool> checkAfterDataComplete{};
  shared_ptr<vector<map<string, string>>> dimensions{};
  shared_ptr<long> duration{};
  shared_ptr<string> expr{};
  shared_ptr<AlertRuleSlsQueryJoin> firstJoin{};
  shared_ptr<vector<string>> groupFieldList{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupType{};
  shared_ptr<string> namespace_{};
  shared_ptr<vector<AlertRuleQueryQueries>> queries{};
  shared_ptr<string> relationType{};
  shared_ptr<AlertRuleSlsQueryJoin> secondJoin{};
  shared_ptr<string> type{};

  AlertRuleQuery() {}

  explicit AlertRuleQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkAfterDataComplete) {
      res["checkAfterDataComplete"] = boost::any(*checkAfterDataComplete);
    }
    if (dimensions) {
      res["dimensions"] = boost::any(*dimensions);
    }
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
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (queries) {
      vector<boost::any> temp1;
      for(auto item1:*queries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queries"] = boost::any(temp1);
    }
    if (relationType) {
      res["relationType"] = boost::any(*relationType);
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
    if (m.find("checkAfterDataComplete") != m.end() && !m["checkAfterDataComplete"].empty()) {
      checkAfterDataComplete = make_shared<bool>(boost::any_cast<bool>(m["checkAfterDataComplete"]));
    }
    if (m.find("dimensions") != m.end() && !m["dimensions"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["dimensions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dimensions"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      dimensions = make_shared<vector<map<string, string>>>(toVec1);
    }
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
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
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
    if (m.find("relationType") != m.end() && !m["relationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["relationType"]));
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
  shared_ptr<bool> sendToArms{};

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
    if (sendToArms) {
      res["sendToArms"] = boost::any(*sendToArms);
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
    if (m.find("sendToArms") != m.end() && !m["sendToArms"].empty()) {
      sendToArms = make_shared<bool>(boost::any_cast<bool>(m["sendToArms"]));
    }
  }


  virtual ~AlertRuleSend() = default;
};
class BizTraceConfig : public Darabonba::Model {
public:
  shared_ptr<string> advancedConfig{};
  shared_ptr<string> bizTraceCode{};
  shared_ptr<string> bizTraceId{};
  shared_ptr<string> bizTraceName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleConfig{};
  shared_ptr<string> workspace{};

  BizTraceConfig() {}

  explicit BizTraceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedConfig) {
      res["advancedConfig"] = boost::any(*advancedConfig);
    }
    if (bizTraceCode) {
      res["bizTraceCode"] = boost::any(*bizTraceCode);
    }
    if (bizTraceId) {
      res["bizTraceId"] = boost::any(*bizTraceId);
    }
    if (bizTraceName) {
      res["bizTraceName"] = boost::any(*bizTraceName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (ruleConfig) {
      res["ruleConfig"] = boost::any(*ruleConfig);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advancedConfig") != m.end() && !m["advancedConfig"].empty()) {
      advancedConfig = make_shared<string>(boost::any_cast<string>(m["advancedConfig"]));
    }
    if (m.find("bizTraceCode") != m.end() && !m["bizTraceCode"].empty()) {
      bizTraceCode = make_shared<string>(boost::any_cast<string>(m["bizTraceCode"]));
    }
    if (m.find("bizTraceId") != m.end() && !m["bizTraceId"].empty()) {
      bizTraceId = make_shared<string>(boost::any_cast<string>(m["bizTraceId"]));
    }
    if (m.find("bizTraceName") != m.end() && !m["bizTraceName"].empty()) {
      bizTraceName = make_shared<string>(boost::any_cast<string>(m["bizTraceName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("ruleConfig") != m.end() && !m["ruleConfig"].empty()) {
      ruleConfig = make_shared<string>(boost::any_cast<string>(m["ruleConfig"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~BizTraceConfig() = default;
};
class DataStorageItem : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storeName{};
  shared_ptr<string> storeType{};

  DataStorageItem() {}

  explicit DataStorageItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (storeName) {
      res["storeName"] = boost::any(*storeName);
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("storeName") != m.end() && !m["storeName"].empty()) {
      storeName = make_shared<string>(boost::any_cast<string>(m["storeName"]));
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~DataStorageItem() = default;
};
class EntityDiscoverRuleAnnotations : public Darabonba::Model {
public:
  shared_ptr<string> op{};
  shared_ptr<string> tagKey{};
  shared_ptr<vector<string>> tagValues{};

  EntityDiscoverRuleAnnotations() {}

  explicit EntityDiscoverRuleAnnotations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (op) {
      res["op"] = boost::any(*op);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValues) {
      res["tagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("op") != m.end() && !m["op"].empty()) {
      op = make_shared<string>(boost::any_cast<string>(m["op"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValues") != m.end() && !m["tagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EntityDiscoverRuleAnnotations() = default;
};
class EntityDiscoverRuleFieldRules : public Darabonba::Model {
public:
  shared_ptr<string> fieldKey{};
  shared_ptr<vector<string>> fieldValues{};
  shared_ptr<string> op{};

  EntityDiscoverRuleFieldRules() {}

  explicit EntityDiscoverRuleFieldRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldKey) {
      res["fieldKey"] = boost::any(*fieldKey);
    }
    if (fieldValues) {
      res["fieldValues"] = boost::any(*fieldValues);
    }
    if (op) {
      res["op"] = boost::any(*op);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldKey") != m.end() && !m["fieldKey"].empty()) {
      fieldKey = make_shared<string>(boost::any_cast<string>(m["fieldKey"]));
    }
    if (m.find("fieldValues") != m.end() && !m["fieldValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fieldValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fieldValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("op") != m.end() && !m["op"].empty()) {
      op = make_shared<string>(boost::any_cast<string>(m["op"]));
    }
  }


  virtual ~EntityDiscoverRuleFieldRules() = default;
};
class EntityDiscoverRuleIpMatchRule : public Darabonba::Model {
public:
  shared_ptr<string> ipCIDR{};
  shared_ptr<string> ipFieldKey{};

  EntityDiscoverRuleIpMatchRule() {}

  explicit EntityDiscoverRuleIpMatchRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipCIDR) {
      res["ipCIDR"] = boost::any(*ipCIDR);
    }
    if (ipFieldKey) {
      res["ipFieldKey"] = boost::any(*ipFieldKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ipCIDR") != m.end() && !m["ipCIDR"].empty()) {
      ipCIDR = make_shared<string>(boost::any_cast<string>(m["ipCIDR"]));
    }
    if (m.find("ipFieldKey") != m.end() && !m["ipFieldKey"].empty()) {
      ipFieldKey = make_shared<string>(boost::any_cast<string>(m["ipFieldKey"]));
    }
  }


  virtual ~EntityDiscoverRuleIpMatchRule() = default;
};
class EntityDiscoverRuleLabels : public Darabonba::Model {
public:
  shared_ptr<string> op{};
  shared_ptr<string> tagKey{};
  shared_ptr<vector<string>> tagValues{};

  EntityDiscoverRuleLabels() {}

  explicit EntityDiscoverRuleLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (op) {
      res["op"] = boost::any(*op);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValues) {
      res["tagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("op") != m.end() && !m["op"].empty()) {
      op = make_shared<string>(boost::any_cast<string>(m["op"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValues") != m.end() && !m["tagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EntityDiscoverRuleLabels() = default;
};
class EntityDiscoverRuleTags : public Darabonba::Model {
public:
  shared_ptr<string> op{};
  shared_ptr<string> tagKey{};
  shared_ptr<vector<string>> tagValues{};

  EntityDiscoverRuleTags() {}

  explicit EntityDiscoverRuleTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (op) {
      res["op"] = boost::any(*op);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValues) {
      res["tagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("op") != m.end() && !m["op"].empty()) {
      op = make_shared<string>(boost::any_cast<string>(m["op"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValues") != m.end() && !m["tagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EntityDiscoverRuleTags() = default;
};
class EntityDiscoverRule : public Darabonba::Model {
public:
  shared_ptr<vector<EntityDiscoverRuleAnnotations>> annotations{};
  shared_ptr<vector<string>> entityTypes{};
  shared_ptr<vector<EntityDiscoverRuleFieldRules>> fieldRules{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<EntityDiscoverRuleIpMatchRule>> ipMatchRule{};
  shared_ptr<vector<EntityDiscoverRuleLabels>> labels{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<EntityDiscoverRuleTags>> tags{};

  EntityDiscoverRule() {}

  explicit EntityDiscoverRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["annotations"] = boost::any(temp1);
    }
    if (entityTypes) {
      res["entityTypes"] = boost::any(*entityTypes);
    }
    if (fieldRules) {
      vector<boost::any> temp1;
      for(auto item1:*fieldRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fieldRules"] = boost::any(temp1);
    }
    if (instanceIds) {
      res["instanceIds"] = boost::any(*instanceIds);
    }
    if (ipMatchRule) {
      vector<boost::any> temp1;
      for(auto item1:*ipMatchRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ipMatchRule"] = boost::any(temp1);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    if (regionIds) {
      res["regionIds"] = boost::any(*regionIds);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["annotations"].type()) {
        vector<EntityDiscoverRuleAnnotations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityDiscoverRuleAnnotations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<EntityDiscoverRuleAnnotations>>(expect1);
      }
    }
    if (m.find("entityTypes") != m.end() && !m["entityTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["entityTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["entityTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entityTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("fieldRules") != m.end() && !m["fieldRules"].empty()) {
      if (typeid(vector<boost::any>) == m["fieldRules"].type()) {
        vector<EntityDiscoverRuleFieldRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fieldRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityDiscoverRuleFieldRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fieldRules = make_shared<vector<EntityDiscoverRuleFieldRules>>(expect1);
      }
    }
    if (m.find("instanceIds") != m.end() && !m["instanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ipMatchRule") != m.end() && !m["ipMatchRule"].empty()) {
      if (typeid(vector<boost::any>) == m["ipMatchRule"].type()) {
        vector<EntityDiscoverRuleIpMatchRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ipMatchRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityDiscoverRuleIpMatchRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipMatchRule = make_shared<vector<EntityDiscoverRuleIpMatchRule>>(expect1);
      }
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<EntityDiscoverRuleLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityDiscoverRuleLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<EntityDiscoverRuleLabels>>(expect1);
      }
    }
    if (m.find("regionIds") != m.end() && !m["regionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["regionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["regionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<EntityDiscoverRuleTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityDiscoverRuleTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<EntityDiscoverRuleTags>>(expect1);
      }
    }
  }


  virtual ~EntityDiscoverRule() = default;
};
class EntityGroupBaseEntityQueries : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> spl{};

  EntityGroupBaseEntityQueries() {}

  explicit EntityGroupBaseEntityQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["entityType"] = boost::any(*entityType);
    }
    if (spl) {
      res["spl"] = boost::any(*spl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entityType") != m.end() && !m["entityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["entityType"]));
    }
    if (m.find("spl") != m.end() && !m["spl"].empty()) {
      spl = make_shared<string>(boost::any_cast<string>(m["spl"]));
    }
  }


  virtual ~EntityGroupBaseEntityQueries() = default;
};
class EntityGroupBase : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> entityGroupId{};
  shared_ptr<string> entityGroupName{};
  shared_ptr<vector<EntityGroupBaseEntityQueries>> entityQueries{};
  shared_ptr<EntityDiscoverRule> entityRules{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspace{};

  EntityGroupBase() {}

  explicit EntityGroupBase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (entityGroupId) {
      res["entityGroupId"] = boost::any(*entityGroupId);
    }
    if (entityGroupName) {
      res["entityGroupName"] = boost::any(*entityGroupName);
    }
    if (entityQueries) {
      vector<boost::any> temp1;
      for(auto item1:*entityQueries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["entityQueries"] = boost::any(temp1);
    }
    if (entityRules) {
      res["entityRules"] = entityRules ? boost::any(entityRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("entityGroupId") != m.end() && !m["entityGroupId"].empty()) {
      entityGroupId = make_shared<string>(boost::any_cast<string>(m["entityGroupId"]));
    }
    if (m.find("entityGroupName") != m.end() && !m["entityGroupName"].empty()) {
      entityGroupName = make_shared<string>(boost::any_cast<string>(m["entityGroupName"]));
    }
    if (m.find("entityQueries") != m.end() && !m["entityQueries"].empty()) {
      if (typeid(vector<boost::any>) == m["entityQueries"].type()) {
        vector<EntityGroupBaseEntityQueries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["entityQueries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntityGroupBaseEntityQueries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityQueries = make_shared<vector<EntityGroupBaseEntityQueries>>(expect1);
      }
    }
    if (m.find("entityRules") != m.end() && !m["entityRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["entityRules"].type()) {
        EntityDiscoverRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["entityRules"]));
        entityRules = make_shared<EntityDiscoverRule>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~EntityGroupBase() = default;
};
class IncidentContactStruct : public Darabonba::Model {
public:
  shared_ptr<vector<string>> channel{};
  shared_ptr<string> contactId{};
  shared_ptr<string> contactType{};

  IncidentContactStruct() {}

  explicit IncidentContactStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (contactId) {
      res["contactId"] = boost::any(*contactId);
    }
    if (contactType) {
      res["contactType"] = boost::any(*contactType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["channel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["channel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("contactId") != m.end() && !m["contactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["contactId"]));
    }
    if (m.find("contactType") != m.end() && !m["contactType"].empty()) {
      contactType = make_shared<string>(boost::any_cast<string>(m["contactType"]));
    }
  }


  virtual ~IncidentContactStruct() = default;
};
class IncidentEscalationStageStruct : public Darabonba::Model {
public:
  shared_ptr<vector<IncidentContactStruct>> contact{};
  shared_ptr<long> cycleNotifyCount{};
  shared_ptr<long> cycleNotifyTime{};
  shared_ptr<string> description{};
  shared_ptr<string> effectTime{};
  shared_ptr<string> name{};
  shared_ptr<long> stageIndex{};
  shared_ptr<string> timeZone{};
  shared_ptr<long> waitToNextStageTime{};

  IncidentEscalationStageStruct() {}

  explicit IncidentEscalationStageStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contact) {
      vector<boost::any> temp1;
      for(auto item1:*contact){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["contact"] = boost::any(temp1);
    }
    if (cycleNotifyCount) {
      res["cycleNotifyCount"] = boost::any(*cycleNotifyCount);
    }
    if (cycleNotifyTime) {
      res["cycleNotifyTime"] = boost::any(*cycleNotifyTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (effectTime) {
      res["effectTime"] = boost::any(*effectTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (stageIndex) {
      res["stageIndex"] = boost::any(*stageIndex);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    if (waitToNextStageTime) {
      res["waitToNextStageTime"] = boost::any(*waitToNextStageTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      if (typeid(vector<boost::any>) == m["contact"].type()) {
        vector<IncidentContactStruct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["contact"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncidentContactStruct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contact = make_shared<vector<IncidentContactStruct>>(expect1);
      }
    }
    if (m.find("cycleNotifyCount") != m.end() && !m["cycleNotifyCount"].empty()) {
      cycleNotifyCount = make_shared<long>(boost::any_cast<long>(m["cycleNotifyCount"]));
    }
    if (m.find("cycleNotifyTime") != m.end() && !m["cycleNotifyTime"].empty()) {
      cycleNotifyTime = make_shared<long>(boost::any_cast<long>(m["cycleNotifyTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("effectTime") != m.end() && !m["effectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["effectTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("stageIndex") != m.end() && !m["stageIndex"].empty()) {
      stageIndex = make_shared<long>(boost::any_cast<long>(m["stageIndex"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
    if (m.find("waitToNextStageTime") != m.end() && !m["waitToNextStageTime"].empty()) {
      waitToNextStageTime = make_shared<long>(boost::any_cast<long>(m["waitToNextStageTime"]));
    }
  }


  virtual ~IncidentEscalationStageStruct() = default;
};
class IncidentEscalationStruct : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> incidentEscalationId{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<IncidentEscalationStageStruct>> stage{};
  shared_ptr<string> workspace{};

  IncidentEscalationStruct() {}

  explicit IncidentEscalationStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (incidentEscalationId) {
      res["incidentEscalationId"] = boost::any(*incidentEscalationId);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (stage) {
      vector<boost::any> temp1;
      for(auto item1:*stage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stage"] = boost::any(temp1);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("incidentEscalationId") != m.end() && !m["incidentEscalationId"].empty()) {
      incidentEscalationId = make_shared<string>(boost::any_cast<string>(m["incidentEscalationId"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["modifyTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("stage") != m.end() && !m["stage"].empty()) {
      if (typeid(vector<boost::any>) == m["stage"].type()) {
        vector<IncidentEscalationStageStruct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncidentEscalationStageStruct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stage = make_shared<vector<IncidentEscalationStageStruct>>(expect1);
      }
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~IncidentEscalationStruct() = default;
};
class IncidentEventStruct : public Darabonba::Model {
public:
  shared_ptr<long> autoRecoverTime{};
  shared_ptr<string> content{};
  shared_ptr<long> count{};
  shared_ptr<map<string, string>> dimension{};
  shared_ptr<map<string, string>> groupBy{};
  shared_ptr<string> incidentEventId{};
  shared_ptr<string> incidentId{};
  shared_ptr<long> lastTime{};
  shared_ptr<long> recoverTime{};
  shared_ptr<map<string, string>> resource{};
  shared_ptr<long> status{};
  shared_ptr<string> time{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  IncidentEventStruct() {}

  explicit IncidentEventStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRecoverTime) {
      res["autoRecoverTime"] = boost::any(*autoRecoverTime);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (dimension) {
      res["dimension"] = boost::any(*dimension);
    }
    if (groupBy) {
      res["groupBy"] = boost::any(*groupBy);
    }
    if (incidentEventId) {
      res["incidentEventId"] = boost::any(*incidentEventId);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (lastTime) {
      res["lastTime"] = boost::any(*lastTime);
    }
    if (recoverTime) {
      res["recoverTime"] = boost::any(*recoverTime);
    }
    if (resource) {
      res["resource"] = boost::any(*resource);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoRecoverTime") != m.end() && !m["autoRecoverTime"].empty()) {
      autoRecoverTime = make_shared<long>(boost::any_cast<long>(m["autoRecoverTime"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("dimension") != m.end() && !m["dimension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["dimension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("groupBy") != m.end() && !m["groupBy"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["groupBy"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      groupBy = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("incidentEventId") != m.end() && !m["incidentEventId"].empty()) {
      incidentEventId = make_shared<string>(boost::any_cast<string>(m["incidentEventId"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<string>(boost::any_cast<string>(m["incidentId"]));
    }
    if (m.find("lastTime") != m.end() && !m["lastTime"].empty()) {
      lastTime = make_shared<long>(boost::any_cast<long>(m["lastTime"]));
    }
    if (m.find("recoverTime") != m.end() && !m["recoverTime"].empty()) {
      recoverTime = make_shared<long>(boost::any_cast<long>(m["recoverTime"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["resource"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resource = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~IncidentEventStruct() = default;
};
class IncidentMemberStructAcknowledge : public Darabonba::Model {
public:
  shared_ptr<string> breakLevel{};
  shared_ptr<long> verifyTime{};

  IncidentMemberStructAcknowledge() {}

  explicit IncidentMemberStructAcknowledge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (breakLevel) {
      res["breakLevel"] = boost::any(*breakLevel);
    }
    if (verifyTime) {
      res["verifyTime"] = boost::any(*verifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("breakLevel") != m.end() && !m["breakLevel"].empty()) {
      breakLevel = make_shared<string>(boost::any_cast<string>(m["breakLevel"]));
    }
    if (m.find("verifyTime") != m.end() && !m["verifyTime"].empty()) {
      verifyTime = make_shared<long>(boost::any_cast<long>(m["verifyTime"]));
    }
  }


  virtual ~IncidentMemberStructAcknowledge() = default;
};
class IncidentMemberStructContacts : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> contactMask{};

  IncidentMemberStructContacts() {}

  explicit IncidentMemberStructContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (contactMask) {
      res["contactMask"] = boost::any(*contactMask);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("contactMask") != m.end() && !m["contactMask"].empty()) {
      contactMask = make_shared<string>(boost::any_cast<string>(m["contactMask"]));
    }
  }


  virtual ~IncidentMemberStructContacts() = default;
};
class IncidentMemberStructEscalation : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> incidentEscalationId{};
  shared_ptr<string> name{};
  shared_ptr<string> stageIndex{};
  shared_ptr<string> title{};

  IncidentMemberStructEscalation() {}

  explicit IncidentMemberStructEscalation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (incidentEscalationId) {
      res["incidentEscalationId"] = boost::any(*incidentEscalationId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (stageIndex) {
      res["stageIndex"] = boost::any(*stageIndex);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("incidentEscalationId") != m.end() && !m["incidentEscalationId"].empty()) {
      incidentEscalationId = make_shared<string>(boost::any_cast<string>(m["incidentEscalationId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("stageIndex") != m.end() && !m["stageIndex"].empty()) {
      stageIndex = make_shared<string>(boost::any_cast<string>(m["stageIndex"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~IncidentMemberStructEscalation() = default;
};
class IncidentMemberStructScheduleGroup : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> name{};

  IncidentMemberStructScheduleGroup() {}

  explicit IncidentMemberStructScheduleGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["contactId"] = boost::any(*contactId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contactId") != m.end() && !m["contactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["contactId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~IncidentMemberStructScheduleGroup() = default;
};
class IncidentMemberStruct : public Darabonba::Model {
public:
  shared_ptr<IncidentMemberStructAcknowledge> acknowledge{};
  shared_ptr<string> contactId{};
  shared_ptr<vector<IncidentMemberStructContacts>> contacts{};
  shared_ptr<IncidentMemberStructEscalation> escalation{};
  shared_ptr<string> incidentId{};
  shared_ptr<string> incidentMemberId{};
  shared_ptr<IncidentMemberStructScheduleGroup> scheduleGroup{};
  shared_ptr<long> time{};
  shared_ptr<long> userId{};

  IncidentMemberStruct() {}

  explicit IncidentMemberStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acknowledge) {
      res["acknowledge"] = acknowledge ? boost::any(acknowledge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contactId) {
      res["contactId"] = boost::any(*contactId);
    }
    if (contacts) {
      vector<boost::any> temp1;
      for(auto item1:*contacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["contacts"] = boost::any(temp1);
    }
    if (escalation) {
      res["escalation"] = escalation ? boost::any(escalation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (incidentMemberId) {
      res["incidentMemberId"] = boost::any(*incidentMemberId);
    }
    if (scheduleGroup) {
      res["scheduleGroup"] = scheduleGroup ? boost::any(scheduleGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acknowledge") != m.end() && !m["acknowledge"].empty()) {
      if (typeid(map<string, boost::any>) == m["acknowledge"].type()) {
        IncidentMemberStructAcknowledge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["acknowledge"]));
        acknowledge = make_shared<IncidentMemberStructAcknowledge>(model1);
      }
    }
    if (m.find("contactId") != m.end() && !m["contactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["contactId"]));
    }
    if (m.find("contacts") != m.end() && !m["contacts"].empty()) {
      if (typeid(vector<boost::any>) == m["contacts"].type()) {
        vector<IncidentMemberStructContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["contacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncidentMemberStructContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contacts = make_shared<vector<IncidentMemberStructContacts>>(expect1);
      }
    }
    if (m.find("escalation") != m.end() && !m["escalation"].empty()) {
      if (typeid(map<string, boost::any>) == m["escalation"].type()) {
        IncidentMemberStructEscalation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["escalation"]));
        escalation = make_shared<IncidentMemberStructEscalation>(model1);
      }
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<string>(boost::any_cast<string>(m["incidentId"]));
    }
    if (m.find("incidentMemberId") != m.end() && !m["incidentMemberId"].empty()) {
      incidentMemberId = make_shared<string>(boost::any_cast<string>(m["incidentMemberId"]));
    }
    if (m.find("scheduleGroup") != m.end() && !m["scheduleGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["scheduleGroup"].type()) {
        IncidentMemberStructScheduleGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scheduleGroup"]));
        scheduleGroup = make_shared<IncidentMemberStructScheduleGroup>(model1);
      }
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["time"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~IncidentMemberStruct() = default;
};
class IncidentNoteStructOperator : public Darabonba::Model {
public:
  shared_ptr<string> contact{};
  shared_ptr<string> contactId{};
  shared_ptr<string> name{};
  shared_ptr<long> userId{};

  IncidentNoteStructOperator() {}

  explicit IncidentNoteStructOperator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contact) {
      res["contact"] = boost::any(*contact);
    }
    if (contactId) {
      res["contactId"] = boost::any(*contactId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contact") != m.end() && !m["contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["contact"]));
    }
    if (m.find("contactId") != m.end() && !m["contactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["contactId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~IncidentNoteStructOperator() = default;
};
class IncidentNoteStruct : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> format{};
  shared_ptr<string> incidentId{};
  shared_ptr<string> noteId{};
  shared_ptr<IncidentNoteStructOperator> operator_{};
  shared_ptr<long> time{};
  shared_ptr<string> type{};

  IncidentNoteStruct() {}

  explicit IncidentNoteStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (format) {
      res["format"] = boost::any(*format);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (noteId) {
      res["noteId"] = boost::any(*noteId);
    }
    if (operator_) {
      res["operator"] = operator_ ? boost::any(operator_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<string>(boost::any_cast<string>(m["incidentId"]));
    }
    if (m.find("noteId") != m.end() && !m["noteId"].empty()) {
      noteId = make_shared<string>(boost::any_cast<string>(m["noteId"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      if (typeid(map<string, boost::any>) == m["operator"].type()) {
        IncidentNoteStructOperator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["operator"]));
        operator_ = make_shared<IncidentNoteStructOperator>(model1);
      }
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["time"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~IncidentNoteStruct() = default;
};
class IncidentPlanCorporationStruct : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> robotId{};

  IncidentPlanCorporationStruct() {}

  explicit IncidentPlanCorporationStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (robotId) {
      res["robotId"] = boost::any(*robotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("robotId") != m.end() && !m["robotId"].empty()) {
      robotId = make_shared<string>(boost::any_cast<string>(m["robotId"]));
    }
  }


  virtual ~IncidentPlanCorporationStruct() = default;
};
class IncidentPlanFieldPath : public Darabonba::Model {
public:
  shared_ptr<string> fieldAlias{};
  shared_ptr<vector<string>> fieldPath{};

  IncidentPlanFieldPath() {}

  explicit IncidentPlanFieldPath(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldAlias) {
      res["fieldAlias"] = boost::any(*fieldAlias);
    }
    if (fieldPath) {
      res["fieldPath"] = boost::any(*fieldPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldAlias") != m.end() && !m["fieldAlias"].empty()) {
      fieldAlias = make_shared<string>(boost::any_cast<string>(m["fieldAlias"]));
    }
    if (m.find("fieldPath") != m.end() && !m["fieldPath"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fieldPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fieldPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldPath = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~IncidentPlanFieldPath() = default;
};
class IncidentPlanStruct : public Darabonba::Model {
public:
  shared_ptr<long> autoRecoverSeconds{};
  shared_ptr<long> closeExpire{};
  shared_ptr<vector<IncidentPlanCorporationStruct>> corporation{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> escalationId{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<vector<IncidentPlanFieldPath>> groupBy{};
  shared_ptr<string> incidentPlanId{};
  shared_ptr<string> name{};
  shared_ptr<vector<IncidentPlanFieldPath>> resourceFiled{};
  shared_ptr<string> status{};
  shared_ptr<long> userId{};
  shared_ptr<string> workspace{};

  IncidentPlanStruct() {}

  explicit IncidentPlanStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRecoverSeconds) {
      res["autoRecoverSeconds"] = boost::any(*autoRecoverSeconds);
    }
    if (closeExpire) {
      res["closeExpire"] = boost::any(*closeExpire);
    }
    if (corporation) {
      vector<boost::any> temp1;
      for(auto item1:*corporation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["corporation"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (escalationId) {
      res["escalationId"] = boost::any(*escalationId);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (groupBy) {
      vector<boost::any> temp1;
      for(auto item1:*groupBy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["groupBy"] = boost::any(temp1);
    }
    if (incidentPlanId) {
      res["incidentPlanId"] = boost::any(*incidentPlanId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceFiled) {
      vector<boost::any> temp1;
      for(auto item1:*resourceFiled){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceFiled"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
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
    if (m.find("autoRecoverSeconds") != m.end() && !m["autoRecoverSeconds"].empty()) {
      autoRecoverSeconds = make_shared<long>(boost::any_cast<long>(m["autoRecoverSeconds"]));
    }
    if (m.find("closeExpire") != m.end() && !m["closeExpire"].empty()) {
      closeExpire = make_shared<long>(boost::any_cast<long>(m["closeExpire"]));
    }
    if (m.find("corporation") != m.end() && !m["corporation"].empty()) {
      if (typeid(vector<boost::any>) == m["corporation"].type()) {
        vector<IncidentPlanCorporationStruct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["corporation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncidentPlanCorporationStruct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        corporation = make_shared<vector<IncidentPlanCorporationStruct>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("escalationId") != m.end() && !m["escalationId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["escalationId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["escalationId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      escalationId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["gmtModified"]));
    }
    if (m.find("groupBy") != m.end() && !m["groupBy"].empty()) {
      if (typeid(vector<boost::any>) == m["groupBy"].type()) {
        vector<IncidentPlanFieldPath> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["groupBy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncidentPlanFieldPath model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupBy = make_shared<vector<IncidentPlanFieldPath>>(expect1);
      }
    }
    if (m.find("incidentPlanId") != m.end() && !m["incidentPlanId"].empty()) {
      incidentPlanId = make_shared<string>(boost::any_cast<string>(m["incidentPlanId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceFiled") != m.end() && !m["resourceFiled"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceFiled"].type()) {
        vector<IncidentPlanFieldPath> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceFiled"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncidentPlanFieldPath model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceFiled = make_shared<vector<IncidentPlanFieldPath>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~IncidentPlanStruct() = default;
};
class IncidentResourceDetail : public Darabonba::Model {
public:
  shared_ptr<string> extraId{};
  shared_ptr<map<string, boost::any>> resourceId{};
  shared_ptr<string> type{};

  IncidentResourceDetail() {}

  explicit IncidentResourceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraId) {
      res["extraId"] = boost::any(*extraId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extraId") != m.end() && !m["extraId"].empty()) {
      extraId = make_shared<string>(boost::any_cast<string>(m["extraId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resourceId"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceId = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~IncidentResourceDetail() = default;
};
class IncidentResourceStruct : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> incidentId{};
  shared_ptr<string> incidentResourceId{};
  shared_ptr<IncidentResourceDetail> resource{};
  shared_ptr<string> source{};
  shared_ptr<long> time{};
  shared_ptr<long> userId{};

  IncidentResourceStruct() {}

  explicit IncidentResourceStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (incidentResourceId) {
      res["incidentResourceId"] = boost::any(*incidentResourceId);
    }
    if (resource) {
      res["resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<string>(boost::any_cast<string>(m["incidentId"]));
    }
    if (m.find("incidentResourceId") != m.end() && !m["incidentResourceId"].empty()) {
      incidentResourceId = make_shared<string>(boost::any_cast<string>(m["incidentResourceId"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["resource"].type()) {
        IncidentResourceDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resource"]));
        resource = make_shared<IncidentResourceDetail>(model1);
      }
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["time"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~IncidentResourceStruct() = default;
};
class IncidentStruct : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<vector<IncidentEscalationStruct>> escalations{};
  shared_ptr<string> incidentId{};
  shared_ptr<IncidentPlanStruct> incidentPlan{};
  shared_ptr<IncidentResourceDetail> resource{};
  shared_ptr<string> severity{};
  shared_ptr<string> status{};
  shared_ptr<long> time{};
  shared_ptr<string> title{};
  shared_ptr<string> userId{};

  IncidentStruct() {}

  explicit IncidentStruct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (escalations) {
      vector<boost::any> temp1;
      for(auto item1:*escalations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["escalations"] = boost::any(temp1);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (incidentPlan) {
      res["incidentPlan"] = incidentPlan ? boost::any(incidentPlan->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resource) {
      res["resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (severity) {
      res["severity"] = boost::any(*severity);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("escalations") != m.end() && !m["escalations"].empty()) {
      if (typeid(vector<boost::any>) == m["escalations"].type()) {
        vector<IncidentEscalationStruct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["escalations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncidentEscalationStruct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        escalations = make_shared<vector<IncidentEscalationStruct>>(expect1);
      }
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<string>(boost::any_cast<string>(m["incidentId"]));
    }
    if (m.find("incidentPlan") != m.end() && !m["incidentPlan"].empty()) {
      if (typeid(map<string, boost::any>) == m["incidentPlan"].type()) {
        IncidentPlanStruct model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["incidentPlan"]));
        incidentPlan = make_shared<IncidentPlanStruct>(model1);
      }
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["resource"].type()) {
        IncidentResourceDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resource"]));
        resource = make_shared<IncidentResourceDetail>(model1);
      }
    }
    if (m.find("severity") != m.end() && !m["severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["severity"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["time"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~IncidentStruct() = default;
};
class IncidentTimeline : public Darabonba::Model {
public:
  shared_ptr<string> childType{};
  shared_ptr<string> content{};
  shared_ptr<string> incidentId{};
  shared_ptr<string> incidentTimelineId{};
  shared_ptr<long> time{};
  shared_ptr<string> timelineId{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  IncidentTimeline() {}

  explicit IncidentTimeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childType) {
      res["childType"] = boost::any(*childType);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (incidentId) {
      res["incidentId"] = boost::any(*incidentId);
    }
    if (incidentTimelineId) {
      res["incidentTimelineId"] = boost::any(*incidentTimelineId);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (timelineId) {
      res["timelineId"] = boost::any(*timelineId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childType") != m.end() && !m["childType"].empty()) {
      childType = make_shared<string>(boost::any_cast<string>(m["childType"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("incidentId") != m.end() && !m["incidentId"].empty()) {
      incidentId = make_shared<string>(boost::any_cast<string>(m["incidentId"]));
    }
    if (m.find("incidentTimelineId") != m.end() && !m["incidentTimelineId"].empty()) {
      incidentTimelineId = make_shared<string>(boost::any_cast<string>(m["incidentTimelineId"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["time"]));
    }
    if (m.find("timelineId") != m.end() && !m["timelineId"].empty()) {
      timelineId = make_shared<string>(boost::any_cast<string>(m["timelineId"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~IncidentTimeline() = default;
};
class MaintainWindowForModifyEffectTimeRange : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dayInWeek{};
  shared_ptr<long> endTimeInMinute{};
  shared_ptr<long> startTimeInMinute{};
  shared_ptr<string> timeZone{};

  MaintainWindowForModifyEffectTimeRange() {}

  explicit MaintainWindowForModifyEffectTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MaintainWindowForModifyEffectTimeRange() = default;
};
class MaintainWindowForModify : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<MaintainWindowForModifyEffectTimeRange> effectTimeRange{};
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
    if (effectTimeRange) {
      res["effectTimeRange"] = effectTimeRange ? boost::any(effectTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("effectTimeRange") != m.end() && !m["effectTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["effectTimeRange"].type()) {
        MaintainWindowForModifyEffectTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["effectTimeRange"]));
        effectTimeRange = make_shared<MaintainWindowForModifyEffectTimeRange>(model1);
      }
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
class MaintainWindowForViewEffectTimeRange : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dayInWeek{};
  shared_ptr<long> endTimeInMinute{};
  shared_ptr<long> startTimeInMinute{};
  shared_ptr<string> timeZone{};

  MaintainWindowForViewEffectTimeRange() {}

  explicit MaintainWindowForViewEffectTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MaintainWindowForViewEffectTimeRange() = default;
};
class MaintainWindowForView : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<MaintainWindowForViewEffectTimeRange> effectTimeRange{};
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
    if (effectTimeRange) {
      res["effectTimeRange"] = effectTimeRange ? boost::any(effectTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("effectTimeRange") != m.end() && !m["effectTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["effectTimeRange"].type()) {
        MaintainWindowForViewEffectTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["effectTimeRange"]));
        effectTimeRange = make_shared<MaintainWindowForViewEffectTimeRange>(model1);
      }
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
class MergeContact : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerify{};
  shared_ptr<map<string, boost::any>> extend{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<string> phone{};
  shared_ptr<string> phoneCode{};
  shared_ptr<bool> phoneVerify{};
  shared_ptr<string> source{};

  MergeContact() {}

  explicit MergeContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (emailVerify) {
      res["emailVerify"] = boost::any(*emailVerify);
    }
    if (extend) {
      res["extend"] = boost::any(*extend);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (lang) {
      res["lang"] = boost::any(*lang);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (phoneCode) {
      res["phoneCode"] = boost::any(*phoneCode);
    }
    if (phoneVerify) {
      res["phoneVerify"] = boost::any(*phoneVerify);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("emailVerify") != m.end() && !m["emailVerify"].empty()) {
      emailVerify = make_shared<bool>(boost::any_cast<bool>(m["emailVerify"]));
    }
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("lang") != m.end() && !m["lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["lang"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("phoneCode") != m.end() && !m["phoneCode"].empty()) {
      phoneCode = make_shared<string>(boost::any_cast<string>(m["phoneCode"]));
    }
    if (m.find("phoneVerify") != m.end() && !m["phoneVerify"].empty()) {
      phoneVerify = make_shared<bool>(boost::any_cast<bool>(m["phoneVerify"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
  }


  virtual ~MergeContact() = default;
};
class MergeContactGroup : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contacts{};
  shared_ptr<map<string, boost::any>> extend{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};

  MergeContactGroup() {}

  explicit MergeContactGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contacts) {
      res["contacts"] = boost::any(*contacts);
    }
    if (extend) {
      res["extend"] = boost::any(*extend);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (source) {
      res["source"] = boost::any(*source);
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
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
  }


  virtual ~MergeContactGroup() = default;
};
class MergeRobotExtend : public Darabonba::Model {
public:
  shared_ptr<string> cardTemplate{};
  shared_ptr<bool> dailyNoc{};
  shared_ptr<string> dailyNocTime{};
  shared_ptr<string> dingSignKey{};
  shared_ptr<bool> enableOutgoing{};
  shared_ptr<string> token{};

  MergeRobotExtend() {}

  explicit MergeRobotExtend(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardTemplate) {
      res["cardTemplate"] = boost::any(*cardTemplate);
    }
    if (dailyNoc) {
      res["dailyNoc"] = boost::any(*dailyNoc);
    }
    if (dailyNocTime) {
      res["dailyNocTime"] = boost::any(*dailyNocTime);
    }
    if (dingSignKey) {
      res["dingSignKey"] = boost::any(*dingSignKey);
    }
    if (enableOutgoing) {
      res["enableOutgoing"] = boost::any(*enableOutgoing);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cardTemplate") != m.end() && !m["cardTemplate"].empty()) {
      cardTemplate = make_shared<string>(boost::any_cast<string>(m["cardTemplate"]));
    }
    if (m.find("dailyNoc") != m.end() && !m["dailyNoc"].empty()) {
      dailyNoc = make_shared<bool>(boost::any_cast<bool>(m["dailyNoc"]));
    }
    if (m.find("dailyNocTime") != m.end() && !m["dailyNocTime"].empty()) {
      dailyNocTime = make_shared<string>(boost::any_cast<string>(m["dailyNocTime"]));
    }
    if (m.find("dingSignKey") != m.end() && !m["dingSignKey"].empty()) {
      dingSignKey = make_shared<string>(boost::any_cast<string>(m["dingSignKey"]));
    }
    if (m.find("enableOutgoing") != m.end() && !m["enableOutgoing"].empty()) {
      enableOutgoing = make_shared<bool>(boost::any_cast<bool>(m["enableOutgoing"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~MergeRobotExtend() = default;
};
class MergeRobot : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<MergeRobotExtend> extend{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> identifier{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> type{};
  shared_ptr<string> webhook{};

  MergeRobot() {}

  explicit MergeRobot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (extend) {
      res["extend"] = extend ? boost::any(extend->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (lang) {
      res["lang"] = boost::any(*lang);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (webhook) {
      res["webhook"] = boost::any(*webhook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      if (typeid(map<string, boost::any>) == m["extend"].type()) {
        MergeRobotExtend model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extend"]));
        extend = make_shared<MergeRobotExtend>(model1);
      }
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("lang") != m.end() && !m["lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["lang"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("webhook") != m.end() && !m["webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["webhook"]));
    }
  }


  virtual ~MergeRobot() = default;
};
class MergeWebhook : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> extend{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<map<string, boost::any>> gmtModified{};
  shared_ptr<string> headers{};
  shared_ptr<string> identifier{};
  shared_ptr<string> lang{};
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> type{};
  shared_ptr<string> webhook{};

  MergeWebhook() {}

  explicit MergeWebhook(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (extend) {
      res["extend"] = boost::any(*extend);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (lang) {
      res["lang"] = boost::any(*lang);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (webhook) {
      res["webhook"] = boost::any(*webhook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["extend"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["gmtModified"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      gmtModified = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      headers = make_shared<string>(boost::any_cast<string>(m["headers"]));
    }
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("lang") != m.end() && !m["lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["lang"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("webhook") != m.end() && !m["webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["webhook"]));
    }
  }


  virtual ~MergeWebhook() = default;
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
class PrometheusManagedInstance : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> prometheusInstanceId{};
  shared_ptr<string> prometheusInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> workspace{};

  PrometheusManagedInstance() {}

  explicit PrometheusManagedInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (prometheusInstanceId) {
      res["prometheusInstanceId"] = boost::any(*prometheusInstanceId);
    }
    if (prometheusInstanceName) {
      res["prometheusInstanceName"] = boost::any(*prometheusInstanceName);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (status) {
      res["status"] = boost::any(*status);
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
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("prometheusInstanceId") != m.end() && !m["prometheusInstanceId"].empty()) {
      prometheusInstanceId = make_shared<string>(boost::any_cast<string>(m["prometheusInstanceId"]));
    }
    if (m.find("prometheusInstanceName") != m.end() && !m["prometheusInstanceName"].empty()) {
      prometheusInstanceName = make_shared<string>(boost::any_cast<string>(m["prometheusInstanceName"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~PrometheusManagedInstance() = default;
};
class RumDnsResponse : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> message{};
  shared_ptr<bool> result{};

  RumDnsResponse() {}

  explicit RumDnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~RumDnsResponse() = default;
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
class CreateEntityStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceName{};

  CreateEntityStoreResponseBody() {}

  explicit CreateEntityStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
  }


  virtual ~CreateEntityStoreResponseBody() = default;
};
class CreateEntityStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEntityStoreResponseBody> body{};

  CreateEntityStoreResponse() {}

  explicit CreateEntityStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEntityStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEntityStoreResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEntityStoreResponse() = default;
};
class CreatePrometheusInstanceRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePrometheusInstanceRequestTags() {}

  explicit CreatePrometheusInstanceRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreatePrometheusInstanceRequestTags() = default;
};
class CreatePrometheusInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> archiveDuration{};
  shared_ptr<string> authFreeReadPolicy{};
  shared_ptr<string> authFreeWritePolicy{};
  shared_ptr<bool> enableAuthFreeRead{};
  shared_ptr<bool> enableAuthFreeWrite{};
  shared_ptr<bool> enableAuthToken{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> prometheusInstanceName{};
  shared_ptr<string> status{};
  shared_ptr<long> storageDuration{};
  shared_ptr<vector<CreatePrometheusInstanceRequestTags>> tags{};
  shared_ptr<string> workspace{};

  CreatePrometheusInstanceRequest() {}

  explicit CreatePrometheusInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveDuration) {
      res["archiveDuration"] = boost::any(*archiveDuration);
    }
    if (authFreeReadPolicy) {
      res["authFreeReadPolicy"] = boost::any(*authFreeReadPolicy);
    }
    if (authFreeWritePolicy) {
      res["authFreeWritePolicy"] = boost::any(*authFreeWritePolicy);
    }
    if (enableAuthFreeRead) {
      res["enableAuthFreeRead"] = boost::any(*enableAuthFreeRead);
    }
    if (enableAuthFreeWrite) {
      res["enableAuthFreeWrite"] = boost::any(*enableAuthFreeWrite);
    }
    if (enableAuthToken) {
      res["enableAuthToken"] = boost::any(*enableAuthToken);
    }
    if (paymentType) {
      res["paymentType"] = boost::any(*paymentType);
    }
    if (prometheusInstanceName) {
      res["prometheusInstanceName"] = boost::any(*prometheusInstanceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (storageDuration) {
      res["storageDuration"] = boost::any(*storageDuration);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("archiveDuration") != m.end() && !m["archiveDuration"].empty()) {
      archiveDuration = make_shared<long>(boost::any_cast<long>(m["archiveDuration"]));
    }
    if (m.find("authFreeReadPolicy") != m.end() && !m["authFreeReadPolicy"].empty()) {
      authFreeReadPolicy = make_shared<string>(boost::any_cast<string>(m["authFreeReadPolicy"]));
    }
    if (m.find("authFreeWritePolicy") != m.end() && !m["authFreeWritePolicy"].empty()) {
      authFreeWritePolicy = make_shared<string>(boost::any_cast<string>(m["authFreeWritePolicy"]));
    }
    if (m.find("enableAuthFreeRead") != m.end() && !m["enableAuthFreeRead"].empty()) {
      enableAuthFreeRead = make_shared<bool>(boost::any_cast<bool>(m["enableAuthFreeRead"]));
    }
    if (m.find("enableAuthFreeWrite") != m.end() && !m["enableAuthFreeWrite"].empty()) {
      enableAuthFreeWrite = make_shared<bool>(boost::any_cast<bool>(m["enableAuthFreeWrite"]));
    }
    if (m.find("enableAuthToken") != m.end() && !m["enableAuthToken"].empty()) {
      enableAuthToken = make_shared<bool>(boost::any_cast<bool>(m["enableAuthToken"]));
    }
    if (m.find("paymentType") != m.end() && !m["paymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["paymentType"]));
    }
    if (m.find("prometheusInstanceName") != m.end() && !m["prometheusInstanceName"].empty()) {
      prometheusInstanceName = make_shared<string>(boost::any_cast<string>(m["prometheusInstanceName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("storageDuration") != m.end() && !m["storageDuration"].empty()) {
      storageDuration = make_shared<long>(boost::any_cast<long>(m["storageDuration"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<CreatePrometheusInstanceRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrometheusInstanceRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreatePrometheusInstanceRequestTags>>(expect1);
      }
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreatePrometheusInstanceRequest() = default;
};
class CreatePrometheusInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> prometheusInstanceId{};
  shared_ptr<string> requestId{};

  CreatePrometheusInstanceResponseBody() {}

  explicit CreatePrometheusInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prometheusInstanceId) {
      res["prometheusInstanceId"] = boost::any(*prometheusInstanceId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("prometheusInstanceId") != m.end() && !m["prometheusInstanceId"].empty()) {
      prometheusInstanceId = make_shared<string>(boost::any_cast<string>(m["prometheusInstanceId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreatePrometheusInstanceResponseBody() = default;
};
class CreatePrometheusInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePrometheusInstanceResponseBody> body{};

  CreatePrometheusInstanceResponse() {}

  explicit CreatePrometheusInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrometheusInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePrometheusInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePrometheusInstanceResponse() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributes{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> pid{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceType{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["attributes"] = boost::any(*attributes);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (pid) {
      res["pid"] = boost::any(*pid);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["serviceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attributes") != m.end() && !m["attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["attributes"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("pid") != m.end() && !m["pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["pid"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["serviceStatus"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> pid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["pid"] = boost::any(*pid);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pid") != m.end() && !m["pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["pid"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class CreateTicketRequest : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenExpirationTime{};
  shared_ptr<long> expirationTime{};

  CreateTicketRequest() {}

  explicit CreateTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenExpirationTime) {
      res["accessTokenExpirationTime"] = boost::any(*accessTokenExpirationTime);
    }
    if (expirationTime) {
      res["expirationTime"] = boost::any(*expirationTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessTokenExpirationTime") != m.end() && !m["accessTokenExpirationTime"].empty()) {
      accessTokenExpirationTime = make_shared<long>(boost::any_cast<long>(m["accessTokenExpirationTime"]));
    }
    if (m.find("expirationTime") != m.end() && !m["expirationTime"].empty()) {
      expirationTime = make_shared<long>(boost::any_cast<long>(m["expirationTime"]));
    }
  }


  virtual ~CreateTicketRequest() = default;
};
class CreateTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ticket{};

  CreateTicketResponseBody() {}

  explicit CreateTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticket) {
      res["ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ticket") != m.end() && !m["ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["ticket"]));
    }
  }


  virtual ~CreateTicketResponseBody() = default;
};
class CreateTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTicketResponseBody> body{};

  CreateTicketResponse() {}

  explicit CreateTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTicketResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTicketResponse() = default;
};
class CreateUmodelRequestCommonSchemaRef : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<vector<string>> items{};
  shared_ptr<string> version{};

  CreateUmodelRequestCommonSchemaRef() {}

  explicit CreateUmodelRequestCommonSchemaRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (items) {
      res["items"] = boost::any(*items);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["items"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      items = make_shared<vector<string>>(toVec1);
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~CreateUmodelRequestCommonSchemaRef() = default;
};
class CreateUmodelRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateUmodelRequestCommonSchemaRef>> commonSchemaRef{};
  shared_ptr<string> description{};

  CreateUmodelRequest() {}

  explicit CreateUmodelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonSchemaRef) {
      vector<boost::any> temp1;
      for(auto item1:*commonSchemaRef){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["commonSchemaRef"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonSchemaRef") != m.end() && !m["commonSchemaRef"].empty()) {
      if (typeid(vector<boost::any>) == m["commonSchemaRef"].type()) {
        vector<CreateUmodelRequestCommonSchemaRef> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["commonSchemaRef"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUmodelRequestCommonSchemaRef model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commonSchemaRef = make_shared<vector<CreateUmodelRequestCommonSchemaRef>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~CreateUmodelRequest() = default;
};
class CreateUmodelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  CreateUmodelResponseBody() {}

  explicit CreateUmodelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~CreateUmodelResponseBody() = default;
};
class CreateUmodelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUmodelResponseBody> body{};

  CreateUmodelResponse() {}

  explicit CreateUmodelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUmodelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUmodelResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUmodelResponse() = default;
};
class DeleteEntityStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEntityStoreResponseBody() {}

  explicit DeleteEntityStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteEntityStoreResponseBody() = default;
};
class DeleteEntityStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEntityStoreResponseBody> body{};

  DeleteEntityStoreResponse() {}

  explicit DeleteEntityStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEntityStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEntityStoreResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEntityStoreResponse() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class DeleteUmodelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUmodelResponseBody() {}

  explicit DeleteUmodelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteUmodelResponseBody() = default;
};
class DeleteUmodelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUmodelResponseBody> body{};

  DeleteUmodelResponse() {}

  explicit DeleteUmodelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUmodelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUmodelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUmodelResponse() = default;
};
class DeleteUmodelDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};

  DeleteUmodelDataRequest() {}

  explicit DeleteUmodelDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~DeleteUmodelDataRequest() = default;
};
class DeleteUmodelDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUmodelDataResponseBody() {}

  explicit DeleteUmodelDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteUmodelDataResponseBody() = default;
};
class DeleteUmodelDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUmodelDataResponseBody> body{};

  DeleteUmodelDataResponse() {}

  explicit DeleteUmodelDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUmodelDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUmodelDataResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUmodelDataResponse() = default;
};
class DeleteWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWorkspaceResponseBody() {}

  explicit DeleteWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteWorkspaceResponseBody() = default;
};
class DeleteWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkspaceResponseBody> body{};

  DeleteWorkspaceResponse() {}

  explicit DeleteWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceResponse() = default;
};
class GetEntityStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceName{};

  GetEntityStoreResponseBody() {}

  explicit GetEntityStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
  }


  virtual ~GetEntityStoreResponseBody() = default;
};
class GetEntityStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEntityStoreResponseBody> body{};

  GetEntityStoreResponse() {}

  explicit GetEntityStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEntityStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEntityStoreResponseBody>(model1);
      }
    }
  }


  virtual ~GetEntityStoreResponse() = default;
};
class GetEntityStoreDataHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> acceptEncoding{};

  GetEntityStoreDataHeaders() {}

  explicit GetEntityStoreDataHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (acceptEncoding) {
      res["acceptEncoding"] = boost::any(*acceptEncoding);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("acceptEncoding") != m.end() && !m["acceptEncoding"].empty()) {
      acceptEncoding = make_shared<string>(boost::any_cast<string>(m["acceptEncoding"]));
    }
  }


  virtual ~GetEntityStoreDataHeaders() = default;
};
class GetEntityStoreDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> query{};
  shared_ptr<long> to{};

  GetEntityStoreDataRequest() {}

  explicit GetEntityStoreDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetEntityStoreDataRequest() = default;
};
class GetEntityStoreDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<vector<string>>> data{};
  shared_ptr<vector<string>> header{};
  shared_ptr<string> requestId{};

  GetEntityStoreDataResponseBody() {}

  explicit GetEntityStoreDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (header) {
      res["header"] = boost::any(*header);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<vector<string>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          vector<string> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<string>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      data = make_shared<vector<vector<string>>>(toVec1);
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["header"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["header"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      header = make_shared<vector<string>>(toVec1);
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetEntityStoreDataResponseBody() = default;
};
class GetEntityStoreDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEntityStoreDataResponseBody> body{};

  GetEntityStoreDataResponse() {}

  explicit GetEntityStoreDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEntityStoreDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEntityStoreDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetEntityStoreDataResponse() = default;
};
class GetServiceResponseBodyService : public Darabonba::Model {
public:
  shared_ptr<string> attributes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> pid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> workspace{};

  GetServiceResponseBodyService() {}

  explicit GetServiceResponseBodyService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["attributes"] = boost::any(*attributes);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (pid) {
      res["pid"] = boost::any(*pid);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["serviceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attributes") != m.end() && !m["attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["attributes"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("pid") != m.end() && !m["pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["pid"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["serviceStatus"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetServiceResponseBodyService() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetServiceResponseBodyService> service{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (service) {
      res["service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      if (typeid(map<string, boost::any>) == m["service"].type()) {
        GetServiceResponseBodyService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["service"]));
        service = make_shared<GetServiceResponseBodyService>(model1);
      }
    }
  }


  virtual ~GetServiceResponseBody() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceResponseBody> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
};
class GetServiceObservabilityResponseBodyEntryPointInfo : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> privateDomain{};
  shared_ptr<string> project{};
  shared_ptr<string> publicDomain{};

  GetServiceObservabilityResponseBodyEntryPointInfo() {}

  explicit GetServiceObservabilityResponseBodyEntryPointInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (privateDomain) {
      res["privateDomain"] = boost::any(*privateDomain);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (publicDomain) {
      res["publicDomain"] = boost::any(*publicDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("privateDomain") != m.end() && !m["privateDomain"].empty()) {
      privateDomain = make_shared<string>(boost::any_cast<string>(m["privateDomain"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("publicDomain") != m.end() && !m["publicDomain"].empty()) {
      publicDomain = make_shared<string>(boost::any_cast<string>(m["publicDomain"]));
    }
  }


  virtual ~GetServiceObservabilityResponseBodyEntryPointInfo() = default;
};
class GetServiceObservabilityResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetServiceObservabilityResponseBodyEntryPointInfo> entryPointInfo{};
  shared_ptr<string> feeType{};
  shared_ptr<map<string, string>> quotas{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, string>> settings{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> workspace{};

  GetServiceObservabilityResponseBody() {}

  explicit GetServiceObservabilityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entryPointInfo) {
      res["entryPointInfo"] = entryPointInfo ? boost::any(entryPointInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (feeType) {
      res["feeType"] = boost::any(*feeType);
    }
    if (quotas) {
      res["quotas"] = boost::any(*quotas);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (settings) {
      res["settings"] = boost::any(*settings);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entryPointInfo") != m.end() && !m["entryPointInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["entryPointInfo"].type()) {
        GetServiceObservabilityResponseBodyEntryPointInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["entryPointInfo"]));
        entryPointInfo = make_shared<GetServiceObservabilityResponseBodyEntryPointInfo>(model1);
      }
    }
    if (m.find("feeType") != m.end() && !m["feeType"].empty()) {
      feeType = make_shared<string>(boost::any_cast<string>(m["feeType"]));
    }
    if (m.find("quotas") != m.end() && !m["quotas"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["quotas"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      quotas = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("settings") != m.end() && !m["settings"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["settings"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settings = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetServiceObservabilityResponseBody() = default;
};
class GetServiceObservabilityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceObservabilityResponseBody> body{};

  GetServiceObservabilityResponse() {}

  explicit GetServiceObservabilityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceObservabilityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceObservabilityResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceObservabilityResponse() = default;
};
class GetUmodelResponseBodyCommonSchemaRef : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<vector<string>> items{};
  shared_ptr<string> version{};

  GetUmodelResponseBodyCommonSchemaRef() {}

  explicit GetUmodelResponseBodyCommonSchemaRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (items) {
      res["items"] = boost::any(*items);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["items"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      items = make_shared<vector<string>>(toVec1);
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetUmodelResponseBodyCommonSchemaRef() = default;
};
class GetUmodelResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetUmodelResponseBodyCommonSchemaRef>> commonSchemaRef{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  GetUmodelResponseBody() {}

  explicit GetUmodelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonSchemaRef) {
      vector<boost::any> temp1;
      for(auto item1:*commonSchemaRef){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["commonSchemaRef"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonSchemaRef") != m.end() && !m["commonSchemaRef"].empty()) {
      if (typeid(vector<boost::any>) == m["commonSchemaRef"].type()) {
        vector<GetUmodelResponseBodyCommonSchemaRef> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["commonSchemaRef"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUmodelResponseBodyCommonSchemaRef model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commonSchemaRef = make_shared<vector<GetUmodelResponseBodyCommonSchemaRef>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~GetUmodelResponseBody() = default;
};
class GetUmodelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUmodelResponseBody> body{};

  GetUmodelResponse() {}

  explicit GetUmodelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUmodelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUmodelResponseBody>(model1);
      }
    }
  }


  virtual ~GetUmodelResponse() = default;
};
class GetUmodelDataRequest : public Darabonba::Model {
public:
  shared_ptr<boost::any> content{};
  shared_ptr<string> method{};

  GetUmodelDataRequest() {}

  explicit GetUmodelDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["content"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
  }


  virtual ~GetUmodelDataRequest() = default;
};
class GetUmodelDataResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> type{};

  GetUmodelDataResponseBodyErrors() {}

  explicit GetUmodelDataResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetUmodelDataResponseBodyErrors() = default;
};
class GetUmodelDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetUmodelDataResponseBodyErrors>> errors{};
  shared_ptr<vector<boost::any>> links{};
  shared_ptr<vector<boost::any>> nodes{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalLinksCount{};
  shared_ptr<long> totalNodesCount{};

  GetUmodelDataResponseBody() {}

  explicit GetUmodelDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["errors"] = boost::any(temp1);
    }
    if (links) {
      res["links"] = boost::any(*links);
    }
    if (nodes) {
      res["nodes"] = boost::any(*nodes);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalLinksCount) {
      res["totalLinksCount"] = boost::any(*totalLinksCount);
    }
    if (totalNodesCount) {
      res["totalNodesCount"] = boost::any(*totalNodesCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errors") != m.end() && !m["errors"].empty()) {
      if (typeid(vector<boost::any>) == m["errors"].type()) {
        vector<GetUmodelDataResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUmodelDataResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetUmodelDataResponseBodyErrors>>(expect1);
      }
    }
    if (m.find("links") != m.end() && !m["links"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["links"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["links"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      links = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["nodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      nodes = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalLinksCount") != m.end() && !m["totalLinksCount"].empty()) {
      totalLinksCount = make_shared<long>(boost::any_cast<long>(m["totalLinksCount"]));
    }
    if (m.find("totalNodesCount") != m.end() && !m["totalNodesCount"].empty()) {
      totalNodesCount = make_shared<long>(boost::any_cast<long>(m["totalNodesCount"]));
    }
  }


  virtual ~GetUmodelDataResponseBody() = default;
};
class GetUmodelDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUmodelDataResponseBody> body{};

  GetUmodelDataResponse() {}

  explicit GetUmodelDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUmodelDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUmodelDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetUmodelDataResponse() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> slsProject{};
  shared_ptr<string> workspaceName{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (slsProject) {
      res["slsProject"] = boost::any(*slsProject);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
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
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["lastModifyTime"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("slsProject") != m.end() && !m["slsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["slsProject"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
  }


  virtual ~GetWorkspaceResponseBody() = default;
};
class GetWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkspaceResponseBody> body{};

  GetWorkspaceResponse() {}

  explicit GetWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponse() = default;
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
class ListAlertActionsResponseBodyAlertActionsEbParam : public Darabonba::Model {
public:
  shared_ptr<string> ebSource{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subject{};

  ListAlertActionsResponseBodyAlertActionsEbParam() {}

  explicit ListAlertActionsResponseBodyAlertActionsEbParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ebSource) {
      res["ebSource"] = boost::any(*ebSource);
    }
    if (eventBusName) {
      res["eventBusName"] = boost::any(*eventBusName);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ebSource") != m.end() && !m["ebSource"].empty()) {
      ebSource = make_shared<string>(boost::any_cast<string>(m["ebSource"]));
    }
    if (m.find("eventBusName") != m.end() && !m["eventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["eventBusName"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsEbParam() = default;
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
class ListAlertActionsResponseBodyAlertActionsFc3Param : public Darabonba::Model {
public:
  shared_ptr<string> function{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> regionId{};

  ListAlertActionsResponseBodyAlertActionsFc3Param() {}

  explicit ListAlertActionsResponseBodyAlertActionsFc3Param(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      res["function"] = boost::any(*function);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("function") != m.end() && !m["function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["function"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListAlertActionsResponseBodyAlertActionsFc3Param() = default;
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
  shared_ptr<ListAlertActionsResponseBodyAlertActionsEbParam> ebParam{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsEssParam> essParam{};
  shared_ptr<ListAlertActionsResponseBodyAlertActionsFc3Param> fc3Param{};
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
    if (ebParam) {
      res["ebParam"] = ebParam ? boost::any(ebParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (essParam) {
      res["essParam"] = essParam ? boost::any(essParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fc3Param) {
      res["fc3Param"] = fc3Param ? boost::any(fc3Param->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ebParam") != m.end() && !m["ebParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["ebParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsEbParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ebParam"]));
        ebParam = make_shared<ListAlertActionsResponseBodyAlertActionsEbParam>(model1);
      }
    }
    if (m.find("essParam") != m.end() && !m["essParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["essParam"].type()) {
        ListAlertActionsResponseBodyAlertActionsEssParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["essParam"]));
        essParam = make_shared<ListAlertActionsResponseBodyAlertActionsEssParam>(model1);
      }
    }
    if (m.find("fc3Param") != m.end() && !m["fc3Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["fc3Param"].type()) {
        ListAlertActionsResponseBodyAlertActionsFc3Param model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fc3Param"]));
        fc3Param = make_shared<ListAlertActionsResponseBodyAlertActionsFc3Param>(model1);
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
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> serviceType{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> attributes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> pid{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> workspace{};

  ListServicesResponseBodyServices() {}

  explicit ListServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["attributes"] = boost::any(*attributes);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (pid) {
      res["pid"] = boost::any(*pid);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["serviceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attributes") != m.end() && !m["attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["attributes"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("pid") != m.end() && !m["pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["pid"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["serviceStatus"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~ListServicesResponseBodyServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServicesResponseBodyServices>> services{};
  shared_ptr<long> totalCount{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["services"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<ListServicesResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListServicesResponseBodyServices>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> workspaceName{};
  shared_ptr<vector<string>> workspaceNameList{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
    }
    if (workspaceNameList) {
      res["workspaceNameList"] = boost::any(*workspaceNameList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
    if (m.find("workspaceNameList") != m.end() && !m["workspaceNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["workspaceNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["workspaceNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workspaceNameList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> region{};
  shared_ptr<string> workspaceName{};
  shared_ptr<string> workspaceNameListShrink{};

  ListWorkspacesShrinkRequest() {}

  explicit ListWorkspacesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
    }
    if (workspaceNameListShrink) {
      res["workspaceNameList"] = boost::any(*workspaceNameListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
    if (m.find("workspaceNameList") != m.end() && !m["workspaceNameList"].empty()) {
      workspaceNameListShrink = make_shared<string>(boost::any_cast<string>(m["workspaceNameList"]));
    }
  }


  virtual ~ListWorkspacesShrinkRequest() = default;
};
class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> slsProject{};
  shared_ptr<string> workspaceName{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (slsProject) {
      res["slsProject"] = boost::any(*slsProject);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
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
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["lastModifyTime"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("slsProject") != m.end() && !m["slsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["slsProject"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
    if (m.find("workspaces") != m.end() && !m["workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["workspaces"].type()) {
        vector<ListWorkspacesResponseBodyWorkspaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspacesResponseBodyWorkspaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<ListWorkspacesResponseBodyWorkspaces>>(expect1);
      }
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkspacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspacesResponse() = default;
};
class PutWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> slsProject{};

  PutWorkspaceRequest() {}

  explicit PutWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (slsProject) {
      res["slsProject"] = boost::any(*slsProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("slsProject") != m.end() && !m["slsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["slsProject"]));
    }
  }


  virtual ~PutWorkspaceRequest() = default;
};
class PutWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceName{};

  PutWorkspaceResponseBody() {}

  explicit PutWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
  }


  virtual ~PutWorkspaceResponseBody() = default;
};
class PutWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutWorkspaceResponseBody> body{};

  PutWorkspaceResponse() {}

  explicit PutWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~PutWorkspaceResponse() = default;
};
class UpdateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributes{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> serviceStatus{};

  UpdateServiceRequest() {}

  explicit UpdateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["attributes"] = boost::any(*attributes);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (serviceStatus) {
      res["serviceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attributes") != m.end() && !m["attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["attributes"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["serviceStatus"]));
    }
  }


  virtual ~UpdateServiceRequest() = default;
};
class UpdateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};

  UpdateServiceResponseBody() {}

  explicit UpdateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
  }


  virtual ~UpdateServiceResponseBody() = default;
};
class UpdateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceResponseBody> body{};

  UpdateServiceResponse() {}

  explicit UpdateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponse() = default;
};
class UpdateUmodelRequestCommonSchemaRef : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<vector<string>> items{};
  shared_ptr<string> version{};

  UpdateUmodelRequestCommonSchemaRef() {}

  explicit UpdateUmodelRequestCommonSchemaRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (items) {
      res["items"] = boost::any(*items);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["items"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      items = make_shared<vector<string>>(toVec1);
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~UpdateUmodelRequestCommonSchemaRef() = default;
};
class UpdateUmodelRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateUmodelRequestCommonSchemaRef>> commonSchemaRef{};
  shared_ptr<string> description{};

  UpdateUmodelRequest() {}

  explicit UpdateUmodelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonSchemaRef) {
      vector<boost::any> temp1;
      for(auto item1:*commonSchemaRef){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["commonSchemaRef"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonSchemaRef") != m.end() && !m["commonSchemaRef"].empty()) {
      if (typeid(vector<boost::any>) == m["commonSchemaRef"].type()) {
        vector<UpdateUmodelRequestCommonSchemaRef> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["commonSchemaRef"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUmodelRequestCommonSchemaRef model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commonSchemaRef = make_shared<vector<UpdateUmodelRequestCommonSchemaRef>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~UpdateUmodelRequest() = default;
};
class UpdateUmodelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  UpdateUmodelResponseBody() {}

  explicit UpdateUmodelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["workspace"]));
    }
  }


  virtual ~UpdateUmodelResponseBody() = default;
};
class UpdateUmodelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUmodelResponseBody> body{};

  UpdateUmodelResponse() {}

  explicit UpdateUmodelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUmodelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUmodelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUmodelResponse() = default;
};
class UpsertUmodelDataRequest : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> elements{};
  shared_ptr<string> method{};

  UpsertUmodelDataRequest() {}

  explicit UpsertUmodelDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      res["elements"] = boost::any(*elements);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("elements") != m.end() && !m["elements"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["elements"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["elements"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      elements = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
  }


  virtual ~UpsertUmodelDataRequest() = default;
};
class UpsertUmodelDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpsertUmodelDataResponseBody() {}

  explicit UpsertUmodelDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpsertUmodelDataResponseBody() = default;
};
class UpsertUmodelDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpsertUmodelDataResponseBody> body{};

  UpsertUmodelDataResponse() {}

  explicit UpsertUmodelDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpsertUmodelDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpsertUmodelDataResponseBody>(model1);
      }
    }
  }


  virtual ~UpsertUmodelDataResponse() = default;
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
  CreateEntityStoreResponse createEntityStoreWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEntityStoreResponse createEntityStore(shared_ptr<string> workspaceName);
  CreatePrometheusInstanceResponse createPrometheusInstanceWithOptions(shared_ptr<CreatePrometheusInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrometheusInstanceResponse createPrometheusInstance(shared_ptr<CreatePrometheusInstanceRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<string> workspace,
                                                 shared_ptr<CreateServiceRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<string> workspace, shared_ptr<CreateServiceRequest> request);
  CreateTicketResponse createTicketWithOptions(shared_ptr<CreateTicketRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTicketResponse createTicket(shared_ptr<CreateTicketRequest> request);
  CreateUmodelResponse createUmodelWithOptions(shared_ptr<string> workspace,
                                               shared_ptr<CreateUmodelRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUmodelResponse createUmodel(shared_ptr<string> workspace, shared_ptr<CreateUmodelRequest> request);
  DeleteEntityStoreResponse deleteEntityStoreWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEntityStoreResponse deleteEntityStore(shared_ptr<string> workspaceName);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<string> workspace,
                                                 shared_ptr<string> serviceId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<string> workspace, shared_ptr<string> serviceId);
  DeleteUmodelResponse deleteUmodelWithOptions(shared_ptr<string> workspace, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUmodelResponse deleteUmodel(shared_ptr<string> workspace);
  DeleteUmodelDataResponse deleteUmodelDataWithOptions(shared_ptr<string> workspace,
                                                       shared_ptr<DeleteUmodelDataRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUmodelDataResponse deleteUmodelData(shared_ptr<string> workspace, shared_ptr<DeleteUmodelDataRequest> request);
  DeleteWorkspaceResponse deleteWorkspaceWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceResponse deleteWorkspace(shared_ptr<string> workspaceName);
  GetEntityStoreResponse getEntityStoreWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEntityStoreResponse getEntityStore(shared_ptr<string> workspaceName);
  GetEntityStoreDataResponse getEntityStoreDataWithOptions(shared_ptr<string> workspace,
                                                           shared_ptr<GetEntityStoreDataRequest> request,
                                                           shared_ptr<GetEntityStoreDataHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEntityStoreDataResponse getEntityStoreData(shared_ptr<string> workspace, shared_ptr<GetEntityStoreDataRequest> request);
  GetServiceResponse getServiceWithOptions(shared_ptr<string> workspace,
                                           shared_ptr<string> serviceId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<string> workspace, shared_ptr<string> serviceId);
  GetServiceObservabilityResponse getServiceObservabilityWithOptions(shared_ptr<string> workspace,
                                                                     shared_ptr<string> type,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceObservabilityResponse getServiceObservability(shared_ptr<string> workspace, shared_ptr<string> type);
  GetUmodelResponse getUmodelWithOptions(shared_ptr<string> workspace, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUmodelResponse getUmodel(shared_ptr<string> workspace);
  GetUmodelDataResponse getUmodelDataWithOptions(shared_ptr<string> workspace,
                                                 shared_ptr<GetUmodelDataRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUmodelDataResponse getUmodelData(shared_ptr<string> workspace, shared_ptr<GetUmodelDataRequest> request);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<string> workspaceName);
  ListAlertActionsResponse listAlertActionsWithOptions(shared_ptr<ListAlertActionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlertActionsResponse listAlertActions(shared_ptr<ListAlertActionsRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<string> workspace,
                                               shared_ptr<ListServicesRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<string> workspace, shared_ptr<ListServicesRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  PutWorkspaceResponse putWorkspaceWithOptions(shared_ptr<string> workspaceName,
                                               shared_ptr<PutWorkspaceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutWorkspaceResponse putWorkspace(shared_ptr<string> workspaceName, shared_ptr<PutWorkspaceRequest> request);
  UpdateServiceResponse updateServiceWithOptions(shared_ptr<string> workspace,
                                                 shared_ptr<string> serviceId,
                                                 shared_ptr<UpdateServiceRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceResponse updateService(shared_ptr<string> workspace, shared_ptr<string> serviceId, shared_ptr<UpdateServiceRequest> request);
  UpdateUmodelResponse updateUmodelWithOptions(shared_ptr<string> workspace,
                                               shared_ptr<UpdateUmodelRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUmodelResponse updateUmodel(shared_ptr<string> workspace, shared_ptr<UpdateUmodelRequest> request);
  UpsertUmodelDataResponse upsertUmodelDataWithOptions(shared_ptr<string> workspace,
                                                       shared_ptr<UpsertUmodelDataRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpsertUmodelDataResponse upsertUmodelData(shared_ptr<string> workspace, shared_ptr<UpsertUmodelDataRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cms20240330

#endif
