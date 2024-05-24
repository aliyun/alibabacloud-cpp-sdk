// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DEVS20230714_H_
#define ALIBABACLOUD_DEVS20230714_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Devs20230714 {
class Checkout : public Darabonba::Model {
public:
  shared_ptr<string> ref{};
  shared_ptr<string> remote{};

  Checkout() {}

  explicit Checkout(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ref) {
      res["ref"] = boost::any(*ref);
    }
    if (remote) {
      res["remote"] = boost::any(*remote);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ref") != m.end() && !m["ref"].empty()) {
      ref = make_shared<string>(boost::any_cast<string>(m["ref"]));
    }
    if (m.find("remote") != m.end() && !m["remote"].empty()) {
      remote = make_shared<string>(boost::any_cast<string>(m["remote"]));
    }
  }


  virtual ~Checkout() = default;
};
class CodeupEventPayload : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> originalPayload{};

  CodeupEventPayload() {}

  explicit CodeupEventPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalPayload) {
      res["originalPayload"] = boost::any(*originalPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalPayload") != m.end() && !m["originalPayload"].empty()) {
      originalPayload = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["originalPayload"]));
    }
  }


  virtual ~CodeupEventPayload() = default;
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
class GitAccount : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> uri{};

  GitAccount() {}

  explicit GitAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["avatar"] = boost::any(*avatar);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (uri) {
      res["uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("avatar") != m.end() && !m["avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["avatar"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("uri") != m.end() && !m["uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["uri"]));
    }
  }


  virtual ~GitAccount() = default;
};
class GitLabConfig : public Darabonba::Model {
public:
  shared_ptr<string> token{};
  shared_ptr<string> uri{};

  GitLabConfig() {}

  explicit GitLabConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (uri) {
      res["uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
    if (m.find("uri") != m.end() && !m["uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["uri"]));
    }
  }


  virtual ~GitLabConfig() = default;
};
class ConnectionSpec : public Darabonba::Model {
public:
  shared_ptr<GitAccount> account{};
  shared_ptr<GitLabConfig> gitlabConfig{};
  shared_ptr<string> platform{};

  ConnectionSpec() {}

  explicit ConnectionSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gitlabConfig) {
      res["gitlabConfig"] = gitlabConfig ? boost::any(gitlabConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("account") != m.end() && !m["account"].empty()) {
      if (typeid(map<string, boost::any>) == m["account"].type()) {
        GitAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["account"]));
        account = make_shared<GitAccount>(model1);
      }
    }
    if (m.find("gitlabConfig") != m.end() && !m["gitlabConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gitlabConfig"].type()) {
        GitLabConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gitlabConfig"]));
        gitlabConfig = make_shared<GitLabConfig>(model1);
      }
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~ConnectionSpec() = default;
};
class Installation : public Darabonba::Model {
public:
  shared_ptr<string> actionUri{};
  shared_ptr<string> message{};
  shared_ptr<string> stage{};

  Installation() {}

  explicit Installation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionUri) {
      res["actionUri"] = boost::any(*actionUri);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (stage) {
      res["stage"] = boost::any(*stage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actionUri") != m.end() && !m["actionUri"].empty()) {
      actionUri = make_shared<string>(boost::any_cast<string>(m["actionUri"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("stage") != m.end() && !m["stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["stage"]));
    }
  }


  virtual ~Installation() = default;
};
class ConnectionStatus : public Darabonba::Model {
public:
  shared_ptr<Installation> installation{};

  ConnectionStatus() {}

  explicit ConnectionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (installation) {
      res["installation"] = installation ? boost::any(installation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("installation") != m.end() && !m["installation"].empty()) {
      if (typeid(map<string, boost::any>) == m["installation"].type()) {
        Installation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["installation"]));
        installation = make_shared<Installation>(model1);
      }
    }
  }


  virtual ~ConnectionStatus() = default;
};
class Connection : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<ConnectionSpec> spec{};
  shared_ptr<ConnectionStatus> status{};
  shared_ptr<string> uid{};

  Connection() {}

  explicit Connection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
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
        ConnectionSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<ConnectionSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        ConnectionStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<ConnectionStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~Connection() = default;
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
class InfraStackSpecTemplateSpec : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> engine{};

  InfraStackSpecTemplateSpec() {}

  explicit InfraStackSpecTemplateSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (engine) {
      res["engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("engine") != m.end() && !m["engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["engine"]));
    }
  }


  virtual ~InfraStackSpecTemplateSpec() = default;
};
class InfraStackSpec : public Darabonba::Model {
public:
  shared_ptr<string> regionID{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> templateName{};
  shared_ptr<InfraStackSpecTemplateSpec> templateSpec{};
  shared_ptr<map<string, boost::any>> templateVariables{};

  InfraStackSpec() {}

  explicit InfraStackSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionID) {
      res["regionID"] = boost::any(*regionID);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    if (templateSpec) {
      res["templateSpec"] = templateSpec ? boost::any(templateSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateVariables) {
      res["templateVariables"] = boost::any(*templateVariables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionID") != m.end() && !m["regionID"].empty()) {
      regionID = make_shared<string>(boost::any_cast<string>(m["regionID"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
    if (m.find("templateSpec") != m.end() && !m["templateSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateSpec"].type()) {
        InfraStackSpecTemplateSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateSpec"]));
        templateSpec = make_shared<InfraStackSpecTemplateSpec>(model1);
      }
    }
    if (m.find("templateVariables") != m.end() && !m["templateVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["templateVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateVariables = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~InfraStackSpec() = default;
};
class RepositoryConfig : public Darabonba::Model {
public:
  shared_ptr<string> branchName{};
  shared_ptr<string> manifest{};
  shared_ptr<string> repositoryName{};

  RepositoryConfig() {}

  explicit RepositoryConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branchName) {
      res["branchName"] = boost::any(*branchName);
    }
    if (manifest) {
      res["manifest"] = boost::any(*manifest);
    }
    if (repositoryName) {
      res["repositoryName"] = boost::any(*repositoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branchName") != m.end() && !m["branchName"].empty()) {
      branchName = make_shared<string>(boost::any_cast<string>(m["branchName"]));
    }
    if (m.find("manifest") != m.end() && !m["manifest"].empty()) {
      manifest = make_shared<string>(boost::any_cast<string>(m["manifest"]));
    }
    if (m.find("repositoryName") != m.end() && !m["repositoryName"].empty()) {
      repositoryName = make_shared<string>(boost::any_cast<string>(m["repositoryName"]));
    }
  }


  virtual ~RepositoryConfig() = default;
};
class TemplateConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> templateName{};

  TemplateConfig() {}

  explicit TemplateConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
  }


  virtual ~TemplateConfig() = default;
};
class EnvironmentSpecServiceOverlay : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> components{};
  shared_ptr<map<string, boost::any>> resources{};

  EnvironmentSpecServiceOverlay() {}

  explicit EnvironmentSpecServiceOverlay(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      res["components"] = boost::any(*components);
    }
    if (resources) {
      res["resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("components") != m.end() && !m["components"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["components"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      components = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resources"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resources = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~EnvironmentSpecServiceOverlay() = default;
};
class EnvironmentSpec : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<InfraStackSpec> infraStackConfig{};
  shared_ptr<bool> isAutoDeploy{};
  shared_ptr<RepositoryConfig> repositoryConfig{};
  shared_ptr<string> roleArn{};
  shared_ptr<EnvironmentSpecServiceOverlay> serviceOverlay{};
  shared_ptr<TemplateConfig> templateConfig{};
  shared_ptr<string> type{};

  EnvironmentSpec() {}

  explicit EnvironmentSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (infraStackConfig) {
      res["infraStackConfig"] = infraStackConfig ? boost::any(infraStackConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isAutoDeploy) {
      res["isAutoDeploy"] = boost::any(*isAutoDeploy);
    }
    if (repositoryConfig) {
      res["repositoryConfig"] = repositoryConfig ? boost::any(repositoryConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (serviceOverlay) {
      res["serviceOverlay"] = serviceOverlay ? boost::any(serviceOverlay->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateConfig) {
      res["templateConfig"] = templateConfig ? boost::any(templateConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("infraStackConfig") != m.end() && !m["infraStackConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["infraStackConfig"].type()) {
        InfraStackSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["infraStackConfig"]));
        infraStackConfig = make_shared<InfraStackSpec>(model1);
      }
    }
    if (m.find("isAutoDeploy") != m.end() && !m["isAutoDeploy"].empty()) {
      isAutoDeploy = make_shared<bool>(boost::any_cast<bool>(m["isAutoDeploy"]));
    }
    if (m.find("repositoryConfig") != m.end() && !m["repositoryConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["repositoryConfig"].type()) {
        RepositoryConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["repositoryConfig"]));
        repositoryConfig = make_shared<RepositoryConfig>(model1);
      }
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("serviceOverlay") != m.end() && !m["serviceOverlay"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceOverlay"].type()) {
        EnvironmentSpecServiceOverlay model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceOverlay"]));
        serviceOverlay = make_shared<EnvironmentSpecServiceOverlay>(model1);
      }
    }
    if (m.find("templateConfig") != m.end() && !m["templateConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateConfig"].type()) {
        TemplateConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateConfig"]));
        templateConfig = make_shared<TemplateConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~EnvironmentSpec() = default;
};
class ResourceDriftChange : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actions{};
  shared_ptr<boost::any> after{};
  shared_ptr<boost::any> before{};

  ResourceDriftChange() {}

  explicit ResourceDriftChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["actions"] = boost::any(*actions);
    }
    if (after) {
      res["after"] = boost::any(*after);
    }
    if (before) {
      res["before"] = boost::any(*before);
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
    if (m.find("after") != m.end() && !m["after"].empty()) {
      after = make_shared<boost::any>(boost::any_cast<boost::any>(m["after"]));
    }
    if (m.find("before") != m.end() && !m["before"].empty()) {
      before = make_shared<boost::any>(boost::any_cast<boost::any>(m["before"]));
    }
  }


  virtual ~ResourceDriftChange() = default;
};
class ResourceDrift : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<ResourceDriftChange> change{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ResourceDrift() {}

  explicit ResourceDrift(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (change) {
      res["change"] = change ? boost::any(change->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("change") != m.end() && !m["change"].empty()) {
      if (typeid(map<string, boost::any>) == m["change"].type()) {
        ResourceDriftChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["change"]));
        change = make_shared<ResourceDriftChange>(model1);
      }
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ResourceDrift() = default;
};
class ResourceDetail : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<map<string, boost::any>> attributeValues{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ResourceDetail() {}

  explicit ResourceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (attributeValues) {
      res["attributeValues"] = boost::any(*attributeValues);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("attributeValues") != m.end() && !m["attributeValues"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["attributeValues"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributeValues = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ResourceDetail() = default;
};
class InfraStackResourceState : public Darabonba::Model {
public:
  shared_ptr<vector<ResourceDrift>> resourceDrifts{};
  shared_ptr<vector<ResourceDetail>> resources{};

  InfraStackResourceState() {}

  explicit InfraStackResourceState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceDrifts) {
      vector<boost::any> temp1;
      for(auto item1:*resourceDrifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceDrifts"] = boost::any(temp1);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceDrifts") != m.end() && !m["resourceDrifts"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceDrifts"].type()) {
        vector<ResourceDrift> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceDrifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceDrift model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceDrifts = make_shared<vector<ResourceDrift>>(expect1);
      }
    }
    if (m.find("resources") != m.end() && !m["resources"].empty()) {
      if (typeid(vector<boost::any>) == m["resources"].type()) {
        vector<ResourceDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ResourceDetail>>(expect1);
      }
    }
  }


  virtual ~InfraStackResourceState() = default;
};
class TerraformOutputValue : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<bool> sensitive{};

  TerraformOutputValue() {}

  explicit TerraformOutputValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TerraformOutputValue() = default;
};
class TerraformInputVariable : public Darabonba::Model {
public:
  shared_ptr<string> defaultJson{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<bool> sensitive{};
  shared_ptr<string> type{};

  TerraformInputVariable() {}

  explicit TerraformInputVariable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TerraformInputVariable() = default;
};
class InfraStackStatusTemplateStatus : public Darabonba::Model {
public:
  shared_ptr<vector<TerraformOutputValue>> outputs{};
  shared_ptr<vector<TerraformInputVariable>> variables{};

  InfraStackStatusTemplateStatus() {}

  explicit InfraStackStatusTemplateStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["outputs"] = boost::any(temp1);
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
    if (m.find("outputs") != m.end() && !m["outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["outputs"].type()) {
        vector<TerraformOutputValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TerraformOutputValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<TerraformOutputValue>>(expect1);
      }
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<TerraformInputVariable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TerraformInputVariable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<TerraformInputVariable>>(expect1);
      }
    }
  }


  virtual ~InfraStackStatusTemplateStatus() = default;
};
class InfraStackStatus : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> observedGeneration{};
  shared_ptr<string> observedTime{};
  shared_ptr<string> phase{};
  shared_ptr<InfraStackResourceState> resourceState{};
  shared_ptr<map<string, boost::any>> templateOutputs{};
  shared_ptr<InfraStackStatusTemplateStatus> templateStatus{};

  InfraStackStatus() {}

  explicit InfraStackStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (resourceState) {
      res["resourceState"] = resourceState ? boost::any(resourceState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateOutputs) {
      res["templateOutputs"] = boost::any(*templateOutputs);
    }
    if (templateStatus) {
      res["templateStatus"] = templateStatus ? boost::any(templateStatus->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("resourceState") != m.end() && !m["resourceState"].empty()) {
      if (typeid(map<string, boost::any>) == m["resourceState"].type()) {
        InfraStackResourceState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resourceState"]));
        resourceState = make_shared<InfraStackResourceState>(model1);
      }
    }
    if (m.find("templateOutputs") != m.end() && !m["templateOutputs"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["templateOutputs"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateOutputs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("templateStatus") != m.end() && !m["templateStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateStatus"].type()) {
        InfraStackStatusTemplateStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateStatus"]));
        templateStatus = make_shared<InfraStackStatusTemplateStatus>(model1);
      }
    }
  }


  virtual ~InfraStackStatus() = default;
};
class GitEventSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commitID{};
  shared_ptr<string> tag{};

  GitEventSnapshot() {}

  explicit GitEventSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (commitID) {
      res["commitID"] = boost::any(*commitID);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commitID") != m.end() && !m["commitID"].empty()) {
      commitID = make_shared<string>(boost::any_cast<string>(m["commitID"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~GitEventSnapshot() = default;
};
class TaskExecError : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> title{};

  TaskExecError() {}

  explicit TaskExecError(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~TaskExecError() = default;
};
class RepositorySpec : public Darabonba::Model {
public:
  shared_ptr<string> cloneUrl{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> displayName{};
  shared_ptr<long> id{};
  shared_ptr<string> owner{};
  shared_ptr<string> platform{};
  shared_ptr<string> webUrl{};

  RepositorySpec() {}

  explicit RepositorySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloneUrl) {
      res["cloneUrl"] = boost::any(*cloneUrl);
    }
    if (connectionName) {
      res["connectionName"] = boost::any(*connectionName);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (webUrl) {
      res["webUrl"] = boost::any(*webUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cloneUrl") != m.end() && !m["cloneUrl"].empty()) {
      cloneUrl = make_shared<string>(boost::any_cast<string>(m["cloneUrl"]));
    }
    if (m.find("connectionName") != m.end() && !m["connectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["connectionName"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("webUrl") != m.end() && !m["webUrl"].empty()) {
      webUrl = make_shared<string>(boost::any_cast<string>(m["webUrl"]));
    }
  }


  virtual ~RepositorySpec() = default;
};
class ReleaseDetail : public Darabonba::Model {
public:
  shared_ptr<string> bizStatus{};
  shared_ptr<string> envName{};
  shared_ptr<string> finishedTime{};
  shared_ptr<GitEventSnapshot> gitEventSnapshot{};
  shared_ptr<TaskExecError> latestTaskExecError{};
  shared_ptr<string> message{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> pipelineTriggerEventName{};
  shared_ptr<map<string, boost::any>> releaseOutputs{};
  shared_ptr<RepositorySpec> repositorySnapshot{};
  shared_ptr<TemplateConfig> templateConfigSnapshot{};

  ReleaseDetail() {}

  explicit ReleaseDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizStatus) {
      res["bizStatus"] = boost::any(*bizStatus);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (finishedTime) {
      res["finishedTime"] = boost::any(*finishedTime);
    }
    if (gitEventSnapshot) {
      res["gitEventSnapshot"] = gitEventSnapshot ? boost::any(gitEventSnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (latestTaskExecError) {
      res["latestTaskExecError"] = latestTaskExecError ? boost::any(latestTaskExecError->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (pipelineTriggerEventName) {
      res["pipelineTriggerEventName"] = boost::any(*pipelineTriggerEventName);
    }
    if (releaseOutputs) {
      res["releaseOutputs"] = boost::any(*releaseOutputs);
    }
    if (repositorySnapshot) {
      res["repositorySnapshot"] = repositorySnapshot ? boost::any(repositorySnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateConfigSnapshot) {
      res["templateConfigSnapshot"] = templateConfigSnapshot ? boost::any(templateConfigSnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizStatus") != m.end() && !m["bizStatus"].empty()) {
      bizStatus = make_shared<string>(boost::any_cast<string>(m["bizStatus"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("finishedTime") != m.end() && !m["finishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["finishedTime"]));
    }
    if (m.find("gitEventSnapshot") != m.end() && !m["gitEventSnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["gitEventSnapshot"].type()) {
        GitEventSnapshot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gitEventSnapshot"]));
        gitEventSnapshot = make_shared<GitEventSnapshot>(model1);
      }
    }
    if (m.find("latestTaskExecError") != m.end() && !m["latestTaskExecError"].empty()) {
      if (typeid(map<string, boost::any>) == m["latestTaskExecError"].type()) {
        TaskExecError model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["latestTaskExecError"]));
        latestTaskExecError = make_shared<TaskExecError>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("pipelineTriggerEventName") != m.end() && !m["pipelineTriggerEventName"].empty()) {
      pipelineTriggerEventName = make_shared<string>(boost::any_cast<string>(m["pipelineTriggerEventName"]));
    }
    if (m.find("releaseOutputs") != m.end() && !m["releaseOutputs"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["releaseOutputs"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      releaseOutputs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("repositorySnapshot") != m.end() && !m["repositorySnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["repositorySnapshot"].type()) {
        RepositorySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["repositorySnapshot"]));
        repositorySnapshot = make_shared<RepositorySpec>(model1);
      }
    }
    if (m.find("templateConfigSnapshot") != m.end() && !m["templateConfigSnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateConfigSnapshot"].type()) {
        TemplateConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateConfigSnapshot"]));
        templateConfigSnapshot = make_shared<TemplateConfig>(model1);
      }
    }
  }


  virtual ~ReleaseDetail() = default;
};
class EnvironmentStatus : public Darabonba::Model {
public:
  shared_ptr<InfraStackStatus> infraStackStatus{};
  shared_ptr<ReleaseDetail> latestReleaseDetail{};
  shared_ptr<long> observedGeneration{};
  shared_ptr<string> observedTime{};

  EnvironmentStatus() {}

  explicit EnvironmentStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (infraStackStatus) {
      res["infraStackStatus"] = infraStackStatus ? boost::any(infraStackStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (latestReleaseDetail) {
      res["latestReleaseDetail"] = latestReleaseDetail ? boost::any(latestReleaseDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (observedGeneration) {
      res["observedGeneration"] = boost::any(*observedGeneration);
    }
    if (observedTime) {
      res["observedTime"] = boost::any(*observedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("infraStackStatus") != m.end() && !m["infraStackStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["infraStackStatus"].type()) {
        InfraStackStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["infraStackStatus"]));
        infraStackStatus = make_shared<InfraStackStatus>(model1);
      }
    }
    if (m.find("latestReleaseDetail") != m.end() && !m["latestReleaseDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["latestReleaseDetail"].type()) {
        ReleaseDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["latestReleaseDetail"]));
        latestReleaseDetail = make_shared<ReleaseDetail>(model1);
      }
    }
    if (m.find("observedGeneration") != m.end() && !m["observedGeneration"].empty()) {
      observedGeneration = make_shared<long>(boost::any_cast<long>(m["observedGeneration"]));
    }
    if (m.find("observedTime") != m.end() && !m["observedTime"].empty()) {
      observedTime = make_shared<string>(boost::any_cast<string>(m["observedTime"]));
    }
  }


  virtual ~EnvironmentStatus() = default;
};
class Environment : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> projectName{};
  shared_ptr<long> resourceVersion{};
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
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
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
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("resourceVersion") != m.end() && !m["resourceVersion"].empty()) {
      resourceVersion = make_shared<long>(boost::any_cast<long>(m["resourceVersion"]));
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
class PullRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> targetBranch{};
  shared_ptr<vector<string>> types{};

  PullRequestFilter() {}

  explicit PullRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceBranch) {
      res["sourceBranch"] = boost::any(*sourceBranch);
    }
    if (targetBranch) {
      res["targetBranch"] = boost::any(*targetBranch);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sourceBranch") != m.end() && !m["sourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["sourceBranch"]));
    }
    if (m.find("targetBranch") != m.end() && !m["targetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["targetBranch"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      types = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PullRequestFilter() = default;
};
class PushFilter : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> tag{};

  PushFilter() {}

  explicit PushFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~PushFilter() = default;
};
class EventFilterConfig : public Darabonba::Model {
public:
  shared_ptr<PullRequestFilter> pullRequest{};
  shared_ptr<PushFilter> push{};

  EventFilterConfig() {}

  explicit EventFilterConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pullRequest) {
      res["pullRequest"] = pullRequest ? boost::any(pullRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (push) {
      res["push"] = push ? boost::any(push->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pullRequest") != m.end() && !m["pullRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["pullRequest"].type()) {
        PullRequestFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pullRequest"]));
        pullRequest = make_shared<PullRequestFilter>(model1);
      }
    }
    if (m.find("push") != m.end() && !m["push"].empty()) {
      if (typeid(map<string, boost::any>) == m["push"].type()) {
        PushFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["push"]));
        push = make_shared<PushFilter>(model1);
      }
    }
  }


  virtual ~EventFilterConfig() = default;
};
class GiteeEventPayload : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> originalPayload{};

  GiteeEventPayload() {}

  explicit GiteeEventPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalPayload) {
      res["originalPayload"] = boost::any(*originalPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalPayload") != m.end() && !m["originalPayload"].empty()) {
      originalPayload = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["originalPayload"]));
    }
  }


  virtual ~GiteeEventPayload() = default;
};
class GithubEventPayload : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> originalPayload{};

  GithubEventPayload() {}

  explicit GithubEventPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalPayload) {
      res["originalPayload"] = boost::any(*originalPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalPayload") != m.end() && !m["originalPayload"].empty()) {
      originalPayload = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["originalPayload"]));
    }
  }


  virtual ~GithubEventPayload() = default;
};
class GitlabEventPayload : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> originalPayload{};

  GitlabEventPayload() {}

  explicit GitlabEventPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalPayload) {
      res["originalPayload"] = boost::any(*originalPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalPayload") != m.end() && !m["originalPayload"].empty()) {
      originalPayload = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["originalPayload"]));
    }
  }


  virtual ~GitlabEventPayload() = default;
};
class ManualEventPayload : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commitID{};
  shared_ptr<string> tag{};
  shared_ptr<TemplateConfig> templateConfig{};

  ManualEventPayload() {}

  explicit ManualEventPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (commitID) {
      res["commitID"] = boost::any(*commitID);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (templateConfig) {
      res["templateConfig"] = templateConfig ? boost::any(templateConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commitID") != m.end() && !m["commitID"].empty()) {
      commitID = make_shared<string>(boost::any_cast<string>(m["commitID"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("templateConfig") != m.end() && !m["templateConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateConfig"].type()) {
        TemplateConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateConfig"]));
        templateConfig = make_shared<TemplateConfig>(model1);
      }
    }
  }


  virtual ~ManualEventPayload() = default;
};
class EventPayload : public Darabonba::Model {
public:
  shared_ptr<CodeupEventPayload> codeup{};
  shared_ptr<GiteeEventPayload> gitee{};
  shared_ptr<GithubEventPayload> github{};
  shared_ptr<GitlabEventPayload> gitlab{};
  shared_ptr<ManualEventPayload> manual{};

  EventPayload() {}

  explicit EventPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeup) {
      res["codeup"] = codeup ? boost::any(codeup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gitee) {
      res["gitee"] = gitee ? boost::any(gitee->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (github) {
      res["github"] = github ? boost::any(github->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gitlab) {
      res["gitlab"] = gitlab ? boost::any(gitlab->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manual) {
      res["manual"] = manual ? boost::any(manual->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeup") != m.end() && !m["codeup"].empty()) {
      if (typeid(map<string, boost::any>) == m["codeup"].type()) {
        CodeupEventPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["codeup"]));
        codeup = make_shared<CodeupEventPayload>(model1);
      }
    }
    if (m.find("gitee") != m.end() && !m["gitee"].empty()) {
      if (typeid(map<string, boost::any>) == m["gitee"].type()) {
        GiteeEventPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gitee"]));
        gitee = make_shared<GiteeEventPayload>(model1);
      }
    }
    if (m.find("github") != m.end() && !m["github"].empty()) {
      if (typeid(map<string, boost::any>) == m["github"].type()) {
        GithubEventPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["github"]));
        github = make_shared<GithubEventPayload>(model1);
      }
    }
    if (m.find("gitlab") != m.end() && !m["gitlab"].empty()) {
      if (typeid(map<string, boost::any>) == m["gitlab"].type()) {
        GitlabEventPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gitlab"]));
        gitlab = make_shared<GitlabEventPayload>(model1);
      }
    }
    if (m.find("manual") != m.end() && !m["manual"].empty()) {
      if (typeid(map<string, boost::any>) == m["manual"].type()) {
        ManualEventPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["manual"]));
        manual = make_shared<ManualEventPayload>(model1);
      }
    }
  }


  virtual ~EventPayload() = default;
};
class OAuthCredential : public Darabonba::Model {
public:
  shared_ptr<long> createdTime{};
  shared_ptr<long> expiration{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> scope{};
  shared_ptr<string> token{};
  shared_ptr<string> type{};

  OAuthCredential() {}

  explicit OAuthCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
    }
    if (expiration) {
      res["expiration"] = boost::any(*expiration);
    }
    if (refreshToken) {
      res["refreshToken"] = boost::any(*refreshToken);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["createdTime"]));
    }
    if (m.find("expiration") != m.end() && !m["expiration"].empty()) {
      expiration = make_shared<long>(boost::any_cast<long>(m["expiration"]));
    }
    if (m.find("refreshToken") != m.end() && !m["refreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["refreshToken"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~OAuthCredential() = default;
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
class PipelineSpec : public Darabonba::Model {
public:
  shared_ptr<Context> context{};
  shared_ptr<string> templateName{};
  shared_ptr<PipelineTemplateSpec> templateSpec{};

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
    if (templateSpec) {
      res["templateSpec"] = templateSpec ? boost::any(templateSpec->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("templateSpec") != m.end() && !m["templateSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateSpec"].type()) {
        PipelineTemplateSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateSpec"]));
        templateSpec = make_shared<PipelineTemplateSpec>(model1);
      }
    }
  }


  virtual ~PipelineSpec() = default;
};
class PipelineStatus : public Darabonba::Model {
public:
  shared_ptr<TaskExecError> latestExecError{};
  shared_ptr<string> phase{};

  PipelineStatus() {}

  explicit PipelineStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latestExecError) {
      res["latestExecError"] = latestExecError ? boost::any(latestExecError->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("latestExecError") != m.end() && !m["latestExecError"].empty()) {
      if (typeid(map<string, boost::any>) == m["latestExecError"].type()) {
        TaskExecError model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["latestExecError"]));
        latestExecError = make_shared<TaskExecError>(model1);
      }
    }
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
class Variable : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  Variable() {}

