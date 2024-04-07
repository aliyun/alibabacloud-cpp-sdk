// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EASYGENE20210315_H_
#define ALIBABACLOUD_EASYGENE20210315_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EasyGene20210315 {
class AbortRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> runId{};
  shared_ptr<string> workspace{};

  AbortRunRequest() {}

  explicit AbortRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~AbortRunRequest() = default;
};
class AbortRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  AbortRunResponseBody() {}

  explicit AbortRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbortRunResponseBody() = default;
};
class AbortRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbortRunResponseBody> body{};

  AbortRunResponse() {}

  explicit AbortRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbortRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbortRunResponseBody>(model1);
      }
    }
  }


  virtual ~AbortRunResponse() = default;
};
class AbortSubmissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  AbortSubmissionRequest() {}

  explicit AbortSubmissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~AbortSubmissionRequest() = default;
};
class AbortSubmissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  AbortSubmissionResponseBody() {}

  explicit AbortSubmissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbortSubmissionResponseBody() = default;
};
class AbortSubmissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbortSubmissionResponseBody> body{};

  AbortSubmissionResponse() {}

  explicit AbortSubmissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbortSubmissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbortSubmissionResponseBody>(model1);
      }
    }
  }


  virtual ~AbortSubmissionResponse() = default;
};
class CopyPublicEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataset{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  CopyPublicEntityRequest() {}

