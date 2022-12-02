// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SERVERLESS20210924_H_
#define ALIBABACLOUD_SERVERLESS20210924_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Serverless20210924 {
class ApplicationRepoSource : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<string> provider{};
  shared_ptr<string> repo{};

  ApplicationRepoSource() {}

  explicit ApplicationRepoSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (repo) {
      res["repo"] = boost::any(*repo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("repo") != m.end() && !m["repo"].empty()) {
      repo = make_shared<string>(boost::any_cast<string>(m["repo"]));
    }
  }


  virtual ~ApplicationRepoSource() = default;
};
class ApplicationTrigger : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commit{};
  shared_ptr<string> on{};

  ApplicationTrigger() {}

  explicit ApplicationTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (commit) {
      res["commit"] = boost::any(*commit);
    }
    if (on) {
      res["on"] = boost::any(*on);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commit") != m.end() && !m["commit"].empty()) {
      commit = make_shared<string>(boost::any_cast<string>(m["commit"]));
    }
    if (m.find("on") != m.end() && !m["on"].empty()) {
      on = make_shared<string>(boost::any_cast<string>(m["on"]));
    }
  }


  virtual ~ApplicationTrigger() = default;
};
class Application : public Darabonba::Model {
public:
  shared_ptr<string> autoDeploy{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> envVars{};
  shared_ptr<map<string, boost::any>> lastRelease{};
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> output{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<ApplicationRepoSource> repoSource{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> template_{};
  shared_ptr<ApplicationTrigger> trigger{};
  shared_ptr<string> updatedTime{};
  shared_ptr<string> workDir{};

  Application() {}

  explicit Application(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeploy) {
      res["autoDeploy"] = boost::any(*autoDeploy);
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (envVars) {
      res["envVars"] = boost::any(*envVars);
    }
    if (lastRelease) {
      res["lastRelease"] = boost::any(*lastRelease);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (repoSource) {
      res["repoSource"] = repoSource ? boost::any(repoSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (trigger) {
      res["trigger"] = trigger ? boost::any(trigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updatedTime) {
      res["updatedTime"] = boost::any(*updatedTime);
    }
    if (workDir) {
      res["workDir"] = boost::any(*workDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoDeploy") != m.end() && !m["autoDeploy"].empty()) {
      autoDeploy = make_shared<string>(boost::any_cast<string>(m["autoDeploy"]));
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("envVars") != m.end() && !m["envVars"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["envVars"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      envVars = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("lastRelease") != m.end() && !m["lastRelease"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["lastRelease"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lastRelease = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["output"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      output = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("repoSource") != m.end() && !m["repoSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["repoSource"].type()) {
        ApplicationRepoSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["repoSource"]));
        repoSource = make_shared<ApplicationRepoSource>(model1);
      }
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("trigger") != m.end() && !m["trigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["trigger"].type()) {
        ApplicationTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["trigger"]));
        trigger = make_shared<ApplicationTrigger>(model1);
      }
    }
    if (m.find("updatedTime") != m.end() && !m["updatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["updatedTime"]));
    }
    if (m.find("workDir") != m.end() && !m["workDir"].empty()) {
      workDir = make_shared<string>(boost::any_cast<string>(m["workDir"]));
    }
  }


  virtual ~Application() = default;
};
class Condition : public Darabonba::Model {
public:
  shared_ptr<string> expression{};

  Condition() {}

  explicit Condition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expression) {
      res["expression"] = boost::any(*expression);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expression") != m.end() && !m["expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["expression"]));
    }
  }


  virtual ~Condition() = default;
};
class Context : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> data{};

  Context() {}

  explicit Context(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~Context() = default;
};
class ContextSchema : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> hint{};
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> type{};

  ContextSchema() {}

  explicit ContextSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (hint) {
      res["hint"] = boost::any(*hint);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("hint") != m.end() && !m["hint"].empty()) {
      hint = make_shared<string>(boost::any_cast<string>(m["hint"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ContextSchema() = default;
};
class EnvironmentSpec : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> template_{};
  shared_ptr<map<string, boost::any>> templateVariables{};
  shared_ptr<long> templateVersion{};

  EnvironmentSpec() {}

  explicit EnvironmentSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (templateVariables) {
      res["templateVariables"] = boost::any(*templateVariables);
    }
    if (templateVersion) {
      res["templateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("templateVariables") != m.end() && !m["templateVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["templateVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("templateVersion") != m.end() && !m["templateVersion"].empty()) {
      templateVersion = make_shared<long>(boost::any_cast<long>(m["templateVersion"]));
    }
  }


  virtual ~EnvironmentSpec() = default;
};
class EnvironmentStatus : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> observedGeneration{};
  shared_ptr<string> observedTime{};
  shared_ptr<map<string, boost::any>> output{};
  shared_ptr<string> phase{};

  EnvironmentStatus() {}

  explicit EnvironmentStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (observedGeneration) {
      res["observedGeneration"] = boost::any(*observedGeneration);
    }
    if (observedTime) {
      res["observedTime"] = boost::any(*observedTime);
    }
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("observedGeneration") != m.end() && !m["observedGeneration"].empty()) {
      observedGeneration = make_shared<long>(boost::any_cast<long>(m["observedGeneration"]));
    }
    if (m.find("observedTime") != m.end() && !m["observedTime"].empty()) {
      observedTime = make_shared<string>(boost::any_cast<string>(m["observedTime"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["output"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      output = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
  }


  virtual ~EnvironmentStatus() = default;
};
class Environment : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<EnvironmentSpec> spec{};
  shared_ptr<EnvironmentStatus> status{};
  shared_ptr<string> uid{};

  Environment() {}

  explicit Environment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (deletionTime) {
      res["deletionTime"] = boost::any(*deletionTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("deletionTime") != m.end() && !m["deletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["deletionTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        EnvironmentSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<EnvironmentSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        EnvironmentStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<EnvironmentStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~Environment() = default;
};
class EnvironmentRevision : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<long> environmentGeneration{};
  shared_ptr<string> environmentName{};
  shared_ptr<string> kind{};
  shared_ptr<EnvironmentSpec> spec{};
  shared_ptr<EnvironmentStatus> status{};
  shared_ptr<string> uid{};

  EnvironmentRevision() {}

  explicit EnvironmentRevision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (environmentGeneration) {
      res["environmentGeneration"] = boost::any(*environmentGeneration);
    }
    if (environmentName) {
      res["environmentName"] = boost::any(*environmentName);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("environmentGeneration") != m.end() && !m["environmentGeneration"].empty()) {
      environmentGeneration = make_shared<long>(boost::any_cast<long>(m["environmentGeneration"]));
    }
    if (m.find("environmentName") != m.end() && !m["environmentName"].empty()) {
      environmentName = make_shared<string>(boost::any_cast<string>(m["environmentName"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        EnvironmentSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<EnvironmentSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        EnvironmentStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<EnvironmentStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~EnvironmentRevision() = default;
};
class InputVariable : public Darabonba::Model {
public:
  shared_ptr<string> defaultJson{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<bool> sensitive{};
  shared_ptr<string> type{};

  InputVariable() {}

  explicit InputVariable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultJson) {
      res["defaultJson"] = boost::any(*defaultJson);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    if (sensitive) {
      res["sensitive"] = boost::any(*sensitive);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultJson") != m.end() && !m["defaultJson"].empty()) {
      defaultJson = make_shared<string>(boost::any_cast<string>(m["defaultJson"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
    if (m.find("sensitive") != m.end() && !m["sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["sensitive"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~InputVariable() = default;
};
class OutputValue : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<bool> sensitive{};

  OutputValue() {}

  explicit OutputValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sensitive) {
      res["sensitive"] = boost::any(*sensitive);
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
    if (m.find("sensitive") != m.end() && !m["sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["sensitive"]));
    }
  }


  virtual ~OutputValue() = default;
};
class PipelineSpec : public Darabonba::Model {
public:
  shared_ptr<Context> context{};
  shared_ptr<string> templateName{};

  PipelineSpec() {}

  explicit PipelineSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        Context model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<Context>(model1);
      }
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
  }


  virtual ~PipelineSpec() = default;
};
class PipelineStatus : public Darabonba::Model {
public:
  shared_ptr<string> phase{};

  PipelineStatus() {}

  explicit PipelineStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
  }


  virtual ~PipelineStatus() = default;
};
class Pipeline : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<PipelineSpec> spec{};
  shared_ptr<PipelineStatus> status{};
  shared_ptr<string> uid{};

  Pipeline() {}

  explicit Pipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (deletionTime) {
      res["deletionTime"] = boost::any(*deletionTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceVersion) {
      res["resourceVersion"] = boost::any(*resourceVersion);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("deletionTime") != m.end() && !m["deletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["deletionTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceVersion") != m.end() && !m["resourceVersion"].empty()) {
      resourceVersion = make_shared<long>(boost::any_cast<long>(m["resourceVersion"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        PipelineSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<PipelineSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        PipelineStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<PipelineStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~Pipeline() = default;
};
class RunAfter : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  RunAfter() {}

  explicit RunAfter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RunAfter() = default;
};
class TaskExec : public Darabonba::Model {
public:
  shared_ptr<Context> context{};
  shared_ptr<string> name{};
  shared_ptr<vector<RunAfter>> runAfters{};
  shared_ptr<string> taskTemplate{};

  TaskExec() {}

  explicit TaskExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (runAfters) {
      vector<boost::any> temp1;
      for(auto item1:*runAfters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["runAfters"] = boost::any(temp1);
    }
    if (taskTemplate) {
      res["taskTemplate"] = boost::any(*taskTemplate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        Context model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<Context>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("runAfters") != m.end() && !m["runAfters"].empty()) {
      if (typeid(vector<boost::any>) == m["runAfters"].type()) {
        vector<RunAfter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["runAfters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunAfter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runAfters = make_shared<vector<RunAfter>>(expect1);
      }
    }
    if (m.find("taskTemplate") != m.end() && !m["taskTemplate"].empty()) {
      taskTemplate = make_shared<string>(boost::any_cast<string>(m["taskTemplate"]));
    }
  }


  virtual ~TaskExec() = default;
};
class PipelineTemplateSpec : public Darabonba::Model {
public:
  shared_ptr<Context> context{};
  shared_ptr<map<string, boost::any>> contextSchema{};
  shared_ptr<vector<TaskExec>> tasks{};

  PipelineTemplateSpec() {}

  explicit PipelineTemplateSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contextSchema) {
      res["contextSchema"] = boost::any(*contextSchema);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        Context model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<Context>(model1);
      }
    }
    if (m.find("contextSchema") != m.end() && !m["contextSchema"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["contextSchema"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextSchema = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("tasks") != m.end() && !m["tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["tasks"].type()) {
        vector<TaskExec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskExec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<TaskExec>>(expect1);
      }
    }
  }


  virtual ~PipelineTemplateSpec() = default;
};
class PipelineTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<PipelineTemplateSpec> spec{};
  shared_ptr<string> uid{};

  PipelineTemplate() {}

  explicit PipelineTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (deletionTime) {
      res["deletionTime"] = boost::any(*deletionTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceVersion) {
      res["resourceVersion"] = boost::any(*resourceVersion);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("deletionTime") != m.end() && !m["deletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["deletionTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceVersion") != m.end() && !m["resourceVersion"].empty()) {
      resourceVersion = make_shared<long>(boost::any_cast<long>(m["resourceVersion"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        PipelineTemplateSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<PipelineTemplateSpec>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~PipelineTemplate() = default;
};
class ReleaseCodeVersion : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commit{};

  ReleaseCodeVersion() {}

  explicit ReleaseCodeVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (commit) {
      res["commit"] = boost::any(*commit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commit") != m.end() && !m["commit"].empty()) {
      commit = make_shared<string>(boost::any_cast<string>(m["commit"]));
    }
  }


  virtual ~ReleaseCodeVersion() = default;
};
class Release : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> appConfig{};
  shared_ptr<ReleaseCodeVersion> codeVersion{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> output{};
  shared_ptr<string> status{};
  shared_ptr<long> versionId{};

  Release() {}

  explicit Release(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appConfig) {
      res["appConfig"] = boost::any(*appConfig);
    }
    if (codeVersion) {
      res["codeVersion"] = codeVersion ? boost::any(codeVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appConfig") != m.end() && !m["appConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["appConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      appConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["codeVersion"].type()) {
        ReleaseCodeVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["codeVersion"]));
        codeVersion = make_shared<ReleaseCodeVersion>(model1);
      }
    }
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["output"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      output = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["versionId"]));
    }
  }


  virtual ~Release() = default;
};
class RepoSource : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<string> provider{};
  shared_ptr<string> repo{};

  RepoSource() {}

  explicit RepoSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (repo) {
      res["repo"] = boost::any(*repo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("repo") != m.end() && !m["repo"].empty()) {
      repo = make_shared<string>(boost::any_cast<string>(m["repo"]));
    }
  }


  virtual ~RepoSource() = default;
};
class ServiceSpec : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> template_{};
  shared_ptr<map<string, boost::any>> templateVariables{};
  shared_ptr<long> templateVersion{};

  ServiceSpec() {}

  explicit ServiceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["environment"] = boost::any(*environment);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (templateVariables) {
      res["templateVariables"] = boost::any(*templateVariables);
    }
    if (templateVersion) {
      res["templateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environment") != m.end() && !m["environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["environment"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("templateVariables") != m.end() && !m["templateVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["templateVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("templateVersion") != m.end() && !m["templateVersion"].empty()) {
      templateVersion = make_shared<long>(boost::any_cast<long>(m["templateVersion"]));
    }
  }


  virtual ~ServiceSpec() = default;
};
class ServiceStatus : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> observedGeneration{};
  shared_ptr<string> observedTime{};
  shared_ptr<map<string, boost::any>> output{};
  shared_ptr<string> phase{};

  ServiceStatus() {}

  explicit ServiceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (observedGeneration) {
      res["observedGeneration"] = boost::any(*observedGeneration);
    }
    if (observedTime) {
      res["observedTime"] = boost::any(*observedTime);
    }
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("observedGeneration") != m.end() && !m["observedGeneration"].empty()) {
      observedGeneration = make_shared<long>(boost::any_cast<long>(m["observedGeneration"]));
    }
    if (m.find("observedTime") != m.end() && !m["observedTime"].empty()) {
      observedTime = make_shared<string>(boost::any_cast<string>(m["observedTime"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["output"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      output = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
  }


  virtual ~ServiceStatus() = default;
};
class Service : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<ServiceSpec> spec{};
  shared_ptr<ServiceStatus> status{};
  shared_ptr<string> uid{};

  Service() {}

  explicit Service(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (deletionTime) {
      res["deletionTime"] = boost::any(*deletionTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("deletionTime") != m.end() && !m["deletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["deletionTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        ServiceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<ServiceSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        ServiceStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<ServiceStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~Service() = default;
};
class ServiceRevision : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> kind{};
  shared_ptr<long> serviceGeneration{};
  shared_ptr<string> serviceName{};
  shared_ptr<ServiceSpec> spec{};
  shared_ptr<EnvironmentStatus> status{};
  shared_ptr<string> uid{};

  ServiceRevision() {}

  explicit ServiceRevision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (serviceGeneration) {
      res["serviceGeneration"] = boost::any(*serviceGeneration);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("serviceGeneration") != m.end() && !m["serviceGeneration"].empty()) {
      serviceGeneration = make_shared<long>(boost::any_cast<long>(m["serviceGeneration"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        ServiceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<ServiceSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        EnvironmentStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<EnvironmentStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ServiceRevision() = default;
};
class Status : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Status() {}

  explicit Status(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~Status() = default;
};
class StsCredentials : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> expirationTime{};
  shared_ptr<string> kind{};
  shared_ptr<string> secretAccessKey{};
  shared_ptr<string> token{};

  StsCredentials() {}

  explicit StsCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (expirationTime) {
      res["expirationTime"] = boost::any(*expirationTime);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (secretAccessKey) {
      res["secretAccessKey"] = boost::any(*secretAccessKey);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("expirationTime") != m.end() && !m["expirationTime"].empty()) {
      expirationTime = make_shared<string>(boost::any_cast<string>(m["expirationTime"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("secretAccessKey") != m.end() && !m["secretAccessKey"].empty()) {
      secretAccessKey = make_shared<string>(boost::any_cast<string>(m["secretAccessKey"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~StsCredentials() = default;
};
class TaskSpec : public Darabonba::Model {
public:
  shared_ptr<Context> context{};
  shared_ptr<string> templateName{};

  TaskSpec() {}

  explicit TaskSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        Context model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<Context>(model1);
      }
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
  }


  virtual ~TaskSpec() = default;
};
class TaskStatus : public Darabonba::Model {
public:
  shared_ptr<vector<string>> executionDetails{};
  shared_ptr<string> phase{};
  shared_ptr<long> statusGeneration{};

  TaskStatus() {}

  explicit TaskStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionDetails) {
      res["executionDetails"] = boost::any(*executionDetails);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (statusGeneration) {
      res["statusGeneration"] = boost::any(*statusGeneration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("executionDetails") != m.end() && !m["executionDetails"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["executionDetails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["executionDetails"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      executionDetails = make_shared<vector<string>>(toVec1);
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("statusGeneration") != m.end() && !m["statusGeneration"].empty()) {
      statusGeneration = make_shared<long>(boost::any_cast<long>(m["statusGeneration"]));
    }
  }


  virtual ~TaskStatus() = default;
};
class Task : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<TaskSpec> spec{};
  shared_ptr<TaskStatus> status{};
  shared_ptr<string> uid{};

  Task() {}

  explicit Task(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (deletionTime) {
      res["deletionTime"] = boost::any(*deletionTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceVersion) {
      res["resourceVersion"] = boost::any(*resourceVersion);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("deletionTime") != m.end() && !m["deletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["deletionTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceVersion") != m.end() && !m["resourceVersion"].empty()) {
      resourceVersion = make_shared<long>(boost::any_cast<long>(m["resourceVersion"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        TaskSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<TaskSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        TaskStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<TaskStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~Task() = default;
};
class TaskWorker : public Darabonba::Model {
public:
  shared_ptr<string> presetWorker{};

  TaskWorker() {}

  explicit TaskWorker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (presetWorker) {
      res["presetWorker"] = boost::any(*presetWorker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("presetWorker") != m.end() && !m["presetWorker"].empty()) {
      presetWorker = make_shared<string>(boost::any_cast<string>(m["presetWorker"]));
    }
  }


  virtual ~TaskWorker() = default;
};
class TaskTemplateSpec : public Darabonba::Model {
public:
  shared_ptr<Context> context{};
  shared_ptr<map<string, boost::any>> contextSchema{};
  shared_ptr<string> description{};
  shared_ptr<Condition> executeCondition{};
  shared_ptr<TaskWorker> worker{};

  TaskTemplateSpec() {}

  explicit TaskTemplateSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contextSchema) {
      res["contextSchema"] = boost::any(*contextSchema);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (executeCondition) {
      res["executeCondition"] = executeCondition ? boost::any(executeCondition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (worker) {
      res["worker"] = worker ? boost::any(worker->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        Context model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<Context>(model1);
      }
    }
    if (m.find("contextSchema") != m.end() && !m["contextSchema"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["contextSchema"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contextSchema = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("executeCondition") != m.end() && !m["executeCondition"].empty()) {
      if (typeid(map<string, boost::any>) == m["executeCondition"].type()) {
        Condition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["executeCondition"]));
        executeCondition = make_shared<Condition>(model1);
      }
    }
    if (m.find("worker") != m.end() && !m["worker"].empty()) {
      if (typeid(map<string, boost::any>) == m["worker"].type()) {
        TaskWorker model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["worker"]));
        worker = make_shared<TaskWorker>(model1);
      }
    }
  }


  virtual ~TaskTemplateSpec() = default;
};
class TaskTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<TaskTemplateSpec> spec{};
  shared_ptr<string> uid{};

  TaskTemplate() {}

  explicit TaskTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (deletionTime) {
      res["deletionTime"] = boost::any(*deletionTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceVersion) {
      res["resourceVersion"] = boost::any(*resourceVersion);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("deletionTime") != m.end() && !m["deletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["deletionTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceVersion") != m.end() && !m["resourceVersion"].empty()) {
      resourceVersion = make_shared<long>(boost::any_cast<long>(m["resourceVersion"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        TaskTemplateSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<TaskTemplateSpec>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~TaskTemplate() = default;
};
class TemplateSpec : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> ramPolicy{};
  shared_ptr<string> type{};

  TemplateSpec() {}

  explicit TemplateSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (ramPolicy) {
      res["ramPolicy"] = boost::any(*ramPolicy);
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
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("ramPolicy") != m.end() && !m["ramPolicy"].empty()) {
      ramPolicy = make_shared<string>(boost::any_cast<string>(m["ramPolicy"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~TemplateSpec() = default;
};
class TemplateStatus : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> observedGeneration{};
  shared_ptr<string> observedTime{};
  shared_ptr<vector<OutputValue>> outputs{};
  shared_ptr<string> phase{};
  shared_ptr<vector<InputVariable>> variables{};

  TemplateStatus() {}

  explicit TemplateStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (observedGeneration) {
      res["observedGeneration"] = boost::any(*observedGeneration);
    }
    if (observedTime) {
      res["observedTime"] = boost::any(*observedTime);
    }
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["outputs"] = boost::any(temp1);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("observedGeneration") != m.end() && !m["observedGeneration"].empty()) {
      observedGeneration = make_shared<long>(boost::any_cast<long>(m["observedGeneration"]));
    }
    if (m.find("observedTime") != m.end() && !m["observedTime"].empty()) {
      observedTime = make_shared<string>(boost::any_cast<string>(m["observedTime"]));
    }
    if (m.find("outputs") != m.end() && !m["outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["outputs"].type()) {
        vector<OutputValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OutputValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<OutputValue>>(expect1);
      }
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<InputVariable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InputVariable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<InputVariable>>(expect1);
      }
    }
  }


  virtual ~TemplateStatus() = default;
};
class Template : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<TemplateSpec> spec{};
  shared_ptr<TemplateStatus> status{};
  shared_ptr<string> uid{};
  shared_ptr<long> version{};

  Template() {}

  explicit Template(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (deletionTime) {
      res["deletionTime"] = boost::any(*deletionTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("deletionTime") != m.end() && !m["deletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["deletionTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        TemplateSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<TemplateSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        TemplateStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<TemplateStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~Template() = default;
};
class TemplateRevision : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> kind{};
  shared_ptr<TemplateSpec> spec{};
  shared_ptr<TemplateStatus> status{};
  shared_ptr<long> templateGeneration{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateVersion{};
  shared_ptr<string> uid{};

  TemplateRevision() {}

  explicit TemplateRevision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateGeneration) {
      res["templateGeneration"] = boost::any(*templateGeneration);
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["templateVersion"] = boost::any(*templateVersion);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        TemplateSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<TemplateSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        TemplateStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<TemplateStatus>(model1);
      }
    }
    if (m.find("templateGeneration") != m.end() && !m["templateGeneration"].empty()) {
      templateGeneration = make_shared<long>(boost::any_cast<long>(m["templateGeneration"]));
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
    if (m.find("templateVersion") != m.end() && !m["templateVersion"].empty()) {
      templateVersion = make_shared<long>(boost::any_cast<long>(m["templateVersion"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~TemplateRevision() = default;
};
class TriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commit{};
  shared_ptr<string> on{};

  TriggerConfig() {}

  explicit TriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (commit) {
      res["commit"] = boost::any(*commit);
    }
    if (on) {
      res["on"] = boost::any(*on);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commit") != m.end() && !m["commit"].empty()) {
      commit = make_shared<string>(boost::any_cast<string>(m["commit"]));
    }
    if (m.find("on") != m.end() && !m["on"].empty()) {
      on = make_shared<string>(boost::any_cast<string>(m["on"]));
    }
  }


  virtual ~TriggerConfig() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoDeploy{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> envVars{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<RepoSource> repoSource{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> template_{};
  shared_ptr<TriggerConfig> trigger{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeploy) {
      res["autoDeploy"] = boost::any(*autoDeploy);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (envVars) {
      res["envVars"] = boost::any(*envVars);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (repoSource) {
      res["repoSource"] = repoSource ? boost::any(repoSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (trigger) {
      res["trigger"] = trigger ? boost::any(trigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoDeploy") != m.end() && !m["autoDeploy"].empty()) {
      autoDeploy = make_shared<bool>(boost::any_cast<bool>(m["autoDeploy"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("envVars") != m.end() && !m["envVars"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["envVars"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      envVars = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("repoSource") != m.end() && !m["repoSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["repoSource"].type()) {
        RepoSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["repoSource"]));
        repoSource = make_shared<RepoSource>(model1);
      }
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("trigger") != m.end() && !m["trigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["trigger"].type()) {
        TriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["trigger"]));
        trigger = make_shared<TriggerConfig>(model1);
      }
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Application> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Application model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Application>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreatePipelineRequest : public Darabonba::Model {
public:
  shared_ptr<Pipeline> body{};

  CreatePipelineRequest() {}

  explicit CreatePipelineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Pipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Pipeline>(model1);
      }
    }
  }


  virtual ~CreatePipelineRequest() = default;
};
class CreatePipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Pipeline> body{};

  CreatePipelineResponse() {}

  explicit CreatePipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Pipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Pipeline>(model1);
      }
    }
  }


  virtual ~CreatePipelineResponse() = default;
};
class CreatePipelineTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<PipelineTemplate> body{};

  CreatePipelineTemplateRequest() {}

  explicit CreatePipelineTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
  }


  virtual ~CreatePipelineTemplateRequest() = default;
};
class CreatePipelineTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTemplate> body{};

  CreatePipelineTemplateResponse() {}

  explicit CreatePipelineTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
  }


  virtual ~CreatePipelineTemplateResponse() = default;
};
class CreateReleaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  CreateReleaseRequest() {}

  explicit CreateReleaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~CreateReleaseRequest() = default;
};
class CreateReleaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Release> body{};

  CreateReleaseResponse() {}

  explicit CreateReleaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Release model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Release>(model1);
      }
    }
  }


  virtual ~CreateReleaseResponse() = default;
};
class CreateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<Task> body{};

  CreateTaskRequest() {}

  explicit CreateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~CreateTaskRequest() = default;
};
class CreateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Task> body{};

  CreateTaskResponse() {}

  explicit CreateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~CreateTaskResponse() = default;
};
class CreateTaskTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<TaskTemplate> body{};

  CreateTaskTemplateRequest() {}

  explicit CreateTaskTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
  }


  virtual ~CreateTaskTemplateRequest() = default;
};
class CreateTaskTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskTemplate> body{};

  CreateTaskTemplateResponse() {}

  explicit CreateTaskTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
  }


  virtual ~CreateTaskTemplateResponse() = default;
};
class DeleteApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  DeleteApplicationResponse() {}

  explicit DeleteApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~DeleteApplicationResponse() = default;
};
class DeleteEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteEnvironmentResponse() {}

  explicit DeleteEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteEnvironmentResponse() = default;
};
class DeletePipelineTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePipelineTemplateResponseBody() {}

  explicit DeletePipelineTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePipelineTemplateResponseBody() = default;
};
class DeletePipelineTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePipelineTemplateResponseBody> body{};

  DeletePipelineTemplateResponse() {}

  explicit DeletePipelineTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePipelineTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineTemplateResponse() = default;
};
class DeleteTaskTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTaskTemplateResponseBody() {}

  explicit DeleteTaskTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTaskTemplateResponseBody() = default;
};
class DeleteTaskTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTaskTemplateResponseBody> body{};

  DeleteTaskTemplateResponse() {}

  explicit DeleteTaskTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTaskTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTaskTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTaskTemplateResponse() = default;
};
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> version{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~DeleteTemplateRequest() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Status> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Status model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Status>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class GetApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Application> body{};

  GetApplicationResponse() {}

  explicit GetApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Application model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Application>(model1);
      }
    }
  }


  virtual ~GetApplicationResponse() = default;
};
class GetEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Environment> body{};

  GetEnvironmentResponse() {}

  explicit GetEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Environment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Environment>(model1);
      }
    }
  }


  virtual ~GetEnvironmentResponse() = default;
};
class GetPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Pipeline> body{};

  GetPipelineResponse() {}

  explicit GetPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Pipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Pipeline>(model1);
      }
    }
  }


  virtual ~GetPipelineResponse() = default;
};
class GetPipelineTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTemplate> body{};

  GetPipelineTemplateResponse() {}

  explicit GetPipelineTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
  }


  virtual ~GetPipelineTemplateResponse() = default;
};
class GetReleaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Release> body{};

  GetReleaseResponse() {}

  explicit GetReleaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Release model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Release>(model1);
      }
    }
  }


  virtual ~GetReleaseResponse() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Service> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Service model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Service>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Task> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetTaskTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskTemplate> body{};

  GetTaskTemplateResponse() {}

  explicit GetTaskTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
  }


  virtual ~GetTaskTemplateResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> version{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Template_> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Template_ model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Template_>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class ListEnvironmentRevisionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentName{};

  ListEnvironmentRevisionsRequest() {}

  explicit ListEnvironmentRevisionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentName) {
      res["environmentName"] = boost::any(*environmentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentName") != m.end() && !m["environmentName"].empty()) {
      environmentName = make_shared<string>(boost::any_cast<string>(m["environmentName"]));
    }
  }


  virtual ~ListEnvironmentRevisionsRequest() = default;
};
class ListEnvironmentRevisionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<EnvironmentRevision>> body{};

  ListEnvironmentRevisionsResponse() {}

  explicit ListEnvironmentRevisionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<EnvironmentRevision> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnvironmentRevision model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<EnvironmentRevision>>(expect1);
      }
    }
  }


  virtual ~ListEnvironmentRevisionsResponse() = default;
};
class ListEnvironmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Environment>> body{};

  ListEnvironmentsResponse() {}

  explicit ListEnvironmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Environment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Environment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Environment>>(expect1);
      }
    }
  }


  virtual ~ListEnvironmentsResponse() = default;
};
class ListPipelineTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labelSelector{};

  ListPipelineTemplatesRequest() {}

  explicit ListPipelineTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["labelSelector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["labelSelector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelSelector = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPipelineTemplatesRequest() = default;
};
class ListPipelineTemplatesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelSelectorShrink{};

  ListPipelineTemplatesShrinkRequest() {}

  explicit ListPipelineTemplatesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
  }


  virtual ~ListPipelineTemplatesShrinkRequest() = default;
};
class ListPipelineTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<PipelineTemplate>> body{};

  ListPipelineTemplatesResponse() {}

  explicit ListPipelineTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<PipelineTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PipelineTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<PipelineTemplate>>(expect1);
      }
    }
  }


  virtual ~ListPipelineTemplatesResponse() = default;
};
class ListPipelinesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labelSelector{};

  ListPipelinesRequest() {}

  explicit ListPipelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["labelSelector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["labelSelector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelSelector = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPipelinesRequest() = default;
};
class ListPipelinesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelSelectorShrink{};

  ListPipelinesShrinkRequest() {}

  explicit ListPipelinesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
  }