  explicit Variable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Variable() = default;
};
class RunPipelineConfig : public Darabonba::Model {
public:
  shared_ptr<PipelineSpec> pipelineSpec{};
  shared_ptr<vector<Variable>> variables{};
  shared_ptr<string> yamlFileContent{};
  shared_ptr<string> yamlFilePath{};

  RunPipelineConfig() {}

  explicit RunPipelineConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipelineSpec) {
      res["pipelineSpec"] = pipelineSpec ? boost::any(pipelineSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    if (yamlFileContent) {
      res["yamlFileContent"] = boost::any(*yamlFileContent);
    }
    if (yamlFilePath) {
      res["yamlFilePath"] = boost::any(*yamlFilePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pipelineSpec") != m.end() && !m["pipelineSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineSpec"].type()) {
        PipelineSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineSpec"]));
        pipelineSpec = make_shared<PipelineSpec>(model1);
      }
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<Variable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Variable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<Variable>>(expect1);
      }
    }
    if (m.find("yamlFileContent") != m.end() && !m["yamlFileContent"].empty()) {
      yamlFileContent = make_shared<string>(boost::any_cast<string>(m["yamlFileContent"]));
    }
    if (m.find("yamlFilePath") != m.end() && !m["yamlFilePath"].empty()) {
      yamlFilePath = make_shared<string>(boost::any_cast<string>(m["yamlFilePath"]));
    }
  }


  virtual ~RunPipelineConfig() = default;
};
class PipelineTriggerSpec : public Darabonba::Model {
public:
  shared_ptr<EventFilterConfig> eventFilter{};
  shared_ptr<string> roleArn{};
  shared_ptr<RunPipelineConfig> runPipeline{};