  explicit CopyPublicEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataset) {
      res["Dataset"] = boost::any(*dataset);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      dataset = make_shared<string>(boost::any_cast<string>(m["Dataset"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CopyPublicEntityRequest() = default;
};
class CopyPublicEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  CopyPublicEntityResponseBody() {}

  explicit CopyPublicEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CopyPublicEntityResponseBody() = default;
};
class CopyPublicEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CopyPublicEntityResponseBody> body{};

  CopyPublicEntityResponse() {}

  explicit CopyPublicEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CopyPublicEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CopyPublicEntityResponseBody>(model1);
      }
    }
  }


  virtual ~CopyPublicEntityResponse() = default;
};
class CreateAppRequestConfigs : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> path{};

  CreateAppRequestConfigs() {}

  explicit CreateAppRequestConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateAppRequestConfigs() = default;
};
class CreateAppRequestDependencies : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> path{};

  CreateAppRequestDependencies() {}

  explicit CreateAppRequestDependencies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateAppRequestDependencies() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<CreateAppRequestConfigs>> configs{};
  shared_ptr<string> definition{};
  shared_ptr<vector<CreateAppRequestDependencies>> dependencies{};
  shared_ptr<string> description{};
  shared_ptr<string> documentation{};
  shared_ptr<string> labels{};
  shared_ptr<string> language{};
  shared_ptr<string> languageVersion{};
  shared_ptr<string> path{};
  shared_ptr<string> revisionComment{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (dependencies) {
      vector<boost::any> temp1;
      for(auto item1:*dependencies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dependencies"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentation) {
      res["Documentation"] = boost::any(*documentation);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (languageVersion) {
      res["LanguageVersion"] = boost::any(*languageVersion);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (revisionComment) {
      res["RevisionComment"] = boost::any(*revisionComment);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<CreateAppRequestConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppRequestConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<CreateAppRequestConfigs>>(expect1);
      }
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      if (typeid(vector<boost::any>) == m["Dependencies"].type()) {
        vector<CreateAppRequestDependencies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dependencies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppRequestDependencies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dependencies = make_shared<vector<CreateAppRequestDependencies>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Documentation") != m.end() && !m["Documentation"].empty()) {
      documentation = make_shared<string>(boost::any_cast<string>(m["Documentation"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LanguageVersion") != m.end() && !m["LanguageVersion"].empty()) {
      languageVersion = make_shared<string>(boost::any_cast<string>(m["LanguageVersion"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RevisionComment") != m.end() && !m["RevisionComment"].empty()) {
      revisionComment = make_shared<string>(boost::any_cast<string>(m["RevisionComment"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> configsShrink{};
  shared_ptr<string> definition{};
  shared_ptr<string> dependenciesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> documentation{};
  shared_ptr<string> labels{};
  shared_ptr<string> language{};
  shared_ptr<string> languageVersion{};
  shared_ptr<string> path{};
  shared_ptr<string> revisionComment{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  CreateAppShrinkRequest() {}

  explicit CreateAppShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configsShrink) {
      res["Configs"] = boost::any(*configsShrink);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (dependenciesShrink) {
      res["Dependencies"] = boost::any(*dependenciesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentation) {
      res["Documentation"] = boost::any(*documentation);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (languageVersion) {
      res["LanguageVersion"] = boost::any(*languageVersion);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (revisionComment) {
      res["RevisionComment"] = boost::any(*revisionComment);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      configsShrink = make_shared<string>(boost::any_cast<string>(m["Configs"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependenciesShrink = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Documentation") != m.end() && !m["Documentation"].empty()) {
      documentation = make_shared<string>(boost::any_cast<string>(m["Documentation"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LanguageVersion") != m.end() && !m["LanguageVersion"].empty()) {
      languageVersion = make_shared<string>(boost::any_cast<string>(m["LanguageVersion"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RevisionComment") != m.end() && !m["RevisionComment"].empty()) {
      revisionComment = make_shared<string>(boost::any_cast<string>(m["RevisionComment"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateAppShrinkRequest() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> revision{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<string>(boost::any_cast<string>(m["Revision"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateEntityRequestEntityItems : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> entityData{};
  shared_ptr<string> entityName{};

  CreateEntityRequestEntityItems() {}

  explicit CreateEntityRequestEntityItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityData) {
      res["EntityData"] = boost::any(*entityData);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityData") != m.end() && !m["EntityData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EntityData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entityData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~CreateEntityRequestEntityItems() = default;
};
class CreateEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<CreateEntityRequestEntityItems>> entityItems{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  CreateEntityRequest() {}

  explicit CreateEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (entityItems) {
      vector<boost::any> temp1;
      for(auto item1:*entityItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityItems"] = boost::any(temp1);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityItems"].type()) {
        vector<CreateEntityRequestEntityItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEntityRequestEntityItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityItems = make_shared<vector<CreateEntityRequestEntityItems>>(expect1);
      }
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateEntityRequest() = default;
};
class CreateEntityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> entityItemsShrink{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  CreateEntityShrinkRequest() {}

  explicit CreateEntityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (entityItemsShrink) {
      res["EntityItems"] = boost::any(*entityItemsShrink);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      entityItemsShrink = make_shared<string>(boost::any_cast<string>(m["EntityItems"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateEntityShrinkRequest() = default;
};
class CreateEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  CreateEntityResponseBody() {}

  explicit CreateEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateEntityResponseBody() = default;
};
class CreateEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEntityResponseBody> body{};

  CreateEntityResponse() {}

  explicit CreateEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEntityResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEntityResponse() = default;
};
class CreateRunRequestExecuteOptions : public Darabonba::Model {
public:
  shared_ptr<bool> callCaching{};
  shared_ptr<bool> deleteIntermediateResults{};
  shared_ptr<string> failureMode{};
  shared_ptr<bool> useRelativeOutputPaths{};

  CreateRunRequestExecuteOptions() {}

  explicit CreateRunRequestExecuteOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callCaching) {
      res["CallCaching"] = boost::any(*callCaching);
    }
    if (deleteIntermediateResults) {
      res["DeleteIntermediateResults"] = boost::any(*deleteIntermediateResults);
    }
    if (failureMode) {
      res["FailureMode"] = boost::any(*failureMode);
    }
    if (useRelativeOutputPaths) {
      res["UseRelativeOutputPaths"] = boost::any(*useRelativeOutputPaths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallCaching") != m.end() && !m["CallCaching"].empty()) {
      callCaching = make_shared<bool>(boost::any_cast<bool>(m["CallCaching"]));
    }
    if (m.find("DeleteIntermediateResults") != m.end() && !m["DeleteIntermediateResults"].empty()) {
      deleteIntermediateResults = make_shared<bool>(boost::any_cast<bool>(m["DeleteIntermediateResults"]));
    }
    if (m.find("FailureMode") != m.end() && !m["FailureMode"].empty()) {
      failureMode = make_shared<string>(boost::any_cast<string>(m["FailureMode"]));
    }
    if (m.find("UseRelativeOutputPaths") != m.end() && !m["UseRelativeOutputPaths"].empty()) {
      useRelativeOutputPaths = make_shared<bool>(boost::any_cast<bool>(m["UseRelativeOutputPaths"]));
    }
  }


  virtual ~CreateRunRequestExecuteOptions() = default;
};
class CreateRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> defaultRuntime{};
  shared_ptr<string> description{};
  shared_ptr<string> executeDirectory{};
  shared_ptr<CreateRunRequestExecuteOptions> executeOptions{};
  shared_ptr<string> inputs{};
  shared_ptr<string> labels{};
  shared_ptr<string> outputFolder{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> role{};
  shared_ptr<string> runName{};
  shared_ptr<string> workspace{};

  CreateRunRequest() {}

  explicit CreateRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (defaultRuntime) {
      res["DefaultRuntime"] = boost::any(*defaultRuntime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executeDirectory) {
      res["ExecuteDirectory"] = boost::any(*executeDirectory);
    }
    if (executeOptions) {
      res["ExecuteOptions"] = executeOptions ? boost::any(executeOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inputs) {
      res["Inputs"] = boost::any(*inputs);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (outputFolder) {
      res["OutputFolder"] = boost::any(*outputFolder);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (runName) {
      res["RunName"] = boost::any(*runName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DefaultRuntime") != m.end() && !m["DefaultRuntime"].empty()) {
      defaultRuntime = make_shared<string>(boost::any_cast<string>(m["DefaultRuntime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecuteDirectory") != m.end() && !m["ExecuteDirectory"].empty()) {
      executeDirectory = make_shared<string>(boost::any_cast<string>(m["ExecuteDirectory"]));
    }
    if (m.find("ExecuteOptions") != m.end() && !m["ExecuteOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecuteOptions"].type()) {
        CreateRunRequestExecuteOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecuteOptions"]));
        executeOptions = make_shared<CreateRunRequestExecuteOptions>(model1);
      }
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      inputs = make_shared<string>(boost::any_cast<string>(m["Inputs"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("OutputFolder") != m.end() && !m["OutputFolder"].empty()) {
      outputFolder = make_shared<string>(boost::any_cast<string>(m["OutputFolder"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RunName") != m.end() && !m["RunName"].empty()) {
      runName = make_shared<string>(boost::any_cast<string>(m["RunName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateRunRequest() = default;
};
class CreateRunShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> defaultRuntime{};
  shared_ptr<string> description{};
  shared_ptr<string> executeDirectory{};
  shared_ptr<string> executeOptionsShrink{};
  shared_ptr<string> inputs{};
  shared_ptr<string> labels{};
  shared_ptr<string> outputFolder{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> role{};
  shared_ptr<string> runName{};
  shared_ptr<string> workspace{};

  CreateRunShrinkRequest() {}

  explicit CreateRunShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (defaultRuntime) {
      res["DefaultRuntime"] = boost::any(*defaultRuntime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executeDirectory) {
      res["ExecuteDirectory"] = boost::any(*executeDirectory);
    }
    if (executeOptionsShrink) {
      res["ExecuteOptions"] = boost::any(*executeOptionsShrink);
    }
    if (inputs) {
      res["Inputs"] = boost::any(*inputs);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (outputFolder) {
      res["OutputFolder"] = boost::any(*outputFolder);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (runName) {
      res["RunName"] = boost::any(*runName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DefaultRuntime") != m.end() && !m["DefaultRuntime"].empty()) {
      defaultRuntime = make_shared<string>(boost::any_cast<string>(m["DefaultRuntime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecuteDirectory") != m.end() && !m["ExecuteDirectory"].empty()) {
      executeDirectory = make_shared<string>(boost::any_cast<string>(m["ExecuteDirectory"]));
    }
    if (m.find("ExecuteOptions") != m.end() && !m["ExecuteOptions"].empty()) {
      executeOptionsShrink = make_shared<string>(boost::any_cast<string>(m["ExecuteOptions"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      inputs = make_shared<string>(boost::any_cast<string>(m["Inputs"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("OutputFolder") != m.end() && !m["OutputFolder"].empty()) {
      outputFolder = make_shared<string>(boost::any_cast<string>(m["OutputFolder"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RunName") != m.end() && !m["RunName"].empty()) {
      runName = make_shared<string>(boost::any_cast<string>(m["RunName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateRunShrinkRequest() = default;
};
class CreateRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> runId{};
  shared_ptr<string> workspace{};

  CreateRunResponseBody() {}

  explicit CreateRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateRunResponseBody() = default;
};
class CreateRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRunResponseBody> body{};

  CreateRunResponse() {}

  explicit CreateRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRunResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRunResponse() = default;
};
class CreateSubmissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> defaultRuntime{};
  shared_ptr<vector<string>> entityNames{};
  shared_ptr<string> entityType{};
  shared_ptr<string> executeDirectory{};
  shared_ptr<string> executeOptions{};
  shared_ptr<string> inputs{};
  shared_ptr<string> outputFolder{};
  shared_ptr<string> outputs{};
  shared_ptr<string> revision{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  CreateSubmissionRequest() {}

  explicit CreateSubmissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (defaultRuntime) {
      res["DefaultRuntime"] = boost::any(*defaultRuntime);
    }
    if (entityNames) {
      res["EntityNames"] = boost::any(*entityNames);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (executeDirectory) {
      res["ExecuteDirectory"] = boost::any(*executeDirectory);
    }
    if (executeOptions) {
      res["ExecuteOptions"] = boost::any(*executeOptions);
    }
    if (inputs) {
      res["Inputs"] = boost::any(*inputs);
    }
    if (outputFolder) {
      res["OutputFolder"] = boost::any(*outputFolder);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DefaultRuntime") != m.end() && !m["DefaultRuntime"].empty()) {
      defaultRuntime = make_shared<string>(boost::any_cast<string>(m["DefaultRuntime"]));
    }
    if (m.find("EntityNames") != m.end() && !m["EntityNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EntityNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EntityNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entityNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ExecuteDirectory") != m.end() && !m["ExecuteDirectory"].empty()) {
      executeDirectory = make_shared<string>(boost::any_cast<string>(m["ExecuteDirectory"]));
    }
    if (m.find("ExecuteOptions") != m.end() && !m["ExecuteOptions"].empty()) {
      executeOptions = make_shared<string>(boost::any_cast<string>(m["ExecuteOptions"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      inputs = make_shared<string>(boost::any_cast<string>(m["Inputs"]));
    }
    if (m.find("OutputFolder") != m.end() && !m["OutputFolder"].empty()) {
      outputFolder = make_shared<string>(boost::any_cast<string>(m["OutputFolder"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<string>(boost::any_cast<string>(m["Revision"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateSubmissionRequest() = default;
};
class CreateSubmissionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> defaultRuntime{};
  shared_ptr<string> entityNamesShrink{};
  shared_ptr<string> entityType{};
  shared_ptr<string> executeDirectory{};
  shared_ptr<string> executeOptions{};
  shared_ptr<string> inputs{};
  shared_ptr<string> outputFolder{};
  shared_ptr<string> outputs{};
  shared_ptr<string> revision{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  CreateSubmissionShrinkRequest() {}

  explicit CreateSubmissionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (defaultRuntime) {
      res["DefaultRuntime"] = boost::any(*defaultRuntime);
    }
    if (entityNamesShrink) {
      res["EntityNames"] = boost::any(*entityNamesShrink);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (executeDirectory) {
      res["ExecuteDirectory"] = boost::any(*executeDirectory);
    }
    if (executeOptions) {
      res["ExecuteOptions"] = boost::any(*executeOptions);
    }
    if (inputs) {
      res["Inputs"] = boost::any(*inputs);
    }
    if (outputFolder) {
      res["OutputFolder"] = boost::any(*outputFolder);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DefaultRuntime") != m.end() && !m["DefaultRuntime"].empty()) {
      defaultRuntime = make_shared<string>(boost::any_cast<string>(m["DefaultRuntime"]));
    }
    if (m.find("EntityNames") != m.end() && !m["EntityNames"].empty()) {
      entityNamesShrink = make_shared<string>(boost::any_cast<string>(m["EntityNames"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ExecuteDirectory") != m.end() && !m["ExecuteDirectory"].empty()) {
      executeDirectory = make_shared<string>(boost::any_cast<string>(m["ExecuteDirectory"]));
    }
    if (m.find("ExecuteOptions") != m.end() && !m["ExecuteOptions"].empty()) {
      executeOptions = make_shared<string>(boost::any_cast<string>(m["ExecuteOptions"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      inputs = make_shared<string>(boost::any_cast<string>(m["Inputs"]));
    }
    if (m.find("OutputFolder") != m.end() && !m["OutputFolder"].empty()) {
      outputFolder = make_shared<string>(boost::any_cast<string>(m["OutputFolder"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<string>(boost::any_cast<string>(m["Revision"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateSubmissionShrinkRequest() = default;
};
class CreateSubmissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  CreateSubmissionResponseBody() {}

  explicit CreateSubmissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateSubmissionResponseBody() = default;
};
class CreateSubmissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubmissionResponseBody> body{};

  CreateSubmissionResponse() {}

  explicit CreateSubmissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSubmissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubmissionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubmissionResponse() = default;
};
class CreateTemplateRequestInputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  CreateTemplateRequestInputsExpression() {}

  explicit CreateTemplateRequestInputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~CreateTemplateRequestInputsExpression() = default;
};
class CreateTemplateRequestOutputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  CreateTemplateRequestOutputsExpression() {}

  explicit CreateTemplateRequestOutputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~CreateTemplateRequestOutputsExpression() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<vector<CreateTemplateRequestInputsExpression>> inputsExpression{};
  shared_ptr<string> labels{};
  shared_ptr<vector<CreateTemplateRequestOutputsExpression>> outputsExpression{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> rootEntity{};
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*inputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputsExpression"] = boost::any(temp1);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (outputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*outputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputsExpression"] = boost::any(temp1);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (rootEntity) {
      res["RootEntity"] = boost::any(*rootEntity);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputsExpression") != m.end() && !m["InputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["InputsExpression"].type()) {
        vector<CreateTemplateRequestInputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateRequestInputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputsExpression = make_shared<vector<CreateTemplateRequestInputsExpression>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("OutputsExpression") != m.end() && !m["OutputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputsExpression"].type()) {
        vector<CreateTemplateRequestOutputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateRequestOutputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputsExpression = make_shared<vector<CreateTemplateRequestOutputsExpression>>(expect1);
      }
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("RootEntity") != m.end() && !m["RootEntity"].empty()) {
      rootEntity = make_shared<string>(boost::any_cast<string>(m["RootEntity"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> inputsExpressionShrink{};
  shared_ptr<string> labels{};
  shared_ptr<string> outputsExpressionShrink{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> rootEntity{};
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  CreateTemplateShrinkRequest() {}

  explicit CreateTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputsExpressionShrink) {
      res["InputsExpression"] = boost::any(*inputsExpressionShrink);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (outputsExpressionShrink) {
      res["OutputsExpression"] = boost::any(*outputsExpressionShrink);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (rootEntity) {
      res["RootEntity"] = boost::any(*rootEntity);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputsExpression") != m.end() && !m["InputsExpression"].empty()) {
      inputsExpressionShrink = make_shared<string>(boost::any_cast<string>(m["InputsExpression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("OutputsExpression") != m.end() && !m["OutputsExpression"].empty()) {
      outputsExpressionShrink = make_shared<string>(boost::any_cast<string>(m["OutputsExpression"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("RootEntity") != m.end() && !m["RootEntity"].empty()) {
      rootEntity = make_shared<string>(boost::any_cast<string>(m["RootEntity"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateTemplateShrinkRequest() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateTemplateResponseBody() = default;
};
class CreateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class CreateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<long> jobLifecycle{};
  shared_ptr<string> labels{};
  shared_ptr<string> role{};
  shared_ptr<string> storage{};
  shared_ptr<string> workspace{};

  CreateWorkspaceRequest() {}

  explicit CreateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jobLifecycle) {
      res["JobLifecycle"] = boost::any(*jobLifecycle);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JobLifecycle") != m.end() && !m["JobLifecycle"].empty()) {
      jobLifecycle = make_shared<long>(boost::any_cast<long>(m["JobLifecycle"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["Storage"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateWorkspaceRequest() = default;
};
class CreateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  CreateWorkspaceResponseBody() {}

  explicit CreateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~CreateWorkspaceResponseBody() = default;
};
class CreateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkspaceResponseBody> body{};

  CreateWorkspaceResponse() {}

  explicit CreateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> revision{};
  shared_ptr<string> workspace{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<string>(boost::any_cast<string>(m["Revision"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  DeleteEntityRequest() {}

  explicit DeleteEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteEntityRequest() = default;
};
class DeleteEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DeleteEntityResponseBody() {}

  explicit DeleteEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteEntityResponseBody() = default;
};
class DeleteEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEntityResponseBody> body{};

  DeleteEntityResponse() {}

  explicit DeleteEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEntityResponse() = default;
};
class DeleteEntityItemsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> entityNames{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  DeleteEntityItemsRequest() {}

  explicit DeleteEntityItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityNames) {
      res["EntityNames"] = boost::any(*entityNames);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityNames") != m.end() && !m["EntityNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EntityNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EntityNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entityNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteEntityItemsRequest() = default;
};
class DeleteEntityItemsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityNamesShrink{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  DeleteEntityItemsShrinkRequest() {}

  explicit DeleteEntityItemsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityNamesShrink) {
      res["EntityNames"] = boost::any(*entityNamesShrink);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityNames") != m.end() && !m["EntityNames"].empty()) {
      entityNamesShrink = make_shared<string>(boost::any_cast<string>(m["EntityNames"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteEntityItemsShrinkRequest() = default;
};
class DeleteEntityItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DeleteEntityItemsResponseBody() {}

  explicit DeleteEntityItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteEntityItemsResponseBody() = default;
};
class DeleteEntityItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEntityItemsResponseBody> body{};

  DeleteEntityItemsResponse() {}

  explicit DeleteEntityItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEntityItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEntityItemsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEntityItemsResponse() = default;
};
class DeleteRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> runId{};
  shared_ptr<string> workspace{};

  DeleteRunRequest() {}

  explicit DeleteRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteRunRequest() = default;
};
class DeleteRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DeleteRunResponseBody() {}

  explicit DeleteRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRunResponseBody() = default;
};
class DeleteRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRunResponseBody> body{};

  DeleteRunResponse() {}

  explicit DeleteRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRunResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRunResponse() = default;
};
class DeleteSubmissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  DeleteSubmissionRequest() {}

  explicit DeleteSubmissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteSubmissionRequest() = default;
};
class DeleteSubmissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DeleteSubmissionResponseBody() {}

  explicit DeleteSubmissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSubmissionResponseBody() = default;
};
class DeleteSubmissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSubmissionResponseBody> body{};

  DeleteSubmissionResponse() {}

  explicit DeleteSubmissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSubmissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubmissionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubmissionResponse() = default;
};
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteTemplateRequest() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTemplateResponseBody() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class DeleteWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspace{};

  DeleteWorkspaceRequest() {}

  explicit DeleteWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DeleteWorkspaceRequest() = default;
};
class DeleteWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DeleteWorkspaceResponseBody() {}

  explicit DeleteWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DownloadEntityRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> entityNames{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  DownloadEntityRequest() {}

  explicit DownloadEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityNames) {
      res["EntityNames"] = boost::any(*entityNames);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityNames") != m.end() && !m["EntityNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EntityNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EntityNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entityNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DownloadEntityRequest() = default;
};
class DownloadEntityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityNamesShrink{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  DownloadEntityShrinkRequest() {}

  explicit DownloadEntityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityNamesShrink) {
      res["EntityNames"] = boost::any(*entityNamesShrink);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityNames") != m.end() && !m["EntityNames"].empty()) {
      entityNamesShrink = make_shared<string>(boost::any_cast<string>(m["EntityNames"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~DownloadEntityShrinkRequest() = default;
};
class DownloadEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityCSVFile{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  DownloadEntityResponseBody() {}

  explicit DownloadEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityCSVFile) {
      res["EntityCSVFile"] = boost::any(*entityCSVFile);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityCSVFile") != m.end() && !m["EntityCSVFile"].empty()) {
      entityCSVFile = make_shared<string>(boost::any_cast<string>(m["EntityCSVFile"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DownloadEntityResponseBody() = default;
};
class DownloadEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DownloadEntityResponseBody> body{};

  DownloadEntityResponse() {}

  explicit DownloadEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DownloadEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DownloadEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DownloadEntityResponse() = default;
};
class GetAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> revision{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  GetAppRequest() {}

  explicit GetAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<string>(boost::any_cast<string>(m["Revision"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetAppRequest() = default;
};
class GetAppResponseBodyConfigs : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> path{};

  GetAppResponseBodyConfigs() {}

  explicit GetAppResponseBodyConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~GetAppResponseBodyConfigs() = default;
};
class GetAppResponseBodyDependencies : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> path{};

  GetAppResponseBodyDependencies() {}

  explicit GetAppResponseBodyDependencies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~GetAppResponseBodyDependencies() = default;
};
class GetAppResponseBodyInputs : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  GetAppResponseBodyInputs() {}

  explicit GetAppResponseBodyInputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~GetAppResponseBodyInputs() = default;
};
class GetAppResponseBodyOutputs : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  GetAppResponseBodyOutputs() {}

  explicit GetAppResponseBodyOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~GetAppResponseBodyOutputs() = default;
};
class GetAppResponseBodyRevisions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> revision{};
  shared_ptr<string> revisionComment{};
  shared_ptr<string> revisionTag{};

  GetAppResponseBodyRevisions() {}

  explicit GetAppResponseBodyRevisions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (revisionComment) {
      res["RevisionComment"] = boost::any(*revisionComment);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<string>(boost::any_cast<string>(m["Revision"]));
    }
    if (m.find("RevisionComment") != m.end() && !m["RevisionComment"].empty()) {
      revisionComment = make_shared<string>(boost::any_cast<string>(m["RevisionComment"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
  }


  virtual ~GetAppResponseBodyRevisions() = default;
};
class GetAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<vector<GetAppResponseBodyConfigs>> configs{};
  shared_ptr<string> createTime{};
  shared_ptr<string> definition{};
  shared_ptr<vector<GetAppResponseBodyDependencies>> dependencies{};
  shared_ptr<string> description{};
  shared_ptr<string> documentation{};
  shared_ptr<string> hostId{};
  shared_ptr<vector<GetAppResponseBodyInputs>> inputs{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> language{};
  shared_ptr<string> languageVersion{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<vector<GetAppResponseBodyOutputs>> outputs{};
  shared_ptr<string> path{};
  shared_ptr<string> requestId{};
  shared_ptr<string> revision{};
  shared_ptr<string> revisionComment{};
  shared_ptr<string> revisionTag{};
  shared_ptr<vector<GetAppResponseBodyRevisions>> revisions{};
  shared_ptr<string> scope{};
  shared_ptr<string> source{};
  shared_ptr<string> URL{};
  shared_ptr<string> workflowName{};
  shared_ptr<string> workspace{};

  GetAppResponseBody() {}

  explicit GetAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (dependencies) {
      vector<boost::any> temp1;
      for(auto item1:*dependencies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dependencies"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentation) {
      res["Documentation"] = boost::any(*documentation);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (inputs) {
      vector<boost::any> temp1;
      for(auto item1:*inputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Inputs"] = boost::any(temp1);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (languageVersion) {
      res["LanguageVersion"] = boost::any(*languageVersion);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outputs"] = boost::any(temp1);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (revisionComment) {
      res["RevisionComment"] = boost::any(*revisionComment);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (revisions) {
      vector<boost::any> temp1;
      for(auto item1:*revisions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Revisions"] = boost::any(temp1);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    if (workflowName) {
      res["WorkflowName"] = boost::any(*workflowName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<GetAppResponseBodyConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<GetAppResponseBodyConfigs>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      if (typeid(vector<boost::any>) == m["Dependencies"].type()) {
        vector<GetAppResponseBodyDependencies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dependencies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyDependencies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dependencies = make_shared<vector<GetAppResponseBodyDependencies>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Documentation") != m.end() && !m["Documentation"].empty()) {
      documentation = make_shared<string>(boost::any_cast<string>(m["Documentation"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Inputs"].type()) {
        vector<GetAppResponseBodyInputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Inputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyInputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputs = make_shared<vector<GetAppResponseBodyInputs>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LanguageVersion") != m.end() && !m["LanguageVersion"].empty()) {
      languageVersion = make_shared<string>(boost::any_cast<string>(m["LanguageVersion"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<GetAppResponseBodyOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<GetAppResponseBodyOutputs>>(expect1);
      }
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<string>(boost::any_cast<string>(m["Revision"]));
    }
    if (m.find("RevisionComment") != m.end() && !m["RevisionComment"].empty()) {
      revisionComment = make_shared<string>(boost::any_cast<string>(m["RevisionComment"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Revisions") != m.end() && !m["Revisions"].empty()) {
      if (typeid(vector<boost::any>) == m["Revisions"].type()) {
        vector<GetAppResponseBodyRevisions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Revisions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyRevisions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        revisions = make_shared<vector<GetAppResponseBodyRevisions>>(expect1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
    if (m.find("WorkflowName") != m.end() && !m["WorkflowName"].empty()) {
      workflowName = make_shared<string>(boost::any_cast<string>(m["WorkflowName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetAppResponseBody() = default;
};
class GetAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppResponseBody> body{};

  GetAppResponse() {}

  explicit GetAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppResponse() = default;
};
class GetEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  GetEntityRequest() {}

  explicit GetEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetEntityRequest() = default;
};
class GetEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> entityType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> workspace{};

  GetEntityResponseBody() {}

  explicit GetEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetEntityResponseBody() = default;
};
class GetEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEntityResponseBody> body{};

  GetEntityResponse() {}

  explicit GetEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEntityResponseBody>(model1);
      }
    }
  }


  virtual ~GetEntityResponse() = default;
};
class GetGlobalAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appVersion{};
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> location{};
  shared_ptr<string> namespaceName{};

  GetGlobalAppRequest() {}

  explicit GetGlobalAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~GetGlobalAppRequest() = default;
};
class GetGlobalAppShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> attributesShrink{};
  shared_ptr<string> location{};
  shared_ptr<string> namespaceName{};

  GetGlobalAppShrinkRequest() {}

  explicit GetGlobalAppShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (attributesShrink) {
      res["Attributes"] = boost::any(*attributesShrink);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributesShrink = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~GetGlobalAppShrinkRequest() = default;
};
class GetGlobalAppResponseBodyAppDescriptorFiles : public Darabonba::Model {
public:
  shared_ptr<string> checksum{};
  shared_ptr<string> content{};
  shared_ptr<string> fileType{};
  shared_ptr<string> path{};
  shared_ptr<string> url{};

  GetGlobalAppResponseBodyAppDescriptorFiles() {}

  explicit GetGlobalAppResponseBodyAppDescriptorFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checksum) {
      res["Checksum"] = boost::any(*checksum);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checksum") != m.end() && !m["Checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["Checksum"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetGlobalAppResponseBodyAppDescriptorFiles() = default;
};
class GetGlobalAppResponseBodyAppVersions : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> comment{};
  shared_ptr<string> lastModified{};

  GetGlobalAppResponseBodyAppVersions() {}

  explicit GetGlobalAppResponseBodyAppVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
    }
  }


  virtual ~GetGlobalAppResponseBodyAppVersions() = default;
};
class GetGlobalAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appDefaultVersion{};
  shared_ptr<string> appDescription{};
  shared_ptr<vector<GetGlobalAppResponseBodyAppDescriptorFiles>> appDescriptorFiles{};
  shared_ptr<string> appDescriptorType{};
  shared_ptr<string> appFee{};
  shared_ptr<string> appName{};
  shared_ptr<string> appScope{};
  shared_ptr<string> appType{};
  shared_ptr<string> appVersion{};
  shared_ptr<vector<GetGlobalAppResponseBodyAppVersions>> appVersions{};
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> comment{};
  shared_ptr<string> contact{};
  shared_ptr<string> DAG{};
  shared_ptr<string> document{};
  shared_ptr<string> hostId{};
  shared_ptr<string> lastModified{};
  shared_ptr<vector<string>> links{};
  shared_ptr<vector<string>> locations{};
  shared_ptr<string> namespaceName{};
  shared_ptr<bool> pinned{};
  shared_ptr<string> requestId{};
  shared_ptr<string> toolkit{};

  GetGlobalAppResponseBody() {}

  explicit GetGlobalAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDefaultVersion) {
      res["AppDefaultVersion"] = boost::any(*appDefaultVersion);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (appDescriptorFiles) {
      vector<boost::any> temp1;
      for(auto item1:*appDescriptorFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppDescriptorFiles"] = boost::any(temp1);
    }
    if (appDescriptorType) {
      res["AppDescriptorType"] = boost::any(*appDescriptorType);
    }
    if (appFee) {
      res["AppFee"] = boost::any(*appFee);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appScope) {
      res["AppScope"] = boost::any(*appScope);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (appVersions) {
      vector<boost::any> temp1;
      for(auto item1:*appVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppVersions"] = boost::any(temp1);
    }
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (contact) {
      res["Contact"] = boost::any(*contact);
    }
    if (DAG) {
      res["DAG"] = boost::any(*DAG);
    }
    if (document) {
      res["Document"] = boost::any(*document);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    if (links) {
      res["Links"] = boost::any(*links);
    }
    if (locations) {
      res["Locations"] = boost::any(*locations);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (pinned) {
      res["Pinned"] = boost::any(*pinned);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (toolkit) {
      res["Toolkit"] = boost::any(*toolkit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDefaultVersion") != m.end() && !m["AppDefaultVersion"].empty()) {
      appDefaultVersion = make_shared<string>(boost::any_cast<string>(m["AppDefaultVersion"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("AppDescriptorFiles") != m.end() && !m["AppDescriptorFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["AppDescriptorFiles"].type()) {
        vector<GetGlobalAppResponseBodyAppDescriptorFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppDescriptorFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGlobalAppResponseBodyAppDescriptorFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appDescriptorFiles = make_shared<vector<GetGlobalAppResponseBodyAppDescriptorFiles>>(expect1);
      }
    }
    if (m.find("AppDescriptorType") != m.end() && !m["AppDescriptorType"].empty()) {
      appDescriptorType = make_shared<string>(boost::any_cast<string>(m["AppDescriptorType"]));
    }
    if (m.find("AppFee") != m.end() && !m["AppFee"].empty()) {
      appFee = make_shared<string>(boost::any_cast<string>(m["AppFee"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppScope") != m.end() && !m["AppScope"].empty()) {
      appScope = make_shared<string>(boost::any_cast<string>(m["AppScope"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AppVersions") != m.end() && !m["AppVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["AppVersions"].type()) {
        vector<GetGlobalAppResponseBodyAppVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGlobalAppResponseBodyAppVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appVersions = make_shared<vector<GetGlobalAppResponseBodyAppVersions>>(expect1);
      }
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      contact = make_shared<string>(boost::any_cast<string>(m["Contact"]));
    }
    if (m.find("DAG") != m.end() && !m["DAG"].empty()) {
      DAG = make_shared<string>(boost::any_cast<string>(m["DAG"]));
    }
    if (m.find("Document") != m.end() && !m["Document"].empty()) {
      document = make_shared<string>(boost::any_cast<string>(m["Document"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
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
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Locations"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      locations = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("Pinned") != m.end() && !m["Pinned"].empty()) {
      pinned = make_shared<bool>(boost::any_cast<bool>(m["Pinned"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Toolkit") != m.end() && !m["Toolkit"].empty()) {
      toolkit = make_shared<string>(boost::any_cast<string>(m["Toolkit"]));
    }
  }


  virtual ~GetGlobalAppResponseBody() = default;
};
class GetGlobalAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGlobalAppResponseBody> body{};

  GetGlobalAppResponse() {}

  explicit GetGlobalAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGlobalAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGlobalAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetGlobalAppResponse() = default;
};
class GetPublicDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> datasetName{};

  GetPublicDatasetRequest() {}

  explicit GetPublicDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
  }


  virtual ~GetPublicDatasetRequest() = default;
};
class GetPublicDatasetShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributesShrink{};
  shared_ptr<string> datasetName{};

  GetPublicDatasetShrinkRequest() {}

  explicit GetPublicDatasetShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributesShrink) {
      res["Attributes"] = boost::any(*attributesShrink);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributesShrink = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
  }


  virtual ~GetPublicDatasetShrinkRequest() = default;
};
class GetPublicDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> about{};
  shared_ptr<string> accessRequirements{};
  shared_ptr<string> copyright{};
  shared_ptr<string> datasetDescription{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> hostId{};
  shared_ptr<string> lastModified{};
  shared_ptr<vector<string>> locations{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> updateFrequency{};

  GetPublicDatasetResponseBody() {}

  explicit GetPublicDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (about) {
      res["About"] = boost::any(*about);
    }
    if (accessRequirements) {
      res["AccessRequirements"] = boost::any(*accessRequirements);
    }
    if (copyright) {
      res["Copyright"] = boost::any(*copyright);
    }
    if (datasetDescription) {
      res["DatasetDescription"] = boost::any(*datasetDescription);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    if (locations) {
      res["Locations"] = boost::any(*locations);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (updateFrequency) {
      res["UpdateFrequency"] = boost::any(*updateFrequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("About") != m.end() && !m["About"].empty()) {
      about = make_shared<string>(boost::any_cast<string>(m["About"]));
    }
    if (m.find("AccessRequirements") != m.end() && !m["AccessRequirements"].empty()) {
      accessRequirements = make_shared<string>(boost::any_cast<string>(m["AccessRequirements"]));
    }
    if (m.find("Copyright") != m.end() && !m["Copyright"].empty()) {
      copyright = make_shared<string>(boost::any_cast<string>(m["Copyright"]));
    }
    if (m.find("DatasetDescription") != m.end() && !m["DatasetDescription"].empty()) {
      datasetDescription = make_shared<string>(boost::any_cast<string>(m["DatasetDescription"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Locations"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      locations = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
    if (m.find("UpdateFrequency") != m.end() && !m["UpdateFrequency"].empty()) {
      updateFrequency = make_shared<string>(boost::any_cast<string>(m["UpdateFrequency"]));
    }
  }


  virtual ~GetPublicDatasetResponseBody() = default;
};
class GetPublicDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublicDatasetResponseBody> body{};

  GetPublicDatasetResponse() {}

  explicit GetPublicDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublicDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublicDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublicDatasetResponse() = default;
};
class GetPublicDatasetEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> location{};

  GetPublicDatasetEntityRequest() {}

  explicit GetPublicDatasetEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
  }


  virtual ~GetPublicDatasetEntityRequest() = default;
};
class GetPublicDatasetEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetPublicDatasetEntityResponseBody() {}

  explicit GetPublicDatasetEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetPublicDatasetEntityResponseBody() = default;
};
class GetPublicDatasetEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublicDatasetEntityResponseBody> body{};

  GetPublicDatasetEntityResponse() {}

  explicit GetPublicDatasetEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublicDatasetEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublicDatasetEntityResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublicDatasetEntityResponse() = default;
};
class GetRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> runId{};
  shared_ptr<string> workspace{};

  GetRunRequest() {}

  explicit GetRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetRunRequest() = default;
};
class GetRunResponseBodyExecuteOptions : public Darabonba::Model {
public:
  shared_ptr<bool> callCaching{};
  shared_ptr<bool> deleteIntermediateResults{};
  shared_ptr<string> failureMode{};
  shared_ptr<bool> useRelativeOutputPaths{};

  GetRunResponseBodyExecuteOptions() {}

  explicit GetRunResponseBodyExecuteOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callCaching) {
      res["CallCaching"] = boost::any(*callCaching);
    }
    if (deleteIntermediateResults) {
      res["DeleteIntermediateResults"] = boost::any(*deleteIntermediateResults);
    }
    if (failureMode) {
      res["FailureMode"] = boost::any(*failureMode);
    }
    if (useRelativeOutputPaths) {
      res["UseRelativeOutputPaths"] = boost::any(*useRelativeOutputPaths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallCaching") != m.end() && !m["CallCaching"].empty()) {
      callCaching = make_shared<bool>(boost::any_cast<bool>(m["CallCaching"]));
    }
    if (m.find("DeleteIntermediateResults") != m.end() && !m["DeleteIntermediateResults"].empty()) {
      deleteIntermediateResults = make_shared<bool>(boost::any_cast<bool>(m["DeleteIntermediateResults"]));
    }
    if (m.find("FailureMode") != m.end() && !m["FailureMode"].empty()) {
      failureMode = make_shared<string>(boost::any_cast<string>(m["FailureMode"]));
    }
    if (m.find("UseRelativeOutputPaths") != m.end() && !m["UseRelativeOutputPaths"].empty()) {
      useRelativeOutputPaths = make_shared<bool>(boost::any_cast<bool>(m["UseRelativeOutputPaths"]));
    }
  }


  virtual ~GetRunResponseBodyExecuteOptions() = default;
};
class GetRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<vector<string>> billingInstanceIds{};
  shared_ptr<string> calls{};
  shared_ptr<string> createTime{};
  shared_ptr<string> defaultRuntime{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> executeDirectory{};
  shared_ptr<GetRunResponseBodyExecuteOptions> executeOptions{};
  shared_ptr<string> failures{};
  shared_ptr<string> hostId{};
  shared_ptr<string> inputs{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> outputFolder{};
  shared_ptr<string> outputs{};
  shared_ptr<string> requestId{};
  shared_ptr<string> runId{};
  shared_ptr<string> runName{};
  shared_ptr<string> source{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submissionId{};
  shared_ptr<string> timing{};
  shared_ptr<string> user{};
  shared_ptr<string> workspace{};

  GetRunResponseBody() {}

  explicit GetRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (billingInstanceIds) {
      res["BillingInstanceIds"] = boost::any(*billingInstanceIds);
    }
    if (calls) {
      res["Calls"] = boost::any(*calls);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultRuntime) {
      res["DefaultRuntime"] = boost::any(*defaultRuntime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (executeDirectory) {
      res["ExecuteDirectory"] = boost::any(*executeDirectory);
    }
    if (executeOptions) {
      res["ExecuteOptions"] = executeOptions ? boost::any(executeOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failures) {
      res["Failures"] = boost::any(*failures);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (inputs) {
      res["Inputs"] = boost::any(*inputs);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (outputFolder) {
      res["OutputFolder"] = boost::any(*outputFolder);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (runName) {
      res["RunName"] = boost::any(*runName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (timing) {
      res["Timing"] = boost::any(*timing);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("BillingInstanceIds") != m.end() && !m["BillingInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BillingInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BillingInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      billingInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Calls") != m.end() && !m["Calls"].empty()) {
      calls = make_shared<string>(boost::any_cast<string>(m["Calls"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultRuntime") != m.end() && !m["DefaultRuntime"].empty()) {
      defaultRuntime = make_shared<string>(boost::any_cast<string>(m["DefaultRuntime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ExecuteDirectory") != m.end() && !m["ExecuteDirectory"].empty()) {
      executeDirectory = make_shared<string>(boost::any_cast<string>(m["ExecuteDirectory"]));
    }
    if (m.find("ExecuteOptions") != m.end() && !m["ExecuteOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecuteOptions"].type()) {
        GetRunResponseBodyExecuteOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecuteOptions"]));
        executeOptions = make_shared<GetRunResponseBodyExecuteOptions>(model1);
      }
    }
    if (m.find("Failures") != m.end() && !m["Failures"].empty()) {
      failures = make_shared<string>(boost::any_cast<string>(m["Failures"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      inputs = make_shared<string>(boost::any_cast<string>(m["Inputs"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("OutputFolder") != m.end() && !m["OutputFolder"].empty()) {
      outputFolder = make_shared<string>(boost::any_cast<string>(m["OutputFolder"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("RunName") != m.end() && !m["RunName"].empty()) {
      runName = make_shared<string>(boost::any_cast<string>(m["RunName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Timing") != m.end() && !m["Timing"].empty()) {
      timing = make_shared<string>(boost::any_cast<string>(m["Timing"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetRunResponseBody() = default;
};
class GetRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRunResponseBody> body{};

  GetRunResponse() {}

  explicit GetRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRunResponseBody>(model1);
      }
    }
  }


  virtual ~GetRunResponse() = default;
};
class GetSubmissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  GetSubmissionRequest() {}

  explicit GetSubmissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetSubmissionRequest() = default;
};
class GetSubmissionResponseBodySubmissionRunStats : public Darabonba::Model {
public:
  shared_ptr<long> aborted{};
  shared_ptr<long> aborting{};
  shared_ptr<long> failed{};
  shared_ptr<long> pending{};
  shared_ptr<long> running{};
  shared_ptr<long> submitted{};
  shared_ptr<long> succeeded{};

  GetSubmissionResponseBodySubmissionRunStats() {}

  explicit GetSubmissionResponseBodySubmissionRunStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aborted) {
      res["Aborted"] = boost::any(*aborted);
    }
    if (aborting) {
      res["Aborting"] = boost::any(*aborting);
    }
    if (failed) {
      res["Failed"] = boost::any(*failed);
    }
    if (pending) {
      res["Pending"] = boost::any(*pending);
    }
    if (running) {
      res["Running"] = boost::any(*running);
    }
    if (submitted) {
      res["Submitted"] = boost::any(*submitted);
    }
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aborted") != m.end() && !m["Aborted"].empty()) {
      aborted = make_shared<long>(boost::any_cast<long>(m["Aborted"]));
    }
    if (m.find("Aborting") != m.end() && !m["Aborting"].empty()) {
      aborting = make_shared<long>(boost::any_cast<long>(m["Aborting"]));
    }
    if (m.find("Failed") != m.end() && !m["Failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["Failed"]));
    }
    if (m.find("Pending") != m.end() && !m["Pending"].empty()) {
      pending = make_shared<long>(boost::any_cast<long>(m["Pending"]));
    }
    if (m.find("Running") != m.end() && !m["Running"].empty()) {
      running = make_shared<long>(boost::any_cast<long>(m["Running"]));
    }
    if (m.find("Submitted") != m.end() && !m["Submitted"].empty()) {
      submitted = make_shared<long>(boost::any_cast<long>(m["Submitted"]));
    }
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<long>(boost::any_cast<long>(m["Succeeded"]));
    }
  }


  virtual ~GetSubmissionResponseBodySubmissionRunStats() = default;
};
class GetSubmissionResponseBodySubmission : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityType{};
  shared_ptr<GetSubmissionResponseBodySubmissionRunStats> runStats{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  GetSubmissionResponseBodySubmission() {}

  explicit GetSubmissionResponseBodySubmission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (runStats) {
      res["RunStats"] = runStats ? boost::any(runStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("RunStats") != m.end() && !m["RunStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunStats"].type()) {
        GetSubmissionResponseBodySubmissionRunStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunStats"]));
        runStats = make_shared<GetSubmissionResponseBodySubmissionRunStats>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetSubmissionResponseBodySubmission() = default;
};
class GetSubmissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<GetSubmissionResponseBodySubmission> submission{};

  GetSubmissionResponseBody() {}

  explicit GetSubmissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (submission) {
      res["Submission"] = submission ? boost::any(submission->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Submission") != m.end() && !m["Submission"].empty()) {
      if (typeid(map<string, boost::any>) == m["Submission"].type()) {
        GetSubmissionResponseBodySubmission model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Submission"]));
        submission = make_shared<GetSubmissionResponseBodySubmission>(model1);
      }
    }
  }


  virtual ~GetSubmissionResponseBody() = default;
};
class GetSubmissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubmissionResponseBody> body{};

  GetSubmissionResponse() {}

  explicit GetSubmissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubmissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubmissionResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubmissionResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBodyInputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  GetTemplateResponseBodyInputsExpression() {}

  explicit GetTemplateResponseBodyInputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~GetTemplateResponseBodyInputsExpression() = default;
};
class GetTemplateResponseBodyOutputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  GetTemplateResponseBodyOutputsExpression() {}

  explicit GetTemplateResponseBodyOutputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~GetTemplateResponseBodyOutputsExpression() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> hostId{};
  shared_ptr<vector<GetTemplateResponseBodyInputsExpression>> inputsExpression{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<vector<GetTemplateResponseBodyOutputsExpression>> outputsExpression{};
  shared_ptr<string> requestId{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> rootEntity{};
  shared_ptr<string> source{};
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (inputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*inputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputsExpression"] = boost::any(temp1);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (outputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*outputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputsExpression"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (rootEntity) {
      res["RootEntity"] = boost::any(*rootEntity);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("InputsExpression") != m.end() && !m["InputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["InputsExpression"].type()) {
        vector<GetTemplateResponseBodyInputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateResponseBodyInputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputsExpression = make_shared<vector<GetTemplateResponseBodyInputsExpression>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("OutputsExpression") != m.end() && !m["OutputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputsExpression"].type()) {
        vector<GetTemplateResponseBodyOutputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateResponseBodyOutputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputsExpression = make_shared<vector<GetTemplateResponseBodyOutputsExpression>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("RootEntity") != m.end() && !m["RootEntity"].empty()) {
      rootEntity = make_shared<string>(boost::any_cast<string>(m["RootEntity"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class GetWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspace{};

  GetWorkspaceRequest() {}

  explicit GetWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~GetWorkspaceRequest() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> hostId{};
  shared_ptr<long> jobLifecycle{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> location{};
  shared_ptr<string> requestId{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};
  shared_ptr<string> storage{};
  shared_ptr<string> workspace{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (jobLifecycle) {
      res["JobLifecycle"] = boost::any(*jobLifecycle);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("JobLifecycle") != m.end() && !m["JobLifecycle"].empty()) {
      jobLifecycle = make_shared<long>(boost::any_cast<long>(m["JobLifecycle"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["Storage"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
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
class ImportAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> source{};
  shared_ptr<string> workspace{};

  ImportAppRequest() {}

  explicit ImportAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ImportAppRequest() = default;
};
class ImportAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> hostId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  ImportAppResponseBody() {}

  explicit ImportAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ImportAppResponseBody() = default;
};
class ImportAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportAppResponseBody> body{};

  ImportAppResponse() {}

  explicit ImportAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportAppResponseBody>(model1);
      }
    }
  }


  virtual ~ImportAppResponse() = default;
};
class InstallGlobalAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> installedAppName{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> source{};
  shared_ptr<string> workspace{};

  InstallGlobalAppRequest() {}

  explicit InstallGlobalAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (installedAppName) {
      res["InstalledAppName"] = boost::any(*installedAppName);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("InstalledAppName") != m.end() && !m["InstalledAppName"].empty()) {
      installedAppName = make_shared<string>(boost::any_cast<string>(m["InstalledAppName"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~InstallGlobalAppRequest() = default;
};
class InstallGlobalAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> installedAppName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  InstallGlobalAppResponseBody() {}

  explicit InstallGlobalAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (installedAppName) {
      res["InstalledAppName"] = boost::any(*installedAppName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("InstalledAppName") != m.end() && !m["InstalledAppName"].empty()) {
      installedAppName = make_shared<string>(boost::any_cast<string>(m["InstalledAppName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~InstallGlobalAppResponseBody() = default;
};
class InstallGlobalAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallGlobalAppResponseBody> body{};

  InstallGlobalAppResponse() {}

  explicit InstallGlobalAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallGlobalAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallGlobalAppResponseBody>(model1);
      }
    }
  }


  virtual ~InstallGlobalAppResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<bool> isReversed{};
  shared_ptr<string> labelSelector{};
  shared_ptr<string> language{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> scope{};
  shared_ptr<string> search{};
  shared_ptr<string> workspace{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (labelSelector) {
      res["LabelSelector"] = boost::any(*labelSelector);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("LabelSelector") != m.end() && !m["LabelSelector"].empty()) {
      labelSelector = make_shared<string>(boost::any_cast<string>(m["LabelSelector"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyApps : public Darabonba::Model {
public:
  shared_ptr<string> appDefaultVersion{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> language{};
  shared_ptr<string> scope{};
  shared_ptr<string> source{};
  shared_ptr<string> workspace{};

  ListAppsResponseBodyApps() {}

  explicit ListAppsResponseBodyApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDefaultVersion) {
      res["AppDefaultVersion"] = boost::any(*appDefaultVersion);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDefaultVersion") != m.end() && !m["AppDefaultVersion"].empty()) {
      appDefaultVersion = make_shared<string>(boost::any_cast<string>(m["AppDefaultVersion"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListAppsResponseBodyApps() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppsResponseBodyApps>> apps{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apps) {
      vector<boost::any> temp1;
      for(auto item1:*apps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Apps"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("Apps") != m.end() && !m["Apps"].empty()) {
      if (typeid(vector<boost::any>) == m["Apps"].type()) {
        vector<ListAppsResponseBodyApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Apps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apps = make_shared<vector<ListAppsResponseBodyApps>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListAppsResponseBody() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppsResponseBody> body{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListAuthorizedSoftwareRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isReversed{};
  shared_ptr<string> location{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};

  ListAuthorizedSoftwareRequest() {}

  explicit ListAuthorizedSoftwareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
  }


  virtual ~ListAuthorizedSoftwareRequest() = default;
};
class ListAuthorizedSoftwareResponseBodySoftwares : public Darabonba::Model {
public:
  shared_ptr<string> helpLink{};
  shared_ptr<string> lastModified{};
  shared_ptr<vector<string>> locations{};
  shared_ptr<string> promotion{};
  shared_ptr<string> softwareDefaultVersion{};
  shared_ptr<string> softwareDescription{};
  shared_ptr<string> softwareIcon{};
  shared_ptr<double> softwareLicenseFee{};
  shared_ptr<string> softwareLongName{};
  shared_ptr<string> softwareName{};
  shared_ptr<vector<string>> softwareVersions{};

  ListAuthorizedSoftwareResponseBodySoftwares() {}

  explicit ListAuthorizedSoftwareResponseBodySoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (helpLink) {
      res["HelpLink"] = boost::any(*helpLink);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    if (locations) {
      res["Locations"] = boost::any(*locations);
    }
    if (promotion) {
      res["Promotion"] = boost::any(*promotion);
    }
    if (softwareDefaultVersion) {
      res["SoftwareDefaultVersion"] = boost::any(*softwareDefaultVersion);
    }
    if (softwareDescription) {
      res["SoftwareDescription"] = boost::any(*softwareDescription);
    }
    if (softwareIcon) {
      res["SoftwareIcon"] = boost::any(*softwareIcon);
    }
    if (softwareLicenseFee) {
      res["SoftwareLicenseFee"] = boost::any(*softwareLicenseFee);
    }
    if (softwareLongName) {
      res["SoftwareLongName"] = boost::any(*softwareLongName);
    }
    if (softwareName) {
      res["SoftwareName"] = boost::any(*softwareName);
    }
    if (softwareVersions) {
      res["SoftwareVersions"] = boost::any(*softwareVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HelpLink") != m.end() && !m["HelpLink"].empty()) {
      helpLink = make_shared<string>(boost::any_cast<string>(m["HelpLink"]));
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Locations"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      locations = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Promotion") != m.end() && !m["Promotion"].empty()) {
      promotion = make_shared<string>(boost::any_cast<string>(m["Promotion"]));
    }
    if (m.find("SoftwareDefaultVersion") != m.end() && !m["SoftwareDefaultVersion"].empty()) {
      softwareDefaultVersion = make_shared<string>(boost::any_cast<string>(m["SoftwareDefaultVersion"]));
    }
    if (m.find("SoftwareDescription") != m.end() && !m["SoftwareDescription"].empty()) {
      softwareDescription = make_shared<string>(boost::any_cast<string>(m["SoftwareDescription"]));
    }
    if (m.find("SoftwareIcon") != m.end() && !m["SoftwareIcon"].empty()) {
      softwareIcon = make_shared<string>(boost::any_cast<string>(m["SoftwareIcon"]));
    }
    if (m.find("SoftwareLicenseFee") != m.end() && !m["SoftwareLicenseFee"].empty()) {
      softwareLicenseFee = make_shared<double>(boost::any_cast<double>(m["SoftwareLicenseFee"]));
    }
    if (m.find("SoftwareLongName") != m.end() && !m["SoftwareLongName"].empty()) {
      softwareLongName = make_shared<string>(boost::any_cast<string>(m["SoftwareLongName"]));
    }
    if (m.find("SoftwareName") != m.end() && !m["SoftwareName"].empty()) {
      softwareName = make_shared<string>(boost::any_cast<string>(m["SoftwareName"]));
    }
    if (m.find("SoftwareVersions") != m.end() && !m["SoftwareVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SoftwareVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SoftwareVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      softwareVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAuthorizedSoftwareResponseBodySoftwares() = default;
};
class ListAuthorizedSoftwareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAuthorizedSoftwareResponseBodySoftwares>> softwares{};
  shared_ptr<long> totalCount{};

  ListAuthorizedSoftwareResponseBody() {}

  explicit ListAuthorizedSoftwareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<ListAuthorizedSoftwareResponseBodySoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAuthorizedSoftwareResponseBodySoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<ListAuthorizedSoftwareResponseBodySoftwares>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAuthorizedSoftwareResponseBody() = default;
};
class ListAuthorizedSoftwareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAuthorizedSoftwareResponseBody> body{};

  ListAuthorizedSoftwareResponse() {}

  explicit ListAuthorizedSoftwareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAuthorizedSoftwareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthorizedSoftwareResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthorizedSoftwareResponse() = default;
};
class ListContainerImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> location{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListContainerImagesRequest() {}

  explicit ListContainerImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListContainerImagesRequest() = default;
};
class ListContainerImagesResponseBodyContainerImages : public Darabonba::Model {
public:
  shared_ptr<string> containerImageDescription{};
  shared_ptr<string> containerImageName{};
  shared_ptr<string> containerImageNamespace{};
  shared_ptr<vector<string>> containerImageVersions{};
  shared_ptr<string> containerRegistry{};
  shared_ptr<string> lastModified{};
  shared_ptr<string> location{};

  ListContainerImagesResponseBodyContainerImages() {}

  explicit ListContainerImagesResponseBodyContainerImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerImageDescription) {
      res["ContainerImageDescription"] = boost::any(*containerImageDescription);
    }
    if (containerImageName) {
      res["ContainerImageName"] = boost::any(*containerImageName);
    }
    if (containerImageNamespace) {
      res["ContainerImageNamespace"] = boost::any(*containerImageNamespace);
    }
    if (containerImageVersions) {
      res["ContainerImageVersions"] = boost::any(*containerImageVersions);
    }
    if (containerRegistry) {
      res["ContainerRegistry"] = boost::any(*containerRegistry);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerImageDescription") != m.end() && !m["ContainerImageDescription"].empty()) {
      containerImageDescription = make_shared<string>(boost::any_cast<string>(m["ContainerImageDescription"]));
    }
    if (m.find("ContainerImageName") != m.end() && !m["ContainerImageName"].empty()) {
      containerImageName = make_shared<string>(boost::any_cast<string>(m["ContainerImageName"]));
    }
    if (m.find("ContainerImageNamespace") != m.end() && !m["ContainerImageNamespace"].empty()) {
      containerImageNamespace = make_shared<string>(boost::any_cast<string>(m["ContainerImageNamespace"]));
    }
    if (m.find("ContainerImageVersions") != m.end() && !m["ContainerImageVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ContainerImageVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContainerImageVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      containerImageVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ContainerRegistry") != m.end() && !m["ContainerRegistry"].empty()) {
      containerRegistry = make_shared<string>(boost::any_cast<string>(m["ContainerRegistry"]));
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
  }


  virtual ~ListContainerImagesResponseBodyContainerImages() = default;
};
class ListContainerImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListContainerImagesResponseBodyContainerImages>> containerImages{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListContainerImagesResponseBody() {}

  explicit ListContainerImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerImages) {
      vector<boost::any> temp1;
      for(auto item1:*containerImages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContainerImages"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("ContainerImages") != m.end() && !m["ContainerImages"].empty()) {
      if (typeid(vector<boost::any>) == m["ContainerImages"].type()) {
        vector<ListContainerImagesResponseBodyContainerImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContainerImages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListContainerImagesResponseBodyContainerImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerImages = make_shared<vector<ListContainerImagesResponseBodyContainerImages>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListContainerImagesResponseBody() = default;
};
class ListContainerImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListContainerImagesResponseBody> body{};

  ListContainerImagesResponse() {}

  explicit ListContainerImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListContainerImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListContainerImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListContainerImagesResponse() = default;
};
class ListEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isReversed{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> workspace{};

  ListEntitiesRequest() {}

  explicit ListEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListEntitiesRequest() = default;
};
class ListEntitiesResponseBodyEntities : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};

  ListEntitiesResponseBodyEntities() {}

  explicit ListEntitiesResponseBodyEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
  }


  virtual ~ListEntitiesResponseBodyEntities() = default;
};
class ListEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEntitiesResponseBodyEntities>> entities{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListEntitiesResponseBody() {}

  explicit ListEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entities) {
      vector<boost::any> temp1;
      for(auto item1:*entities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entities"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("Entities") != m.end() && !m["Entities"].empty()) {
      if (typeid(vector<boost::any>) == m["Entities"].type()) {
        vector<ListEntitiesResponseBodyEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEntitiesResponseBodyEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entities = make_shared<vector<ListEntitiesResponseBodyEntities>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListEntitiesResponseBody() = default;
};
class ListEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEntitiesResponseBody> body{};

  ListEntitiesResponse() {}

  explicit ListEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEntitiesResponse() = default;
};
class ListEntityItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<bool> isReversed{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};
  shared_ptr<string> workspace{};

  ListEntityItemsRequest() {}

  explicit ListEntityItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListEntityItemsRequest() = default;
};
class ListEntityItemsResponseBodyEntityItems : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> entityData{};
  shared_ptr<string> entityName{};

  ListEntityItemsResponseBodyEntityItems() {}

  explicit ListEntityItemsResponseBodyEntityItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityData) {
      res["EntityData"] = boost::any(*entityData);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityData") != m.end() && !m["EntityData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EntityData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entityData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~ListEntityItemsResponseBodyEntityItems() = default;
};
class ListEntityItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEntityItemsResponseBodyEntityItems>> entityItems{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListEntityItemsResponseBody() {}

  explicit ListEntityItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityItems) {
      vector<boost::any> temp1;
      for(auto item1:*entityItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityItems"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityItems"].type()) {
        vector<ListEntityItemsResponseBodyEntityItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEntityItemsResponseBodyEntityItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityItems = make_shared<vector<ListEntityItemsResponseBodyEntityItems>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListEntityItemsResponseBody() = default;
};
class ListEntityItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEntityItemsResponseBody> body{};

  ListEntityItemsResponse() {}

  explicit ListEntityItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEntityItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEntityItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEntityItemsResponse() = default;
};
class ListGlobalAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appScope{};
  shared_ptr<string> category{};
  shared_ptr<bool> isReversed{};
  shared_ptr<string> location{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};
  shared_ptr<string> toolkit{};

  ListGlobalAppsRequest() {}

  explicit ListGlobalAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appScope) {
      res["AppScope"] = boost::any(*appScope);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (toolkit) {
      res["Toolkit"] = boost::any(*toolkit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppScope") != m.end() && !m["AppScope"].empty()) {
      appScope = make_shared<string>(boost::any_cast<string>(m["AppScope"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Toolkit") != m.end() && !m["Toolkit"].empty()) {
      toolkit = make_shared<string>(boost::any_cast<string>(m["Toolkit"]));
    }
  }


  virtual ~ListGlobalAppsRequest() = default;
};
class ListGlobalAppsResponseBodyGlobalApps : public Darabonba::Model {
public:
  shared_ptr<string> appDefaultVersion{};
  shared_ptr<string> appDescription{};
  shared_ptr<string> appFee{};
  shared_ptr<string> appName{};
  shared_ptr<string> appScope{};
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> lastModified{};
  shared_ptr<vector<string>> locations{};
  shared_ptr<string> namespaceName{};
  shared_ptr<bool> pinned{};
  shared_ptr<string> toolkit{};

  ListGlobalAppsResponseBodyGlobalApps() {}

  explicit ListGlobalAppsResponseBodyGlobalApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDefaultVersion) {
      res["AppDefaultVersion"] = boost::any(*appDefaultVersion);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (appFee) {
      res["AppFee"] = boost::any(*appFee);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appScope) {
      res["AppScope"] = boost::any(*appScope);
    }
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    if (locations) {
      res["Locations"] = boost::any(*locations);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (pinned) {
      res["Pinned"] = boost::any(*pinned);
    }
    if (toolkit) {
      res["Toolkit"] = boost::any(*toolkit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDefaultVersion") != m.end() && !m["AppDefaultVersion"].empty()) {
      appDefaultVersion = make_shared<string>(boost::any_cast<string>(m["AppDefaultVersion"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("AppFee") != m.end() && !m["AppFee"].empty()) {
      appFee = make_shared<string>(boost::any_cast<string>(m["AppFee"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppScope") != m.end() && !m["AppScope"].empty()) {
      appScope = make_shared<string>(boost::any_cast<string>(m["AppScope"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Locations"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      locations = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("Pinned") != m.end() && !m["Pinned"].empty()) {
      pinned = make_shared<bool>(boost::any_cast<bool>(m["Pinned"]));
    }
    if (m.find("Toolkit") != m.end() && !m["Toolkit"].empty()) {
      toolkit = make_shared<string>(boost::any_cast<string>(m["Toolkit"]));
    }
  }


  virtual ~ListGlobalAppsResponseBodyGlobalApps() = default;
};
class ListGlobalAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGlobalAppsResponseBodyGlobalApps>> globalApps{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListGlobalAppsResponseBody() {}

  explicit ListGlobalAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (globalApps) {
      vector<boost::any> temp1;
      for(auto item1:*globalApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GlobalApps"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("GlobalApps") != m.end() && !m["GlobalApps"].empty()) {
      if (typeid(vector<boost::any>) == m["GlobalApps"].type()) {
        vector<ListGlobalAppsResponseBodyGlobalApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GlobalApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGlobalAppsResponseBodyGlobalApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalApps = make_shared<vector<ListGlobalAppsResponseBodyGlobalApps>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListGlobalAppsResponseBody() = default;
};
class ListGlobalAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGlobalAppsResponseBody> body{};

  ListGlobalAppsResponse() {}

  explicit ListGlobalAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGlobalAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGlobalAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGlobalAppsResponse() = default;
};
class ListPublicDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isReversed{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};
  shared_ptr<string> tag{};

  ListPublicDatasetRequest() {}

  explicit ListPublicDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListPublicDatasetRequest() = default;
};
class ListPublicDatasetResponseBodyDatasets : public Darabonba::Model {
public:
  shared_ptr<string> about{};
  shared_ptr<string> accessRequirements{};
  shared_ptr<string> copyright{};
  shared_ptr<string> datasetDescription{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> lastModified{};
  shared_ptr<vector<string>> locations{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> updateFrequency{};

  ListPublicDatasetResponseBodyDatasets() {}

  explicit ListPublicDatasetResponseBodyDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (about) {
      res["About"] = boost::any(*about);
    }
    if (accessRequirements) {
      res["AccessRequirements"] = boost::any(*accessRequirements);
    }
    if (copyright) {
      res["Copyright"] = boost::any(*copyright);
    }
    if (datasetDescription) {
      res["DatasetDescription"] = boost::any(*datasetDescription);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (lastModified) {
      res["LastModified"] = boost::any(*lastModified);
    }
    if (locations) {
      res["Locations"] = boost::any(*locations);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (updateFrequency) {
      res["UpdateFrequency"] = boost::any(*updateFrequency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("About") != m.end() && !m["About"].empty()) {
      about = make_shared<string>(boost::any_cast<string>(m["About"]));
    }
    if (m.find("AccessRequirements") != m.end() && !m["AccessRequirements"].empty()) {
      accessRequirements = make_shared<string>(boost::any_cast<string>(m["AccessRequirements"]));
    }
    if (m.find("Copyright") != m.end() && !m["Copyright"].empty()) {
      copyright = make_shared<string>(boost::any_cast<string>(m["Copyright"]));
    }
    if (m.find("DatasetDescription") != m.end() && !m["DatasetDescription"].empty()) {
      datasetDescription = make_shared<string>(boost::any_cast<string>(m["DatasetDescription"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("LastModified") != m.end() && !m["LastModified"].empty()) {
      lastModified = make_shared<string>(boost::any_cast<string>(m["LastModified"]));
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Locations"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      locations = make_shared<vector<string>>(toVec1);
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
    if (m.find("UpdateFrequency") != m.end() && !m["UpdateFrequency"].empty()) {
      updateFrequency = make_shared<string>(boost::any_cast<string>(m["UpdateFrequency"]));
    }
  }


  virtual ~ListPublicDatasetResponseBodyDatasets() = default;
};
class ListPublicDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPublicDatasetResponseBodyDatasets>> datasets{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPublicDatasetResponseBody() {}

  explicit ListPublicDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<ListPublicDatasetResponseBodyDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicDatasetResponseBodyDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<ListPublicDatasetResponseBodyDatasets>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListPublicDatasetResponseBody() = default;
};
class ListPublicDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicDatasetResponseBody> body{};

  ListPublicDatasetResponse() {}

  explicit ListPublicDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicDatasetResponse() = default;
};
class ListPublicDatasetEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<bool> isReversed{};
  shared_ptr<string> location{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};

  ListPublicDatasetEntitiesRequest() {}

  explicit ListPublicDatasetEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
  }


  virtual ~ListPublicDatasetEntitiesRequest() = default;
};
class ListPublicDatasetEntitiesResponseBodyEntities : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};

  ListPublicDatasetEntitiesResponseBodyEntities() {}

  explicit ListPublicDatasetEntitiesResponseBodyEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
  }


  virtual ~ListPublicDatasetEntitiesResponseBodyEntities() = default;
};
class ListPublicDatasetEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<vector<ListPublicDatasetEntitiesResponseBodyEntities>> entities{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPublicDatasetEntitiesResponseBody() {}

  explicit ListPublicDatasetEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (entities) {
      vector<boost::any> temp1;
      for(auto item1:*entities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entities"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Entities") != m.end() && !m["Entities"].empty()) {
      if (typeid(vector<boost::any>) == m["Entities"].type()) {
        vector<ListPublicDatasetEntitiesResponseBodyEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicDatasetEntitiesResponseBodyEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entities = make_shared<vector<ListPublicDatasetEntitiesResponseBodyEntities>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListPublicDatasetEntitiesResponseBody() = default;
};
class ListPublicDatasetEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicDatasetEntitiesResponseBody> body{};

  ListPublicDatasetEntitiesResponse() {}

  explicit ListPublicDatasetEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicDatasetEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicDatasetEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicDatasetEntitiesResponse() = default;
};
class ListPublicDatasetEntityItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> entityType{};
  shared_ptr<bool> isReversed{};
  shared_ptr<string> location{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};

  ListPublicDatasetEntityItemsRequest() {}

  explicit ListPublicDatasetEntityItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
  }


  virtual ~ListPublicDatasetEntityItemsRequest() = default;
};
class ListPublicDatasetEntityItemsResponseBodyEntityItems : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> entityData{};
  shared_ptr<string> entityName{};

  ListPublicDatasetEntityItemsResponseBodyEntityItems() {}

  explicit ListPublicDatasetEntityItemsResponseBodyEntityItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityData) {
      res["EntityData"] = boost::any(*entityData);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityData") != m.end() && !m["EntityData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EntityData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entityData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~ListPublicDatasetEntityItemsResponseBodyEntityItems() = default;
};
class ListPublicDatasetEntityItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<vector<ListPublicDatasetEntityItemsResponseBodyEntityItems>> entityItems{};
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPublicDatasetEntityItemsResponseBody() {}

  explicit ListPublicDatasetEntityItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (entityItems) {
      vector<boost::any> temp1;
      for(auto item1:*entityItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityItems"] = boost::any(temp1);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityItems"].type()) {
        vector<ListPublicDatasetEntityItemsResponseBodyEntityItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicDatasetEntityItemsResponseBodyEntityItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityItems = make_shared<vector<ListPublicDatasetEntityItemsResponseBodyEntityItems>>(expect1);
      }
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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


  virtual ~ListPublicDatasetEntityItemsResponseBody() = default;
};
class ListPublicDatasetEntityItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicDatasetEntityItemsResponseBody> body{};

  ListPublicDatasetEntityItemsResponse() {}

  explicit ListPublicDatasetEntityItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicDatasetEntityItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicDatasetEntityItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicDatasetEntityItemsResponse() = default;
};
class ListPublicDatasetTagsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isReversed{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};

  ListPublicDatasetTagsRequest() {}

  explicit ListPublicDatasetTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
  }


  virtual ~ListPublicDatasetTagsRequest() = default;
};
class ListPublicDatasetTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<long> totalCount{};

  ListPublicDatasetTagsResponseBody() {}

  explicit ListPublicDatasetTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPublicDatasetTagsResponseBody() = default;
};
class ListPublicDatasetTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicDatasetTagsResponseBody> body{};

  ListPublicDatasetTagsResponse() {}

  explicit ListPublicDatasetTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicDatasetTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicDatasetTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicDatasetTagsResponse() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<vector<ListRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
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
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListRunsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<bool> getTotal{};
  shared_ptr<bool> isReversed{};
  shared_ptr<string> labelSelector{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};
  shared_ptr<string> status{};
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  ListRunsRequest() {}

  explicit ListRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (getTotal) {
      res["GetTotal"] = boost::any(*getTotal);
    }
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (labelSelector) {
      res["LabelSelector"] = boost::any(*labelSelector);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("GetTotal") != m.end() && !m["GetTotal"].empty()) {
      getTotal = make_shared<bool>(boost::any_cast<bool>(m["GetTotal"]));
    }
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("LabelSelector") != m.end() && !m["LabelSelector"].empty()) {
      labelSelector = make_shared<string>(boost::any_cast<string>(m["LabelSelector"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListRunsRequest() = default;
};
class ListRunsResponseBodyRunsExecuteOptions : public Darabonba::Model {
public:
  shared_ptr<bool> callCaching{};
  shared_ptr<bool> deleteIntermediateResults{};
  shared_ptr<string> failureMode{};
  shared_ptr<bool> useRelativeOutputPaths{};

  ListRunsResponseBodyRunsExecuteOptions() {}

  explicit ListRunsResponseBodyRunsExecuteOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callCaching) {
      res["CallCaching"] = boost::any(*callCaching);
    }
    if (deleteIntermediateResults) {
      res["DeleteIntermediateResults"] = boost::any(*deleteIntermediateResults);
    }
    if (failureMode) {
      res["FailureMode"] = boost::any(*failureMode);
    }
    if (useRelativeOutputPaths) {
      res["UseRelativeOutputPaths"] = boost::any(*useRelativeOutputPaths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallCaching") != m.end() && !m["CallCaching"].empty()) {
      callCaching = make_shared<bool>(boost::any_cast<bool>(m["CallCaching"]));
    }
    if (m.find("DeleteIntermediateResults") != m.end() && !m["DeleteIntermediateResults"].empty()) {
      deleteIntermediateResults = make_shared<bool>(boost::any_cast<bool>(m["DeleteIntermediateResults"]));
    }
    if (m.find("FailureMode") != m.end() && !m["FailureMode"].empty()) {
      failureMode = make_shared<string>(boost::any_cast<string>(m["FailureMode"]));
    }
    if (m.find("UseRelativeOutputPaths") != m.end() && !m["UseRelativeOutputPaths"].empty()) {
      useRelativeOutputPaths = make_shared<bool>(boost::any_cast<bool>(m["UseRelativeOutputPaths"]));
    }
  }


  virtual ~ListRunsResponseBodyRunsExecuteOptions() = default;
};
class ListRunsResponseBodyRuns : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> createTime{};
  shared_ptr<string> defaultRuntime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> executeDirectory{};
  shared_ptr<ListRunsResponseBodyRunsExecuteOptions> executeOptions{};
  shared_ptr<string> inputs{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> regionId{};
  shared_ptr<string> runId{};
  shared_ptr<string> runName{};
  shared_ptr<string> source{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  ListRunsResponseBodyRuns() {}

  explicit ListRunsResponseBodyRuns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultRuntime) {
      res["DefaultRuntime"] = boost::any(*defaultRuntime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (executeDirectory) {
      res["ExecuteDirectory"] = boost::any(*executeDirectory);
    }
    if (executeOptions) {
      res["ExecuteOptions"] = executeOptions ? boost::any(executeOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inputs) {
      res["Inputs"] = boost::any(*inputs);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (runName) {
      res["RunName"] = boost::any(*runName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultRuntime") != m.end() && !m["DefaultRuntime"].empty()) {
      defaultRuntime = make_shared<string>(boost::any_cast<string>(m["DefaultRuntime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ExecuteDirectory") != m.end() && !m["ExecuteDirectory"].empty()) {
      executeDirectory = make_shared<string>(boost::any_cast<string>(m["ExecuteDirectory"]));
    }
    if (m.find("ExecuteOptions") != m.end() && !m["ExecuteOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecuteOptions"].type()) {
        ListRunsResponseBodyRunsExecuteOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecuteOptions"]));
        executeOptions = make_shared<ListRunsResponseBodyRunsExecuteOptions>(model1);
      }
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      inputs = make_shared<string>(boost::any_cast<string>(m["Inputs"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("RunName") != m.end() && !m["RunName"].empty()) {
      runName = make_shared<string>(boost::any_cast<string>(m["RunName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListRunsResponseBodyRuns() = default;
};
class ListRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRunsResponseBodyRuns>> runs{};
  shared_ptr<long> totalCount{};

  ListRunsResponseBody() {}

  explicit ListRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (runs) {
      vector<boost::any> temp1;
      for(auto item1:*runs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Runs"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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
    if (m.find("Runs") != m.end() && !m["Runs"].empty()) {
      if (typeid(vector<boost::any>) == m["Runs"].type()) {
        vector<ListRunsResponseBodyRuns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Runs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRunsResponseBodyRuns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runs = make_shared<vector<ListRunsResponseBodyRuns>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRunsResponseBody() = default;
};
class ListRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRunsResponseBody> body{};

  ListRunsResponse() {}

  explicit ListRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRunsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRunsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRunsResponse() = default;
};
class ListSubmissionsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isReversed{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};
  shared_ptr<string> status{};
  shared_ptr<string> workspace{};

  ListSubmissionsRequest() {}

  explicit ListSubmissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListSubmissionsRequest() = default;
};
class ListSubmissionsResponseBodySubmissionsRunStats : public Darabonba::Model {
public:
  shared_ptr<long> aborted{};
  shared_ptr<long> aborting{};
  shared_ptr<long> failed{};
  shared_ptr<long> pending{};
  shared_ptr<long> running{};
  shared_ptr<long> submitted{};
  shared_ptr<long> succeeded{};

  ListSubmissionsResponseBodySubmissionsRunStats() {}

  explicit ListSubmissionsResponseBodySubmissionsRunStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aborted) {
      res["Aborted"] = boost::any(*aborted);
    }
    if (aborting) {
      res["Aborting"] = boost::any(*aborting);
    }
    if (failed) {
      res["Failed"] = boost::any(*failed);
    }
    if (pending) {
      res["Pending"] = boost::any(*pending);
    }
    if (running) {
      res["Running"] = boost::any(*running);
    }
    if (submitted) {
      res["Submitted"] = boost::any(*submitted);
    }
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aborted") != m.end() && !m["Aborted"].empty()) {
      aborted = make_shared<long>(boost::any_cast<long>(m["Aborted"]));
    }
    if (m.find("Aborting") != m.end() && !m["Aborting"].empty()) {
      aborting = make_shared<long>(boost::any_cast<long>(m["Aborting"]));
    }
    if (m.find("Failed") != m.end() && !m["Failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["Failed"]));
    }
    if (m.find("Pending") != m.end() && !m["Pending"].empty()) {
      pending = make_shared<long>(boost::any_cast<long>(m["Pending"]));
    }
    if (m.find("Running") != m.end() && !m["Running"].empty()) {
      running = make_shared<long>(boost::any_cast<long>(m["Running"]));
    }
    if (m.find("Submitted") != m.end() && !m["Submitted"].empty()) {
      submitted = make_shared<long>(boost::any_cast<long>(m["Submitted"]));
    }
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<long>(boost::any_cast<long>(m["Succeeded"]));
    }
  }


  virtual ~ListSubmissionsResponseBodySubmissionsRunStats() = default;
};
class ListSubmissionsResponseBodySubmissions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityType{};
  shared_ptr<ListSubmissionsResponseBodySubmissionsRunStats> runStats{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  ListSubmissionsResponseBodySubmissions() {}

  explicit ListSubmissionsResponseBodySubmissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (runStats) {
      res["RunStats"] = runStats ? boost::any(runStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("RunStats") != m.end() && !m["RunStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunStats"].type()) {
        ListSubmissionsResponseBodySubmissionsRunStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunStats"]));
        runStats = make_shared<ListSubmissionsResponseBodySubmissionsRunStats>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListSubmissionsResponseBodySubmissions() = default;
};
class ListSubmissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSubmissionsResponseBodySubmissions>> submissions{};
  shared_ptr<long> totalCount{};

  ListSubmissionsResponseBody() {}

  explicit ListSubmissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (submissions) {
      vector<boost::any> temp1;
      for(auto item1:*submissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Submissions"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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
    if (m.find("Submissions") != m.end() && !m["Submissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Submissions"].type()) {
        vector<ListSubmissionsResponseBodySubmissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Submissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubmissionsResponseBodySubmissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        submissions = make_shared<vector<ListSubmissionsResponseBodySubmissions>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSubmissionsResponseBody() = default;
};
class ListSubmissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubmissionsResponseBody> body{};

  ListSubmissionsResponse() {}

  explicit ListSubmissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubmissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubmissionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubmissionsResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isReversed{};
  shared_ptr<string> labelSelector{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};
  shared_ptr<string> workspace{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (labelSelector) {
      res["LabelSelector"] = boost::any(*labelSelector);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("LabelSelector") != m.end() && !m["LabelSelector"].empty()) {
      labelSelector = make_shared<string>(boost::any_cast<string>(m["LabelSelector"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponseBodyTemplatesInputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  ListTemplatesResponseBodyTemplatesInputsExpression() {}

  explicit ListTemplatesResponseBodyTemplatesInputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplatesInputsExpression() = default;
};
class ListTemplatesResponseBodyTemplatesOutputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  ListTemplatesResponseBodyTemplatesOutputsExpression() {}

  explicit ListTemplatesResponseBodyTemplatesOutputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplatesOutputsExpression() = default;
};
class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplatesInputsExpression>> inputsExpression{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplatesOutputsExpression>> outputsExpression{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> rootEntity{};
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  ListTemplatesResponseBodyTemplates() {}

  explicit ListTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*inputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputsExpression"] = boost::any(temp1);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (outputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*outputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputsExpression"] = boost::any(temp1);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (rootEntity) {
      res["RootEntity"] = boost::any(*rootEntity);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputsExpression") != m.end() && !m["InputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["InputsExpression"].type()) {
        vector<ListTemplatesResponseBodyTemplatesInputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplatesInputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputsExpression = make_shared<vector<ListTemplatesResponseBodyTemplatesInputsExpression>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("OutputsExpression") != m.end() && !m["OutputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputsExpression"].type()) {
        vector<ListTemplatesResponseBodyTemplatesOutputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplatesOutputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputsExpression = make_shared<vector<ListTemplatesResponseBodyTemplatesOutputsExpression>>(expect1);
      }
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("RootEntity") != m.end() && !m["RootEntity"].empty()) {
      rootEntity = make_shared<string>(boost::any_cast<string>(m["RootEntity"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplates() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalCount{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTemplatesResponseBody() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplatesResponse() = default;
};
class ListUserActiveRunsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};

  ListUserActiveRunsRequest() {}

  explicit ListUserActiveRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListUserActiveRunsRequest() = default;
};
class ListUserActiveRunsResponseBodyRunsExecuteOptions : public Darabonba::Model {
public:
  shared_ptr<bool> callCaching{};
  shared_ptr<bool> deleteIntermediateResults{};
  shared_ptr<string> failureMode{};
  shared_ptr<bool> useRelativeOutputPaths{};

  ListUserActiveRunsResponseBodyRunsExecuteOptions() {}

  explicit ListUserActiveRunsResponseBodyRunsExecuteOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callCaching) {
      res["CallCaching"] = boost::any(*callCaching);
    }
    if (deleteIntermediateResults) {
      res["DeleteIntermediateResults"] = boost::any(*deleteIntermediateResults);
    }
    if (failureMode) {
      res["FailureMode"] = boost::any(*failureMode);
    }
    if (useRelativeOutputPaths) {
      res["UseRelativeOutputPaths"] = boost::any(*useRelativeOutputPaths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallCaching") != m.end() && !m["CallCaching"].empty()) {
      callCaching = make_shared<bool>(boost::any_cast<bool>(m["CallCaching"]));
    }
    if (m.find("DeleteIntermediateResults") != m.end() && !m["DeleteIntermediateResults"].empty()) {
      deleteIntermediateResults = make_shared<bool>(boost::any_cast<bool>(m["DeleteIntermediateResults"]));
    }
    if (m.find("FailureMode") != m.end() && !m["FailureMode"].empty()) {
      failureMode = make_shared<string>(boost::any_cast<string>(m["FailureMode"]));
    }
    if (m.find("UseRelativeOutputPaths") != m.end() && !m["UseRelativeOutputPaths"].empty()) {
      useRelativeOutputPaths = make_shared<bool>(boost::any_cast<bool>(m["UseRelativeOutputPaths"]));
    }
  }


  virtual ~ListUserActiveRunsResponseBodyRunsExecuteOptions() = default;
};
class ListUserActiveRunsResponseBodyRuns : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> createTime{};
  shared_ptr<string> defaultRuntime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> executeDirectory{};
  shared_ptr<ListUserActiveRunsResponseBodyRunsExecuteOptions> executeOptions{};
  shared_ptr<string> inputs{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> regionId{};
  shared_ptr<string> runId{};
  shared_ptr<string> runName{};
  shared_ptr<string> source{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  ListUserActiveRunsResponseBodyRuns() {}

  explicit ListUserActiveRunsResponseBodyRuns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultRuntime) {
      res["DefaultRuntime"] = boost::any(*defaultRuntime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (executeDirectory) {
      res["ExecuteDirectory"] = boost::any(*executeDirectory);
    }
    if (executeOptions) {
      res["ExecuteOptions"] = executeOptions ? boost::any(executeOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inputs) {
      res["Inputs"] = boost::any(*inputs);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (runName) {
      res["RunName"] = boost::any(*runName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultRuntime") != m.end() && !m["DefaultRuntime"].empty()) {
      defaultRuntime = make_shared<string>(boost::any_cast<string>(m["DefaultRuntime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ExecuteDirectory") != m.end() && !m["ExecuteDirectory"].empty()) {
      executeDirectory = make_shared<string>(boost::any_cast<string>(m["ExecuteDirectory"]));
    }
    if (m.find("ExecuteOptions") != m.end() && !m["ExecuteOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecuteOptions"].type()) {
        ListUserActiveRunsResponseBodyRunsExecuteOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecuteOptions"]));
        executeOptions = make_shared<ListUserActiveRunsResponseBodyRunsExecuteOptions>(model1);
      }
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      inputs = make_shared<string>(boost::any_cast<string>(m["Inputs"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("RunName") != m.end() && !m["RunName"].empty()) {
      runName = make_shared<string>(boost::any_cast<string>(m["RunName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListUserActiveRunsResponseBodyRuns() = default;
};
class ListUserActiveRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserActiveRunsResponseBodyRuns>> runs{};
  shared_ptr<long> totalCount{};

  ListUserActiveRunsResponseBody() {}

  explicit ListUserActiveRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (runs) {
      vector<boost::any> temp1;
      for(auto item1:*runs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Runs"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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
    if (m.find("Runs") != m.end() && !m["Runs"].empty()) {
      if (typeid(vector<boost::any>) == m["Runs"].type()) {
        vector<ListUserActiveRunsResponseBodyRuns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Runs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserActiveRunsResponseBodyRuns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runs = make_shared<vector<ListUserActiveRunsResponseBodyRuns>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListUserActiveRunsResponseBody() = default;
};
class ListUserActiveRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserActiveRunsResponseBody> body{};

  ListUserActiveRunsResponse() {}

  explicit ListUserActiveRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserActiveRunsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserActiveRunsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserActiveRunsResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isReversed{};
  shared_ptr<string> labelSelector{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> search{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isReversed) {
      res["IsReversed"] = boost::any(*isReversed);
    }
    if (labelSelector) {
      res["LabelSelector"] = boost::any(*labelSelector);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsReversed") != m.end() && !m["IsReversed"].empty()) {
      isReversed = make_shared<bool>(boost::any_cast<bool>(m["IsReversed"]));
    }
    if (m.find("LabelSelector") != m.end() && !m["LabelSelector"].empty()) {
      labelSelector = make_shared<string>(boost::any_cast<string>(m["LabelSelector"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      search = make_shared<string>(boost::any_cast<string>(m["Search"]));
    }
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> jobLifecycle{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<string> location{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};
  shared_ptr<string> storage{};
  shared_ptr<string> workspace{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jobLifecycle) {
      res["JobLifecycle"] = boost::any(*jobLifecycle);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JobLifecycle") != m.end() && !m["JobLifecycle"].empty()) {
      jobLifecycle = make_shared<long>(boost::any_cast<long>(m["JobLifecycle"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["Storage"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
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
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
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
    if (m.find("Workspaces") != m.end() && !m["Workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Workspaces"].type()) {
        vector<ListWorkspacesResponseBodyWorkspaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workspaces"])){
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
class ResumeSubmissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> submissionId{};
  shared_ptr<string> workspace{};

  ResumeSubmissionRequest() {}

  explicit ResumeSubmissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (submissionId) {
      res["SubmissionId"] = boost::any(*submissionId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubmissionId") != m.end() && !m["SubmissionId"].empty()) {
      submissionId = make_shared<string>(boost::any_cast<string>(m["SubmissionId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~ResumeSubmissionRequest() = default;
};
class ResumeSubmissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  ResumeSubmissionResponseBody() {}

  explicit ResumeSubmissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResumeSubmissionResponseBody() = default;
};
class ResumeSubmissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeSubmissionResponseBody> body{};

  ResumeSubmissionResponse() {}

  explicit ResumeSubmissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeSubmissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeSubmissionResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeSubmissionResponse() = default;
};
class TagAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  TagAppRequest() {}

  explicit TagAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~TagAppRequest() = default;
};
class TagAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appRevision{};
  shared_ptr<string> formerRevision{};
  shared_ptr<string> formerTag{};
  shared_ptr<string> requestId{};
  shared_ptr<string> revisionTag{};
  shared_ptr<string> workspace{};

  TagAppResponseBody() {}

  explicit TagAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appRevision) {
      res["AppRevision"] = boost::any(*appRevision);
    }
    if (formerRevision) {
      res["FormerRevision"] = boost::any(*formerRevision);
    }
    if (formerTag) {
      res["FormerTag"] = boost::any(*formerTag);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (revisionTag) {
      res["RevisionTag"] = boost::any(*revisionTag);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppRevision") != m.end() && !m["AppRevision"].empty()) {
      appRevision = make_shared<string>(boost::any_cast<string>(m["AppRevision"]));
    }
    if (m.find("FormerRevision") != m.end() && !m["FormerRevision"].empty()) {
      formerRevision = make_shared<string>(boost::any_cast<string>(m["FormerRevision"]));
    }
    if (m.find("FormerTag") != m.end() && !m["FormerTag"].empty()) {
      formerTag = make_shared<string>(boost::any_cast<string>(m["FormerTag"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RevisionTag") != m.end() && !m["RevisionTag"].empty()) {
      revisionTag = make_shared<string>(boost::any_cast<string>(m["RevisionTag"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~TagAppResponseBody() = default;
};
class TagAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagAppResponseBody> body{};

  TagAppResponse() {}

  explicit TagAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagAppResponseBody>(model1);
      }
    }
  }


  virtual ~TagAppResponse() = default;
};
class UpdateEntityRequestEntityItems : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> entityData{};
  shared_ptr<string> entityName{};

  UpdateEntityRequestEntityItems() {}

  explicit UpdateEntityRequestEntityItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityData) {
      res["EntityData"] = boost::any(*entityData);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityData") != m.end() && !m["EntityData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EntityData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entityData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~UpdateEntityRequestEntityItems() = default;
};
class UpdateEntityRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateEntityRequestEntityItems>> entityItems{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  UpdateEntityRequest() {}

  explicit UpdateEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityItems) {
      vector<boost::any> temp1;
      for(auto item1:*entityItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityItems"] = boost::any(temp1);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityItems"].type()) {
        vector<UpdateEntityRequestEntityItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEntityRequestEntityItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityItems = make_shared<vector<UpdateEntityRequestEntityItems>>(expect1);
      }
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateEntityRequest() = default;
};
class UpdateEntityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityItemsShrink{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  UpdateEntityShrinkRequest() {}

  explicit UpdateEntityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityItemsShrink) {
      res["EntityItems"] = boost::any(*entityItemsShrink);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      entityItemsShrink = make_shared<string>(boost::any_cast<string>(m["EntityItems"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateEntityShrinkRequest() = default;
};
class UpdateEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  UpdateEntityResponseBody() {}

  explicit UpdateEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateEntityResponseBody() = default;
};
class UpdateEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEntityResponseBody> body{};

  UpdateEntityResponse() {}

  explicit UpdateEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEntityResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEntityResponse() = default;
};
class UpdateEntityItemsRequestEntityItems : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> entityData{};
  shared_ptr<string> entityName{};

  UpdateEntityItemsRequestEntityItems() {}

  explicit UpdateEntityItemsRequestEntityItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityData) {
      res["EntityData"] = boost::any(*entityData);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityData") != m.end() && !m["EntityData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EntityData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entityData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~UpdateEntityItemsRequestEntityItems() = default;
};
class UpdateEntityItemsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateEntityItemsRequestEntityItems>> entityItems{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  UpdateEntityItemsRequest() {}

  explicit UpdateEntityItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityItems) {
      vector<boost::any> temp1;
      for(auto item1:*entityItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityItems"] = boost::any(temp1);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityItems"].type()) {
        vector<UpdateEntityItemsRequestEntityItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEntityItemsRequestEntityItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityItems = make_shared<vector<UpdateEntityItemsRequestEntityItems>>(expect1);
      }
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateEntityItemsRequest() = default;
};
class UpdateEntityItemsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityItemsShrink{};
  shared_ptr<string> entityType{};
  shared_ptr<string> workspace{};

  UpdateEntityItemsShrinkRequest() {}

  explicit UpdateEntityItemsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityItemsShrink) {
      res["EntityItems"] = boost::any(*entityItemsShrink);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityItems") != m.end() && !m["EntityItems"].empty()) {
      entityItemsShrink = make_shared<string>(boost::any_cast<string>(m["EntityItems"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateEntityItemsShrinkRequest() = default;
};
class UpdateEntityItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  UpdateEntityItemsResponseBody() {}

  explicit UpdateEntityItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateEntityItemsResponseBody() = default;
};
class UpdateEntityItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEntityItemsResponseBody> body{};

  UpdateEntityItemsResponse() {}

  explicit UpdateEntityItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEntityItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEntityItemsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEntityItemsResponse() = default;
};
class UpdateTemplateRequestInputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  UpdateTemplateRequestInputsExpression() {}

  explicit UpdateTemplateRequestInputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~UpdateTemplateRequestInputsExpression() = default;
};
class UpdateTemplateRequestOutputsExpression : public Darabonba::Model {
public:
  shared_ptr<string> help{};
  shared_ptr<bool> required{};
  shared_ptr<long> stepOrder{};
  shared_ptr<string> taskName{};
  shared_ptr<string> variableName{};
  shared_ptr<string> variableType{};
  shared_ptr<string> variableValue{};

  UpdateTemplateRequestOutputsExpression() {}

  explicit UpdateTemplateRequestOutputsExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (help) {
      res["Help"] = boost::any(*help);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (stepOrder) {
      res["StepOrder"] = boost::any(*stepOrder);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (variableName) {
      res["VariableName"] = boost::any(*variableName);
    }
    if (variableType) {
      res["VariableType"] = boost::any(*variableType);
    }
    if (variableValue) {
      res["VariableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Help") != m.end() && !m["Help"].empty()) {
      help = make_shared<string>(boost::any_cast<string>(m["Help"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("StepOrder") != m.end() && !m["StepOrder"].empty()) {
      stepOrder = make_shared<long>(boost::any_cast<long>(m["StepOrder"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("VariableName") != m.end() && !m["VariableName"].empty()) {
      variableName = make_shared<string>(boost::any_cast<string>(m["VariableName"]));
    }
    if (m.find("VariableType") != m.end() && !m["VariableType"].empty()) {
      variableType = make_shared<string>(boost::any_cast<string>(m["VariableType"]));
    }
    if (m.find("VariableValue") != m.end() && !m["VariableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["VariableValue"]));
    }
  }


  virtual ~UpdateTemplateRequestOutputsExpression() = default;
};
class UpdateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateTemplateRequestInputsExpression>> inputsExpression{};
  shared_ptr<string> labels{};
  shared_ptr<vector<UpdateTemplateRequestOutputsExpression>> outputsExpression{};
  shared_ptr<string> rootEntity{};
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*inputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputsExpression"] = boost::any(temp1);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (outputsExpression) {
      vector<boost::any> temp1;
      for(auto item1:*outputsExpression){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputsExpression"] = boost::any(temp1);
    }
    if (rootEntity) {
      res["RootEntity"] = boost::any(*rootEntity);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputsExpression") != m.end() && !m["InputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["InputsExpression"].type()) {
        vector<UpdateTemplateRequestInputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTemplateRequestInputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputsExpression = make_shared<vector<UpdateTemplateRequestInputsExpression>>(expect1);
      }
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("OutputsExpression") != m.end() && !m["OutputsExpression"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputsExpression"].type()) {
        vector<UpdateTemplateRequestOutputsExpression> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputsExpression"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTemplateRequestOutputsExpression model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputsExpression = make_shared<vector<UpdateTemplateRequestOutputsExpression>>(expect1);
      }
    }
    if (m.find("RootEntity") != m.end() && !m["RootEntity"].empty()) {
      rootEntity = make_shared<string>(boost::any_cast<string>(m["RootEntity"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> inputsExpressionShrink{};
  shared_ptr<string> labels{};
  shared_ptr<string> outputsExpressionShrink{};
  shared_ptr<string> rootEntity{};
  shared_ptr<string> templateName{};
  shared_ptr<string> workspace{};

  UpdateTemplateShrinkRequest() {}

  explicit UpdateTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (inputsExpressionShrink) {
      res["InputsExpression"] = boost::any(*inputsExpressionShrink);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (outputsExpressionShrink) {
      res["OutputsExpression"] = boost::any(*outputsExpressionShrink);
    }
    if (rootEntity) {
      res["RootEntity"] = boost::any(*rootEntity);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InputsExpression") != m.end() && !m["InputsExpression"].empty()) {
      inputsExpressionShrink = make_shared<string>(boost::any_cast<string>(m["InputsExpression"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("OutputsExpression") != m.end() && !m["OutputsExpression"].empty()) {
      outputsExpressionShrink = make_shared<string>(boost::any_cast<string>(m["OutputsExpression"]));
    }
    if (m.find("RootEntity") != m.end() && !m["RootEntity"].empty()) {
      rootEntity = make_shared<string>(boost::any_cast<string>(m["RootEntity"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateTemplateShrinkRequest() = default;
};
class UpdateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  UpdateTemplateResponseBody() {}

  explicit UpdateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTemplateResponseBody() = default;
};
class UpdateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTemplateResponseBody> body{};

  UpdateTemplateResponse() {}

  explicit UpdateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTemplateResponse() = default;
};
class UpdateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> jobLifecycle{};
  shared_ptr<string> labels{};
  shared_ptr<string> role{};
  shared_ptr<string> workspace{};

  UpdateWorkspaceRequest() {}

  explicit UpdateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jobLifecycle) {
      res["JobLifecycle"] = boost::any(*jobLifecycle);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JobLifecycle") != m.end() && !m["JobLifecycle"].empty()) {
      jobLifecycle = make_shared<long>(boost::any_cast<long>(m["JobLifecycle"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UpdateWorkspaceRequest() = default;
};
class UpdateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};

  UpdateWorkspaceResponseBody() {}

  explicit UpdateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateWorkspaceResponseBody() = default;
};
class UpdateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceResponseBody> body{};

  UpdateWorkspaceResponse() {}

  explicit UpdateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceResponse() = default;
};
class UploadEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityCSVFile{};
  shared_ptr<string> workspace{};

  UploadEntityRequest() {}

  explicit UploadEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityCSVFile) {
      res["EntityCSVFile"] = boost::any(*entityCSVFile);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityCSVFile") != m.end() && !m["EntityCSVFile"].empty()) {
      entityCSVFile = make_shared<string>(boost::any_cast<string>(m["EntityCSVFile"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UploadEntityRequest() = default;
};
class UploadEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};
  shared_ptr<string> hostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspace{};

  UploadEntityResponseBody() {}

  explicit UploadEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = boost::any(*workspace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      workspace = make_shared<string>(boost::any_cast<string>(m["Workspace"]));
    }
  }


  virtual ~UploadEntityResponseBody() = default;
};
class UploadEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadEntityResponseBody> body{};

  UploadEntityResponse() {}

  explicit UploadEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadEntityResponseBody>(model1);
      }
    }
  }


  virtual ~UploadEntityResponse() = default;
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
  AbortRunResponse abortRunWithOptions(shared_ptr<AbortRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbortRunResponse abortRun(shared_ptr<AbortRunRequest> request);
  AbortSubmissionResponse abortSubmissionWithOptions(shared_ptr<AbortSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbortSubmissionResponse abortSubmission(shared_ptr<AbortSubmissionRequest> request);
  CopyPublicEntityResponse copyPublicEntityWithOptions(shared_ptr<CopyPublicEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CopyPublicEntityResponse copyPublicEntity(shared_ptr<CopyPublicEntityRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateEntityResponse createEntityWithOptions(shared_ptr<CreateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEntityResponse createEntity(shared_ptr<CreateEntityRequest> request);
  CreateRunResponse createRunWithOptions(shared_ptr<CreateRunRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRunResponse createRun(shared_ptr<CreateRunRequest> request);
  CreateSubmissionResponse createSubmissionWithOptions(shared_ptr<CreateSubmissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubmissionResponse createSubmission(shared_ptr<CreateSubmissionRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  CreateWorkspaceResponse createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResponse createWorkspace(shared_ptr<CreateWorkspaceRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteEntityResponse deleteEntityWithOptions(shared_ptr<DeleteEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEntityResponse deleteEntity(shared_ptr<DeleteEntityRequest> request);
  DeleteEntityItemsResponse deleteEntityItemsWithOptions(shared_ptr<DeleteEntityItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEntityItemsResponse deleteEntityItems(shared_ptr<DeleteEntityItemsRequest> request);
  DeleteRunResponse deleteRunWithOptions(shared_ptr<DeleteRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRunResponse deleteRun(shared_ptr<DeleteRunRequest> request);
  DeleteSubmissionResponse deleteSubmissionWithOptions(shared_ptr<DeleteSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubmissionResponse deleteSubmission(shared_ptr<DeleteSubmissionRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<DeleteTemplateRequest> request);
  DeleteWorkspaceResponse deleteWorkspaceWithOptions(shared_ptr<DeleteWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceResponse deleteWorkspace(shared_ptr<DeleteWorkspaceRequest> request);
  DownloadEntityResponse downloadEntityWithOptions(shared_ptr<DownloadEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DownloadEntityResponse downloadEntity(shared_ptr<DownloadEntityRequest> request);
  GetAppResponse getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<GetAppRequest> request);
  GetEntityResponse getEntityWithOptions(shared_ptr<GetEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEntityResponse getEntity(shared_ptr<GetEntityRequest> request);
  GetGlobalAppResponse getGlobalAppWithOptions(shared_ptr<GetGlobalAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGlobalAppResponse getGlobalApp(shared_ptr<GetGlobalAppRequest> request);
  GetPublicDatasetResponse getPublicDatasetWithOptions(shared_ptr<GetPublicDatasetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicDatasetResponse getPublicDataset(shared_ptr<GetPublicDatasetRequest> request);
  GetPublicDatasetEntityResponse getPublicDatasetEntityWithOptions(shared_ptr<GetPublicDatasetEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicDatasetEntityResponse getPublicDatasetEntity(shared_ptr<GetPublicDatasetEntityRequest> request);
  GetRunResponse getRunWithOptions(shared_ptr<GetRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRunResponse getRun(shared_ptr<GetRunRequest> request);
  GetSubmissionResponse getSubmissionWithOptions(shared_ptr<GetSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubmissionResponse getSubmission(shared_ptr<GetSubmissionRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<GetTemplateRequest> request);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<GetWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<GetWorkspaceRequest> request);
  ImportAppResponse importAppWithOptions(shared_ptr<ImportAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportAppResponse importApp(shared_ptr<ImportAppRequest> request);
  InstallGlobalAppResponse installGlobalAppWithOptions(shared_ptr<InstallGlobalAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallGlobalAppResponse installGlobalApp(shared_ptr<InstallGlobalAppRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListAuthorizedSoftwareResponse listAuthorizedSoftwareWithOptions(shared_ptr<ListAuthorizedSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthorizedSoftwareResponse listAuthorizedSoftware(shared_ptr<ListAuthorizedSoftwareRequest> request);
  ListContainerImagesResponse listContainerImagesWithOptions(shared_ptr<ListContainerImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListContainerImagesResponse listContainerImages(shared_ptr<ListContainerImagesRequest> request);
  ListEntitiesResponse listEntitiesWithOptions(shared_ptr<ListEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEntitiesResponse listEntities(shared_ptr<ListEntitiesRequest> request);
  ListEntityItemsResponse listEntityItemsWithOptions(shared_ptr<ListEntityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEntityItemsResponse listEntityItems(shared_ptr<ListEntityItemsRequest> request);
  ListGlobalAppsResponse listGlobalAppsWithOptions(shared_ptr<ListGlobalAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGlobalAppsResponse listGlobalApps(shared_ptr<ListGlobalAppsRequest> request);
  ListPublicDatasetResponse listPublicDatasetWithOptions(shared_ptr<ListPublicDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicDatasetResponse listPublicDataset(shared_ptr<ListPublicDatasetRequest> request);
  ListPublicDatasetEntitiesResponse listPublicDatasetEntitiesWithOptions(shared_ptr<ListPublicDatasetEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicDatasetEntitiesResponse listPublicDatasetEntities(shared_ptr<ListPublicDatasetEntitiesRequest> request);
  ListPublicDatasetEntityItemsResponse listPublicDatasetEntityItemsWithOptions(shared_ptr<ListPublicDatasetEntityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicDatasetEntityItemsResponse listPublicDatasetEntityItems(shared_ptr<ListPublicDatasetEntityItemsRequest> request);
  ListPublicDatasetTagsResponse listPublicDatasetTagsWithOptions(shared_ptr<ListPublicDatasetTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicDatasetTagsResponse listPublicDatasetTags(shared_ptr<ListPublicDatasetTagsRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListRunsResponse listRunsWithOptions(shared_ptr<ListRunsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRunsResponse listRuns(shared_ptr<ListRunsRequest> request);
  ListSubmissionsResponse listSubmissionsWithOptions(shared_ptr<ListSubmissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubmissionsResponse listSubmissions(shared_ptr<ListSubmissionsRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  ListUserActiveRunsResponse listUserActiveRunsWithOptions(shared_ptr<ListUserActiveRunsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserActiveRunsResponse listUserActiveRuns(shared_ptr<ListUserActiveRunsRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  ResumeSubmissionResponse resumeSubmissionWithOptions(shared_ptr<ResumeSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeSubmissionResponse resumeSubmission(shared_ptr<ResumeSubmissionRequest> request);
  TagAppResponse tagAppWithOptions(shared_ptr<TagAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagAppResponse tagApp(shared_ptr<TagAppRequest> request);
  UpdateEntityResponse updateEntityWithOptions(shared_ptr<UpdateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEntityResponse updateEntity(shared_ptr<UpdateEntityRequest> request);
  UpdateEntityItemsResponse updateEntityItemsWithOptions(shared_ptr<UpdateEntityItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEntityItemsResponse updateEntityItems(shared_ptr<UpdateEntityItemsRequest> request);
  UpdateTemplateResponse updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateResponse updateTemplate(shared_ptr<UpdateTemplateRequest> request);
  UpdateWorkspaceResponse updateWorkspaceWithOptions(shared_ptr<UpdateWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceResponse updateWorkspace(shared_ptr<UpdateWorkspaceRequest> request);
  UploadEntityResponse uploadEntityWithOptions(shared_ptr<UploadEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadEntityResponse uploadEntity(shared_ptr<UploadEntityRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EasyGene20210315

#endif