  virtual ~ListPipelinesShrinkRequest() = default;
};
class ListPipelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Pipeline>> body{};

  ListPipelinesResponse() {}

  explicit ListPipelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Pipeline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Pipeline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Pipeline>>(expect1);
      }
    }
  }


  virtual ~ListPipelinesResponse() = default;
};
class ListServiceRevisionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};

  ListServiceRevisionsRequest() {}

  explicit ListServiceRevisionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~ListServiceRevisionsRequest() = default;
};
class ListServiceRevisionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<ServiceRevision>> body{};

  ListServiceRevisionsResponse() {}

  explicit ListServiceRevisionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<ServiceRevision> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ServiceRevision model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<ServiceRevision>>(expect1);
      }
    }
  }


  virtual ~ListServiceRevisionsResponse() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Service>> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Service> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Service model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Service>>(expect1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class ListTaskTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labelSelector{};

  ListTaskTemplatesRequest() {}

  explicit ListTaskTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["labelSelector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["labelSelector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelSelector = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTaskTemplatesRequest() = default;
};
class ListTaskTemplatesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelSelectorShrink{};

  ListTaskTemplatesShrinkRequest() {}

  explicit ListTaskTemplatesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
  }


  virtual ~ListTaskTemplatesShrinkRequest() = default;
};
class ListTaskTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<TaskTemplate>> body{};

  ListTaskTemplatesResponse() {}

  explicit ListTaskTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<TaskTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<TaskTemplate>>(expect1);
      }
    }
  }


  virtual ~ListTaskTemplatesResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labelSelector{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["labelSelector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["labelSelector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelSelector = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelSelectorShrink{};

  ListTasksShrinkRequest() {}

  explicit ListTasksShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
  }


  virtual ~ListTasksShrinkRequest() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Task>> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Task> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Task model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Task>>(expect1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class ListTemplateRevisionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateName{};
  shared_ptr<long> templateVersion{};

  ListTemplateRevisionsRequest() {}

  explicit ListTemplateRevisionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["templateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
    if (m.find("templateVersion") != m.end() && !m["templateVersion"].empty()) {
      templateVersion = make_shared<long>(boost::any_cast<long>(m["templateVersion"]));
    }
  }


  virtual ~ListTemplateRevisionsRequest() = default;
};
class ListTemplateRevisionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<TemplateRevision>> body{};

  ListTemplateRevisionsResponse() {}

  explicit ListTemplateRevisionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<TemplateRevision> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TemplateRevision model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<TemplateRevision>>(expect1);
      }
    }
  }


  virtual ~ListTemplateRevisionsResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Template_>> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Template_> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Template_ model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Template_>>(expect1);
      }
    }
  }


  virtual ~ListTemplatesResponse() = default;
};
class PutEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<Environment> body{};

  PutEnvironmentRequest() {}

  explicit PutEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Environment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Environment>(model1);
      }
    }
  }


  virtual ~PutEnvironmentRequest() = default;
};
class PutEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Environment> body{};

  PutEnvironmentResponse() {}

  explicit PutEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Environment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Environment>(model1);
      }
    }
  }


  virtual ~PutEnvironmentResponse() = default;
};
class PutPipelineStatusRequest : public Darabonba::Model {
public:
  shared_ptr<Pipeline> body{};
  shared_ptr<bool> force{};