  PipelineTriggerSpec() {}

  explicit PipelineTriggerSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventFilter) {
      res["eventFilter"] = eventFilter ? boost::any(eventFilter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (runPipeline) {
      res["runPipeline"] = runPipeline ? boost::any(runPipeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eventFilter") != m.end() && !m["eventFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["eventFilter"].type()) {
        EventFilterConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["eventFilter"]));
        eventFilter = make_shared<EventFilterConfig>(model1);
      }
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("runPipeline") != m.end() && !m["runPipeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["runPipeline"].type()) {
        RunPipelineConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["runPipeline"]));
        runPipeline = make_shared<RunPipelineConfig>(model1);
      }
    }
  }


  virtual ~PipelineTriggerSpec() = default;
};
class PipelineTrigger : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> projectName{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<PipelineTriggerSpec> spec{};
  shared_ptr<string> uid{};

  PipelineTrigger() {}

  explicit PipelineTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
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
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("resourceVersion") != m.end() && !m["resourceVersion"].empty()) {
      resourceVersion = make_shared<long>(boost::any_cast<long>(m["resourceVersion"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        PipelineTriggerSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<PipelineTriggerSpec>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~PipelineTrigger() = default;
};
class PipelineTriggerEventSpec : public Darabonba::Model {
public:
  shared_ptr<EventPayload> payload{};
  shared_ptr<string> triggerName{};

  PipelineTriggerEventSpec() {}

  explicit PipelineTriggerEventSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (triggerName) {
      res["triggerName"] = boost::any(*triggerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        EventPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<EventPayload>(model1);
      }
    }
    if (m.find("triggerName") != m.end() && !m["triggerName"].empty()) {
      triggerName = make_shared<string>(boost::any_cast<string>(m["triggerName"]));
    }
  }


  virtual ~PipelineTriggerEventSpec() = default;
};
class PipelineTriggerEventStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> firedPipelineName{};
  shared_ptr<ReleaseDetail> releaseDetail{};
  shared_ptr<string> status{};

  PipelineTriggerEventStatus() {}

  explicit PipelineTriggerEventStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (firedPipelineName) {
      res["firedPipelineName"] = boost::any(*firedPipelineName);
    }
    if (releaseDetail) {
      res["releaseDetail"] = releaseDetail ? boost::any(releaseDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("firedPipelineName") != m.end() && !m["firedPipelineName"].empty()) {
      firedPipelineName = make_shared<string>(boost::any_cast<string>(m["firedPipelineName"]));
    }
    if (m.find("releaseDetail") != m.end() && !m["releaseDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["releaseDetail"].type()) {
        ReleaseDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["releaseDetail"]));
        releaseDetail = make_shared<ReleaseDetail>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~PipelineTriggerEventStatus() = default;
};
class PipelineTriggerEvent : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<PipelineTriggerEventSpec> spec{};
  shared_ptr<PipelineTriggerEventStatus> status{};
  shared_ptr<string> uid{};

  PipelineTriggerEvent() {}

  explicit PipelineTriggerEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTriggerEventSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<PipelineTriggerEventSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        PipelineTriggerEventStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<PipelineTriggerEventStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~PipelineTriggerEvent() = default;
};
class ProjectSpec : public Darabonba::Model {
public:
  shared_ptr<string> roleArn{};
  shared_ptr<TemplateConfig> templateConfig{};
  shared_ptr<string> token{};

  ProjectSpec() {}

  explicit ProjectSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (templateConfig) {
      res["templateConfig"] = templateConfig ? boost::any(templateConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("templateConfig") != m.end() && !m["templateConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateConfig"].type()) {
        TemplateConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateConfig"]));
        templateConfig = make_shared<TemplateConfig>(model1);
      }
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~ProjectSpec() = default;
};
class ProjectStatus : public Darabonba::Model {
public:
  shared_ptr<ReleaseDetail> latestReleaseDetail{};
  shared_ptr<long> observedGeneration{};
  shared_ptr<string> observedTime{};

  ProjectStatus() {}

  explicit ProjectStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latestReleaseDetail) {
      res["latestReleaseDetail"] = latestReleaseDetail ? boost::any(latestReleaseDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (observedGeneration) {
      res["observedGeneration"] = boost::any(*observedGeneration);
    }
    if (observedTime) {
      res["observedTime"] = boost::any(*observedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("latestReleaseDetail") != m.end() && !m["latestReleaseDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["latestReleaseDetail"].type()) {
        ReleaseDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["latestReleaseDetail"]));
        latestReleaseDetail = make_shared<ReleaseDetail>(model1);
      }
    }
    if (m.find("observedGeneration") != m.end() && !m["observedGeneration"].empty()) {
      observedGeneration = make_shared<long>(boost::any_cast<long>(m["observedGeneration"]));
    }
    if (m.find("observedTime") != m.end() && !m["observedTime"].empty()) {
      observedTime = make_shared<string>(boost::any_cast<string>(m["observedTime"]));
    }
  }


  virtual ~ProjectStatus() = default;
};
class Project : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<ProjectSpec> spec{};
  shared_ptr<ProjectStatus> status{};
  shared_ptr<string> uid{};
  shared_ptr<string> updatedTime{};

  Project() {}

  explicit Project(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
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
    if (updatedTime) {
      res["updatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createdTime") != m.end() && !m["createdTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["createdTime"]));
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
        ProjectSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<ProjectSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        ProjectStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<ProjectStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("updatedTime") != m.end() && !m["updatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["updatedTime"]));
    }
  }


  virtual ~Project() = default;
};
class Repository : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<RepositorySpec> spec{};
  shared_ptr<string> uid{};

  Repository() {}

  explicit Repository(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["createdTime"] = boost::any(*createdTime);
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
        RepositorySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<RepositorySpec>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~Repository() = default;
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
class TaskInvocation : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> invocationID{};
  shared_ptr<string> invocationTarget{};
  shared_ptr<string> output{};
  shared_ptr<string> requestID{};
  shared_ptr<string> slsLogStore{};
  shared_ptr<string> slsProject{};
  shared_ptr<string> status{};

  TaskInvocation() {}

  explicit TaskInvocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["instanceID"] = boost::any(*instanceID);
    }
    if (invocationID) {
      res["invocationID"] = boost::any(*invocationID);
    }
    if (invocationTarget) {
      res["invocationTarget"] = boost::any(*invocationTarget);
    }
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (requestID) {
      res["requestID"] = boost::any(*requestID);
    }
    if (slsLogStore) {
      res["slsLogStore"] = boost::any(*slsLogStore);
    }
    if (slsProject) {
      res["slsProject"] = boost::any(*slsProject);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceID") != m.end() && !m["instanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["instanceID"]));
    }
    if (m.find("invocationID") != m.end() && !m["invocationID"].empty()) {
      invocationID = make_shared<string>(boost::any_cast<string>(m["invocationID"]));
    }
    if (m.find("invocationTarget") != m.end() && !m["invocationTarget"].empty()) {
      invocationTarget = make_shared<string>(boost::any_cast<string>(m["invocationTarget"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["output"]));
    }
    if (m.find("requestID") != m.end() && !m["requestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["requestID"]));
    }
    if (m.find("slsLogStore") != m.end() && !m["slsLogStore"].empty()) {
      slsLogStore = make_shared<string>(boost::any_cast<string>(m["slsLogStore"]));
    }
    if (m.find("slsProject") != m.end() && !m["slsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["slsProject"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~TaskInvocation() = default;
};
class TaskStatus : public Darabonba::Model {
public:
  shared_ptr<vector<string>> executionDetails{};
  shared_ptr<vector<TaskInvocation>> invocations{};
  shared_ptr<TaskExecError> latestExecError{};
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
    if (invocations) {
      vector<boost::any> temp1;
      for(auto item1:*invocations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["invocations"] = boost::any(temp1);
    }
    if (latestExecError) {
      res["latestExecError"] = latestExecError ? boost::any(latestExecError->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("invocations") != m.end() && !m["invocations"].empty()) {
      if (typeid(vector<boost::any>) == m["invocations"].type()) {
        vector<TaskInvocation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["invocations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskInvocation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invocations = make_shared<vector<TaskInvocation>>(expect1);
      }
    }
    if (m.find("latestExecError") != m.end() && !m["latestExecError"].empty()) {
      if (typeid(map<string, boost::any>) == m["latestExecError"].type()) {
        TaskExecError model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["latestExecError"]));
        latestExecError = make_shared<TaskExecError>(model1);
      }
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
class ActivateConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<GitAccount> account{};
  shared_ptr<OAuthCredential> credential{};

  ActivateConnectionRequest() {}

  explicit ActivateConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("account") != m.end() && !m["account"].empty()) {
      if (typeid(map<string, boost::any>) == m["account"].type()) {
        GitAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["account"]));
        account = make_shared<GitAccount>(model1);
      }
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        OAuthCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<OAuthCredential>(model1);
      }
    }
  }


  virtual ~ActivateConnectionRequest() = default;
};
class ActivateConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Connection> body{};

  ActivateConnectionResponse() {}

  explicit ActivateConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Connection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Connection>(model1);
      }
    }
  }


  virtual ~ActivateConnectionResponse() = default;
};
class CancelPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Pipeline> body{};

  CancelPipelineResponse() {}

  explicit CancelPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Pipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Pipeline>(model1);
      }
    }
  }


  virtual ~CancelPipelineResponse() = default;
};
class CancelTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Task> body{};

  CancelTaskResponse() {}

  explicit CancelTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~CancelTaskResponse() = default;
};
class CreateConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<Connection> body{};

  CreateConnectionRequest() {}

  explicit CreateConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Connection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Connection>(model1);
      }
    }
  }


  virtual ~CreateConnectionRequest() = default;
};
class CreateConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Connection> body{};

  CreateConnectionResponse() {}

  explicit CreateConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Connection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Connection>(model1);
      }
    }
  }


  virtual ~CreateConnectionResponse() = default;
};
class CreateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<Environment> body{};

  CreateEnvironmentRequest() {}

  explicit CreateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateEnvironmentRequest() = default;
};
class CreateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Environment> body{};

  CreateEnvironmentResponse() {}

  explicit CreateEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Environment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Environment>(model1);
      }
    }
  }


  virtual ~CreateEnvironmentResponse() = default;
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
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
  }


  virtual ~CreatePipelineTemplateResponse() = default;
};
class CreatePipelineTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<PipelineTrigger> body{};

  CreatePipelineTriggerRequest() {}

  explicit CreatePipelineTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTrigger>(model1);
      }
    }
  }


  virtual ~CreatePipelineTriggerRequest() = default;
};
class CreatePipelineTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTrigger> body{};

  CreatePipelineTriggerResponse() {}

  explicit CreatePipelineTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTrigger>(model1);
      }
    }
  }


  virtual ~CreatePipelineTriggerResponse() = default;
};
class CreatePipelineTriggerEventRequest : public Darabonba::Model {
public:
  shared_ptr<PipelineTriggerEvent> body{};

  CreatePipelineTriggerEventRequest() {}

  explicit CreatePipelineTriggerEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTriggerEvent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTriggerEvent>(model1);
      }
    }
  }


  virtual ~CreatePipelineTriggerEventRequest() = default;
};
class CreatePipelineTriggerEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTriggerEvent> body{};

  CreatePipelineTriggerEventResponse() {}

  explicit CreatePipelineTriggerEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTriggerEvent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTriggerEvent>(model1);
      }
    }
  }


  virtual ~CreatePipelineTriggerEventResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<Project> body{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Project> body{};

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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<Repository> body{};

  CreateRepositoryRequest() {}

  explicit CreateRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Repository model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Repository>(model1);
      }
    }
  }


  virtual ~CreateRepositoryRequest() = default;
};
class CreateRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Repository> body{};

  CreateRepositoryResponse() {}

  explicit CreateRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Repository model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Repository>(model1);
      }
    }
  }


  virtual ~CreateRepositoryResponse() = default;
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
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
  }


  virtual ~CreateTaskTemplateResponse() = default;
};
class DeleteConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> force{};

  DeleteConnectionRequest() {}

  explicit DeleteConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~DeleteConnectionRequest() = default;
};
class DeleteConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConnectionResponseBody() {}

  explicit DeleteConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConnectionResponseBody() = default;
};
class DeleteConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConnectionResponseBody> body{};

  DeleteConnectionResponse() {}

  explicit DeleteConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConnectionResponse() = default;
};
class DeleteEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteEnvironmentResponse() {}

  explicit DeleteEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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
        DeletePipelineTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineTemplateResponse() = default;
};
class DeletePipelineTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePipelineTriggerResponseBody() {}

  explicit DeletePipelineTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePipelineTriggerResponseBody() = default;
};
class DeletePipelineTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePipelineTriggerResponseBody> body{};

  DeletePipelineTriggerResponse() {}

  explicit DeletePipelineTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePipelineTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineTriggerResponse() = default;
};
class DeletePipelineTriggerEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePipelineTriggerEventResponseBody() {}

  explicit DeletePipelineTriggerEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePipelineTriggerEventResponseBody() = default;
};
class DeletePipelineTriggerEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePipelineTriggerEventResponseBody> body{};

  DeletePipelineTriggerEventResponse() {}

  explicit DeletePipelineTriggerEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePipelineTriggerEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineTriggerEventResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineTriggerEventResponse() = default;
};
class DeleteProjectRequest : public Darabonba::Model {
public:
  shared_ptr<bool> force{};