  PutPipelineStatusRequest() {}

  explicit PutPipelineStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (force) {
      res["force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Pipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Pipeline>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~PutPipelineStatusRequest() = default;
};
class PutPipelineStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Pipeline> body{};

  PutPipelineStatusResponse() {}

  explicit PutPipelineStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Pipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Pipeline>(model1);
      }
    }
  }


  virtual ~PutPipelineStatusResponse() = default;
};
class PutPipelineTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<PipelineTemplate> body{};
  shared_ptr<bool> force{};

  PutPipelineTemplateRequest() {}

  explicit PutPipelineTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (force) {
      res["force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~PutPipelineTemplateRequest() = default;
};
class PutPipelineTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTemplate> body{};

  PutPipelineTemplateResponse() {}

  explicit PutPipelineTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
  }


  virtual ~PutPipelineTemplateResponse() = default;
};
class PutServiceRequest : public Darabonba::Model {
public:
  shared_ptr<Service> body{};

  PutServiceRequest() {}

  explicit PutServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Service model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Service>(model1);
      }
    }
  }


  virtual ~PutServiceRequest() = default;
};
class PutServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Service> body{};

  PutServiceResponse() {}

  explicit PutServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Service model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Service>(model1);
      }
    }
  }


  virtual ~PutServiceResponse() = default;
};
class PutTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<Task> body{};
  shared_ptr<bool> force{};

  PutTaskStatusRequest() {}

  explicit PutTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (force) {
      res["force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~PutTaskStatusRequest() = default;
};
class PutTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Task> body{};

  PutTaskStatusResponse() {}

  explicit PutTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~PutTaskStatusResponse() = default;
};
class PutTaskTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<TaskTemplate> body{};
  shared_ptr<bool> force{};

  PutTaskTemplateRequest() {}

  explicit PutTaskTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (force) {
      res["force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~PutTaskTemplateRequest() = default;
};
class PutTaskTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskTemplate> body{};

  PutTaskTemplateResponse() {}

  explicit PutTaskTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
  }


  virtual ~PutTaskTemplateResponse() = default;
};
class PutTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<Template_> body{};
  shared_ptr<long> version{};

  PutTemplateRequest() {}

  explicit PutTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Template_ model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Template_>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~PutTemplateRequest() = default;
};
class PutTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Template_> body{};

  PutTemplateResponse() {}

  explicit PutTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Template_ model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Template_>(model1);
      }
    }
  }


  virtual ~PutTemplateResponse() = default;
};
class ResumeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Task> body{};

  ResumeTaskResponse() {}

  explicit ResumeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~ResumeTaskResponse() = default;
};
class StartPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Pipeline> body{};

  StartPipelineResponse() {}

  explicit StartPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Pipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Pipeline>(model1);
      }
    }
  }


  virtual ~StartPipelineResponse() = default;
};
class StartTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Task> body{};

  StartTaskResponse() {}

  explicit StartTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~StartTaskResponse() = default;
};
class UpdateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<Application> body{};

  UpdateApplicationRequest() {}

  explicit UpdateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Application model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Application>(model1);
      }
    }
  }


  virtual ~UpdateApplicationRequest() = default;
};
class UpdateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Application> body{};

  UpdateApplicationResponse() {}

  explicit UpdateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Application model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Application>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponse() = default;
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
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineResponse createPipeline(shared_ptr<CreatePipelineRequest> request);
  CreatePipelineResponse createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineTemplateResponse createPipelineTemplate(shared_ptr<CreatePipelineTemplateRequest> request);
  CreatePipelineTemplateResponse createPipelineTemplateWithOptions(shared_ptr<CreatePipelineTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReleaseResponse createRelease(shared_ptr<string> appName, shared_ptr<CreateReleaseRequest> request);
  CreateReleaseResponse createReleaseWithOptions(shared_ptr<string> appName,
                                                 shared_ptr<CreateReleaseRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<CreateTaskRequest> request);
  CreateTaskResponse createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskTemplateResponse createTaskTemplate(shared_ptr<CreateTaskTemplateRequest> request);
  CreateTaskTemplateResponse createTaskTemplateWithOptions(shared_ptr<CreateTaskTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationResponse deleteApplication(shared_ptr<string> name);
  DeleteApplicationResponse deleteApplicationWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentResponse deleteEnvironment(shared_ptr<string> name);
  DeleteEnvironmentResponse deleteEnvironmentWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineTemplateResponse deletePipelineTemplate(shared_ptr<string> name);
  DeletePipelineTemplateResponse deletePipelineTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTaskTemplateResponse deleteTaskTemplate(shared_ptr<string> name);
  DeleteTaskTemplateResponse deleteTaskTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<string> name, shared_ptr<DeleteTemplateRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<string> name,
                                                   shared_ptr<DeleteTemplateRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationResponse getApplication(shared_ptr<string> name);
  GetApplicationResponse getApplicationWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentResponse getEnvironment(shared_ptr<string> name);
  GetEnvironmentResponse getEnvironmentWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineResponse getPipeline(shared_ptr<string> name);
  GetPipelineResponse getPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineTemplateResponse getPipelineTemplate(shared_ptr<string> name);
  GetPipelineTemplateResponse getPipelineTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReleaseResponse getRelease(shared_ptr<string> appName, shared_ptr<string> versionId);
  GetReleaseResponse getReleaseWithOptions(shared_ptr<string> appName,
                                           shared_ptr<string> versionId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<string> name);
  GetServiceResponse getServiceWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> name);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskTemplateResponse getTaskTemplate(shared_ptr<string> name);
  GetTaskTemplateResponse getTaskTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<string> name, shared_ptr<GetTemplateRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<string> name,
                                             shared_ptr<GetTemplateRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentRevisionsResponse listEnvironmentRevisions(shared_ptr<ListEnvironmentRevisionsRequest> request);
  ListEnvironmentRevisionsResponse listEnvironmentRevisionsWithOptions(shared_ptr<ListEnvironmentRevisionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentsResponse listEnvironments();
  ListEnvironmentsResponse listEnvironmentsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineTemplatesResponse listPipelineTemplates(shared_ptr<ListPipelineTemplatesRequest> request);
  ListPipelineTemplatesResponse listPipelineTemplatesWithOptions(shared_ptr<ListPipelineTemplatesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelinesResponse listPipelines(shared_ptr<ListPipelinesRequest> request);
  ListPipelinesResponse listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceRevisionsResponse listServiceRevisions(shared_ptr<ListServiceRevisionsRequest> request);
  ListServiceRevisionsResponse listServiceRevisionsWithOptions(shared_ptr<ListServiceRevisionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices();
  ListServicesResponse listServicesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskTemplatesResponse listTaskTemplates(shared_ptr<ListTaskTemplatesRequest> request);
  ListTaskTemplatesResponse listTaskTemplatesWithOptions(shared_ptr<ListTaskTemplatesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplateRevisionsResponse listTemplateRevisions(shared_ptr<ListTemplateRevisionsRequest> request);
  ListTemplateRevisionsResponse listTemplateRevisionsWithOptions(shared_ptr<ListTemplateRevisionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEnvironmentResponse putEnvironment(shared_ptr<string> name, shared_ptr<PutEnvironmentRequest> request);
  PutEnvironmentResponse putEnvironmentWithOptions(shared_ptr<string> name,
                                                   shared_ptr<PutEnvironmentRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutPipelineStatusResponse putPipelineStatus(shared_ptr<string> name, shared_ptr<PutPipelineStatusRequest> request);
  PutPipelineStatusResponse putPipelineStatusWithOptions(shared_ptr<string> name,
                                                         shared_ptr<PutPipelineStatusRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutPipelineTemplateResponse putPipelineTemplate(shared_ptr<string> name, shared_ptr<PutPipelineTemplateRequest> request);
  PutPipelineTemplateResponse putPipelineTemplateWithOptions(shared_ptr<string> name,
                                                             shared_ptr<PutPipelineTemplateRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutServiceResponse putService(shared_ptr<string> name, shared_ptr<PutServiceRequest> request);
  PutServiceResponse putServiceWithOptions(shared_ptr<string> name,
                                           shared_ptr<PutServiceRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutTaskStatusResponse putTaskStatus(shared_ptr<string> name, shared_ptr<PutTaskStatusRequest> request);
  PutTaskStatusResponse putTaskStatusWithOptions(shared_ptr<string> name,
                                                 shared_ptr<PutTaskStatusRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutTaskTemplateResponse putTaskTemplate(shared_ptr<string> name, shared_ptr<PutTaskTemplateRequest> request);
  PutTaskTemplateResponse putTaskTemplateWithOptions(shared_ptr<string> name,
                                                     shared_ptr<PutTaskTemplateRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutTemplateResponse putTemplate(shared_ptr<string> name, shared_ptr<PutTemplateRequest> request);
  PutTemplateResponse putTemplateWithOptions(shared_ptr<string> name,
                                             shared_ptr<PutTemplateRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeTaskResponse resumeTask(shared_ptr<string> name);
  ResumeTaskResponse resumeTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartPipelineResponse startPipeline(shared_ptr<string> name);
  StartPipelineResponse startPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTaskResponse startTask(shared_ptr<string> name);
  StartTaskResponse startTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationResponse updateApplication(shared_ptr<string> name, shared_ptr<UpdateApplicationRequest> request);
  UpdateApplicationResponse updateApplicationWithOptions(shared_ptr<string> name,
                                                         shared_ptr<UpdateApplicationRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Serverless20210924

#endif