  DeleteProjectRequest() {}

  explicit DeleteProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~DeleteProjectRequest() = default;
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
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class DeleteRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRepositoryResponseBody() {}

  explicit DeleteRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRepositoryResponseBody() = default;
};
class DeleteRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRepositoryResponseBody> body{};

  DeleteRepositoryResponse() {}

  explicit DeleteRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryResponse() = default;
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
        DeleteTaskTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTaskTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTaskTemplateResponse() = default;
};
class FetchConnectionCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OAuthCredential> body{};

  FetchConnectionCredentialResponse() {}

  explicit FetchConnectionCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OAuthCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OAuthCredential>(model1);
      }
    }
  }


  virtual ~FetchConnectionCredentialResponse() = default;
};
class FetchRepositoryCheckoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commit{};
  shared_ptr<string> tag{};

  FetchRepositoryCheckoutRequest() {}

  explicit FetchRepositoryCheckoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tag) {
      res["tag"] = boost::any(*tag);
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
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~FetchRepositoryCheckoutRequest() = default;
};
class FetchRepositoryCheckoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Checkout> body{};

  FetchRepositoryCheckoutResponse() {}

  explicit FetchRepositoryCheckoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Checkout model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Checkout>(model1);
      }
    }
  }


  virtual ~FetchRepositoryCheckoutResponse() = default;
};
class GetConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Connection> body{};

  GetConnectionResponse() {}

  explicit GetConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Connection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Connection>(model1);
      }
    }
  }


  virtual ~GetConnectionResponse() = default;
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
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
  }


  virtual ~GetPipelineTemplateResponse() = default;
};
class GetPipelineTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTrigger> body{};

  GetPipelineTriggerResponse() {}

  explicit GetPipelineTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTrigger>(model1);
      }
    }
  }


  virtual ~GetPipelineTriggerResponse() = default;
};
class GetPipelineTriggerEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTriggerEvent> body{};

  GetPipelineTriggerEventResponse() {}

  explicit GetPipelineTriggerEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTriggerEvent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTriggerEvent>(model1);
      }
    }
  }


  virtual ~GetPipelineTriggerEventResponse() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Project> body{};

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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Repository> body{};

  GetRepositoryResponse() {}

  explicit GetRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Repository model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Repository>(model1);
      }
    }
  }


  virtual ~GetRepositoryResponse() = default;
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
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
  }


  virtual ~GetTaskTemplateResponse() = default;
};
class ListConnectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<vector<string>> labelSelector{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListConnectionsRequest() {}

  explicit ListConnectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
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
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListConnectionsRequest() = default;
};
class ListConnectionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> labelSelectorShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListConnectionsShrinkRequest() {}

  explicit ListConnectionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListConnectionsShrinkRequest() = default;
};
class ListConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Connection>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListConnectionsResponseBody() {}

  explicit ListConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Connection> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Connection model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Connection>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListConnectionsResponseBody() = default;
};
class ListConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConnectionsResponseBody> body{};

  ListConnectionsResponse() {}

  explicit ListConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConnectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnectionsResponse() = default;
};
class ListEnvironmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<vector<string>> labelSelector{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListEnvironmentsRequest() {}

  explicit ListEnvironmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
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
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEnvironmentsRequest() = default;
};
class ListEnvironmentsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> labelSelectorShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListEnvironmentsShrinkRequest() {}

  explicit ListEnvironmentsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEnvironmentsShrinkRequest() = default;
};
class ListEnvironmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Environment>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListEnvironmentsResponseBody() {}

  explicit ListEnvironmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Environment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Environment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Environment>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListEnvironmentsResponseBody() = default;
};
class ListEnvironmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentsResponseBody> body{};

  ListEnvironmentsResponse() {}

  explicit ListEnvironmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentsResponseBody>(model1);
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
class ListPipelineTriggerEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<vector<string>> labelSelector{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPipelineTriggerEventsRequest() {}

  explicit ListPipelineTriggerEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
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
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListPipelineTriggerEventsRequest() = default;
};
class ListPipelineTriggerEventsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> labelSelectorShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPipelineTriggerEventsShrinkRequest() {}

  explicit ListPipelineTriggerEventsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListPipelineTriggerEventsShrinkRequest() = default;
};
class ListPipelineTriggerEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<PipelineTriggerEvent>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListPipelineTriggerEventsResponseBody() {}

  explicit ListPipelineTriggerEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<PipelineTriggerEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PipelineTriggerEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PipelineTriggerEvent>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelineTriggerEventsResponseBody() = default;
};
class ListPipelineTriggerEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelineTriggerEventsResponseBody> body{};

  ListPipelineTriggerEventsResponse() {}

  explicit ListPipelineTriggerEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineTriggerEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineTriggerEventsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineTriggerEventsResponse() = default;
};
class ListPipelineTriggersRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<vector<string>> labelSelector{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPipelineTriggersRequest() {}

  explicit ListPipelineTriggersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
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
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListPipelineTriggersRequest() = default;
};
class ListPipelineTriggersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> labelSelectorShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPipelineTriggersShrinkRequest() {}

  explicit ListPipelineTriggersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListPipelineTriggersShrinkRequest() = default;
};
class ListPipelineTriggersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<PipelineTrigger>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListPipelineTriggersResponseBody() {}

  explicit ListPipelineTriggersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<PipelineTrigger> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PipelineTrigger model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PipelineTrigger>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelineTriggersResponseBody() = default;
};
class ListPipelineTriggersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPipelineTriggersResponseBody> body{};

  ListPipelineTriggersResponse() {}

  explicit ListPipelineTriggersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineTriggersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineTriggersResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineTriggersResponse() = default;
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
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<vector<string>> labelSelector{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
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
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> labelSelectorShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListProjectsShrinkRequest() {}

  explicit ListProjectsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListProjectsShrinkRequest() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Project>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Project> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Project model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Project>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
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
class ListRepositoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<vector<string>> labelSelector{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRepositoriesRequest() {}

  explicit ListRepositoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelector) {
      res["labelSelector"] = boost::any(*labelSelector);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
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
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListRepositoriesRequest() = default;
};
class ListRepositoriesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> labelSelectorShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRepositoriesShrinkRequest() {}

  explicit ListRepositoriesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (labelSelectorShrink) {
      res["labelSelector"] = boost::any(*labelSelectorShrink);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("labelSelector") != m.end() && !m["labelSelector"].empty()) {
      labelSelectorShrink = make_shared<string>(boost::any_cast<string>(m["labelSelector"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListRepositoriesShrinkRequest() = default;
};
class ListRepositoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Repository>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListRepositoriesResponseBody() {}

  explicit ListRepositoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<Repository> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Repository model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Repository>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListRepositoriesResponseBody() = default;
};
class ListRepositoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepositoriesResponseBody> body{};

  ListRepositoriesResponse() {}

  explicit ListRepositoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoriesResponse() = default;
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
class PutEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<Environment> body{};
  shared_ptr<bool> force{};

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
    if (force) {
      res["force"] = boost::any(*force);
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
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
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
        PipelineTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTemplate>(model1);
      }
    }
  }


  virtual ~PutPipelineTemplateResponse() = default;
};
class PutPipelineTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<PipelineTrigger> body{};
  shared_ptr<bool> force{};

  PutPipelineTriggerRequest() {}

  explicit PutPipelineTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTrigger>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~PutPipelineTriggerRequest() = default;
};
class PutPipelineTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTrigger> body{};

  PutPipelineTriggerResponse() {}

  explicit PutPipelineTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTrigger>(model1);
      }
    }
  }


  virtual ~PutPipelineTriggerResponse() = default;
};
class PutProjectRequest : public Darabonba::Model {
public:
  shared_ptr<Project> body{};
  shared_ptr<bool> force{};

  PutProjectRequest() {}

  explicit PutProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~PutProjectRequest() = default;
};
class PutProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Project> body{};

  PutProjectResponse() {}

  explicit PutProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
  }


  virtual ~PutProjectResponse() = default;
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
        TaskTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskTemplate>(model1);
      }
    }
  }


  virtual ~PutTaskTemplateResponse() = default;
};
class RefreshConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Connection> body{};

  RefreshConnectionResponse() {}

  explicit RefreshConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Connection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Connection>(model1);
      }
    }
  }


  virtual ~RefreshConnectionResponse() = default;
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~ResumeTaskResponse() = default;
};
class RetryTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Task> body{};

  RetryTaskResponse() {}

  explicit RetryTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~RetryTaskResponse() = default;
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
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Task>(model1);
      }
    }
  }


  virtual ~StartTaskResponse() = default;
};
class UpdateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<Environment> body{};

  UpdateEnvironmentRequest() {}

  explicit UpdateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateEnvironmentRequest() = default;
};
class UpdateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Environment> body{};

  UpdateEnvironmentResponse() {}

  explicit UpdateEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Environment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Environment>(model1);
      }
    }
  }


  virtual ~UpdateEnvironmentResponse() = default;
};
class UpdatePipelineTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<PipelineTrigger> body{};

  UpdatePipelineTriggerRequest() {}

  explicit UpdatePipelineTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTrigger>(model1);
      }
    }
  }


  virtual ~UpdatePipelineTriggerRequest() = default;
};
class UpdatePipelineTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PipelineTrigger> body{};

  UpdatePipelineTriggerResponse() {}

  explicit UpdatePipelineTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PipelineTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PipelineTrigger>(model1);
      }
    }
  }


  virtual ~UpdatePipelineTriggerResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<Project> body{};
  shared_ptr<bool> force{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Project> body{};

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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
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
  ActivateConnectionResponse activateConnectionWithOptions(shared_ptr<string> name,
                                                           shared_ptr<ActivateConnectionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateConnectionResponse activateConnection(shared_ptr<string> name, shared_ptr<ActivateConnectionRequest> request);
  CancelPipelineResponse cancelPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPipelineResponse cancelPipeline(shared_ptr<string> name);
  CancelTaskResponse cancelTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelTaskResponse cancelTask(shared_ptr<string> name);
  CreateConnectionResponse createConnectionWithOptions(shared_ptr<CreateConnectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConnectionResponse createConnection(shared_ptr<CreateConnectionRequest> request);
  CreateEnvironmentResponse createEnvironmentWithOptions(shared_ptr<string> project,
                                                         shared_ptr<CreateEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEnvironmentResponse createEnvironment(shared_ptr<string> project, shared_ptr<CreateEnvironmentRequest> request);
  CreatePipelineResponse createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineResponse createPipeline(shared_ptr<CreatePipelineRequest> request);
  CreatePipelineTemplateResponse createPipelineTemplateWithOptions(shared_ptr<CreatePipelineTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineTemplateResponse createPipelineTemplate(shared_ptr<CreatePipelineTemplateRequest> request);
  CreatePipelineTriggerResponse createPipelineTriggerWithOptions(shared_ptr<CreatePipelineTriggerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineTriggerResponse createPipelineTrigger(shared_ptr<CreatePipelineTriggerRequest> request);
  CreatePipelineTriggerEventResponse createPipelineTriggerEventWithOptions(shared_ptr<CreatePipelineTriggerEventRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineTriggerEventResponse createPipelineTriggerEvent(shared_ptr<CreatePipelineTriggerEventRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateRepositoryResponse createRepositoryWithOptions(shared_ptr<CreateRepositoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepositoryResponse createRepository(shared_ptr<CreateRepositoryRequest> request);
  CreateTaskResponse createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<CreateTaskRequest> request);
  CreateTaskTemplateResponse createTaskTemplateWithOptions(shared_ptr<CreateTaskTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskTemplateResponse createTaskTemplate(shared_ptr<CreateTaskTemplateRequest> request);
  DeleteConnectionResponse deleteConnectionWithOptions(shared_ptr<string> name,
                                                       shared_ptr<DeleteConnectionRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConnectionResponse deleteConnection(shared_ptr<string> name, shared_ptr<DeleteConnectionRequest> request);
  DeleteEnvironmentResponse deleteEnvironmentWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> name,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentResponse deleteEnvironment(shared_ptr<string> project, shared_ptr<string> name);
  DeletePipelineTemplateResponse deletePipelineTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineTemplateResponse deletePipelineTemplate(shared_ptr<string> name);
  DeletePipelineTriggerResponse deletePipelineTriggerWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineTriggerResponse deletePipelineTrigger(shared_ptr<string> name);
  DeletePipelineTriggerEventResponse deletePipelineTriggerEventWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineTriggerEventResponse deletePipelineTriggerEvent(shared_ptr<string> name);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> name,
                                                 shared_ptr<DeleteProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> name, shared_ptr<DeleteProjectRequest> request);
  DeleteRepositoryResponse deleteRepositoryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryResponse deleteRepository(shared_ptr<string> name);
  DeleteTaskTemplateResponse deleteTaskTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTaskTemplateResponse deleteTaskTemplate(shared_ptr<string> name);
  FetchConnectionCredentialResponse fetchConnectionCredentialWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchConnectionCredentialResponse fetchConnectionCredential(shared_ptr<string> name);
  FetchRepositoryCheckoutResponse fetchRepositoryCheckoutWithOptions(shared_ptr<string> name,
                                                                     shared_ptr<FetchRepositoryCheckoutRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchRepositoryCheckoutResponse fetchRepositoryCheckout(shared_ptr<string> name, shared_ptr<FetchRepositoryCheckoutRequest> request);
  GetConnectionResponse getConnectionWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionResponse getConnection(shared_ptr<string> name);
  GetEnvironmentResponse getEnvironmentWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> name,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentResponse getEnvironment(shared_ptr<string> project, shared_ptr<string> name);
  GetPipelineResponse getPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineResponse getPipeline(shared_ptr<string> name);
  GetPipelineTemplateResponse getPipelineTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineTemplateResponse getPipelineTemplate(shared_ptr<string> name);
  GetPipelineTriggerResponse getPipelineTriggerWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineTriggerResponse getPipelineTrigger(shared_ptr<string> name);
  GetPipelineTriggerEventResponse getPipelineTriggerEventWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineTriggerEventResponse getPipelineTriggerEvent(shared_ptr<string> name);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> name);
  GetRepositoryResponse getRepositoryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryResponse getRepository(shared_ptr<string> name);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> name);
  GetTaskTemplateResponse getTaskTemplateWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskTemplateResponse getTaskTemplate(shared_ptr<string> name);
  ListConnectionsResponse listConnectionsWithOptions(shared_ptr<ListConnectionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectionsResponse listConnections(shared_ptr<ListConnectionsRequest> request);
  ListEnvironmentsResponse listEnvironmentsWithOptions(shared_ptr<string> project,
                                                       shared_ptr<ListEnvironmentsRequest> tmpReq,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentsResponse listEnvironments(shared_ptr<string> project, shared_ptr<ListEnvironmentsRequest> request);
  ListPipelineTemplatesResponse listPipelineTemplatesWithOptions(shared_ptr<ListPipelineTemplatesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineTemplatesResponse listPipelineTemplates(shared_ptr<ListPipelineTemplatesRequest> request);
  ListPipelineTriggerEventsResponse listPipelineTriggerEventsWithOptions(shared_ptr<ListPipelineTriggerEventsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineTriggerEventsResponse listPipelineTriggerEvents(shared_ptr<ListPipelineTriggerEventsRequest> request);
  ListPipelineTriggersResponse listPipelineTriggersWithOptions(shared_ptr<ListPipelineTriggersRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineTriggersResponse listPipelineTriggers(shared_ptr<ListPipelineTriggersRequest> request);
  ListPipelinesResponse listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelinesResponse listPipelines(shared_ptr<ListPipelinesRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListRepositoriesResponse listRepositoriesWithOptions(shared_ptr<ListRepositoriesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoriesResponse listRepositories(shared_ptr<ListRepositoriesRequest> request);
  ListTaskTemplatesResponse listTaskTemplatesWithOptions(shared_ptr<ListTaskTemplatesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskTemplatesResponse listTaskTemplates(shared_ptr<ListTaskTemplatesRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  PutEnvironmentResponse putEnvironmentWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> name,
                                                   shared_ptr<PutEnvironmentRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEnvironmentResponse putEnvironment(shared_ptr<string> project, shared_ptr<string> name, shared_ptr<PutEnvironmentRequest> request);
  PutPipelineStatusResponse putPipelineStatusWithOptions(shared_ptr<string> name,
                                                         shared_ptr<PutPipelineStatusRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutPipelineStatusResponse putPipelineStatus(shared_ptr<string> name, shared_ptr<PutPipelineStatusRequest> request);
  PutPipelineTemplateResponse putPipelineTemplateWithOptions(shared_ptr<string> name,
                                                             shared_ptr<PutPipelineTemplateRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutPipelineTemplateResponse putPipelineTemplate(shared_ptr<string> name, shared_ptr<PutPipelineTemplateRequest> request);
  PutPipelineTriggerResponse putPipelineTriggerWithOptions(shared_ptr<string> name,
                                                           shared_ptr<PutPipelineTriggerRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutPipelineTriggerResponse putPipelineTrigger(shared_ptr<string> name, shared_ptr<PutPipelineTriggerRequest> request);
  PutProjectResponse putProjectWithOptions(shared_ptr<string> name,
                                           shared_ptr<PutProjectRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProjectResponse putProject(shared_ptr<string> name, shared_ptr<PutProjectRequest> request);
  PutTaskStatusResponse putTaskStatusWithOptions(shared_ptr<string> name,
                                                 shared_ptr<PutTaskStatusRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutTaskStatusResponse putTaskStatus(shared_ptr<string> name, shared_ptr<PutTaskStatusRequest> request);
  PutTaskTemplateResponse putTaskTemplateWithOptions(shared_ptr<string> name,
                                                     shared_ptr<PutTaskTemplateRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutTaskTemplateResponse putTaskTemplate(shared_ptr<string> name, shared_ptr<PutTaskTemplateRequest> request);
  RefreshConnectionResponse refreshConnectionWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshConnectionResponse refreshConnection(shared_ptr<string> name);
  ResumeTaskResponse resumeTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeTaskResponse resumeTask(shared_ptr<string> name);
  RetryTaskResponse retryTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryTaskResponse retryTask(shared_ptr<string> name);
  StartPipelineResponse startPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartPipelineResponse startPipeline(shared_ptr<string> name);
  StartTaskResponse startTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTaskResponse startTask(shared_ptr<string> name);
  UpdateEnvironmentResponse updateEnvironmentWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> name,
                                                         shared_ptr<UpdateEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnvironmentResponse updateEnvironment(shared_ptr<string> project, shared_ptr<string> name, shared_ptr<UpdateEnvironmentRequest> request);
  UpdatePipelineTriggerResponse updatePipelineTriggerWithOptions(shared_ptr<string> name,
                                                                 shared_ptr<UpdatePipelineTriggerRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePipelineTriggerResponse updatePipelineTrigger(shared_ptr<string> name, shared_ptr<UpdatePipelineTriggerRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> name,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> name, shared_ptr<UpdateProjectRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Devs20230714

#endif
