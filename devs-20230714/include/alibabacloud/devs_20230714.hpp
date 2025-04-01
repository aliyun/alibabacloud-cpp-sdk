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
class ArtifactSpec : public Darabonba::Model {
public:
  shared_ptr<string> runtime{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};

  ArtifactSpec() {}

  explicit ArtifactSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (uri) {
      res["uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("uri") != m.end() && !m["uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["uri"]));
    }
  }


  virtual ~ArtifactSpec() = default;
};
class ArtifactStatus : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> checksum{};
  shared_ptr<long> size{};

  ArtifactStatus() {}

  explicit ArtifactStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["arn"] = boost::any(*arn);
    }
    if (checksum) {
      res["checksum"] = boost::any(*checksum);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
    }
    if (m.find("checksum") != m.end() && !m["checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["checksum"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ArtifactStatus() = default;
};
class Artifact : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<long> generation{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> resourceVersion{};
  shared_ptr<ArtifactSpec> spec{};
  shared_ptr<ArtifactStatus> status{};
  shared_ptr<string> uid{};
  shared_ptr<string> updatedTime{};

  Artifact() {}

  explicit Artifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ArtifactSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<ArtifactSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        ArtifactStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<ArtifactStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("updatedTime") != m.end() && !m["updatedTime"].empty()) {
      updatedTime = make_shared<string>(boost::any_cast<string>(m["updatedTime"]));
    }
  }


  virtual ~Artifact() = default;
};
class ArtifactCode : public Darabonba::Model {
public:
  shared_ptr<string> checksum{};
  shared_ptr<string> url{};

  ArtifactCode() {}

  explicit ArtifactCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checksum) {
      res["checksum"] = boost::any(*checksum);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checksum") != m.end() && !m["checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["checksum"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ArtifactCode() = default;
};
class ArtifactMeta : public Darabonba::Model {
public:
  shared_ptr<string> checksum{};
  shared_ptr<string> name{};

  ArtifactMeta() {}

  explicit ArtifactMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checksum) {
      res["checksum"] = boost::any(*checksum);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checksum") != m.end() && !m["checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["checksum"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ArtifactMeta() = default;
};
class ArtifactTempBucketTokenCredentials : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> securityToken{};

  ArtifactTempBucketTokenCredentials() {}

  explicit ArtifactTempBucketTokenCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["accessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (securityToken) {
      res["securityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("accessKeySecret") != m.end() && !m["accessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["accessKeySecret"]));
    }
    if (m.find("securityToken") != m.end() && !m["securityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["securityToken"]));
    }
  }


  virtual ~ArtifactTempBucketTokenCredentials() = default;
};
class ArtifactTempBucketToken : public Darabonba::Model {
public:
  shared_ptr<ArtifactTempBucketTokenCredentials> credentials{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> ossRegion{};

  ArtifactTempBucketToken() {}

  explicit ArtifactTempBucketToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentials) {
      res["credentials"] = credentials ? boost::any(credentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossBucketName) {
      res["ossBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["ossObjectName"] = boost::any(*ossObjectName);
    }
    if (ossRegion) {
      res["ossRegion"] = boost::any(*ossRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("credentials") != m.end() && !m["credentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["credentials"].type()) {
        ArtifactTempBucketTokenCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credentials"]));
        credentials = make_shared<ArtifactTempBucketTokenCredentials>(model1);
      }
    }
    if (m.find("ossBucketName") != m.end() && !m["ossBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["ossBucketName"]));
    }
    if (m.find("ossObjectName") != m.end() && !m["ossObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["ossObjectName"]));
    }
    if (m.find("ossRegion") != m.end() && !m["ossRegion"].empty()) {
      ossRegion = make_shared<string>(boost::any_cast<string>(m["ossRegion"]));
    }
  }


  virtual ~ArtifactTempBucketToken() = default;
};
class BranchFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  BranchFilter() {}

  explicit BranchFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BranchFilter() = default;
};
class BuildCacheConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> keyPath{};
  shared_ptr<vector<string>> paths{};

  BuildCacheConfig() {}

  explicit BuildCacheConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPath) {
      res["keyPath"] = boost::any(*keyPath);
    }
    if (paths) {
      res["paths"] = boost::any(*paths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyPath") != m.end() && !m["keyPath"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["keyPath"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      keyPath = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("paths") != m.end() && !m["paths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["paths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["paths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paths = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BuildCacheConfig() = default;
};
class DefaultBuilderConfig : public Darabonba::Model {
public:
  shared_ptr<BuildCacheConfig> cache{};
  shared_ptr<vector<string>> languages{};
  shared_ptr<vector<boost::any>> steps{};

  DefaultBuilderConfig() {}

  explicit DefaultBuilderConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cache) {
      res["cache"] = cache ? boost::any(cache->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (languages) {
      res["languages"] = boost::any(*languages);
    }
    if (steps) {
      res["steps"] = boost::any(*steps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cache") != m.end() && !m["cache"].empty()) {
      if (typeid(map<string, boost::any>) == m["cache"].type()) {
        BuildCacheConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cache"]));
        cache = make_shared<BuildCacheConfig>(model1);
      }
    }
    if (m.find("languages") != m.end() && !m["languages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["languages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["languages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      languages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["steps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      steps = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~DefaultBuilderConfig() = default;
};
class BuildConfig : public Darabonba::Model {
public:
  shared_ptr<DefaultBuilderConfig> default_{};

  BuildConfig() {}

  explicit BuildConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (default_) {
      res["default"] = default_ ? boost::any(default_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("default") != m.end() && !m["default"].empty()) {
      if (typeid(map<string, boost::any>) == m["default"].type()) {
        DefaultBuilderConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["default"]));
        default_ = make_shared<DefaultBuilderConfig>(model1);
      }
    }
  }


  virtual ~BuildConfig() = default;
};
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
class CodeVersionReference : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commitID{};

  CodeVersionReference() {}

  explicit CodeVersionReference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commitID") != m.end() && !m["commitID"].empty()) {
      commitID = make_shared<string>(boost::any_cast<string>(m["commitID"]));
    }
  }


  virtual ~CodeVersionReference() = default;
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
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
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
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
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
class DeleteModelOutput : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteModelOutput() {}

  explicit DeleteModelOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteModelOutput() = default;
};
class DeployCustomContainerAsyncOutput : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployCustomContainerAsyncOutput() {}

  explicit DeployCustomContainerAsyncOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployCustomContainerAsyncOutput() = default;
};
class DeployCustomContainerInputConcurrencyConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedConcurrency{};

  DeployCustomContainerInputConcurrencyConfig() {}

  explicit DeployCustomContainerInputConcurrencyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~DeployCustomContainerInputConcurrencyConfig() = default;
};
class DeployCustomContainerInputCustomContainerConfigHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<long> failureThreshold{};
  shared_ptr<string> httpGetUrl{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<long> timeoutSeconds{};

  DeployCustomContainerInputCustomContainerConfigHealthCheckConfig() {}

  explicit DeployCustomContainerInputCustomContainerConfigHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failureThreshold) {
      res["failureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGetUrl) {
      res["httpGetUrl"] = boost::any(*httpGetUrl);
    }
    if (initialDelaySeconds) {
      res["initialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["periodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["successThreshold"] = boost::any(*successThreshold);
    }
    if (timeoutSeconds) {
      res["timeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failureThreshold") != m.end() && !m["failureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["failureThreshold"]));
    }
    if (m.find("httpGetUrl") != m.end() && !m["httpGetUrl"].empty()) {
      httpGetUrl = make_shared<string>(boost::any_cast<string>(m["httpGetUrl"]));
    }
    if (m.find("initialDelaySeconds") != m.end() && !m["initialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["initialDelaySeconds"]));
    }
    if (m.find("periodSeconds") != m.end() && !m["periodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["periodSeconds"]));
    }
    if (m.find("successThreshold") != m.end() && !m["successThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["successThreshold"]));
    }
    if (m.find("timeoutSeconds") != m.end() && !m["timeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["timeoutSeconds"]));
    }
  }


  virtual ~DeployCustomContainerInputCustomContainerConfigHealthCheckConfig() = default;
};
class DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer : public Darabonba::Model {
public:
  shared_ptr<string> handler{};
  shared_ptr<long> timeout{};

  DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer() {}

  explicit DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer() = default;
};
class DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop : public Darabonba::Model {
public:
  shared_ptr<string> handler{};
  shared_ptr<long> timeout{};

  DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop() {}

  explicit DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handler) {
      res["handler"] = boost::any(*handler);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("handler") != m.end() && !m["handler"].empty()) {
      handler = make_shared<string>(boost::any_cast<string>(m["handler"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop() = default;
};
class DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig : public Darabonba::Model {
public:
  shared_ptr<DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer> initializer{};
  shared_ptr<DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop> preStop{};

  DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig() {}

  explicit DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initializer) {
      res["initializer"] = initializer ? boost::any(initializer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preStop) {
      res["preStop"] = preStop ? boost::any(preStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("initializer") != m.end() && !m["initializer"].empty()) {
      if (typeid(map<string, boost::any>) == m["initializer"].type()) {
        DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["initializer"]));
        initializer = make_shared<DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer>(model1);
      }
    }
    if (m.find("preStop") != m.end() && !m["preStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["preStop"].type()) {
        DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["preStop"]));
        preStop = make_shared<DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop>(model1);
      }
    }
  }


  virtual ~DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig() = default;
};
class DeployCustomContainerInputCustomContainerConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};
  shared_ptr<vector<string>> entrypoint{};
  shared_ptr<DeployCustomContainerInputCustomContainerConfigHealthCheckConfig> healthCheckConfig{};
  shared_ptr<string> image{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig> instanceLifecycleConfig{};
  shared_ptr<long> port{};

  DeployCustomContainerInputCustomContainerConfig() {}

  explicit DeployCustomContainerInputCustomContainerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["command"] = boost::any(*command);
    }
    if (entrypoint) {
      res["entrypoint"] = boost::any(*entrypoint);
    }
    if (healthCheckConfig) {
      res["healthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (image) {
      res["image"] = boost::any(*image);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (instanceLifecycleConfig) {
      res["instanceLifecycleConfig"] = instanceLifecycleConfig ? boost::any(instanceLifecycleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("command") != m.end() && !m["command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("entrypoint") != m.end() && !m["entrypoint"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["entrypoint"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["entrypoint"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entrypoint = make_shared<vector<string>>(toVec1);
    }
    if (m.find("healthCheckConfig") != m.end() && !m["healthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["healthCheckConfig"].type()) {
        DeployCustomContainerInputCustomContainerConfigHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["healthCheckConfig"]));
        healthCheckConfig = make_shared<DeployCustomContainerInputCustomContainerConfigHealthCheckConfig>(model1);
      }
    }
    if (m.find("image") != m.end() && !m["image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["image"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("instanceLifecycleConfig") != m.end() && !m["instanceLifecycleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["instanceLifecycleConfig"].type()) {
        DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["instanceLifecycleConfig"]));
        instanceLifecycleConfig = make_shared<DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig>(model1);
      }
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
  }


  virtual ~DeployCustomContainerInputCustomContainerConfig() = default;
};
class DeployCustomContainerInputGpuConfig : public Darabonba::Model {
public:
  shared_ptr<long> gpuMemorySize{};
  shared_ptr<string> gpuType{};

  DeployCustomContainerInputGpuConfig() {}

  explicit DeployCustomContainerInputGpuConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuMemorySize) {
      res["gpuMemorySize"] = boost::any(*gpuMemorySize);
    }
    if (gpuType) {
      res["gpuType"] = boost::any(*gpuType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gpuMemorySize") != m.end() && !m["gpuMemorySize"].empty()) {
      gpuMemorySize = make_shared<long>(boost::any_cast<long>(m["gpuMemorySize"]));
    }
    if (m.find("gpuType") != m.end() && !m["gpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["gpuType"]));
    }
  }


  virtual ~DeployCustomContainerInputGpuConfig() = default;
};
class DeployCustomContainerInputHttpTriggerTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<bool> dsableURLInternet{};
  shared_ptr<vector<string>> methods{};

  DeployCustomContainerInputHttpTriggerTriggerConfig() {}

  explicit DeployCustomContainerInputHttpTriggerTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (dsableURLInternet) {
      res["dsableURLInternet"] = boost::any(*dsableURLInternet);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("dsableURLInternet") != m.end() && !m["dsableURLInternet"].empty()) {
      dsableURLInternet = make_shared<bool>(boost::any_cast<bool>(m["dsableURLInternet"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeployCustomContainerInputHttpTriggerTriggerConfig() = default;
};
class DeployCustomContainerInputHttpTrigger : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};
  shared_ptr<DeployCustomContainerInputHttpTriggerTriggerConfig> triggerConfig{};

  DeployCustomContainerInputHttpTrigger() {}

  explicit DeployCustomContainerInputHttpTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        DeployCustomContainerInputHttpTriggerTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<DeployCustomContainerInputHttpTriggerTriggerConfig>(model1);
      }
    }
  }


  virtual ~DeployCustomContainerInputHttpTrigger() = default;
};
class DeployCustomContainerInputLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableInstanceMetrics{};
  shared_ptr<bool> enableRequestMetrics{};
  shared_ptr<string> logBeginRule{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  DeployCustomContainerInputLogConfig() {}

  explicit DeployCustomContainerInputLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInstanceMetrics) {
      res["enableInstanceMetrics"] = boost::any(*enableInstanceMetrics);
    }
    if (enableRequestMetrics) {
      res["enableRequestMetrics"] = boost::any(*enableRequestMetrics);
    }
    if (logBeginRule) {
      res["logBeginRule"] = boost::any(*logBeginRule);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableInstanceMetrics") != m.end() && !m["enableInstanceMetrics"].empty()) {
      enableInstanceMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableInstanceMetrics"]));
    }
    if (m.find("enableRequestMetrics") != m.end() && !m["enableRequestMetrics"].empty()) {
      enableRequestMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableRequestMetrics"]));
    }
    if (m.find("logBeginRule") != m.end() && !m["logBeginRule"].empty()) {
      logBeginRule = make_shared<string>(boost::any_cast<string>(m["logBeginRule"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~DeployCustomContainerInputLogConfig() = default;
};
class ModelConfig : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> framework{};
  shared_ptr<string> model{};
  shared_ptr<vector<ModelConfig>> multiModelConfig{};
  shared_ptr<string> path{};
  shared_ptr<string> prefix{};
  shared_ptr<string> region{};
  shared_ptr<string> reversion{};
  shared_ptr<string> token{};
  shared_ptr<string> type{};

  ModelConfig() {}

  explicit ModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (model) {
      res["model"] = boost::any(*model);
    }
    if (multiModelConfig) {
      vector<boost::any> temp1;
      for(auto item1:*multiModelConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multiModelConfig"] = boost::any(temp1);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (reversion) {
      res["reversion"] = boost::any(*reversion);
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
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["model"]));
    }
    if (m.find("multiModelConfig") != m.end() && !m["multiModelConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["multiModelConfig"].type()) {
        vector<ModelConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multiModelConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiModelConfig = make_shared<vector<ModelConfig>>(expect1);
      }
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("reversion") != m.end() && !m["reversion"].empty()) {
      reversion = make_shared<string>(boost::any_cast<string>(m["reversion"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModelConfig() = default;
};
class DeployCustomContainerInputModelConfig : public Darabonba::Model {
public:
  shared_ptr<string> framework{};
  shared_ptr<vector<ModelConfig>> multiModelConfig{};
  shared_ptr<string> prefix{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> srcModelScopeModelID{};
  shared_ptr<string> srcModelScopeModelRevision{};
  shared_ptr<string> srcModelScopeToken{};
  shared_ptr<string> srcOssBucket{};
  shared_ptr<string> srcOssPath{};
  shared_ptr<string> srcOssRegion{};

  DeployCustomContainerInputModelConfig() {}

  explicit DeployCustomContainerInputModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (multiModelConfig) {
      vector<boost::any> temp1;
      for(auto item1:*multiModelConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multiModelConfig"] = boost::any(temp1);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (srcModelScopeModelID) {
      res["srcModelScopeModelID"] = boost::any(*srcModelScopeModelID);
    }
    if (srcModelScopeModelRevision) {
      res["srcModelScopeModelRevision"] = boost::any(*srcModelScopeModelRevision);
    }
    if (srcModelScopeToken) {
      res["srcModelScopeToken"] = boost::any(*srcModelScopeToken);
    }
    if (srcOssBucket) {
      res["srcOssBucket"] = boost::any(*srcOssBucket);
    }
    if (srcOssPath) {
      res["srcOssPath"] = boost::any(*srcOssPath);
    }
    if (srcOssRegion) {
      res["srcOssRegion"] = boost::any(*srcOssRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("multiModelConfig") != m.end() && !m["multiModelConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["multiModelConfig"].type()) {
        vector<ModelConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multiModelConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiModelConfig = make_shared<vector<ModelConfig>>(expect1);
      }
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("srcModelScopeModelID") != m.end() && !m["srcModelScopeModelID"].empty()) {
      srcModelScopeModelID = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelID"]));
    }
    if (m.find("srcModelScopeModelRevision") != m.end() && !m["srcModelScopeModelRevision"].empty()) {
      srcModelScopeModelRevision = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelRevision"]));
    }
    if (m.find("srcModelScopeToken") != m.end() && !m["srcModelScopeToken"].empty()) {
      srcModelScopeToken = make_shared<string>(boost::any_cast<string>(m["srcModelScopeToken"]));
    }
    if (m.find("srcOssBucket") != m.end() && !m["srcOssBucket"].empty()) {
      srcOssBucket = make_shared<string>(boost::any_cast<string>(m["srcOssBucket"]));
    }
    if (m.find("srcOssPath") != m.end() && !m["srcOssPath"].empty()) {
      srcOssPath = make_shared<string>(boost::any_cast<string>(m["srcOssPath"]));
    }
    if (m.find("srcOssRegion") != m.end() && !m["srcOssRegion"].empty()) {
      srcOssRegion = make_shared<string>(boost::any_cast<string>(m["srcOssRegion"]));
    }
  }


  virtual ~DeployCustomContainerInputModelConfig() = default;
};
class DeployCustomContainerInputNasConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<string>> mountPoints{};
  shared_ptr<long> userId{};

  DeployCustomContainerInputNasConfig() {}

  explicit DeployCustomContainerInputNasConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (mountPoints) {
      res["mountPoints"] = boost::any(*mountPoints);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mountPoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountPoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~DeployCustomContainerInputNasConfig() = default;
};
class DeployCustomContainerInputProvisionConfigScheduledActions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};
  shared_ptr<string> timeZone{};

  DeployCustomContainerInputProvisionConfigScheduledActions() {}

  explicit DeployCustomContainerInputProvisionConfigScheduledActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleExpression) {
      res["scheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleExpression") != m.end() && !m["scheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["scheduleExpression"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~DeployCustomContainerInputProvisionConfigScheduledActions() = default;
};
class DeployCustomContainerInputProvisionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateGPU{};
  shared_ptr<vector<DeployCustomContainerInputProvisionConfigScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};

  DeployCustomContainerInputProvisionConfig() {}

  explicit DeployCustomContainerInputProvisionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateGPU) {
      res["alwaysAllocateGPU"] = boost::any(*alwaysAllocateGPU);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateGPU") != m.end() && !m["alwaysAllocateGPU"].empty()) {
      alwaysAllocateGPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateGPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<DeployCustomContainerInputProvisionConfigScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployCustomContainerInputProvisionConfigScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<DeployCustomContainerInputProvisionConfigScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
  }


  virtual ~DeployCustomContainerInputProvisionConfig() = default;
};
class DeployCustomContainerInputVpcConfig : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  DeployCustomContainerInputVpcConfig() {}

  explicit DeployCustomContainerInputVpcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchIds) {
      res["vSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("vSwitchIds") != m.end() && !m["vSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~DeployCustomContainerInputVpcConfig() = default;
};
class DeployCustomContainerInput : public Darabonba::Model {
public:
  shared_ptr<string> accountID{};
  shared_ptr<DeployCustomContainerInputConcurrencyConfig> concurrencyConfig{};
  shared_ptr<double> cpu{};
  shared_ptr<DeployCustomContainerInputCustomContainerConfig> customContainerConfig{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> envName{};
  shared_ptr<map<string, boost::any>> environmentVariables{};
  shared_ptr<DeployCustomContainerInputGpuConfig> gpuConfig{};
  shared_ptr<DeployCustomContainerInputHttpTrigger> httpTrigger{};
  shared_ptr<DeployCustomContainerInputLogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<DeployCustomContainerInputModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<DeployCustomContainerInputNasConfig> nasConfig{};
  shared_ptr<string> originalName{};
  shared_ptr<string> projectName{};
  shared_ptr<DeployCustomContainerInputProvisionConfig> provisionConfig{};
  shared_ptr<string> region{};
  shared_ptr<string> reportStatusURL{};
  shared_ptr<string> role{};
  shared_ptr<long> timeout{};
  shared_ptr<string> traceId{};
  shared_ptr<DeployCustomContainerInputVpcConfig> vpcConfig{};

  DeployCustomContainerInput() {}

  explicit DeployCustomContainerInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountID) {
      res["accountID"] = boost::any(*accountID);
    }
    if (concurrencyConfig) {
      res["concurrencyConfig"] = concurrencyConfig ? boost::any(concurrencyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (customContainerConfig) {
      res["customContainerConfig"] = customContainerConfig ? boost::any(customContainerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpTrigger) {
      res["httpTrigger"] = httpTrigger ? boost::any(httpTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originalName) {
      res["originalName"] = boost::any(*originalName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (provisionConfig) {
      res["provisionConfig"] = provisionConfig ? boost::any(provisionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (reportStatusURL) {
      res["reportStatusURL"] = boost::any(*reportStatusURL);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountID") != m.end() && !m["accountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["accountID"]));
    }
    if (m.find("concurrencyConfig") != m.end() && !m["concurrencyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["concurrencyConfig"].type()) {
        DeployCustomContainerInputConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["concurrencyConfig"]));
        concurrencyConfig = make_shared<DeployCustomContainerInputConcurrencyConfig>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("customContainerConfig") != m.end() && !m["customContainerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customContainerConfig"].type()) {
        DeployCustomContainerInputCustomContainerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customContainerConfig"]));
        customContainerConfig = make_shared<DeployCustomContainerInputCustomContainerConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["environmentVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        DeployCustomContainerInputGpuConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<DeployCustomContainerInputGpuConfig>(model1);
      }
    }
    if (m.find("httpTrigger") != m.end() && !m["httpTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["httpTrigger"].type()) {
        DeployCustomContainerInputHttpTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["httpTrigger"]));
        httpTrigger = make_shared<DeployCustomContainerInputHttpTrigger>(model1);
      }
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        DeployCustomContainerInputLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<DeployCustomContainerInputLogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        DeployCustomContainerInputModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<DeployCustomContainerInputModelConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        DeployCustomContainerInputNasConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<DeployCustomContainerInputNasConfig>(model1);
      }
    }
    if (m.find("originalName") != m.end() && !m["originalName"].empty()) {
      originalName = make_shared<string>(boost::any_cast<string>(m["originalName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("provisionConfig") != m.end() && !m["provisionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["provisionConfig"].type()) {
        DeployCustomContainerInputProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["provisionConfig"]));
        provisionConfig = make_shared<DeployCustomContainerInputProvisionConfig>(model1);
      }
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("reportStatusURL") != m.end() && !m["reportStatusURL"].empty()) {
      reportStatusURL = make_shared<string>(boost::any_cast<string>(m["reportStatusURL"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        DeployCustomContainerInputVpcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<DeployCustomContainerInputVpcConfig>(model1);
      }
    }
  }


  virtual ~DeployCustomContainerInput() = default;
};
class DeployCustomContainerOutputData : public Darabonba::Model {
public:
  shared_ptr<string> deploymentTaskID{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> finished{};
  shared_ptr<string> nasConfigStr{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> traceID{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};
  shared_ptr<string> vpcConfigStr{};

  DeployCustomContainerOutputData() {}

  explicit DeployCustomContainerOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentTaskID) {
      res["deploymentTaskID"] = boost::any(*deploymentTaskID);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (nasConfigStr) {
      res["nasConfigStr"] = boost::any(*nasConfigStr);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (traceID) {
      res["traceID"] = boost::any(*traceID);
    }
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
    }
    if (vpcConfigStr) {
      res["vpcConfigStr"] = boost::any(*vpcConfigStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentTaskID") != m.end() && !m["deploymentTaskID"].empty()) {
      deploymentTaskID = make_shared<string>(boost::any_cast<string>(m["deploymentTaskID"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("nasConfigStr") != m.end() && !m["nasConfigStr"].empty()) {
      nasConfigStr = make_shared<string>(boost::any_cast<string>(m["nasConfigStr"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("traceID") != m.end() && !m["traceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["traceID"]));
    }
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
    if (m.find("vpcConfigStr") != m.end() && !m["vpcConfigStr"].empty()) {
      vpcConfigStr = make_shared<string>(boost::any_cast<string>(m["vpcConfigStr"]));
    }
  }


  virtual ~DeployCustomContainerOutputData() = default;
};
class DeployCustomContainerOutput : public Darabonba::Model {
public:
  shared_ptr<DeployCustomContainerOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployCustomContainerOutput() {}

  explicit DeployCustomContainerOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeployCustomContainerOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeployCustomContainerOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployCustomContainerOutput() = default;
};
class DeployEnvironmentOptions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> services{};

  DeployEnvironmentOptions() {}

  explicit DeployEnvironmentOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      res["services"] = boost::any(*services);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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


  virtual ~DeployEnvironmentOptions() = default;
};
class DeployHuggingFaceModelAsyncOutput : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployHuggingFaceModelAsyncOutput() {}

  explicit DeployHuggingFaceModelAsyncOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployHuggingFaceModelAsyncOutput() = default;
};
class DeployHuggingFaceModelInputConcurrencyConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedConcurrency{};

  DeployHuggingFaceModelInputConcurrencyConfig() {}

  explicit DeployHuggingFaceModelInputConcurrencyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputConcurrencyConfig() = default;
};
class DeployHuggingFaceModelInputGpuConfig : public Darabonba::Model {
public:
  shared_ptr<long> gpuMemorySize{};
  shared_ptr<string> gpuType{};

  DeployHuggingFaceModelInputGpuConfig() {}

  explicit DeployHuggingFaceModelInputGpuConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuMemorySize) {
      res["gpuMemorySize"] = boost::any(*gpuMemorySize);
    }
    if (gpuType) {
      res["gpuType"] = boost::any(*gpuType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gpuMemorySize") != m.end() && !m["gpuMemorySize"].empty()) {
      gpuMemorySize = make_shared<long>(boost::any_cast<long>(m["gpuMemorySize"]));
    }
    if (m.find("gpuType") != m.end() && !m["gpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["gpuType"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputGpuConfig() = default;
};
class DeployHuggingFaceModelInputHttpTriggerTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<bool> dsableURLInternet{};
  shared_ptr<vector<string>> methods{};

  DeployHuggingFaceModelInputHttpTriggerTriggerConfig() {}

  explicit DeployHuggingFaceModelInputHttpTriggerTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (dsableURLInternet) {
      res["dsableURLInternet"] = boost::any(*dsableURLInternet);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("dsableURLInternet") != m.end() && !m["dsableURLInternet"].empty()) {
      dsableURLInternet = make_shared<bool>(boost::any_cast<bool>(m["dsableURLInternet"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeployHuggingFaceModelInputHttpTriggerTriggerConfig() = default;
};
class DeployHuggingFaceModelInputHttpTrigger : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};
  shared_ptr<DeployHuggingFaceModelInputHttpTriggerTriggerConfig> triggerConfig{};

  DeployHuggingFaceModelInputHttpTrigger() {}

  explicit DeployHuggingFaceModelInputHttpTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        DeployHuggingFaceModelInputHttpTriggerTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<DeployHuggingFaceModelInputHttpTriggerTriggerConfig>(model1);
      }
    }
  }


  virtual ~DeployHuggingFaceModelInputHttpTrigger() = default;
};
class DeployHuggingFaceModelInputLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableInstanceMetrics{};
  shared_ptr<bool> enableRequestMetrics{};
  shared_ptr<string> logBeginRule{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  DeployHuggingFaceModelInputLogConfig() {}

  explicit DeployHuggingFaceModelInputLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInstanceMetrics) {
      res["enableInstanceMetrics"] = boost::any(*enableInstanceMetrics);
    }
    if (enableRequestMetrics) {
      res["enableRequestMetrics"] = boost::any(*enableRequestMetrics);
    }
    if (logBeginRule) {
      res["logBeginRule"] = boost::any(*logBeginRule);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableInstanceMetrics") != m.end() && !m["enableInstanceMetrics"].empty()) {
      enableInstanceMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableInstanceMetrics"]));
    }
    if (m.find("enableRequestMetrics") != m.end() && !m["enableRequestMetrics"].empty()) {
      enableRequestMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableRequestMetrics"]));
    }
    if (m.find("logBeginRule") != m.end() && !m["logBeginRule"].empty()) {
      logBeginRule = make_shared<string>(boost::any_cast<string>(m["logBeginRule"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputLogConfig() = default;
};
class DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig : public Darabonba::Model {
public:
  shared_ptr<string> framework{};
  shared_ptr<string> task{};

  DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig() {}

  explicit DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (task) {
      res["task"] = boost::any(*task);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("task") != m.end() && !m["task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["task"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig() = default;
};
class DeployHuggingFaceModelInputModelConfig : public Darabonba::Model {
public:
  shared_ptr<DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig> fmkHuggingFaceConfig{};
  shared_ptr<string> framework{};
  shared_ptr<vector<ModelConfig>> multiModelConfig{};
  shared_ptr<string> prefix{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> srcModelScopeModelID{};
  shared_ptr<string> srcModelScopeModelRevision{};
  shared_ptr<string> srcModelScopeToken{};
  shared_ptr<string> srcOssBucket{};
  shared_ptr<string> srcOssPath{};
  shared_ptr<string> srcOssRegion{};

  DeployHuggingFaceModelInputModelConfig() {}

  explicit DeployHuggingFaceModelInputModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fmkHuggingFaceConfig) {
      res["fmkHuggingFaceConfig"] = fmkHuggingFaceConfig ? boost::any(fmkHuggingFaceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (multiModelConfig) {
      vector<boost::any> temp1;
      for(auto item1:*multiModelConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multiModelConfig"] = boost::any(temp1);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (srcModelScopeModelID) {
      res["srcModelScopeModelID"] = boost::any(*srcModelScopeModelID);
    }
    if (srcModelScopeModelRevision) {
      res["srcModelScopeModelRevision"] = boost::any(*srcModelScopeModelRevision);
    }
    if (srcModelScopeToken) {
      res["srcModelScopeToken"] = boost::any(*srcModelScopeToken);
    }
    if (srcOssBucket) {
      res["srcOssBucket"] = boost::any(*srcOssBucket);
    }
    if (srcOssPath) {
      res["srcOssPath"] = boost::any(*srcOssPath);
    }
    if (srcOssRegion) {
      res["srcOssRegion"] = boost::any(*srcOssRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fmkHuggingFaceConfig") != m.end() && !m["fmkHuggingFaceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["fmkHuggingFaceConfig"].type()) {
        DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fmkHuggingFaceConfig"]));
        fmkHuggingFaceConfig = make_shared<DeployHuggingFaceModelInputModelConfigFmkHuggingFaceConfig>(model1);
      }
    }
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("multiModelConfig") != m.end() && !m["multiModelConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["multiModelConfig"].type()) {
        vector<ModelConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multiModelConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiModelConfig = make_shared<vector<ModelConfig>>(expect1);
      }
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("srcModelScopeModelID") != m.end() && !m["srcModelScopeModelID"].empty()) {
      srcModelScopeModelID = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelID"]));
    }
    if (m.find("srcModelScopeModelRevision") != m.end() && !m["srcModelScopeModelRevision"].empty()) {
      srcModelScopeModelRevision = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelRevision"]));
    }
    if (m.find("srcModelScopeToken") != m.end() && !m["srcModelScopeToken"].empty()) {
      srcModelScopeToken = make_shared<string>(boost::any_cast<string>(m["srcModelScopeToken"]));
    }
    if (m.find("srcOssBucket") != m.end() && !m["srcOssBucket"].empty()) {
      srcOssBucket = make_shared<string>(boost::any_cast<string>(m["srcOssBucket"]));
    }
    if (m.find("srcOssPath") != m.end() && !m["srcOssPath"].empty()) {
      srcOssPath = make_shared<string>(boost::any_cast<string>(m["srcOssPath"]));
    }
    if (m.find("srcOssRegion") != m.end() && !m["srcOssRegion"].empty()) {
      srcOssRegion = make_shared<string>(boost::any_cast<string>(m["srcOssRegion"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputModelConfig() = default;
};
class DeployHuggingFaceModelInputNasConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<string>> mountPoints{};
  shared_ptr<long> userId{};

  DeployHuggingFaceModelInputNasConfig() {}

  explicit DeployHuggingFaceModelInputNasConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (mountPoints) {
      res["mountPoints"] = boost::any(*mountPoints);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mountPoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountPoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputNasConfig() = default;
};
class DeployHuggingFaceModelInputProvisionConfigScheduledActions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};
  shared_ptr<string> timeZone{};

  DeployHuggingFaceModelInputProvisionConfigScheduledActions() {}

  explicit DeployHuggingFaceModelInputProvisionConfigScheduledActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleExpression) {
      res["scheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleExpression") != m.end() && !m["scheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["scheduleExpression"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputProvisionConfigScheduledActions() = default;
};
class DeployHuggingFaceModelInputProvisionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateGPU{};
  shared_ptr<vector<DeployHuggingFaceModelInputProvisionConfigScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};

  DeployHuggingFaceModelInputProvisionConfig() {}

  explicit DeployHuggingFaceModelInputProvisionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateGPU) {
      res["alwaysAllocateGPU"] = boost::any(*alwaysAllocateGPU);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateGPU") != m.end() && !m["alwaysAllocateGPU"].empty()) {
      alwaysAllocateGPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateGPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<DeployHuggingFaceModelInputProvisionConfigScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployHuggingFaceModelInputProvisionConfigScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<DeployHuggingFaceModelInputProvisionConfigScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputProvisionConfig() = default;
};
class DeployHuggingFaceModelInputVpcConfig : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  DeployHuggingFaceModelInputVpcConfig() {}

  explicit DeployHuggingFaceModelInputVpcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchIds) {
      res["vSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("vSwitchIds") != m.end() && !m["vSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~DeployHuggingFaceModelInputVpcConfig() = default;
};
class DeployHuggingFaceModelInput : public Darabonba::Model {
public:
  shared_ptr<string> accountID{};
  shared_ptr<DeployHuggingFaceModelInputConcurrencyConfig> concurrencyConfig{};
  shared_ptr<double> cpu{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> envName{};
  shared_ptr<map<string, boost::any>> environmentVariables{};
  shared_ptr<DeployHuggingFaceModelInputGpuConfig> gpuConfig{};
  shared_ptr<DeployHuggingFaceModelInputHttpTrigger> httpTrigger{};
  shared_ptr<string> imageName{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<DeployHuggingFaceModelInputLogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<DeployHuggingFaceModelInputModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<DeployHuggingFaceModelInputNasConfig> nasConfig{};
  shared_ptr<string> originalName{};
  shared_ptr<string> projectName{};
  shared_ptr<DeployHuggingFaceModelInputProvisionConfig> provisionConfig{};
  shared_ptr<string> region{};
  shared_ptr<string> reportStatusURL{};
  shared_ptr<string> role{};
  shared_ptr<long> timeout{};
  shared_ptr<string> traceId{};
  shared_ptr<DeployHuggingFaceModelInputVpcConfig> vpcConfig{};

  DeployHuggingFaceModelInput() {}

  explicit DeployHuggingFaceModelInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountID) {
      res["accountID"] = boost::any(*accountID);
    }
    if (concurrencyConfig) {
      res["concurrencyConfig"] = concurrencyConfig ? boost::any(concurrencyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpTrigger) {
      res["httpTrigger"] = httpTrigger ? boost::any(httpTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageName) {
      res["imageName"] = boost::any(*imageName);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originalName) {
      res["originalName"] = boost::any(*originalName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (provisionConfig) {
      res["provisionConfig"] = provisionConfig ? boost::any(provisionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (reportStatusURL) {
      res["reportStatusURL"] = boost::any(*reportStatusURL);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountID") != m.end() && !m["accountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["accountID"]));
    }
    if (m.find("concurrencyConfig") != m.end() && !m["concurrencyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["concurrencyConfig"].type()) {
        DeployHuggingFaceModelInputConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["concurrencyConfig"]));
        concurrencyConfig = make_shared<DeployHuggingFaceModelInputConcurrencyConfig>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["environmentVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        DeployHuggingFaceModelInputGpuConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<DeployHuggingFaceModelInputGpuConfig>(model1);
      }
    }
    if (m.find("httpTrigger") != m.end() && !m["httpTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["httpTrigger"].type()) {
        DeployHuggingFaceModelInputHttpTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["httpTrigger"]));
        httpTrigger = make_shared<DeployHuggingFaceModelInputHttpTrigger>(model1);
      }
    }
    if (m.find("imageName") != m.end() && !m["imageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["imageName"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        DeployHuggingFaceModelInputLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<DeployHuggingFaceModelInputLogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        DeployHuggingFaceModelInputModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<DeployHuggingFaceModelInputModelConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        DeployHuggingFaceModelInputNasConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<DeployHuggingFaceModelInputNasConfig>(model1);
      }
    }
    if (m.find("originalName") != m.end() && !m["originalName"].empty()) {
      originalName = make_shared<string>(boost::any_cast<string>(m["originalName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("provisionConfig") != m.end() && !m["provisionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["provisionConfig"].type()) {
        DeployHuggingFaceModelInputProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["provisionConfig"]));
        provisionConfig = make_shared<DeployHuggingFaceModelInputProvisionConfig>(model1);
      }
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("reportStatusURL") != m.end() && !m["reportStatusURL"].empty()) {
      reportStatusURL = make_shared<string>(boost::any_cast<string>(m["reportStatusURL"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        DeployHuggingFaceModelInputVpcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<DeployHuggingFaceModelInputVpcConfig>(model1);
      }
    }
  }


  virtual ~DeployHuggingFaceModelInput() = default;
};
class DeployHuggingFaceModelOutputData : public Darabonba::Model {
public:
  shared_ptr<string> deploymentTaskID{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> finished{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> taskType{};
  shared_ptr<string> traceID{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  DeployHuggingFaceModelOutputData() {}

  explicit DeployHuggingFaceModelOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentTaskID) {
      res["deploymentTaskID"] = boost::any(*deploymentTaskID);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (traceID) {
      res["traceID"] = boost::any(*traceID);
    }
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentTaskID") != m.end() && !m["deploymentTaskID"].empty()) {
      deploymentTaskID = make_shared<string>(boost::any_cast<string>(m["deploymentTaskID"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("traceID") != m.end() && !m["traceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["traceID"]));
    }
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~DeployHuggingFaceModelOutputData() = default;
};
class DeployHuggingFaceModelOutput : public Darabonba::Model {
public:
  shared_ptr<DeployHuggingFaceModelOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployHuggingFaceModelOutput() {}

  explicit DeployHuggingFaceModelOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeployHuggingFaceModelOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeployHuggingFaceModelOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployHuggingFaceModelOutput() = default;
};
class DeployModelScopeModelAsyncOutput : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployModelScopeModelAsyncOutput() {}

  explicit DeployModelScopeModelAsyncOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployModelScopeModelAsyncOutput() = default;
};
class DeployModelScopeModelInputConcurrencyConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedConcurrency{};

  DeployModelScopeModelInputConcurrencyConfig() {}

  explicit DeployModelScopeModelInputConcurrencyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~DeployModelScopeModelInputConcurrencyConfig() = default;
};
class DeployModelScopeModelInputGpuConfig : public Darabonba::Model {
public:
  shared_ptr<long> gpuMemorySize{};
  shared_ptr<string> gpuType{};

  DeployModelScopeModelInputGpuConfig() {}

  explicit DeployModelScopeModelInputGpuConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuMemorySize) {
      res["gpuMemorySize"] = boost::any(*gpuMemorySize);
    }
    if (gpuType) {
      res["gpuType"] = boost::any(*gpuType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gpuMemorySize") != m.end() && !m["gpuMemorySize"].empty()) {
      gpuMemorySize = make_shared<long>(boost::any_cast<long>(m["gpuMemorySize"]));
    }
    if (m.find("gpuType") != m.end() && !m["gpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["gpuType"]));
    }
  }


  virtual ~DeployModelScopeModelInputGpuConfig() = default;
};
class DeployModelScopeModelInputHttpTriggerTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<bool> dsableURLInternet{};
  shared_ptr<vector<string>> methods{};

  DeployModelScopeModelInputHttpTriggerTriggerConfig() {}

  explicit DeployModelScopeModelInputHttpTriggerTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (dsableURLInternet) {
      res["dsableURLInternet"] = boost::any(*dsableURLInternet);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("dsableURLInternet") != m.end() && !m["dsableURLInternet"].empty()) {
      dsableURLInternet = make_shared<bool>(boost::any_cast<bool>(m["dsableURLInternet"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeployModelScopeModelInputHttpTriggerTriggerConfig() = default;
};
class DeployModelScopeModelInputHttpTrigger : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};
  shared_ptr<DeployModelScopeModelInputHttpTriggerTriggerConfig> triggerConfig{};

  DeployModelScopeModelInputHttpTrigger() {}

  explicit DeployModelScopeModelInputHttpTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        DeployModelScopeModelInputHttpTriggerTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<DeployModelScopeModelInputHttpTriggerTriggerConfig>(model1);
      }
    }
  }


  virtual ~DeployModelScopeModelInputHttpTrigger() = default;
};
class DeployModelScopeModelInputLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableInstanceMetrics{};
  shared_ptr<bool> enableRequestMetrics{};
  shared_ptr<string> logBeginRule{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  DeployModelScopeModelInputLogConfig() {}

  explicit DeployModelScopeModelInputLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInstanceMetrics) {
      res["enableInstanceMetrics"] = boost::any(*enableInstanceMetrics);
    }
    if (enableRequestMetrics) {
      res["enableRequestMetrics"] = boost::any(*enableRequestMetrics);
    }
    if (logBeginRule) {
      res["logBeginRule"] = boost::any(*logBeginRule);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableInstanceMetrics") != m.end() && !m["enableInstanceMetrics"].empty()) {
      enableInstanceMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableInstanceMetrics"]));
    }
    if (m.find("enableRequestMetrics") != m.end() && !m["enableRequestMetrics"].empty()) {
      enableRequestMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableRequestMetrics"]));
    }
    if (m.find("logBeginRule") != m.end() && !m["logBeginRule"].empty()) {
      logBeginRule = make_shared<string>(boost::any_cast<string>(m["logBeginRule"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~DeployModelScopeModelInputLogConfig() = default;
};
class DeployModelScopeModelInputModelConfig : public Darabonba::Model {
public:
  shared_ptr<string> framework{};
  shared_ptr<vector<ModelConfig>> multiModelConfig{};
  shared_ptr<string> prefix{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> srcModelScopeModelID{};
  shared_ptr<string> srcModelScopeModelRevision{};
  shared_ptr<string> srcModelScopeToken{};
  shared_ptr<string> srcOssBucket{};
  shared_ptr<string> srcOssPath{};
  shared_ptr<string> srcOssRegion{};

  DeployModelScopeModelInputModelConfig() {}

  explicit DeployModelScopeModelInputModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (multiModelConfig) {
      vector<boost::any> temp1;
      for(auto item1:*multiModelConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multiModelConfig"] = boost::any(temp1);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (srcModelScopeModelID) {
      res["srcModelScopeModelID"] = boost::any(*srcModelScopeModelID);
    }
    if (srcModelScopeModelRevision) {
      res["srcModelScopeModelRevision"] = boost::any(*srcModelScopeModelRevision);
    }
    if (srcModelScopeToken) {
      res["srcModelScopeToken"] = boost::any(*srcModelScopeToken);
    }
    if (srcOssBucket) {
      res["srcOssBucket"] = boost::any(*srcOssBucket);
    }
    if (srcOssPath) {
      res["srcOssPath"] = boost::any(*srcOssPath);
    }
    if (srcOssRegion) {
      res["srcOssRegion"] = boost::any(*srcOssRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("multiModelConfig") != m.end() && !m["multiModelConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["multiModelConfig"].type()) {
        vector<ModelConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multiModelConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiModelConfig = make_shared<vector<ModelConfig>>(expect1);
      }
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("srcModelScopeModelID") != m.end() && !m["srcModelScopeModelID"].empty()) {
      srcModelScopeModelID = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelID"]));
    }
    if (m.find("srcModelScopeModelRevision") != m.end() && !m["srcModelScopeModelRevision"].empty()) {
      srcModelScopeModelRevision = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelRevision"]));
    }
    if (m.find("srcModelScopeToken") != m.end() && !m["srcModelScopeToken"].empty()) {
      srcModelScopeToken = make_shared<string>(boost::any_cast<string>(m["srcModelScopeToken"]));
    }
    if (m.find("srcOssBucket") != m.end() && !m["srcOssBucket"].empty()) {
      srcOssBucket = make_shared<string>(boost::any_cast<string>(m["srcOssBucket"]));
    }
    if (m.find("srcOssPath") != m.end() && !m["srcOssPath"].empty()) {
      srcOssPath = make_shared<string>(boost::any_cast<string>(m["srcOssPath"]));
    }
    if (m.find("srcOssRegion") != m.end() && !m["srcOssRegion"].empty()) {
      srcOssRegion = make_shared<string>(boost::any_cast<string>(m["srcOssRegion"]));
    }
  }


  virtual ~DeployModelScopeModelInputModelConfig() = default;
};
class DeployModelScopeModelInputNasConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<string>> mountPoints{};
  shared_ptr<long> userId{};

  DeployModelScopeModelInputNasConfig() {}

  explicit DeployModelScopeModelInputNasConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (mountPoints) {
      res["mountPoints"] = boost::any(*mountPoints);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mountPoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountPoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~DeployModelScopeModelInputNasConfig() = default;
};
class DeployModelScopeModelInputProvisionConfigScheduledActions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};
  shared_ptr<string> timeZone{};

  DeployModelScopeModelInputProvisionConfigScheduledActions() {}

  explicit DeployModelScopeModelInputProvisionConfigScheduledActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleExpression) {
      res["scheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleExpression") != m.end() && !m["scheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["scheduleExpression"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~DeployModelScopeModelInputProvisionConfigScheduledActions() = default;
};
class DeployModelScopeModelInputProvisionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateGPU{};
  shared_ptr<vector<DeployModelScopeModelInputProvisionConfigScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};

  DeployModelScopeModelInputProvisionConfig() {}

  explicit DeployModelScopeModelInputProvisionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateGPU) {
      res["alwaysAllocateGPU"] = boost::any(*alwaysAllocateGPU);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateGPU") != m.end() && !m["alwaysAllocateGPU"].empty()) {
      alwaysAllocateGPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateGPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<DeployModelScopeModelInputProvisionConfigScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployModelScopeModelInputProvisionConfigScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<DeployModelScopeModelInputProvisionConfigScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
  }


  virtual ~DeployModelScopeModelInputProvisionConfig() = default;
};
class DeployModelScopeModelInputVpcConfig : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  DeployModelScopeModelInputVpcConfig() {}

  explicit DeployModelScopeModelInputVpcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchIds) {
      res["vSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("vSwitchIds") != m.end() && !m["vSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~DeployModelScopeModelInputVpcConfig() = default;
};
class DeployModelScopeModelInput : public Darabonba::Model {
public:
  shared_ptr<string> accountID{};
  shared_ptr<DeployModelScopeModelInputConcurrencyConfig> concurrencyConfig{};
  shared_ptr<double> cpu{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> envName{};
  shared_ptr<map<string, boost::any>> environmentVariables{};
  shared_ptr<DeployModelScopeModelInputGpuConfig> gpuConfig{};
  shared_ptr<DeployModelScopeModelInputHttpTrigger> httpTrigger{};
  shared_ptr<string> imageName{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<DeployModelScopeModelInputLogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<DeployModelScopeModelInputModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<DeployModelScopeModelInputNasConfig> nasConfig{};
  shared_ptr<string> originalName{};
  shared_ptr<string> projectName{};
  shared_ptr<DeployModelScopeModelInputProvisionConfig> provisionConfig{};
  shared_ptr<string> region{};
  shared_ptr<string> reportStatusURL{};
  shared_ptr<string> role{};
  shared_ptr<long> timeout{};
  shared_ptr<string> traceId{};
  shared_ptr<DeployModelScopeModelInputVpcConfig> vpcConfig{};

  DeployModelScopeModelInput() {}

  explicit DeployModelScopeModelInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountID) {
      res["accountID"] = boost::any(*accountID);
    }
    if (concurrencyConfig) {
      res["concurrencyConfig"] = concurrencyConfig ? boost::any(concurrencyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpTrigger) {
      res["httpTrigger"] = httpTrigger ? boost::any(httpTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageName) {
      res["imageName"] = boost::any(*imageName);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originalName) {
      res["originalName"] = boost::any(*originalName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (provisionConfig) {
      res["provisionConfig"] = provisionConfig ? boost::any(provisionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (reportStatusURL) {
      res["reportStatusURL"] = boost::any(*reportStatusURL);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountID") != m.end() && !m["accountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["accountID"]));
    }
    if (m.find("concurrencyConfig") != m.end() && !m["concurrencyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["concurrencyConfig"].type()) {
        DeployModelScopeModelInputConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["concurrencyConfig"]));
        concurrencyConfig = make_shared<DeployModelScopeModelInputConcurrencyConfig>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["environmentVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        DeployModelScopeModelInputGpuConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<DeployModelScopeModelInputGpuConfig>(model1);
      }
    }
    if (m.find("httpTrigger") != m.end() && !m["httpTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["httpTrigger"].type()) {
        DeployModelScopeModelInputHttpTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["httpTrigger"]));
        httpTrigger = make_shared<DeployModelScopeModelInputHttpTrigger>(model1);
      }
    }
    if (m.find("imageName") != m.end() && !m["imageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["imageName"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        DeployModelScopeModelInputLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<DeployModelScopeModelInputLogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        DeployModelScopeModelInputModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<DeployModelScopeModelInputModelConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        DeployModelScopeModelInputNasConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<DeployModelScopeModelInputNasConfig>(model1);
      }
    }
    if (m.find("originalName") != m.end() && !m["originalName"].empty()) {
      originalName = make_shared<string>(boost::any_cast<string>(m["originalName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("provisionConfig") != m.end() && !m["provisionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["provisionConfig"].type()) {
        DeployModelScopeModelInputProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["provisionConfig"]));
        provisionConfig = make_shared<DeployModelScopeModelInputProvisionConfig>(model1);
      }
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("reportStatusURL") != m.end() && !m["reportStatusURL"].empty()) {
      reportStatusURL = make_shared<string>(boost::any_cast<string>(m["reportStatusURL"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        DeployModelScopeModelInputVpcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<DeployModelScopeModelInputVpcConfig>(model1);
      }
    }
  }


  virtual ~DeployModelScopeModelInput() = default;
};
class DeployModelScopeModelOutputData : public Darabonba::Model {
public:
  shared_ptr<string> deploymentTaskID{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> finished{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> taskType{};
  shared_ptr<string> traceID{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  DeployModelScopeModelOutputData() {}

  explicit DeployModelScopeModelOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentTaskID) {
      res["deploymentTaskID"] = boost::any(*deploymentTaskID);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (traceID) {
      res["traceID"] = boost::any(*traceID);
    }
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentTaskID") != m.end() && !m["deploymentTaskID"].empty()) {
      deploymentTaskID = make_shared<string>(boost::any_cast<string>(m["deploymentTaskID"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("traceID") != m.end() && !m["traceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["traceID"]));
    }
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~DeployModelScopeModelOutputData() = default;
};
class DeployModelScopeModelOutput : public Darabonba::Model {
public:
  shared_ptr<DeployModelScopeModelOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployModelScopeModelOutput() {}

  explicit DeployModelScopeModelOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeployModelScopeModelOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeployModelScopeModelOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployModelScopeModelOutput() = default;
};
class DeployOllamaModelAsyncOutput : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployOllamaModelAsyncOutput() {}

  explicit DeployOllamaModelAsyncOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployOllamaModelAsyncOutput() = default;
};
class DeployOllamaModelInputConcurrencyConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedConcurrency{};

  DeployOllamaModelInputConcurrencyConfig() {}

  explicit DeployOllamaModelInputConcurrencyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~DeployOllamaModelInputConcurrencyConfig() = default;
};
class DeployOllamaModelInputGpuConfig : public Darabonba::Model {
public:
  shared_ptr<long> gpuMemorySize{};
  shared_ptr<string> gpuType{};

  DeployOllamaModelInputGpuConfig() {}

  explicit DeployOllamaModelInputGpuConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuMemorySize) {
      res["gpuMemorySize"] = boost::any(*gpuMemorySize);
    }
    if (gpuType) {
      res["gpuType"] = boost::any(*gpuType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gpuMemorySize") != m.end() && !m["gpuMemorySize"].empty()) {
      gpuMemorySize = make_shared<long>(boost::any_cast<long>(m["gpuMemorySize"]));
    }
    if (m.find("gpuType") != m.end() && !m["gpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["gpuType"]));
    }
  }


  virtual ~DeployOllamaModelInputGpuConfig() = default;
};
class DeployOllamaModelInputHttpTriggerTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<bool> dsableURLInternet{};
  shared_ptr<vector<string>> methods{};

  DeployOllamaModelInputHttpTriggerTriggerConfig() {}

  explicit DeployOllamaModelInputHttpTriggerTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (dsableURLInternet) {
      res["dsableURLInternet"] = boost::any(*dsableURLInternet);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("dsableURLInternet") != m.end() && !m["dsableURLInternet"].empty()) {
      dsableURLInternet = make_shared<bool>(boost::any_cast<bool>(m["dsableURLInternet"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeployOllamaModelInputHttpTriggerTriggerConfig() = default;
};
class DeployOllamaModelInputHttpTrigger : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};
  shared_ptr<DeployOllamaModelInputHttpTriggerTriggerConfig> triggerConfig{};

  DeployOllamaModelInputHttpTrigger() {}

  explicit DeployOllamaModelInputHttpTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        DeployOllamaModelInputHttpTriggerTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<DeployOllamaModelInputHttpTriggerTriggerConfig>(model1);
      }
    }
  }


  virtual ~DeployOllamaModelInputHttpTrigger() = default;
};
class DeployOllamaModelInputLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableInstanceMetrics{};
  shared_ptr<bool> enableRequestMetrics{};
  shared_ptr<string> logBeginRule{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  DeployOllamaModelInputLogConfig() {}

  explicit DeployOllamaModelInputLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInstanceMetrics) {
      res["enableInstanceMetrics"] = boost::any(*enableInstanceMetrics);
    }
    if (enableRequestMetrics) {
      res["enableRequestMetrics"] = boost::any(*enableRequestMetrics);
    }
    if (logBeginRule) {
      res["logBeginRule"] = boost::any(*logBeginRule);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableInstanceMetrics") != m.end() && !m["enableInstanceMetrics"].empty()) {
      enableInstanceMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableInstanceMetrics"]));
    }
    if (m.find("enableRequestMetrics") != m.end() && !m["enableRequestMetrics"].empty()) {
      enableRequestMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableRequestMetrics"]));
    }
    if (m.find("logBeginRule") != m.end() && !m["logBeginRule"].empty()) {
      logBeginRule = make_shared<string>(boost::any_cast<string>(m["logBeginRule"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~DeployOllamaModelInputLogConfig() = default;
};
class DeployOllamaModelInputModelConfigFmkOllamaConfig : public Darabonba::Model {
public:
  shared_ptr<double> minP{};
  shared_ptr<long> mirostat{};
  shared_ptr<double> mirostatEta{};
  shared_ptr<double> mirostatTau{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelfileAdapter{};
  shared_ptr<string> modelfileAdditionalFromsString{};
  shared_ptr<string> modelfileFullTextPostfix{};
  shared_ptr<string> modelfileParams{};
  shared_ptr<string> modelfileSystem{};
  shared_ptr<string> modelfileTemplate{};
  shared_ptr<long> numCtx{};
  shared_ptr<long> numPredict{};
  shared_ptr<string> quantize{};
  shared_ptr<long> repeatLastN{};
  shared_ptr<double> repeatPenalty{};
  shared_ptr<long> seed{};
  shared_ptr<string> singleModelFile{};
  shared_ptr<string> splitedModelStartFile{};
  shared_ptr<string> stop{};
  shared_ptr<bool> stream{};
  shared_ptr<double> temperature{};
  shared_ptr<double> tfsZ{};
  shared_ptr<long> topK{};
  shared_ptr<double> topP{};

  DeployOllamaModelInputModelConfigFmkOllamaConfig() {}

  explicit DeployOllamaModelInputModelConfigFmkOllamaConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (minP) {
      res["minP"] = boost::any(*minP);
    }
    if (mirostat) {
      res["mirostat"] = boost::any(*mirostat);
    }
    if (mirostatEta) {
      res["mirostatEta"] = boost::any(*mirostatEta);
    }
    if (mirostatTau) {
      res["mirostatTau"] = boost::any(*mirostatTau);
    }
    if (modelName) {
      res["modelName"] = boost::any(*modelName);
    }
    if (modelfileAdapter) {
      res["modelfileAdapter"] = boost::any(*modelfileAdapter);
    }
    if (modelfileAdditionalFromsString) {
      res["modelfileAdditionalFromsString"] = boost::any(*modelfileAdditionalFromsString);
    }
    if (modelfileFullTextPostfix) {
      res["modelfileFullTextPostfix"] = boost::any(*modelfileFullTextPostfix);
    }
    if (modelfileParams) {
      res["modelfileParams"] = boost::any(*modelfileParams);
    }
    if (modelfileSystem) {
      res["modelfileSystem"] = boost::any(*modelfileSystem);
    }
    if (modelfileTemplate) {
      res["modelfileTemplate"] = boost::any(*modelfileTemplate);
    }
    if (numCtx) {
      res["numCtx"] = boost::any(*numCtx);
    }
    if (numPredict) {
      res["numPredict"] = boost::any(*numPredict);
    }
    if (quantize) {
      res["quantize"] = boost::any(*quantize);
    }
    if (repeatLastN) {
      res["repeatLastN"] = boost::any(*repeatLastN);
    }
    if (repeatPenalty) {
      res["repeatPenalty"] = boost::any(*repeatPenalty);
    }
    if (seed) {
      res["seed"] = boost::any(*seed);
    }
    if (singleModelFile) {
      res["singleModelFile"] = boost::any(*singleModelFile);
    }
    if (splitedModelStartFile) {
      res["splitedModelStartFile"] = boost::any(*splitedModelStartFile);
    }
    if (stop) {
      res["stop"] = boost::any(*stop);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    if (tfsZ) {
      res["tfsZ"] = boost::any(*tfsZ);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    if (topP) {
      res["topP"] = boost::any(*topP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("minP") != m.end() && !m["minP"].empty()) {
      minP = make_shared<double>(boost::any_cast<double>(m["minP"]));
    }
    if (m.find("mirostat") != m.end() && !m["mirostat"].empty()) {
      mirostat = make_shared<long>(boost::any_cast<long>(m["mirostat"]));
    }
    if (m.find("mirostatEta") != m.end() && !m["mirostatEta"].empty()) {
      mirostatEta = make_shared<double>(boost::any_cast<double>(m["mirostatEta"]));
    }
    if (m.find("mirostatTau") != m.end() && !m["mirostatTau"].empty()) {
      mirostatTau = make_shared<double>(boost::any_cast<double>(m["mirostatTau"]));
    }
    if (m.find("modelName") != m.end() && !m["modelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["modelName"]));
    }
    if (m.find("modelfileAdapter") != m.end() && !m["modelfileAdapter"].empty()) {
      modelfileAdapter = make_shared<string>(boost::any_cast<string>(m["modelfileAdapter"]));
    }
    if (m.find("modelfileAdditionalFromsString") != m.end() && !m["modelfileAdditionalFromsString"].empty()) {
      modelfileAdditionalFromsString = make_shared<string>(boost::any_cast<string>(m["modelfileAdditionalFromsString"]));
    }
    if (m.find("modelfileFullTextPostfix") != m.end() && !m["modelfileFullTextPostfix"].empty()) {
      modelfileFullTextPostfix = make_shared<string>(boost::any_cast<string>(m["modelfileFullTextPostfix"]));
    }
    if (m.find("modelfileParams") != m.end() && !m["modelfileParams"].empty()) {
      modelfileParams = make_shared<string>(boost::any_cast<string>(m["modelfileParams"]));
    }
    if (m.find("modelfileSystem") != m.end() && !m["modelfileSystem"].empty()) {
      modelfileSystem = make_shared<string>(boost::any_cast<string>(m["modelfileSystem"]));
    }
    if (m.find("modelfileTemplate") != m.end() && !m["modelfileTemplate"].empty()) {
      modelfileTemplate = make_shared<string>(boost::any_cast<string>(m["modelfileTemplate"]));
    }
    if (m.find("numCtx") != m.end() && !m["numCtx"].empty()) {
      numCtx = make_shared<long>(boost::any_cast<long>(m["numCtx"]));
    }
    if (m.find("numPredict") != m.end() && !m["numPredict"].empty()) {
      numPredict = make_shared<long>(boost::any_cast<long>(m["numPredict"]));
    }
    if (m.find("quantize") != m.end() && !m["quantize"].empty()) {
      quantize = make_shared<string>(boost::any_cast<string>(m["quantize"]));
    }
    if (m.find("repeatLastN") != m.end() && !m["repeatLastN"].empty()) {
      repeatLastN = make_shared<long>(boost::any_cast<long>(m["repeatLastN"]));
    }
    if (m.find("repeatPenalty") != m.end() && !m["repeatPenalty"].empty()) {
      repeatPenalty = make_shared<double>(boost::any_cast<double>(m["repeatPenalty"]));
    }
    if (m.find("seed") != m.end() && !m["seed"].empty()) {
      seed = make_shared<long>(boost::any_cast<long>(m["seed"]));
    }
    if (m.find("singleModelFile") != m.end() && !m["singleModelFile"].empty()) {
      singleModelFile = make_shared<string>(boost::any_cast<string>(m["singleModelFile"]));
    }
    if (m.find("splitedModelStartFile") != m.end() && !m["splitedModelStartFile"].empty()) {
      splitedModelStartFile = make_shared<string>(boost::any_cast<string>(m["splitedModelStartFile"]));
    }
    if (m.find("stop") != m.end() && !m["stop"].empty()) {
      stop = make_shared<string>(boost::any_cast<string>(m["stop"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
    if (m.find("tfsZ") != m.end() && !m["tfsZ"].empty()) {
      tfsZ = make_shared<double>(boost::any_cast<double>(m["tfsZ"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
    if (m.find("topP") != m.end() && !m["topP"].empty()) {
      topP = make_shared<double>(boost::any_cast<double>(m["topP"]));
    }
  }


  virtual ~DeployOllamaModelInputModelConfigFmkOllamaConfig() = default;
};
class DeployOllamaModelInputModelConfig : public Darabonba::Model {
public:
  shared_ptr<DeployOllamaModelInputModelConfigFmkOllamaConfig> fmkOllamaConfig{};
  shared_ptr<string> framework{};
  shared_ptr<vector<ModelConfig>> multiModelConfig{};
  shared_ptr<string> prefix{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> srcModelScopeModelID{};
  shared_ptr<string> srcModelScopeModelRevision{};
  shared_ptr<string> srcModelScopeToken{};
  shared_ptr<string> srcOssBucket{};
  shared_ptr<string> srcOssPath{};
  shared_ptr<string> srcOssRegion{};

  DeployOllamaModelInputModelConfig() {}

  explicit DeployOllamaModelInputModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fmkOllamaConfig) {
      res["fmkOllamaConfig"] = fmkOllamaConfig ? boost::any(fmkOllamaConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (multiModelConfig) {
      vector<boost::any> temp1;
      for(auto item1:*multiModelConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multiModelConfig"] = boost::any(temp1);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (srcModelScopeModelID) {
      res["srcModelScopeModelID"] = boost::any(*srcModelScopeModelID);
    }
    if (srcModelScopeModelRevision) {
      res["srcModelScopeModelRevision"] = boost::any(*srcModelScopeModelRevision);
    }
    if (srcModelScopeToken) {
      res["srcModelScopeToken"] = boost::any(*srcModelScopeToken);
    }
    if (srcOssBucket) {
      res["srcOssBucket"] = boost::any(*srcOssBucket);
    }
    if (srcOssPath) {
      res["srcOssPath"] = boost::any(*srcOssPath);
    }
    if (srcOssRegion) {
      res["srcOssRegion"] = boost::any(*srcOssRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fmkOllamaConfig") != m.end() && !m["fmkOllamaConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["fmkOllamaConfig"].type()) {
        DeployOllamaModelInputModelConfigFmkOllamaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fmkOllamaConfig"]));
        fmkOllamaConfig = make_shared<DeployOllamaModelInputModelConfigFmkOllamaConfig>(model1);
      }
    }
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("multiModelConfig") != m.end() && !m["multiModelConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["multiModelConfig"].type()) {
        vector<ModelConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multiModelConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiModelConfig = make_shared<vector<ModelConfig>>(expect1);
      }
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("srcModelScopeModelID") != m.end() && !m["srcModelScopeModelID"].empty()) {
      srcModelScopeModelID = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelID"]));
    }
    if (m.find("srcModelScopeModelRevision") != m.end() && !m["srcModelScopeModelRevision"].empty()) {
      srcModelScopeModelRevision = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelRevision"]));
    }
    if (m.find("srcModelScopeToken") != m.end() && !m["srcModelScopeToken"].empty()) {
      srcModelScopeToken = make_shared<string>(boost::any_cast<string>(m["srcModelScopeToken"]));
    }
    if (m.find("srcOssBucket") != m.end() && !m["srcOssBucket"].empty()) {
      srcOssBucket = make_shared<string>(boost::any_cast<string>(m["srcOssBucket"]));
    }
    if (m.find("srcOssPath") != m.end() && !m["srcOssPath"].empty()) {
      srcOssPath = make_shared<string>(boost::any_cast<string>(m["srcOssPath"]));
    }
    if (m.find("srcOssRegion") != m.end() && !m["srcOssRegion"].empty()) {
      srcOssRegion = make_shared<string>(boost::any_cast<string>(m["srcOssRegion"]));
    }
  }


  virtual ~DeployOllamaModelInputModelConfig() = default;
};
class DeployOllamaModelInputNasConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<string>> mountPoints{};
  shared_ptr<long> userId{};

  DeployOllamaModelInputNasConfig() {}

  explicit DeployOllamaModelInputNasConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (mountPoints) {
      res["mountPoints"] = boost::any(*mountPoints);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["mountPoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountPoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~DeployOllamaModelInputNasConfig() = default;
};
class DeployOllamaModelInputProvisionConfigScheduledActions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};
  shared_ptr<string> timeZone{};

  DeployOllamaModelInputProvisionConfigScheduledActions() {}

  explicit DeployOllamaModelInputProvisionConfigScheduledActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleExpression) {
      res["scheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleExpression") != m.end() && !m["scheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["scheduleExpression"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~DeployOllamaModelInputProvisionConfigScheduledActions() = default;
};
class DeployOllamaModelInputProvisionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateGPU{};
  shared_ptr<vector<DeployOllamaModelInputProvisionConfigScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};

  DeployOllamaModelInputProvisionConfig() {}

  explicit DeployOllamaModelInputProvisionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateGPU) {
      res["alwaysAllocateGPU"] = boost::any(*alwaysAllocateGPU);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateGPU") != m.end() && !m["alwaysAllocateGPU"].empty()) {
      alwaysAllocateGPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateGPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<DeployOllamaModelInputProvisionConfigScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployOllamaModelInputProvisionConfigScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<DeployOllamaModelInputProvisionConfigScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
  }


  virtual ~DeployOllamaModelInputProvisionConfig() = default;
};
class DeployOllamaModelInputVpcConfig : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  DeployOllamaModelInputVpcConfig() {}

  explicit DeployOllamaModelInputVpcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchIds) {
      res["vSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("vSwitchIds") != m.end() && !m["vSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~DeployOllamaModelInputVpcConfig() = default;
};
class DeployOllamaModelInput : public Darabonba::Model {
public:
  shared_ptr<string> accountID{};
  shared_ptr<DeployOllamaModelInputConcurrencyConfig> concurrencyConfig{};
  shared_ptr<double> cpu{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> envName{};
  shared_ptr<map<string, boost::any>> environmentVariables{};
  shared_ptr<DeployOllamaModelInputGpuConfig> gpuConfig{};
  shared_ptr<DeployOllamaModelInputHttpTrigger> httpTrigger{};
  shared_ptr<string> imageName{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<DeployOllamaModelInputLogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<DeployOllamaModelInputModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<DeployOllamaModelInputNasConfig> nasConfig{};
  shared_ptr<string> originalName{};
  shared_ptr<string> projectName{};
  shared_ptr<DeployOllamaModelInputProvisionConfig> provisionConfig{};
  shared_ptr<string> region{};
  shared_ptr<string> reportStatusURL{};
  shared_ptr<string> role{};
  shared_ptr<long> timeout{};
  shared_ptr<string> traceId{};
  shared_ptr<DeployOllamaModelInputVpcConfig> vpcConfig{};

  DeployOllamaModelInput() {}

  explicit DeployOllamaModelInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountID) {
      res["accountID"] = boost::any(*accountID);
    }
    if (concurrencyConfig) {
      res["concurrencyConfig"] = concurrencyConfig ? boost::any(concurrencyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpTrigger) {
      res["httpTrigger"] = httpTrigger ? boost::any(httpTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageName) {
      res["imageName"] = boost::any(*imageName);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originalName) {
      res["originalName"] = boost::any(*originalName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (provisionConfig) {
      res["provisionConfig"] = provisionConfig ? boost::any(provisionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (reportStatusURL) {
      res["reportStatusURL"] = boost::any(*reportStatusURL);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountID") != m.end() && !m["accountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["accountID"]));
    }
    if (m.find("concurrencyConfig") != m.end() && !m["concurrencyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["concurrencyConfig"].type()) {
        DeployOllamaModelInputConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["concurrencyConfig"]));
        concurrencyConfig = make_shared<DeployOllamaModelInputConcurrencyConfig>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["environmentVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        DeployOllamaModelInputGpuConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<DeployOllamaModelInputGpuConfig>(model1);
      }
    }
    if (m.find("httpTrigger") != m.end() && !m["httpTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["httpTrigger"].type()) {
        DeployOllamaModelInputHttpTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["httpTrigger"]));
        httpTrigger = make_shared<DeployOllamaModelInputHttpTrigger>(model1);
      }
    }
    if (m.find("imageName") != m.end() && !m["imageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["imageName"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        DeployOllamaModelInputLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<DeployOllamaModelInputLogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        DeployOllamaModelInputModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<DeployOllamaModelInputModelConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        DeployOllamaModelInputNasConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<DeployOllamaModelInputNasConfig>(model1);
      }
    }
    if (m.find("originalName") != m.end() && !m["originalName"].empty()) {
      originalName = make_shared<string>(boost::any_cast<string>(m["originalName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("provisionConfig") != m.end() && !m["provisionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["provisionConfig"].type()) {
        DeployOllamaModelInputProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["provisionConfig"]));
        provisionConfig = make_shared<DeployOllamaModelInputProvisionConfig>(model1);
      }
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("reportStatusURL") != m.end() && !m["reportStatusURL"].empty()) {
      reportStatusURL = make_shared<string>(boost::any_cast<string>(m["reportStatusURL"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        DeployOllamaModelInputVpcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<DeployOllamaModelInputVpcConfig>(model1);
      }
    }
  }


  virtual ~DeployOllamaModelInput() = default;
};
class DeployOllamaModelOutputData : public Darabonba::Model {
public:
  shared_ptr<string> deploymentTaskID{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> finished{};
  shared_ptr<string> modelName{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> traceID{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  DeployOllamaModelOutputData() {}

  explicit DeployOllamaModelOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentTaskID) {
      res["deploymentTaskID"] = boost::any(*deploymentTaskID);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (modelName) {
      res["modelName"] = boost::any(*modelName);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (traceID) {
      res["traceID"] = boost::any(*traceID);
    }
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentTaskID") != m.end() && !m["deploymentTaskID"].empty()) {
      deploymentTaskID = make_shared<string>(boost::any_cast<string>(m["deploymentTaskID"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("modelName") != m.end() && !m["modelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["modelName"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("traceID") != m.end() && !m["traceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["traceID"]));
    }
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~DeployOllamaModelOutputData() = default;
};
class DeployOllamaModelOutput : public Darabonba::Model {
public:
  shared_ptr<DeployOllamaModelOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployOllamaModelOutput() {}

  explicit DeployOllamaModelOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeployOllamaModelOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeployOllamaModelOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployOllamaModelOutput() = default;
};
class DeployTensorRtModelAsyncOutput : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployTensorRtModelAsyncOutput() {}

  explicit DeployTensorRtModelAsyncOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployTensorRtModelAsyncOutput() = default;
};
class DeployTensorRtModelInputConcurrencyConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedConcurrency{};

  DeployTensorRtModelInputConcurrencyConfig() {}

  explicit DeployTensorRtModelInputConcurrencyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~DeployTensorRtModelInputConcurrencyConfig() = default;
};
class DeployTensorRtModelInputGpuConfig : public Darabonba::Model {
public:
  shared_ptr<long> gpuMemorySize{};
  shared_ptr<string> gpuType{};

  DeployTensorRtModelInputGpuConfig() {}

  explicit DeployTensorRtModelInputGpuConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuMemorySize) {
      res["gpuMemorySize"] = boost::any(*gpuMemorySize);
    }
    if (gpuType) {
      res["gpuType"] = boost::any(*gpuType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gpuMemorySize") != m.end() && !m["gpuMemorySize"].empty()) {
      gpuMemorySize = make_shared<long>(boost::any_cast<long>(m["gpuMemorySize"]));
    }
    if (m.find("gpuType") != m.end() && !m["gpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["gpuType"]));
    }
  }


  virtual ~DeployTensorRtModelInputGpuConfig() = default;
};
class DeployTensorRtModelInputHttpTriggerTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<bool> dsableURLInternet{};
  shared_ptr<vector<string>> methods{};

  DeployTensorRtModelInputHttpTriggerTriggerConfig() {}

  explicit DeployTensorRtModelInputHttpTriggerTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (dsableURLInternet) {
      res["dsableURLInternet"] = boost::any(*dsableURLInternet);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("dsableURLInternet") != m.end() && !m["dsableURLInternet"].empty()) {
      dsableURLInternet = make_shared<bool>(boost::any_cast<bool>(m["dsableURLInternet"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeployTensorRtModelInputHttpTriggerTriggerConfig() = default;
};
class DeployTensorRtModelInputHttpTrigger : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};
  shared_ptr<DeployTensorRtModelInputHttpTriggerTriggerConfig> triggerConfig{};

  DeployTensorRtModelInputHttpTrigger() {}

  explicit DeployTensorRtModelInputHttpTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        DeployTensorRtModelInputHttpTriggerTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<DeployTensorRtModelInputHttpTriggerTriggerConfig>(model1);
      }
    }
  }


  virtual ~DeployTensorRtModelInputHttpTrigger() = default;
};
class DeployTensorRtModelInputLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableInstanceMetrics{};
  shared_ptr<bool> enableRequestMetrics{};
  shared_ptr<string> logBeginRule{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  DeployTensorRtModelInputLogConfig() {}

  explicit DeployTensorRtModelInputLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInstanceMetrics) {
      res["enableInstanceMetrics"] = boost::any(*enableInstanceMetrics);
    }
    if (enableRequestMetrics) {
      res["enableRequestMetrics"] = boost::any(*enableRequestMetrics);
    }
    if (logBeginRule) {
      res["logBeginRule"] = boost::any(*logBeginRule);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableInstanceMetrics") != m.end() && !m["enableInstanceMetrics"].empty()) {
      enableInstanceMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableInstanceMetrics"]));
    }
    if (m.find("enableRequestMetrics") != m.end() && !m["enableRequestMetrics"].empty()) {
      enableRequestMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableRequestMetrics"]));
    }
    if (m.find("logBeginRule") != m.end() && !m["logBeginRule"].empty()) {
      logBeginRule = make_shared<string>(boost::any_cast<string>(m["logBeginRule"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~DeployTensorRtModelInputLogConfig() = default;
};
class DeployTensorRtModelInputModelConfig : public Darabonba::Model {
public:
  shared_ptr<string> framework{};
  shared_ptr<vector<ModelConfig>> multiModelConfig{};
  shared_ptr<string> prefix{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> srcModelScopeModelID{};
  shared_ptr<string> srcModelScopeModelRevision{};
  shared_ptr<string> srcModelScopeToken{};
  shared_ptr<string> srcOssBucket{};
  shared_ptr<string> srcOssPath{};
  shared_ptr<string> srcOssRegion{};

  DeployTensorRtModelInputModelConfig() {}

  explicit DeployTensorRtModelInputModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (multiModelConfig) {
      vector<boost::any> temp1;
      for(auto item1:*multiModelConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multiModelConfig"] = boost::any(temp1);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (srcModelScopeModelID) {
      res["srcModelScopeModelID"] = boost::any(*srcModelScopeModelID);
    }
    if (srcModelScopeModelRevision) {
      res["srcModelScopeModelRevision"] = boost::any(*srcModelScopeModelRevision);
    }
    if (srcModelScopeToken) {
      res["srcModelScopeToken"] = boost::any(*srcModelScopeToken);
    }
    if (srcOssBucket) {
      res["srcOssBucket"] = boost::any(*srcOssBucket);
    }
    if (srcOssPath) {
      res["srcOssPath"] = boost::any(*srcOssPath);
    }
    if (srcOssRegion) {
      res["srcOssRegion"] = boost::any(*srcOssRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("multiModelConfig") != m.end() && !m["multiModelConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["multiModelConfig"].type()) {
        vector<ModelConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multiModelConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiModelConfig = make_shared<vector<ModelConfig>>(expect1);
      }
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("srcModelScopeModelID") != m.end() && !m["srcModelScopeModelID"].empty()) {
      srcModelScopeModelID = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelID"]));
    }
    if (m.find("srcModelScopeModelRevision") != m.end() && !m["srcModelScopeModelRevision"].empty()) {
      srcModelScopeModelRevision = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelRevision"]));
    }
    if (m.find("srcModelScopeToken") != m.end() && !m["srcModelScopeToken"].empty()) {
      srcModelScopeToken = make_shared<string>(boost::any_cast<string>(m["srcModelScopeToken"]));
    }
    if (m.find("srcOssBucket") != m.end() && !m["srcOssBucket"].empty()) {
      srcOssBucket = make_shared<string>(boost::any_cast<string>(m["srcOssBucket"]));
    }
    if (m.find("srcOssPath") != m.end() && !m["srcOssPath"].empty()) {
      srcOssPath = make_shared<string>(boost::any_cast<string>(m["srcOssPath"]));
    }
    if (m.find("srcOssRegion") != m.end() && !m["srcOssRegion"].empty()) {
      srcOssRegion = make_shared<string>(boost::any_cast<string>(m["srcOssRegion"]));
    }
  }


  virtual ~DeployTensorRtModelInputModelConfig() = default;
};
class DeployTensorRtModelInputNasConfigMountPoints : public Darabonba::Model {
public:
  shared_ptr<bool> enableTLS{};
  shared_ptr<string> mountDir{};
  shared_ptr<string> serverAddr{};

  DeployTensorRtModelInputNasConfigMountPoints() {}

  explicit DeployTensorRtModelInputNasConfigMountPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableTLS) {
      res["enableTLS"] = boost::any(*enableTLS);
    }
    if (mountDir) {
      res["mountDir"] = boost::any(*mountDir);
    }
    if (serverAddr) {
      res["serverAddr"] = boost::any(*serverAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableTLS") != m.end() && !m["enableTLS"].empty()) {
      enableTLS = make_shared<bool>(boost::any_cast<bool>(m["enableTLS"]));
    }
    if (m.find("mountDir") != m.end() && !m["mountDir"].empty()) {
      mountDir = make_shared<string>(boost::any_cast<string>(m["mountDir"]));
    }
    if (m.find("serverAddr") != m.end() && !m["serverAddr"].empty()) {
      serverAddr = make_shared<string>(boost::any_cast<string>(m["serverAddr"]));
    }
  }


  virtual ~DeployTensorRtModelInputNasConfigMountPoints() = default;
};
class DeployTensorRtModelInputNasConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<DeployTensorRtModelInputNasConfigMountPoints>> mountPoints{};
  shared_ptr<long> userId{};

  DeployTensorRtModelInputNasConfig() {}

  explicit DeployTensorRtModelInputNasConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (mountPoints) {
      vector<boost::any> temp1;
      for(auto item1:*mountPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mountPoints"] = boost::any(temp1);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<DeployTensorRtModelInputNasConfigMountPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mountPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployTensorRtModelInputNasConfigMountPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountPoints = make_shared<vector<DeployTensorRtModelInputNasConfigMountPoints>>(expect1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~DeployTensorRtModelInputNasConfig() = default;
};
class DeployTensorRtModelInputProvisionConfigScheduledActions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};
  shared_ptr<string> timeZone{};

  DeployTensorRtModelInputProvisionConfigScheduledActions() {}

  explicit DeployTensorRtModelInputProvisionConfigScheduledActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleExpression) {
      res["scheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleExpression") != m.end() && !m["scheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["scheduleExpression"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~DeployTensorRtModelInputProvisionConfigScheduledActions() = default;
};
class DeployTensorRtModelInputProvisionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateGPU{};
  shared_ptr<vector<DeployTensorRtModelInputProvisionConfigScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};

  DeployTensorRtModelInputProvisionConfig() {}

  explicit DeployTensorRtModelInputProvisionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateGPU) {
      res["alwaysAllocateGPU"] = boost::any(*alwaysAllocateGPU);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateGPU") != m.end() && !m["alwaysAllocateGPU"].empty()) {
      alwaysAllocateGPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateGPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<DeployTensorRtModelInputProvisionConfigScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployTensorRtModelInputProvisionConfigScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<DeployTensorRtModelInputProvisionConfigScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
  }


  virtual ~DeployTensorRtModelInputProvisionConfig() = default;
};
class DeployTensorRtModelInputVpcConfig : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  DeployTensorRtModelInputVpcConfig() {}

  explicit DeployTensorRtModelInputVpcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchIds) {
      res["vSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("vSwitchIds") != m.end() && !m["vSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~DeployTensorRtModelInputVpcConfig() = default;
};
class DeployTensorRtModelInput : public Darabonba::Model {
public:
  shared_ptr<string> accountID{};
  shared_ptr<DeployTensorRtModelInputConcurrencyConfig> concurrencyConfig{};
  shared_ptr<double> cpu{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> envName{};
  shared_ptr<map<string, boost::any>> environmentVariables{};
  shared_ptr<DeployTensorRtModelInputGpuConfig> gpuConfig{};
  shared_ptr<DeployTensorRtModelInputHttpTrigger> httpTrigger{};
  shared_ptr<string> imageName{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<DeployTensorRtModelInputLogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<DeployTensorRtModelInputModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<DeployTensorRtModelInputNasConfig> nasConfig{};
  shared_ptr<string> originalName{};
  shared_ptr<string> projectName{};
  shared_ptr<DeployTensorRtModelInputProvisionConfig> provisionConfig{};
  shared_ptr<string> region{};
  shared_ptr<string> reportStatusURL{};
  shared_ptr<string> role{};
  shared_ptr<long> timeout{};
  shared_ptr<string> traceId{};
  shared_ptr<DeployTensorRtModelInputVpcConfig> vpcConfig{};

  DeployTensorRtModelInput() {}

  explicit DeployTensorRtModelInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountID) {
      res["accountID"] = boost::any(*accountID);
    }
    if (concurrencyConfig) {
      res["concurrencyConfig"] = concurrencyConfig ? boost::any(concurrencyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpTrigger) {
      res["httpTrigger"] = httpTrigger ? boost::any(httpTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageName) {
      res["imageName"] = boost::any(*imageName);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originalName) {
      res["originalName"] = boost::any(*originalName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (provisionConfig) {
      res["provisionConfig"] = provisionConfig ? boost::any(provisionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (reportStatusURL) {
      res["reportStatusURL"] = boost::any(*reportStatusURL);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountID") != m.end() && !m["accountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["accountID"]));
    }
    if (m.find("concurrencyConfig") != m.end() && !m["concurrencyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["concurrencyConfig"].type()) {
        DeployTensorRtModelInputConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["concurrencyConfig"]));
        concurrencyConfig = make_shared<DeployTensorRtModelInputConcurrencyConfig>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["environmentVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        DeployTensorRtModelInputGpuConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<DeployTensorRtModelInputGpuConfig>(model1);
      }
    }
    if (m.find("httpTrigger") != m.end() && !m["httpTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["httpTrigger"].type()) {
        DeployTensorRtModelInputHttpTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["httpTrigger"]));
        httpTrigger = make_shared<DeployTensorRtModelInputHttpTrigger>(model1);
      }
    }
    if (m.find("imageName") != m.end() && !m["imageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["imageName"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        DeployTensorRtModelInputLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<DeployTensorRtModelInputLogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        DeployTensorRtModelInputModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<DeployTensorRtModelInputModelConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        DeployTensorRtModelInputNasConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<DeployTensorRtModelInputNasConfig>(model1);
      }
    }
    if (m.find("originalName") != m.end() && !m["originalName"].empty()) {
      originalName = make_shared<string>(boost::any_cast<string>(m["originalName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("provisionConfig") != m.end() && !m["provisionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["provisionConfig"].type()) {
        DeployTensorRtModelInputProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["provisionConfig"]));
        provisionConfig = make_shared<DeployTensorRtModelInputProvisionConfig>(model1);
      }
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("reportStatusURL") != m.end() && !m["reportStatusURL"].empty()) {
      reportStatusURL = make_shared<string>(boost::any_cast<string>(m["reportStatusURL"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        DeployTensorRtModelInputVpcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<DeployTensorRtModelInputVpcConfig>(model1);
      }
    }
  }


  virtual ~DeployTensorRtModelInput() = default;
};
class DeployTensorRtModelOutputData : public Darabonba::Model {
public:
  shared_ptr<string> deploymentTaskID{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> finished{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> traceID{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  DeployTensorRtModelOutputData() {}

  explicit DeployTensorRtModelOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentTaskID) {
      res["deploymentTaskID"] = boost::any(*deploymentTaskID);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (traceID) {
      res["traceID"] = boost::any(*traceID);
    }
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentTaskID") != m.end() && !m["deploymentTaskID"].empty()) {
      deploymentTaskID = make_shared<string>(boost::any_cast<string>(m["deploymentTaskID"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("traceID") != m.end() && !m["traceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["traceID"]));
    }
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~DeployTensorRtModelOutputData() = default;
};
class DeployTensorRtModelOutput : public Darabonba::Model {
public:
  shared_ptr<DeployTensorRtModelOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployTensorRtModelOutput() {}

  explicit DeployTensorRtModelOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeployTensorRtModelOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeployTensorRtModelOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployTensorRtModelOutput() = default;
};
class DeployVllmModelAsyncOutput : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployVllmModelAsyncOutput() {}

  explicit DeployVllmModelAsyncOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployVllmModelAsyncOutput() = default;
};
class DeployVllmModelInputConcurrencyConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedConcurrency{};

  DeployVllmModelInputConcurrencyConfig() {}

  explicit DeployVllmModelInputConcurrencyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedConcurrency) {
      res["reservedConcurrency"] = boost::any(*reservedConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reservedConcurrency") != m.end() && !m["reservedConcurrency"].empty()) {
      reservedConcurrency = make_shared<long>(boost::any_cast<long>(m["reservedConcurrency"]));
    }
  }


  virtual ~DeployVllmModelInputConcurrencyConfig() = default;
};
class DeployVllmModelInputGpuConfig : public Darabonba::Model {
public:
  shared_ptr<long> gpuMemorySize{};
  shared_ptr<string> gpuType{};

  DeployVllmModelInputGpuConfig() {}

  explicit DeployVllmModelInputGpuConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuMemorySize) {
      res["gpuMemorySize"] = boost::any(*gpuMemorySize);
    }
    if (gpuType) {
      res["gpuType"] = boost::any(*gpuType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gpuMemorySize") != m.end() && !m["gpuMemorySize"].empty()) {
      gpuMemorySize = make_shared<long>(boost::any_cast<long>(m["gpuMemorySize"]));
    }
    if (m.find("gpuType") != m.end() && !m["gpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["gpuType"]));
    }
  }


  virtual ~DeployVllmModelInputGpuConfig() = default;
};
class DeployVllmModelInputHttpTriggerTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<bool> dsableURLInternet{};
  shared_ptr<vector<string>> methods{};

  DeployVllmModelInputHttpTriggerTriggerConfig() {}

  explicit DeployVllmModelInputHttpTriggerTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    if (dsableURLInternet) {
      res["dsableURLInternet"] = boost::any(*dsableURLInternet);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
    if (m.find("dsableURLInternet") != m.end() && !m["dsableURLInternet"].empty()) {
      dsableURLInternet = make_shared<bool>(boost::any_cast<bool>(m["dsableURLInternet"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeployVllmModelInputHttpTriggerTriggerConfig() = default;
};
class DeployVllmModelInputHttpTrigger : public Darabonba::Model {
public:
  shared_ptr<string> qualifier{};
  shared_ptr<DeployVllmModelInputHttpTriggerTriggerConfig> triggerConfig{};

  DeployVllmModelInputHttpTrigger() {}

  explicit DeployVllmModelInputHttpTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        DeployVllmModelInputHttpTriggerTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<DeployVllmModelInputHttpTriggerTriggerConfig>(model1);
      }
    }
  }


  virtual ~DeployVllmModelInputHttpTrigger() = default;
};
class DeployVllmModelInputLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableInstanceMetrics{};
  shared_ptr<bool> enableRequestMetrics{};
  shared_ptr<string> logBeginRule{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  DeployVllmModelInputLogConfig() {}

  explicit DeployVllmModelInputLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInstanceMetrics) {
      res["enableInstanceMetrics"] = boost::any(*enableInstanceMetrics);
    }
    if (enableRequestMetrics) {
      res["enableRequestMetrics"] = boost::any(*enableRequestMetrics);
    }
    if (logBeginRule) {
      res["logBeginRule"] = boost::any(*logBeginRule);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableInstanceMetrics") != m.end() && !m["enableInstanceMetrics"].empty()) {
      enableInstanceMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableInstanceMetrics"]));
    }
    if (m.find("enableRequestMetrics") != m.end() && !m["enableRequestMetrics"].empty()) {
      enableRequestMetrics = make_shared<bool>(boost::any_cast<bool>(m["enableRequestMetrics"]));
    }
    if (m.find("logBeginRule") != m.end() && !m["logBeginRule"].empty()) {
      logBeginRule = make_shared<string>(boost::any_cast<string>(m["logBeginRule"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~DeployVllmModelInputLogConfig() = default;
};
class DeployVllmModelInputModelConfigFmkVllmConfig : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<long> blockSize{};
  shared_ptr<string> chatTemplate{};
  shared_ptr<string> dtype{};
  shared_ptr<string> fullTextPostfix{};
  shared_ptr<double> gpuMemoryUtilization{};
  shared_ptr<string> loadFormat{};
  shared_ptr<long> maxModelLen{};
  shared_ptr<long> maxParallelLoadingWorkers{};
  shared_ptr<string> quantization{};
  shared_ptr<string> servedModelName{};
  shared_ptr<long> swapSpace{};

  DeployVllmModelInputModelConfigFmkVllmConfig() {}

  explicit DeployVllmModelInputModelConfigFmkVllmConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (blockSize) {
      res["blockSize"] = boost::any(*blockSize);
    }
    if (chatTemplate) {
      res["chatTemplate"] = boost::any(*chatTemplate);
    }
    if (dtype) {
      res["dtype"] = boost::any(*dtype);
    }
    if (fullTextPostfix) {
      res["fullTextPostfix"] = boost::any(*fullTextPostfix);
    }
    if (gpuMemoryUtilization) {
      res["gpuMemoryUtilization"] = boost::any(*gpuMemoryUtilization);
    }
    if (loadFormat) {
      res["loadFormat"] = boost::any(*loadFormat);
    }
    if (maxModelLen) {
      res["maxModelLen"] = boost::any(*maxModelLen);
    }
    if (maxParallelLoadingWorkers) {
      res["maxParallelLoadingWorkers"] = boost::any(*maxParallelLoadingWorkers);
    }
    if (quantization) {
      res["quantization"] = boost::any(*quantization);
    }
    if (servedModelName) {
      res["servedModelName"] = boost::any(*servedModelName);
    }
    if (swapSpace) {
      res["swapSpace"] = boost::any(*swapSpace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("blockSize") != m.end() && !m["blockSize"].empty()) {
      blockSize = make_shared<long>(boost::any_cast<long>(m["blockSize"]));
    }
    if (m.find("chatTemplate") != m.end() && !m["chatTemplate"].empty()) {
      chatTemplate = make_shared<string>(boost::any_cast<string>(m["chatTemplate"]));
    }
    if (m.find("dtype") != m.end() && !m["dtype"].empty()) {
      dtype = make_shared<string>(boost::any_cast<string>(m["dtype"]));
    }
    if (m.find("fullTextPostfix") != m.end() && !m["fullTextPostfix"].empty()) {
      fullTextPostfix = make_shared<string>(boost::any_cast<string>(m["fullTextPostfix"]));
    }
    if (m.find("gpuMemoryUtilization") != m.end() && !m["gpuMemoryUtilization"].empty()) {
      gpuMemoryUtilization = make_shared<double>(boost::any_cast<double>(m["gpuMemoryUtilization"]));
    }
    if (m.find("loadFormat") != m.end() && !m["loadFormat"].empty()) {
      loadFormat = make_shared<string>(boost::any_cast<string>(m["loadFormat"]));
    }
    if (m.find("maxModelLen") != m.end() && !m["maxModelLen"].empty()) {
      maxModelLen = make_shared<long>(boost::any_cast<long>(m["maxModelLen"]));
    }
    if (m.find("maxParallelLoadingWorkers") != m.end() && !m["maxParallelLoadingWorkers"].empty()) {
      maxParallelLoadingWorkers = make_shared<long>(boost::any_cast<long>(m["maxParallelLoadingWorkers"]));
    }
    if (m.find("quantization") != m.end() && !m["quantization"].empty()) {
      quantization = make_shared<string>(boost::any_cast<string>(m["quantization"]));
    }
    if (m.find("servedModelName") != m.end() && !m["servedModelName"].empty()) {
      servedModelName = make_shared<string>(boost::any_cast<string>(m["servedModelName"]));
    }
    if (m.find("swapSpace") != m.end() && !m["swapSpace"].empty()) {
      swapSpace = make_shared<long>(boost::any_cast<long>(m["swapSpace"]));
    }
  }


  virtual ~DeployVllmModelInputModelConfigFmkVllmConfig() = default;
};
class DeployVllmModelInputModelConfig : public Darabonba::Model {
public:
  shared_ptr<DeployVllmModelInputModelConfigFmkVllmConfig> fmkVllmConfig{};
  shared_ptr<string> framework{};
  shared_ptr<vector<ModelConfig>> multiModelConfig{};
  shared_ptr<string> prefix{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> srcModelScopeModelID{};
  shared_ptr<string> srcModelScopeModelRevision{};
  shared_ptr<string> srcModelScopeToken{};
  shared_ptr<string> srcOssBucket{};
  shared_ptr<string> srcOssPath{};
  shared_ptr<string> srcOssRegion{};

  DeployVllmModelInputModelConfig() {}

  explicit DeployVllmModelInputModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fmkVllmConfig) {
      res["fmkVllmConfig"] = fmkVllmConfig ? boost::any(fmkVllmConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (framework) {
      res["framework"] = boost::any(*framework);
    }
    if (multiModelConfig) {
      vector<boost::any> temp1;
      for(auto item1:*multiModelConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multiModelConfig"] = boost::any(temp1);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (srcModelScopeModelID) {
      res["srcModelScopeModelID"] = boost::any(*srcModelScopeModelID);
    }
    if (srcModelScopeModelRevision) {
      res["srcModelScopeModelRevision"] = boost::any(*srcModelScopeModelRevision);
    }
    if (srcModelScopeToken) {
      res["srcModelScopeToken"] = boost::any(*srcModelScopeToken);
    }
    if (srcOssBucket) {
      res["srcOssBucket"] = boost::any(*srcOssBucket);
    }
    if (srcOssPath) {
      res["srcOssPath"] = boost::any(*srcOssPath);
    }
    if (srcOssRegion) {
      res["srcOssRegion"] = boost::any(*srcOssRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fmkVllmConfig") != m.end() && !m["fmkVllmConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["fmkVllmConfig"].type()) {
        DeployVllmModelInputModelConfigFmkVllmConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["fmkVllmConfig"]));
        fmkVllmConfig = make_shared<DeployVllmModelInputModelConfigFmkVllmConfig>(model1);
      }
    }
    if (m.find("framework") != m.end() && !m["framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["framework"]));
    }
    if (m.find("multiModelConfig") != m.end() && !m["multiModelConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["multiModelConfig"].type()) {
        vector<ModelConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multiModelConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiModelConfig = make_shared<vector<ModelConfig>>(expect1);
      }
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("srcModelScopeModelID") != m.end() && !m["srcModelScopeModelID"].empty()) {
      srcModelScopeModelID = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelID"]));
    }
    if (m.find("srcModelScopeModelRevision") != m.end() && !m["srcModelScopeModelRevision"].empty()) {
      srcModelScopeModelRevision = make_shared<string>(boost::any_cast<string>(m["srcModelScopeModelRevision"]));
    }
    if (m.find("srcModelScopeToken") != m.end() && !m["srcModelScopeToken"].empty()) {
      srcModelScopeToken = make_shared<string>(boost::any_cast<string>(m["srcModelScopeToken"]));
    }
    if (m.find("srcOssBucket") != m.end() && !m["srcOssBucket"].empty()) {
      srcOssBucket = make_shared<string>(boost::any_cast<string>(m["srcOssBucket"]));
    }
    if (m.find("srcOssPath") != m.end() && !m["srcOssPath"].empty()) {
      srcOssPath = make_shared<string>(boost::any_cast<string>(m["srcOssPath"]));
    }
    if (m.find("srcOssRegion") != m.end() && !m["srcOssRegion"].empty()) {
      srcOssRegion = make_shared<string>(boost::any_cast<string>(m["srcOssRegion"]));
    }
  }


  virtual ~DeployVllmModelInputModelConfig() = default;
};
class DeployVllmModelInputNasConfigMountPoints : public Darabonba::Model {
public:
  shared_ptr<bool> enableTLS{};
  shared_ptr<string> mountDir{};
  shared_ptr<string> serverAddr{};

  DeployVllmModelInputNasConfigMountPoints() {}

  explicit DeployVllmModelInputNasConfigMountPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableTLS) {
      res["enableTLS"] = boost::any(*enableTLS);
    }
    if (mountDir) {
      res["mountDir"] = boost::any(*mountDir);
    }
    if (serverAddr) {
      res["serverAddr"] = boost::any(*serverAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableTLS") != m.end() && !m["enableTLS"].empty()) {
      enableTLS = make_shared<bool>(boost::any_cast<bool>(m["enableTLS"]));
    }
    if (m.find("mountDir") != m.end() && !m["mountDir"].empty()) {
      mountDir = make_shared<string>(boost::any_cast<string>(m["mountDir"]));
    }
    if (m.find("serverAddr") != m.end() && !m["serverAddr"].empty()) {
      serverAddr = make_shared<string>(boost::any_cast<string>(m["serverAddr"]));
    }
  }


  virtual ~DeployVllmModelInputNasConfigMountPoints() = default;
};
class DeployVllmModelInputNasConfig : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<vector<DeployVllmModelInputNasConfigMountPoints>> mountPoints{};
  shared_ptr<long> userId{};

  DeployVllmModelInputNasConfig() {}

  explicit DeployVllmModelInputNasConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (mountPoints) {
      vector<boost::any> temp1;
      for(auto item1:*mountPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mountPoints"] = boost::any(temp1);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("mountPoints") != m.end() && !m["mountPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["mountPoints"].type()) {
        vector<DeployVllmModelInputNasConfigMountPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mountPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployVllmModelInputNasConfigMountPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountPoints = make_shared<vector<DeployVllmModelInputNasConfigMountPoints>>(expect1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["userId"]));
    }
  }


  virtual ~DeployVllmModelInputNasConfig() = default;
};
class DeployVllmModelInputProvisionConfigScheduledActions : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> startTime{};
  shared_ptr<long> target{};
  shared_ptr<string> timeZone{};

  DeployVllmModelInputProvisionConfigScheduledActions() {}

  explicit DeployVllmModelInputProvisionConfigScheduledActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleExpression) {
      res["scheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleExpression") != m.end() && !m["scheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["scheduleExpression"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~DeployVllmModelInputProvisionConfigScheduledActions() = default;
};
class DeployVllmModelInputProvisionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> alwaysAllocateGPU{};
  shared_ptr<vector<DeployVllmModelInputProvisionConfigScheduledActions>> scheduledActions{};
  shared_ptr<long> target{};

  DeployVllmModelInputProvisionConfig() {}

  explicit DeployVllmModelInputProvisionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alwaysAllocateGPU) {
      res["alwaysAllocateGPU"] = boost::any(*alwaysAllocateGPU);
    }
    if (scheduledActions) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scheduledActions"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alwaysAllocateGPU") != m.end() && !m["alwaysAllocateGPU"].empty()) {
      alwaysAllocateGPU = make_shared<bool>(boost::any_cast<bool>(m["alwaysAllocateGPU"]));
    }
    if (m.find("scheduledActions") != m.end() && !m["scheduledActions"].empty()) {
      if (typeid(vector<boost::any>) == m["scheduledActions"].type()) {
        vector<DeployVllmModelInputProvisionConfigScheduledActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scheduledActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployVllmModelInputProvisionConfigScheduledActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledActions = make_shared<vector<DeployVllmModelInputProvisionConfigScheduledActions>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["target"]));
    }
  }


  virtual ~DeployVllmModelInputProvisionConfig() = default;
};
class DeployVllmModelInputVpcConfig : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};

  DeployVllmModelInputVpcConfig() {}

  explicit DeployVllmModelInputVpcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchIds) {
      res["vSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("vSwitchIds") != m.end() && !m["vSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~DeployVllmModelInputVpcConfig() = default;
};
class DeployVllmModelInput : public Darabonba::Model {
public:
  shared_ptr<string> accountID{};
  shared_ptr<DeployVllmModelInputConcurrencyConfig> concurrencyConfig{};
  shared_ptr<double> cpu{};
  shared_ptr<string> description{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> envName{};
  shared_ptr<map<string, boost::any>> environmentVariables{};
  shared_ptr<DeployVllmModelInputGpuConfig> gpuConfig{};
  shared_ptr<DeployVllmModelInputHttpTrigger> httpTrigger{};
  shared_ptr<string> imageName{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<DeployVllmModelInputLogConfig> logConfig{};
  shared_ptr<long> memorySize{};
  shared_ptr<DeployVllmModelInputModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<DeployVllmModelInputNasConfig> nasConfig{};
  shared_ptr<string> originalName{};
  shared_ptr<string> projectName{};
  shared_ptr<DeployVllmModelInputProvisionConfig> provisionConfig{};
  shared_ptr<string> region{};
  shared_ptr<string> reportStatusURL{};
  shared_ptr<string> role{};
  shared_ptr<long> timeout{};
  shared_ptr<string> traceId{};
  shared_ptr<DeployVllmModelInputVpcConfig> vpcConfig{};

  DeployVllmModelInput() {}

  explicit DeployVllmModelInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountID) {
      res["accountID"] = boost::any(*accountID);
    }
    if (concurrencyConfig) {
      res["concurrencyConfig"] = concurrencyConfig ? boost::any(concurrencyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (diskSize) {
      res["diskSize"] = boost::any(*diskSize);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (environmentVariables) {
      res["environmentVariables"] = boost::any(*environmentVariables);
    }
    if (gpuConfig) {
      res["gpuConfig"] = gpuConfig ? boost::any(gpuConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpTrigger) {
      res["httpTrigger"] = httpTrigger ? boost::any(httpTrigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageName) {
      res["imageName"] = boost::any(*imageName);
    }
    if (instanceConcurrency) {
      res["instanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memorySize) {
      res["memorySize"] = boost::any(*memorySize);
    }
    if (modelConfig) {
      res["modelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nasConfig) {
      res["nasConfig"] = nasConfig ? boost::any(nasConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originalName) {
      res["originalName"] = boost::any(*originalName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (provisionConfig) {
      res["provisionConfig"] = provisionConfig ? boost::any(provisionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (reportStatusURL) {
      res["reportStatusURL"] = boost::any(*reportStatusURL);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    if (vpcConfig) {
      res["vpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountID") != m.end() && !m["accountID"].empty()) {
      accountID = make_shared<string>(boost::any_cast<string>(m["accountID"]));
    }
    if (m.find("concurrencyConfig") != m.end() && !m["concurrencyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["concurrencyConfig"].type()) {
        DeployVllmModelInputConcurrencyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["concurrencyConfig"]));
        concurrencyConfig = make_shared<DeployVllmModelInputConcurrencyConfig>(model1);
      }
    }
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["cpu"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("diskSize") != m.end() && !m["diskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["diskSize"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("environmentVariables") != m.end() && !m["environmentVariables"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["environmentVariables"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("gpuConfig") != m.end() && !m["gpuConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["gpuConfig"].type()) {
        DeployVllmModelInputGpuConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gpuConfig"]));
        gpuConfig = make_shared<DeployVllmModelInputGpuConfig>(model1);
      }
    }
    if (m.find("httpTrigger") != m.end() && !m["httpTrigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["httpTrigger"].type()) {
        DeployVllmModelInputHttpTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["httpTrigger"]));
        httpTrigger = make_shared<DeployVllmModelInputHttpTrigger>(model1);
      }
    }
    if (m.find("imageName") != m.end() && !m["imageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["imageName"]));
    }
    if (m.find("instanceConcurrency") != m.end() && !m["instanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["instanceConcurrency"]));
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        DeployVllmModelInputLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<DeployVllmModelInputLogConfig>(model1);
      }
    }
    if (m.find("memorySize") != m.end() && !m["memorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["memorySize"]));
    }
    if (m.find("modelConfig") != m.end() && !m["modelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["modelConfig"].type()) {
        DeployVllmModelInputModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["modelConfig"]));
        modelConfig = make_shared<DeployVllmModelInputModelConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nasConfig") != m.end() && !m["nasConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nasConfig"].type()) {
        DeployVllmModelInputNasConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nasConfig"]));
        nasConfig = make_shared<DeployVllmModelInputNasConfig>(model1);
      }
    }
    if (m.find("originalName") != m.end() && !m["originalName"].empty()) {
      originalName = make_shared<string>(boost::any_cast<string>(m["originalName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("provisionConfig") != m.end() && !m["provisionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["provisionConfig"].type()) {
        DeployVllmModelInputProvisionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["provisionConfig"]));
        provisionConfig = make_shared<DeployVllmModelInputProvisionConfig>(model1);
      }
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("reportStatusURL") != m.end() && !m["reportStatusURL"].empty()) {
      reportStatusURL = make_shared<string>(boost::any_cast<string>(m["reportStatusURL"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
    if (m.find("vpcConfig") != m.end() && !m["vpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcConfig"].type()) {
        DeployVllmModelInputVpcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcConfig"]));
        vpcConfig = make_shared<DeployVllmModelInputVpcConfig>(model1);
      }
    }
  }


  virtual ~DeployVllmModelInput() = default;
};
class DeployVllmModelOutputData : public Darabonba::Model {
public:
  shared_ptr<string> deploymentTaskID{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> finished{};
  shared_ptr<string> modelName{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> traceID{};
  shared_ptr<string> urlInternet{};
  shared_ptr<string> urlIntranet{};

  DeployVllmModelOutputData() {}

  explicit DeployVllmModelOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentTaskID) {
      res["deploymentTaskID"] = boost::any(*deploymentTaskID);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (modelName) {
      res["modelName"] = boost::any(*modelName);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    if (traceID) {
      res["traceID"] = boost::any(*traceID);
    }
    if (urlInternet) {
      res["urlInternet"] = boost::any(*urlInternet);
    }
    if (urlIntranet) {
      res["urlIntranet"] = boost::any(*urlIntranet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deploymentTaskID") != m.end() && !m["deploymentTaskID"].empty()) {
      deploymentTaskID = make_shared<string>(boost::any_cast<string>(m["deploymentTaskID"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("modelName") != m.end() && !m["modelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["modelName"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
    if (m.find("traceID") != m.end() && !m["traceID"].empty()) {
      traceID = make_shared<string>(boost::any_cast<string>(m["traceID"]));
    }
    if (m.find("urlInternet") != m.end() && !m["urlInternet"].empty()) {
      urlInternet = make_shared<string>(boost::any_cast<string>(m["urlInternet"]));
    }
    if (m.find("urlIntranet") != m.end() && !m["urlIntranet"].empty()) {
      urlIntranet = make_shared<string>(boost::any_cast<string>(m["urlIntranet"]));
    }
  }


  virtual ~DeployVllmModelOutputData() = default;
};
class DeployVllmModelOutput : public Darabonba::Model {
public:
  shared_ptr<DeployVllmModelOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeployVllmModelOutput() {}

  explicit DeployVllmModelOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DeployVllmModelOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeployVllmModelOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeployVllmModelOutput() = default;
};
class DownloadModelOutputData : public Darabonba::Model {
public:
  shared_ptr<string> modelPath{};
  shared_ptr<string> taskType{};

  DownloadModelOutputData() {}

  explicit DownloadModelOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelPath) {
      res["modelPath"] = boost::any(*modelPath);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelPath") != m.end() && !m["modelPath"].empty()) {
      modelPath = make_shared<string>(boost::any_cast<string>(m["modelPath"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~DownloadModelOutputData() = default;
};
class DownloadModelOutput : public Darabonba::Model {
public:
  shared_ptr<DownloadModelOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DownloadModelOutput() {}

  explicit DownloadModelOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DownloadModelOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DownloadModelOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DownloadModelOutput() = default;
};
class EventFilterConfig : public Darabonba::Model {
public:
  shared_ptr<BranchFilter> branch{};

  EventFilterConfig() {}

  explicit EventFilterConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = branch ? boost::any(branch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      if (typeid(map<string, boost::any>) == m["branch"].type()) {
        BranchFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["branch"]));
        branch = make_shared<BranchFilter>(model1);
      }
    }
  }


  virtual ~EventFilterConfig() = default;
};
class RepositorySourceConfig : public Darabonba::Model {
public:
  shared_ptr<CodeVersionReference> codeVersion{};
  shared_ptr<EventFilterConfig> filter{};
  shared_ptr<string> repositoryName{};

  RepositorySourceConfig() {}

  explicit RepositorySourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVersion) {
      res["codeVersion"] = codeVersion ? boost::any(codeVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filter) {
      res["filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (repositoryName) {
      res["repositoryName"] = boost::any(*repositoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["codeVersion"].type()) {
        CodeVersionReference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["codeVersion"]));
        codeVersion = make_shared<CodeVersionReference>(model1);
      }
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["filter"].type()) {
        EventFilterConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filter"]));
        filter = make_shared<EventFilterConfig>(model1);
      }
    }
    if (m.find("repositoryName") != m.end() && !m["repositoryName"].empty()) {
      repositoryName = make_shared<string>(boost::any_cast<string>(m["repositoryName"]));
    }
  }


  virtual ~RepositorySourceConfig() = default;
};
class TemplateSourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> name{};

  TemplateSourceConfig() {}

  explicit TemplateSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadUrl) {
      res["downloadUrl"] = boost::any(*downloadUrl);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("downloadUrl") != m.end() && !m["downloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["downloadUrl"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~TemplateSourceConfig() = default;
};
class SourceConfig : public Darabonba::Model {
public:
  shared_ptr<RepositorySourceConfig> repository{};
  shared_ptr<TemplateSourceConfig> template_{};

  SourceConfig() {}

  explicit SourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (repository) {
      res["repository"] = repository ? boost::any(repository->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (template_) {
      res["template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("repository") != m.end() && !m["repository"].empty()) {
      if (typeid(map<string, boost::any>) == m["repository"].type()) {
        RepositorySourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["repository"]));
        repository = make_shared<RepositorySourceConfig>(model1);
      }
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      if (typeid(map<string, boost::any>) == m["template"].type()) {
        TemplateSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["template"]));
        template_ = make_shared<TemplateSourceConfig>(model1);
      }
    }
  }


  virtual ~SourceConfig() = default;
};
class Variable : public Darabonba::Model {
public:
  shared_ptr<bool> encrypted{};
  shared_ptr<bool> sensitive{};
  shared_ptr<boost::any> value{};

  Variable() {}

  explicit Variable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encrypted) {
      res["encrypted"] = boost::any(*encrypted);
    }
    if (sensitive) {
      res["sensitive"] = boost::any(*sensitive);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("encrypted") != m.end() && !m["encrypted"].empty()) {
      encrypted = make_shared<bool>(boost::any_cast<bool>(m["encrypted"]));
    }
    if (m.find("sensitive") != m.end() && !m["sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["sensitive"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
  }


  virtual ~Variable() = default;
};
class ServiceConfig : public Darabonba::Model {
public:
  shared_ptr<ArtifactMeta> artifact{};
  shared_ptr<BuildConfig> build{};
  shared_ptr<string> component{};
  shared_ptr<map<string, boost::any>> props{};
  shared_ptr<SourceConfig> source{};
  shared_ptr<string> type{};
  shared_ptr<map<string, Variable>> variables{};

  ServiceConfig() {}

  explicit ServiceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifact) {
      res["artifact"] = artifact ? boost::any(artifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (build) {
      res["build"] = build ? boost::any(build->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (component) {
      res["component"] = boost::any(*component);
    }
    if (props) {
      res["props"] = boost::any(*props);
    }
    if (source) {
      res["source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifact") != m.end() && !m["artifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["artifact"].type()) {
        ArtifactMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["artifact"]));
        artifact = make_shared<ArtifactMeta>(model1);
      }
    }
    if (m.find("build") != m.end() && !m["build"].empty()) {
      if (typeid(map<string, boost::any>) == m["build"].type()) {
        BuildConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["build"]));
        build = make_shared<BuildConfig>(model1);
      }
    }
    if (m.find("component") != m.end() && !m["component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["component"]));
    }
    if (m.find("props") != m.end() && !m["props"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["props"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      if (typeid(map<string, boost::any>) == m["source"].type()) {
        SourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["source"]));
        source = make_shared<SourceConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, Variable> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Variable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, Variable>>(expect1);
      }
    }
  }


  virtual ~ServiceConfig() = default;
};
class EnvironmentStagedConfigs : public Darabonba::Model {
public:
  shared_ptr<map<string, ServiceConfig>> services{};
  shared_ptr<map<string, Variable>> variables{};

  EnvironmentStagedConfigs() {}

  explicit EnvironmentStagedConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      map<string, boost::any> temp1;
      for(auto item1:*services){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["services"] = boost::any(temp1);
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(map<string, boost::any>) == m["services"].type()) {
        map<string, ServiceConfig> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ServiceConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        services = make_shared<map<string, ServiceConfig>>(expect1);
      }
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, Variable> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Variable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, Variable>>(expect1);
      }
    }
  }


  virtual ~EnvironmentStagedConfigs() = default;
};
class EnvironmentSpec : public Darabonba::Model {
public:
  shared_ptr<string> roleArn{};
  shared_ptr<EnvironmentStagedConfigs> stagedConfigs{};
  shared_ptr<string> type{};

  EnvironmentSpec() {}

  explicit EnvironmentSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (stagedConfigs) {
      res["stagedConfigs"] = stagedConfigs ? boost::any(stagedConfigs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("stagedConfigs") != m.end() && !m["stagedConfigs"].empty()) {
      if (typeid(map<string, boost::any>) == m["stagedConfigs"].type()) {
        EnvironmentStagedConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stagedConfigs"]));
        stagedConfigs = make_shared<EnvironmentStagedConfigs>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~EnvironmentSpec() = default;
};
class ServiceInstanceLatestDeployment : public Darabonba::Model {
public:
  shared_ptr<string> finishedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> phase{};
  shared_ptr<string> startTime{};

  ServiceInstanceLatestDeployment() {}

  explicit ServiceInstanceLatestDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishedTime) {
      res["finishedTime"] = boost::any(*finishedTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishedTime") != m.end() && !m["finishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["finishedTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~ServiceInstanceLatestDeployment() = default;
};
class ServiceInstance : public Darabonba::Model {
public:
  shared_ptr<ServiceConfig> config{};
  shared_ptr<ServiceInstanceLatestDeployment> latestDeployment{};
  shared_ptr<map<string, boost::any>> outputs{};
  shared_ptr<map<string, Variable>> variables{};

  ServiceInstance() {}

  explicit ServiceInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (latestDeployment) {
      res["latestDeployment"] = latestDeployment ? boost::any(latestDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputs) {
      res["outputs"] = boost::any(*outputs);
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        ServiceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<ServiceConfig>(model1);
      }
    }
    if (m.find("latestDeployment") != m.end() && !m["latestDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["latestDeployment"].type()) {
        ServiceInstanceLatestDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["latestDeployment"]));
        latestDeployment = make_shared<ServiceInstanceLatestDeployment>(model1);
      }
    }
    if (m.find("outputs") != m.end() && !m["outputs"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["outputs"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      outputs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, Variable> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Variable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, Variable>>(expect1);
      }
    }
  }


  virtual ~ServiceInstance() = default;
};
class EnvironmentStatus : public Darabonba::Model {
public:
  shared_ptr<string> latestEnvironmentDeploymentName{};
  shared_ptr<long> observedGeneration{};
  shared_ptr<string> observedTime{};
  shared_ptr<map<string, ServiceInstance>> servicesInstances{};
  shared_ptr<vector<string>> servicesWithPendingChanges{};

  EnvironmentStatus() {}

  explicit EnvironmentStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latestEnvironmentDeploymentName) {
      res["latestEnvironmentDeploymentName"] = boost::any(*latestEnvironmentDeploymentName);
    }
    if (observedGeneration) {
      res["observedGeneration"] = boost::any(*observedGeneration);
    }
    if (observedTime) {
      res["observedTime"] = boost::any(*observedTime);
    }
    if (servicesInstances) {
      map<string, boost::any> temp1;
      for(auto item1:*servicesInstances){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["servicesInstances"] = boost::any(temp1);
    }
    if (servicesWithPendingChanges) {
      res["servicesWithPendingChanges"] = boost::any(*servicesWithPendingChanges);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("latestEnvironmentDeploymentName") != m.end() && !m["latestEnvironmentDeploymentName"].empty()) {
      latestEnvironmentDeploymentName = make_shared<string>(boost::any_cast<string>(m["latestEnvironmentDeploymentName"]));
    }
    if (m.find("observedGeneration") != m.end() && !m["observedGeneration"].empty()) {
      observedGeneration = make_shared<long>(boost::any_cast<long>(m["observedGeneration"]));
    }
    if (m.find("observedTime") != m.end() && !m["observedTime"].empty()) {
      observedTime = make_shared<string>(boost::any_cast<string>(m["observedTime"]));
    }
    if (m.find("servicesInstances") != m.end() && !m["servicesInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["servicesInstances"].type()) {
        map<string, ServiceInstance> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["servicesInstances"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ServiceInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        servicesInstances = make_shared<map<string, ServiceInstance>>(expect1);
      }
    }
    if (m.find("servicesWithPendingChanges") != m.end() && !m["servicesWithPendingChanges"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["servicesWithPendingChanges"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["servicesWithPendingChanges"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      servicesWithPendingChanges = make_shared<vector<string>>(toVec1);
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
class EnvironmentBaseline : public Darabonba::Model {
public:
  shared_ptr<map<string, ServiceInstance>> servicesInstances{};
  shared_ptr<map<string, Variable>> variables{};

  EnvironmentBaseline() {}

  explicit EnvironmentBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (servicesInstances) {
      map<string, boost::any> temp1;
      for(auto item1:*servicesInstances){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["servicesInstances"] = boost::any(temp1);
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("servicesInstances") != m.end() && !m["servicesInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["servicesInstances"].type()) {
        map<string, ServiceInstance> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["servicesInstances"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ServiceInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        servicesInstances = make_shared<map<string, ServiceInstance>>(expect1);
      }
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, Variable> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Variable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, Variable>>(expect1);
      }
    }
  }


  virtual ~EnvironmentBaseline() = default;
};
class EnvironmentChanges : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> services{};

  EnvironmentChanges() {}

  explicit EnvironmentChanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      res["services"] = boost::any(*services);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("services") != m.end() && !m["services"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["services"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      services = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~EnvironmentChanges() = default;
};
class EnvironmentSnapshot : public Darabonba::Model {
public:
  shared_ptr<map<string, ServiceInstance>> services{};

  EnvironmentSnapshot() {}

  explicit EnvironmentSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      map<string, boost::any> temp1;
      for(auto item1:*services){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["services"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(map<string, boost::any>) == m["services"].type()) {
        map<string, ServiceInstance> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ServiceInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        services = make_shared<map<string, ServiceInstance>>(expect1);
      }
    }
  }


  virtual ~EnvironmentSnapshot() = default;
};
class WebhookCodeContext : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commitID{};
  shared_ptr<string> description{};
  shared_ptr<string> eventType{};
  shared_ptr<string> message{};
  shared_ptr<string> prType{};
  shared_ptr<string> repoUrl{};
  shared_ptr<string> sourceBranch{};
  shared_ptr<string> tag{};
  shared_ptr<string> targetBranch{};
  shared_ptr<string> title{};

  WebhookCodeContext() {}

  explicit WebhookCodeContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (eventType) {
      res["eventType"] = boost::any(*eventType);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (prType) {
      res["prType"] = boost::any(*prType);
    }
    if (repoUrl) {
      res["repoUrl"] = boost::any(*repoUrl);
    }
    if (sourceBranch) {
      res["sourceBranch"] = boost::any(*sourceBranch);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (targetBranch) {
      res["targetBranch"] = boost::any(*targetBranch);
    }
    if (title) {
      res["title"] = boost::any(*title);
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("eventType") != m.end() && !m["eventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["eventType"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("prType") != m.end() && !m["prType"].empty()) {
      prType = make_shared<string>(boost::any_cast<string>(m["prType"]));
    }
    if (m.find("repoUrl") != m.end() && !m["repoUrl"].empty()) {
      repoUrl = make_shared<string>(boost::any_cast<string>(m["repoUrl"]));
    }
    if (m.find("sourceBranch") != m.end() && !m["sourceBranch"].empty()) {
      sourceBranch = make_shared<string>(boost::any_cast<string>(m["sourceBranch"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("targetBranch") != m.end() && !m["targetBranch"].empty()) {
      targetBranch = make_shared<string>(boost::any_cast<string>(m["targetBranch"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~WebhookCodeContext() = default;
};
class EnvironmentDeploymentSpec : public Darabonba::Model {
public:
  shared_ptr<EnvironmentSnapshot> baseline{};
  shared_ptr<EnvironmentChanges> changes{};
  shared_ptr<bool> skipRemoveResources{};
  shared_ptr<EnvironmentStagedConfigs> target{};
  shared_ptr<WebhookCodeContext> webhookCodeContext{};

  EnvironmentDeploymentSpec() {}

  explicit EnvironmentDeploymentSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseline) {
      res["baseline"] = baseline ? boost::any(baseline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (changes) {
      res["changes"] = changes ? boost::any(changes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (skipRemoveResources) {
      res["skipRemoveResources"] = boost::any(*skipRemoveResources);
    }
    if (target) {
      res["target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webhookCodeContext) {
      res["webhookCodeContext"] = webhookCodeContext ? boost::any(webhookCodeContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baseline") != m.end() && !m["baseline"].empty()) {
      if (typeid(map<string, boost::any>) == m["baseline"].type()) {
        EnvironmentSnapshot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["baseline"]));
        baseline = make_shared<EnvironmentSnapshot>(model1);
      }
    }
    if (m.find("changes") != m.end() && !m["changes"].empty()) {
      if (typeid(map<string, boost::any>) == m["changes"].type()) {
        EnvironmentChanges model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["changes"]));
        changes = make_shared<EnvironmentChanges>(model1);
      }
    }
    if (m.find("skipRemoveResources") != m.end() && !m["skipRemoveResources"].empty()) {
      skipRemoveResources = make_shared<bool>(boost::any_cast<bool>(m["skipRemoveResources"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      if (typeid(map<string, boost::any>) == m["target"].type()) {
        EnvironmentStagedConfigs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["target"]));
        target = make_shared<EnvironmentStagedConfigs>(model1);
      }
    }
    if (m.find("webhookCodeContext") != m.end() && !m["webhookCodeContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["webhookCodeContext"].type()) {
        WebhookCodeContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["webhookCodeContext"]));
        webhookCodeContext = make_shared<WebhookCodeContext>(model1);
      }
    }
  }


  virtual ~EnvironmentDeploymentSpec() = default;
};
class EnvironmentDeploymentStatus : public Darabonba::Model {
public:
  shared_ptr<string> finishedTime{};
  shared_ptr<string> phase{};
  shared_ptr<string> pipelineName{};
  shared_ptr<map<string, string>> serviceDeployments{};

  EnvironmentDeploymentStatus() {}

  explicit EnvironmentDeploymentStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishedTime) {
      res["finishedTime"] = boost::any(*finishedTime);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (serviceDeployments) {
      res["serviceDeployments"] = boost::any(*serviceDeployments);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishedTime") != m.end() && !m["finishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["finishedTime"]));
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("serviceDeployments") != m.end() && !m["serviceDeployments"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["serviceDeployments"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      serviceDeployments = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~EnvironmentDeploymentStatus() = default;
};
class EnvironmentDeployment : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<EnvironmentDeploymentSpec> spec{};
  shared_ptr<EnvironmentDeploymentStatus> status{};
  shared_ptr<string> uid{};

  EnvironmentDeployment() {}

  explicit EnvironmentDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
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
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
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
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        EnvironmentDeploymentSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<EnvironmentDeploymentSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        EnvironmentDeploymentStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<EnvironmentDeploymentStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~EnvironmentDeployment() = default;
};
class FinalizeConfig : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> steps{};

  FinalizeConfig() {}

  explicit FinalizeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (steps) {
      res["steps"] = boost::any(*steps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["steps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      steps = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~FinalizeConfig() = default;
};
class GetModelStatusOutputData : public Darabonba::Model {
public:
  shared_ptr<long> currentBytes{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> fileSize{};
  shared_ptr<bool> finished{};
  shared_ptr<long> finishedTime{};
  shared_ptr<long> speed{};
  shared_ptr<long> startTime{};
  shared_ptr<long> total{};

  GetModelStatusOutputData() {}

  explicit GetModelStatusOutputData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentBytes) {
      res["currentBytes"] = boost::any(*currentBytes);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (fileSize) {
      res["fileSize"] = boost::any(*fileSize);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (finishedTime) {
      res["finishedTime"] = boost::any(*finishedTime);
    }
    if (speed) {
      res["speed"] = boost::any(*speed);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentBytes") != m.end() && !m["currentBytes"].empty()) {
      currentBytes = make_shared<long>(boost::any_cast<long>(m["currentBytes"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("fileSize") != m.end() && !m["fileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["fileSize"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("finishedTime") != m.end() && !m["finishedTime"].empty()) {
      finishedTime = make_shared<long>(boost::any_cast<long>(m["finishedTime"]));
    }
    if (m.find("speed") != m.end() && !m["speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["speed"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetModelStatusOutputData() = default;
};
class GetModelStatusOutput : public Darabonba::Model {
public:
  shared_ptr<GetModelStatusOutputData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetModelStatusOutput() {}

  explicit GetModelStatusOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetModelStatusOutputData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetModelStatusOutputData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetModelStatusOutput() = default;
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
class InitializeConfig : public Darabonba::Model {
public:
  shared_ptr<vector<boost::any>> steps{};

  InitializeConfig() {}

  explicit InitializeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (steps) {
      res["steps"] = boost::any(*steps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("steps") != m.end() && !m["steps"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["steps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["steps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      steps = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~InitializeConfig() = default;
};
class ModelAsyncTask : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<bool> finished{};
  shared_ptr<long> finishedTime{};
  shared_ptr<boost::any> result{};
  shared_ptr<long> startTime{};
  shared_ptr<string> taskType{};
  shared_ptr<long> updateTime{};

  ModelAsyncTask() {}

  explicit ModelAsyncTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (finishedTime) {
      res["finishedTime"] = boost::any(*finishedTime);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("finishedTime") != m.end() && !m["finishedTime"].empty()) {
      finishedTime = make_shared<long>(boost::any_cast<long>(m["finishedTime"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<boost::any>(boost::any_cast<boost::any>(m["result"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~ModelAsyncTask() = default;
};
class ModelFile : public Darabonba::Model {
public:
  shared_ptr<bool> isDir{};
  shared_ptr<long> modeTime{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};
  shared_ptr<long> size{};

  ModelFile() {}

  explicit ModelFile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (modeTime) {
      res["modeTime"] = boost::any(*modeTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("modeTime") != m.end() && !m["modeTime"].empty()) {
      modeTime = make_shared<long>(boost::any_cast<long>(m["modeTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ModelFile() = default;
};
class ModelFilePreview : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> hash{};
  shared_ptr<bool> isCompressedImage{};
  shared_ptr<bool> isDir{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};
  shared_ptr<long> size{};
  shared_ptr<bool> unpreviewable{};

  ModelFilePreview() {}

  explicit ModelFilePreview(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (hash) {
      res["hash"] = boost::any(*hash);
    }
    if (isCompressedImage) {
      res["isCompressedImage"] = boost::any(*isCompressedImage);
    }
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (unpreviewable) {
      res["unpreviewable"] = boost::any(*unpreviewable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("hash") != m.end() && !m["hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["hash"]));
    }
    if (m.find("isCompressedImage") != m.end() && !m["isCompressedImage"].empty()) {
      isCompressedImage = make_shared<bool>(boost::any_cast<bool>(m["isCompressedImage"]));
    }
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("unpreviewable") != m.end() && !m["unpreviewable"].empty()) {
      unpreviewable = make_shared<bool>(boost::any_cast<bool>(m["unpreviewable"]));
    }
  }


  virtual ~ModelFilePreview() = default;
};
class ModelProvider : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> uid{};

  ModelProvider() {}

  explicit ModelProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
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
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ModelProvider() = default;
};
class ModelProviderAuthorization : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> authConfig{};
  shared_ptr<string> type{};

  ModelProviderAuthorization() {}

  explicit ModelProviderAuthorization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["authConfig"] = boost::any(*authConfig);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["authConfig"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      authConfig = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModelProviderAuthorization() = default;
};
class ModelProviderSchema : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> type{};

  ModelProviderSchema() {}

  explicit ModelProviderSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["detail"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModelProviderSchema() = default;
};
class ModelProviderSpec : public Darabonba::Model {
public:
  shared_ptr<ModelProviderAuthorization> authorization{};
  shared_ptr<ModelProviderSchema> schema{};

  ModelProviderSpec() {}

  explicit ModelProviderSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorization) {
      res["authorization"] = authorization ? boost::any(authorization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schema) {
      res["schema"] = schema ? boost::any(schema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorization") != m.end() && !m["authorization"].empty()) {
      if (typeid(map<string, boost::any>) == m["authorization"].type()) {
        ModelProviderAuthorization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authorization"]));
        authorization = make_shared<ModelProviderAuthorization>(model1);
      }
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      if (typeid(map<string, boost::any>) == m["schema"].type()) {
        ModelProviderSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schema"]));
        schema = make_shared<ModelProviderSchema>(model1);
      }
    }
  }


  virtual ~ModelProviderSpec() = default;
};
class ModelTask : public Darabonba::Model {
public:
  shared_ptr<string> errMsg{};
  shared_ptr<double> fileSize{};
  shared_ptr<double> finishTime{};
  shared_ptr<bool> finished{};
  shared_ptr<double> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<double> total{};

  ModelTask() {}

  explicit ModelTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errMsg) {
      res["errMsg"] = boost::any(*errMsg);
    }
    if (fileSize) {
      res["fileSize"] = boost::any(*fileSize);
    }
    if (finishTime) {
      res["finishTime"] = boost::any(*finishTime);
    }
    if (finished) {
      res["finished"] = boost::any(*finished);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errMsg") != m.end() && !m["errMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["errMsg"]));
    }
    if (m.find("fileSize") != m.end() && !m["fileSize"].empty()) {
      fileSize = make_shared<double>(boost::any_cast<double>(m["fileSize"]));
    }
    if (m.find("finishTime") != m.end() && !m["finishTime"].empty()) {
      finishTime = make_shared<double>(boost::any_cast<double>(m["finishTime"]));
    }
    if (m.find("finished") != m.end() && !m["finished"].empty()) {
      finished = make_shared<bool>(boost::any_cast<bool>(m["finished"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<double>(boost::any_cast<double>(m["total"]));
    }
  }


  virtual ~ModelTask() = default;
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
class OperationModelFileAction : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> destination{};
  shared_ptr<string> source{};
  shared_ptr<string> target{};

  OperationModelFileAction() {}

  explicit OperationModelFileAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (destination) {
      res["destination"] = boost::any(*destination);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("destination") != m.end() && !m["destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["destination"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["target"]));
    }
  }


  virtual ~OperationModelFileAction() = default;
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
class ServiceMeta : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ServiceMeta() {}

  explicit ServiceMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ServiceMeta() = default;
};
class ProjectStatus : public Darabonba::Model {
public:
  shared_ptr<vector<ServiceMeta>> services{};

  ProjectStatus() {}

  explicit ProjectStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["services"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<ServiceMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ServiceMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ServiceMeta>>(expect1);
      }
    }
  }


  virtual ~ProjectStatus() = default;
};
class Project : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<ProjectStatus> status{};
  shared_ptr<string> uid{};

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
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
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
  }


  virtual ~Project() = default;
};
class ProjectSpec : public Darabonba::Model {
public:

  ProjectSpec() {}

  explicit ProjectSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~ProjectSpec() = default;
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
class Repository : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
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
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
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
class ServiceBaseline : public Darabonba::Model {
public:
  shared_ptr<ServiceInstance> serviceInstance{};

  ServiceBaseline() {}

  explicit ServiceBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceInstance) {
      res["serviceInstance"] = serviceInstance ? boost::any(serviceInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceInstance") != m.end() && !m["serviceInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceInstance"].type()) {
        ServiceInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceInstance"]));
        serviceInstance = make_shared<ServiceInstance>(model1);
      }
    }
  }


  virtual ~ServiceBaseline() = default;
};
class ServiceChanges : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> merge{};

  ServiceChanges() {}

  explicit ServiceChanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (merge) {
      res["merge"] = boost::any(*merge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("merge") != m.end() && !m["merge"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["merge"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      merge = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ServiceChanges() = default;
};
class ServiceCommandStep : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> run{};

  ServiceCommandStep() {}

  explicit ServiceCommandStep(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (run) {
      res["run"] = boost::any(*run);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("run") != m.end() && !m["run"].empty()) {
      run = make_shared<string>(boost::any_cast<string>(m["run"]));
    }
  }


  virtual ~ServiceCommandStep() = default;
};
class ServiceComponentStep : public Darabonba::Model {
public:
  shared_ptr<string> component{};

  ServiceComponentStep() {}

  explicit ServiceComponentStep(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (component) {
      res["component"] = boost::any(*component);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("component") != m.end() && !m["component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["component"]));
    }
  }


  virtual ~ServiceComponentStep() = default;
};
class ServiceDeploymentStatus : public Darabonba::Model {
public:
  shared_ptr<string> finishedTime{};
  shared_ptr<string> phase{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskName{};

  ServiceDeploymentStatus() {}

  explicit ServiceDeploymentStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishedTime) {
      res["finishedTime"] = boost::any(*finishedTime);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (taskName) {
      res["taskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishedTime") != m.end() && !m["finishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["finishedTime"]));
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("taskName") != m.end() && !m["taskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["taskName"]));
    }
  }


  virtual ~ServiceDeploymentStatus() = default;
};
class ServiceDeployment : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> environmentDeploymentName{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<ServiceDeploymentStatus> status{};
  shared_ptr<string> uid{};

  ServiceDeployment() {}

  explicit ServiceDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (environmentDeploymentName) {
      res["environmentDeploymentName"] = boost::any(*environmentDeploymentName);
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
    if (m.find("environmentDeploymentName") != m.end() && !m["environmentDeploymentName"].empty()) {
      environmentDeploymentName = make_shared<string>(boost::any_cast<string>(m["environmentDeploymentName"]));
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        ServiceDeploymentStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<ServiceDeploymentStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ServiceDeployment() = default;
};
class ServiceDeploymentSpec : public Darabonba::Model {
public:
  shared_ptr<ServiceBaseline> baseline{};
  shared_ptr<ServiceChanges> changes{};
  shared_ptr<bool> skipRemoveResources{};
  shared_ptr<ServiceBaseline> target{};

  ServiceDeploymentSpec() {}

  explicit ServiceDeploymentSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseline) {
      res["baseline"] = baseline ? boost::any(baseline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (changes) {
      res["changes"] = changes ? boost::any(changes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (skipRemoveResources) {
      res["skipRemoveResources"] = boost::any(*skipRemoveResources);
    }
    if (target) {
      res["target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baseline") != m.end() && !m["baseline"].empty()) {
      if (typeid(map<string, boost::any>) == m["baseline"].type()) {
        ServiceBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["baseline"]));
        baseline = make_shared<ServiceBaseline>(model1);
      }
    }
    if (m.find("changes") != m.end() && !m["changes"].empty()) {
      if (typeid(map<string, boost::any>) == m["changes"].type()) {
        ServiceChanges model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["changes"]));
        changes = make_shared<ServiceChanges>(model1);
      }
    }
    if (m.find("skipRemoveResources") != m.end() && !m["skipRemoveResources"].empty()) {
      skipRemoveResources = make_shared<bool>(boost::any_cast<bool>(m["skipRemoveResources"]));
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      if (typeid(map<string, boost::any>) == m["target"].type()) {
        ServiceBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["target"]));
        target = make_shared<ServiceBaseline>(model1);
      }
    }
  }


  virtual ~ServiceDeploymentSpec() = default;
};
class ServicePluginStep : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> args{};
  shared_ptr<string> plugin{};

  ServicePluginStep() {}

  explicit ServicePluginStep(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["args"] = boost::any(*args);
    }
    if (plugin) {
      res["plugin"] = boost::any(*plugin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("args") != m.end() && !m["args"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["args"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      args = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("plugin") != m.end() && !m["plugin"].empty()) {
      plugin = make_shared<string>(boost::any_cast<string>(m["plugin"]));
    }
  }


  virtual ~ServicePluginStep() = default;
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
class TemplateParameterSchemaRoleExtension : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorities{};
  shared_ptr<string> name{};
  shared_ptr<string> service{};

  TemplateParameterSchemaRoleExtension() {}

  explicit TemplateParameterSchemaRoleExtension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorities) {
      res["authorities"] = boost::any(*authorities);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorities") != m.end() && !m["authorities"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["authorities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["authorities"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorities = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
  }


  virtual ~TemplateParameterSchemaRoleExtension() = default;
};
class TemplateParameterSchema : public Darabonba::Model {
public:
  shared_ptr<boost::any> default_{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> enum_{};
  shared_ptr<string> pattern{};
  shared_ptr<bool> required{};
  shared_ptr<TemplateParameterSchemaRoleExtension> roleExtension{};
  shared_ptr<bool> sensitive{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  TemplateParameterSchema() {}

  explicit TemplateParameterSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enum_) {
      res["enum"] = boost::any(*enum_);
    }
    if (pattern) {
      res["pattern"] = boost::any(*pattern);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (roleExtension) {
      res["roleExtension"] = roleExtension ? boost::any(roleExtension->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sensitive) {
      res["sensitive"] = boost::any(*sensitive);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<boost::any>(boost::any_cast<boost::any>(m["default"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enum") != m.end() && !m["enum"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["enum"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["enum"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      enum_ = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pattern") != m.end() && !m["pattern"].empty()) {
      pattern = make_shared<string>(boost::any_cast<string>(m["pattern"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("roleExtension") != m.end() && !m["roleExtension"].empty()) {
      if (typeid(map<string, boost::any>) == m["roleExtension"].type()) {
        TemplateParameterSchemaRoleExtension model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["roleExtension"]));
        roleExtension = make_shared<TemplateParameterSchemaRoleExtension>(model1);
      }
    }
    if (m.find("sensitive") != m.end() && !m["sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["sensitive"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~TemplateParameterSchema() = default;
};
class TemplateServiceConfig : public Darabonba::Model {
public:
  shared_ptr<ArtifactMeta> artifact{};
  shared_ptr<BuildConfig> build{};
  shared_ptr<string> component{};
  shared_ptr<map<string, boost::any>> props{};
  shared_ptr<SourceConfig> source{};
  shared_ptr<string> type{};
  shared_ptr<map<string, TemplateParameterSchema>> variables{};

  TemplateServiceConfig() {}

  explicit TemplateServiceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifact) {
      res["artifact"] = artifact ? boost::any(artifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (build) {
      res["build"] = build ? boost::any(build->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (component) {
      res["component"] = boost::any(*component);
    }
    if (props) {
      res["props"] = boost::any(*props);
    }
    if (source) {
      res["source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("artifact") != m.end() && !m["artifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["artifact"].type()) {
        ArtifactMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["artifact"]));
        artifact = make_shared<ArtifactMeta>(model1);
      }
    }
    if (m.find("build") != m.end() && !m["build"].empty()) {
      if (typeid(map<string, boost::any>) == m["build"].type()) {
        BuildConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["build"]));
        build = make_shared<BuildConfig>(model1);
      }
    }
    if (m.find("component") != m.end() && !m["component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["component"]));
    }
    if (m.find("props") != m.end() && !m["props"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["props"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      if (typeid(map<string, boost::any>) == m["source"].type()) {
        SourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["source"]));
        source = make_shared<SourceConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, TemplateParameterSchema> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            TemplateParameterSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, TemplateParameterSchema>>(expect1);
      }
    }
  }


  virtual ~TemplateServiceConfig() = default;
};
class TemplateSpecSource : public Darabonba::Model {
public:
  shared_ptr<RepositorySourceConfig> repository{};

  TemplateSpecSource() {}

  explicit TemplateSpecSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (repository) {
      res["repository"] = repository ? boost::any(repository->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("repository") != m.end() && !m["repository"].empty()) {
      if (typeid(map<string, boost::any>) == m["repository"].type()) {
        RepositorySourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["repository"]));
        repository = make_shared<RepositorySourceConfig>(model1);
      }
    }
  }


  virtual ~TemplateSpecSource() = default;
};
class TemplateSpec : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> category{};
  shared_ptr<string> license{};
  shared_ptr<string> packageName{};
  shared_ptr<string> readme{};
  shared_ptr<string> registryToken{};
  shared_ptr<map<string, TemplateServiceConfig>> services{};
  shared_ptr<TemplateSpecSource> source{};
  shared_ptr<map<string, TemplateParameterSchema>> variables{};
  shared_ptr<string> version{};

  TemplateSpec() {}

  explicit TemplateSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["author"] = boost::any(*author);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (license) {
      res["license"] = boost::any(*license);
    }
    if (packageName) {
      res["packageName"] = boost::any(*packageName);
    }
    if (readme) {
      res["readme"] = boost::any(*readme);
    }
    if (registryToken) {
      res["registryToken"] = boost::any(*registryToken);
    }
    if (services) {
      map<string, boost::any> temp1;
      for(auto item1:*services){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["services"] = boost::any(temp1);
    }
    if (source) {
      res["source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("author") != m.end() && !m["author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["author"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("license") != m.end() && !m["license"].empty()) {
      license = make_shared<string>(boost::any_cast<string>(m["license"]));
    }
    if (m.find("packageName") != m.end() && !m["packageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["packageName"]));
    }
    if (m.find("readme") != m.end() && !m["readme"].empty()) {
      readme = make_shared<string>(boost::any_cast<string>(m["readme"]));
    }
    if (m.find("registryToken") != m.end() && !m["registryToken"].empty()) {
      registryToken = make_shared<string>(boost::any_cast<string>(m["registryToken"]));
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(map<string, boost::any>) == m["services"].type()) {
        map<string, TemplateServiceConfig> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            TemplateServiceConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        services = make_shared<map<string, TemplateServiceConfig>>(expect1);
      }
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      if (typeid(map<string, boost::any>) == m["source"].type()) {
        TemplateSpecSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["source"]));
        source = make_shared<TemplateSpecSource>(model1);
      }
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, TemplateParameterSchema> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            TemplateParameterSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, TemplateParameterSchema>>(expect1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~TemplateSpec() = default;
};
class TemplateStatusLatestDeployment : public Darabonba::Model {
public:
  shared_ptr<string> finishedTime{};
  shared_ptr<string> phase{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> startTime{};

  TemplateStatusLatestDeployment() {}

  explicit TemplateStatusLatestDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishedTime) {
      res["finishedTime"] = boost::any(*finishedTime);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishedTime") != m.end() && !m["finishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["finishedTime"]));
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~TemplateStatusLatestDeployment() = default;
};
class TemplateStatus : public Darabonba::Model {
public:
  shared_ptr<TemplateStatusLatestDeployment> latestDeployment{};
  shared_ptr<string> latestVersion{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> phase{};
  shared_ptr<string> templateUrl{};

  TemplateStatus() {}

  explicit TemplateStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latestDeployment) {
      res["latestDeployment"] = latestDeployment ? boost::any(latestDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (latestVersion) {
      res["latestVersion"] = boost::any(*latestVersion);
    }
    if (packageUrl) {
      res["packageUrl"] = boost::any(*packageUrl);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (templateUrl) {
      res["templateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("latestDeployment") != m.end() && !m["latestDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["latestDeployment"].type()) {
        TemplateStatusLatestDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["latestDeployment"]));
        latestDeployment = make_shared<TemplateStatusLatestDeployment>(model1);
      }
    }
    if (m.find("latestVersion") != m.end() && !m["latestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["latestVersion"]));
    }
    if (m.find("packageUrl") != m.end() && !m["packageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["packageUrl"]));
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("templateUrl") != m.end() && !m["templateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["templateUrl"]));
    }
  }


  virtual ~TemplateStatus() = default;
};
class Template : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<TemplateSpec> spec{};
  shared_ptr<TemplateStatus> status{};
  shared_ptr<string> uid{};

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
    if (description) {
      res["description"] = boost::any(*description);
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
  }


  virtual ~Template() = default;
};
class TemplateVariableValueMap : public Darabonba::Model {
public:
  shared_ptr<map<string, map<string, boost::any>>> services{};
  shared_ptr<map<string, boost::any>> shared{};

  TemplateVariableValueMap() {}

  explicit TemplateVariableValueMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      res["services"] = boost::any(*services);
    }
    if (shared) {
      res["shared"] = boost::any(*shared);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("services") != m.end() && !m["services"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["services"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      services = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
    if (m.find("shared") != m.end() && !m["shared"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["shared"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      shared = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~TemplateVariableValueMap() = default;
};
class TemplateConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> parameters{};
  shared_ptr<map<string, string>> serviceNameChanges{};
  shared_ptr<string> templateName{};
  shared_ptr<TemplateVariableValueMap> variableValues{};

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
    if (serviceNameChanges) {
      res["serviceNameChanges"] = boost::any(*serviceNameChanges);
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    if (variableValues) {
      res["variableValues"] = variableValues ? boost::any(variableValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("serviceNameChanges") != m.end() && !m["serviceNameChanges"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["serviceNameChanges"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      serviceNameChanges = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
    if (m.find("variableValues") != m.end() && !m["variableValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["variableValues"].type()) {
        TemplateVariableValueMap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["variableValues"]));
        variableValues = make_shared<TemplateVariableValueMap>(model1);
      }
    }
  }


  virtual ~TemplateConfig() = default;
};
class TemplateRevisionStatus : public Darabonba::Model {
public:
  shared_ptr<string> packageUrl{};
  shared_ptr<string> phase{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> templateUrl{};

  TemplateRevisionStatus() {}

  explicit TemplateRevisionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageUrl) {
      res["packageUrl"] = boost::any(*packageUrl);
    }
    if (phase) {
      res["phase"] = boost::any(*phase);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (templateUrl) {
      res["templateUrl"] = boost::any(*templateUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("packageUrl") != m.end() && !m["packageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["packageUrl"]));
    }
    if (m.find("phase") != m.end() && !m["phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["phase"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("templateUrl") != m.end() && !m["templateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["templateUrl"]));
    }
  }


  virtual ~TemplateRevisionStatus() = default;
};
class TemplateRevision : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<TemplateSpec> spec{};
  shared_ptr<TemplateRevisionStatus> status{};
  shared_ptr<string> templateName{};
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
    if (description) {
      res["description"] = boost::any(*description);
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
    if (spec) {
      res["spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
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
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["spec"].type()) {
        TemplateSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["spec"]));
        spec = make_shared<TemplateSpec>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        TemplateRevisionStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<TemplateRevisionStatus>(model1);
      }
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~TemplateRevision() = default;
};
class Tool : public Darabonba::Model {
public:
  shared_ptr<string> method{};
  shared_ptr<string> path{};
  shared_ptr<string> toolId{};
  shared_ptr<string> toolName{};

  Tool() {}

  explicit Tool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (toolId) {
      res["toolId"] = boost::any(*toolId);
    }
    if (toolName) {
      res["toolName"] = boost::any(*toolName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("toolId") != m.end() && !m["toolId"].empty()) {
      toolId = make_shared<string>(boost::any_cast<string>(m["toolId"]));
    }
    if (m.find("toolName") != m.end() && !m["toolName"].empty()) {
      toolName = make_shared<string>(boost::any_cast<string>(m["toolName"]));
    }
  }


  virtual ~Tool() = default;
};
class ToolsetStatus : public Darabonba::Model {
public:
  shared_ptr<map<string, Tool>> tools{};

  ToolsetStatus() {}

  explicit ToolsetStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tools) {
      map<string, boost::any> temp1;
      for(auto item1:*tools){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["tools"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(map<string, boost::any>) == m["tools"].type()) {
        map<string, Tool> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["tools"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Tool model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        tools = make_shared<map<string, Tool>>(expect1);
      }
    }
  }


  virtual ~ToolsetStatus() = default;
};
class Toolset : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> kind{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> name{};
  shared_ptr<ToolsetStatus> status{};
  shared_ptr<string> uid{};

  Toolset() {}

  explicit Toolset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
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
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        ToolsetStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<ToolsetStatus>(model1);
      }
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~Toolset() = default;
};
class ToolsetAuthorization : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> authConfig{};
  shared_ptr<string> type{};

  ToolsetAuthorization() {}

  explicit ToolsetAuthorization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["authConfig"] = boost::any(*authConfig);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["authConfig"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      authConfig = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ToolsetAuthorization() = default;
};
class ToolsetSchema : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> type{};

  ToolsetSchema() {}

  explicit ToolsetSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["detail"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ToolsetSchema() = default;
};
class ToolsetSpec : public Darabonba::Model {
public:
  shared_ptr<ToolsetAuthorization> authorization{};
  shared_ptr<ToolsetSchema> schema{};

  ToolsetSpec() {}

  explicit ToolsetSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorization) {
      res["authorization"] = authorization ? boost::any(authorization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schema) {
      res["schema"] = schema ? boost::any(schema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorization") != m.end() && !m["authorization"].empty()) {
      if (typeid(map<string, boost::any>) == m["authorization"].type()) {
        ToolsetAuthorization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authorization"]));
        authorization = make_shared<ToolsetAuthorization>(model1);
      }
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      if (typeid(map<string, boost::any>) == m["schema"].type()) {
        ToolsetSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schema"]));
        schema = make_shared<ToolsetSchema>(model1);
      }
    }
  }


  virtual ~ToolsetSpec() = default;
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
class CreateArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<Artifact> body{};

  CreateArtifactRequest() {}

  explicit CreateArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Artifact>(model1);
      }
    }
  }


  virtual ~CreateArtifactRequest() = default;
};
class CreateArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Artifact> body{};

  CreateArtifactResponse() {}

  explicit CreateArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Artifact>(model1);
      }
    }
  }


  virtual ~CreateArtifactResponse() = default;
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
class DeleteArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteArtifactResponse() {}

  explicit DeleteArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteArtifactResponse() = default;
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
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
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


  virtual ~DeleteProjectResponse() = default;
};
class DeployEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<DeployEnvironmentOptions> body{};

  DeployEnvironmentRequest() {}

  explicit DeployEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployEnvironmentOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployEnvironmentOptions>(model1);
      }
    }
  }


  virtual ~DeployEnvironmentRequest() = default;
};
class DeployEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnvironmentDeployment> body{};

  DeployEnvironmentResponse() {}

  explicit DeployEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnvironmentDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnvironmentDeployment>(model1);
      }
    }
  }


  virtual ~DeployEnvironmentResponse() = default;
};
class FetchArtifactDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ArtifactCode> body{};

  FetchArtifactDownloadUrlResponse() {}

  explicit FetchArtifactDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ArtifactCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ArtifactCode>(model1);
      }
    }
  }


  virtual ~FetchArtifactDownloadUrlResponse() = default;
};
class FetchArtifactTempBucketTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ArtifactTempBucketToken> body{};

  FetchArtifactTempBucketTokenResponse() {}

  explicit FetchArtifactTempBucketTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ArtifactTempBucketToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ArtifactTempBucketToken>(model1);
      }
    }
  }


  virtual ~FetchArtifactTempBucketTokenResponse() = default;
};
class GetArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Artifact> body{};

  GetArtifactResponse() {}

  explicit GetArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Artifact>(model1);
      }
    }
  }


  virtual ~GetArtifactResponse() = default;
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
class GetEnvironmentDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnvironmentDeployment> body{};

  GetEnvironmentDeploymentResponse() {}

  explicit GetEnvironmentDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnvironmentDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnvironmentDeployment>(model1);
      }
    }
  }


  virtual ~GetEnvironmentDeploymentResponse() = default;
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
class GetServiceDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ServiceDeployment> body{};

  GetServiceDeploymentResponse() {}

  explicit GetServiceDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ServiceDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ServiceDeployment>(model1);
      }
    }
  }


  virtual ~GetServiceDeploymentResponse() = default;
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
class ListServiceDeploymentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<vector<string>> labelSelector{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListServiceDeploymentsRequest() {}

  explicit ListServiceDeploymentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceDeploymentsRequest() = default;
};
class ListServiceDeploymentsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> labelSelectorShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListServiceDeploymentsShrinkRequest() {}

  explicit ListServiceDeploymentsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceDeploymentsShrinkRequest() = default;
};
class ListServiceDeploymentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ServiceDeployment>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListServiceDeploymentsResponseBody() {}

  explicit ListServiceDeploymentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ServiceDeployment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ServiceDeployment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ServiceDeployment>>(expect1);
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


  virtual ~ListServiceDeploymentsResponseBody() = default;
};
class ListServiceDeploymentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceDeploymentsResponseBody> body{};

  ListServiceDeploymentsResponse() {}

  explicit ListServiceDeploymentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceDeploymentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceDeploymentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceDeploymentsResponse() = default;
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
class PreviewEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnvironmentDeploymentSpec> body{};

  PreviewEnvironmentResponse() {}

  explicit PreviewEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnvironmentDeploymentSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnvironmentDeploymentSpec>(model1);
      }
    }
  }


  virtual ~PreviewEnvironmentResponse() = default;
};
class PutArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<Artifact> body{};
  shared_ptr<bool> force{};

  PutArtifactRequest() {}

  explicit PutArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Artifact>(model1);
      }
    }
    if (m.find("force") != m.end() && !m["force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["force"]));
    }
  }


  virtual ~PutArtifactRequest() = default;
};
class PutArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Artifact> body{};

  PutArtifactResponse() {}

  explicit PutArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Artifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Artifact>(model1);
      }
    }
  }


  virtual ~PutArtifactResponse() = default;
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
class RenderServicesByTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> projectName{};
  shared_ptr<map<string, string>> serviceNameChanges{};
  shared_ptr<string> templateName{};
  shared_ptr<TemplateVariableValueMap> variableValues{};

  RenderServicesByTemplateRequest() {}

  explicit RenderServicesByTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (serviceNameChanges) {
      res["serviceNameChanges"] = boost::any(*serviceNameChanges);
    }
    if (templateName) {
      res["templateName"] = boost::any(*templateName);
    }
    if (variableValues) {
      res["variableValues"] = variableValues ? boost::any(variableValues->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("serviceNameChanges") != m.end() && !m["serviceNameChanges"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["serviceNameChanges"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      serviceNameChanges = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("templateName") != m.end() && !m["templateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["templateName"]));
    }
    if (m.find("variableValues") != m.end() && !m["variableValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["variableValues"].type()) {
        TemplateVariableValueMap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["variableValues"]));
        variableValues = make_shared<TemplateVariableValueMap>(model1);
      }
    }
  }


  virtual ~RenderServicesByTemplateRequest() = default;
};
class RenderServicesByTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> changedServiceNames{};
  shared_ptr<map<string, ServiceConfig>> services{};
  shared_ptr<map<string, Variable>> variables{};

  RenderServicesByTemplateResponseBody() {}

  explicit RenderServicesByTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changedServiceNames) {
      res["changedServiceNames"] = boost::any(*changedServiceNames);
    }
    if (services) {
      map<string, boost::any> temp1;
      for(auto item1:*services){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["services"] = boost::any(temp1);
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("changedServiceNames") != m.end() && !m["changedServiceNames"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["changedServiceNames"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      changedServiceNames = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(map<string, boost::any>) == m["services"].type()) {
        map<string, ServiceConfig> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ServiceConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        services = make_shared<map<string, ServiceConfig>>(expect1);
      }
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, Variable> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Variable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, Variable>>(expect1);
      }
    }
  }


  virtual ~RenderServicesByTemplateResponseBody() = default;
};
class RenderServicesByTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenderServicesByTemplateResponseBody> body{};

  RenderServicesByTemplateResponse() {}

  explicit RenderServicesByTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenderServicesByTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenderServicesByTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~RenderServicesByTemplateResponse() = default;
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
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<Project> body{};

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
  CancelPipelineResponse cancelPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPipelineResponse cancelPipeline(shared_ptr<string> name);
  CancelTaskResponse cancelTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelTaskResponse cancelTask(shared_ptr<string> name);
  CreateArtifactResponse createArtifactWithOptions(shared_ptr<CreateArtifactRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateArtifactResponse createArtifact(shared_ptr<CreateArtifactRequest> request);
  CreateEnvironmentResponse createEnvironmentWithOptions(shared_ptr<string> projectName,
                                                         shared_ptr<CreateEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEnvironmentResponse createEnvironment(shared_ptr<string> projectName, shared_ptr<CreateEnvironmentRequest> request);
  CreatePipelineResponse createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePipelineResponse createPipeline(shared_ptr<CreatePipelineRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateTaskResponse createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<CreateTaskRequest> request);
  DeleteArtifactResponse deleteArtifactWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteArtifactResponse deleteArtifact(shared_ptr<string> name);
  DeleteEnvironmentResponse deleteEnvironmentWithOptions(shared_ptr<string> projectName,
                                                         shared_ptr<string> name,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentResponse deleteEnvironment(shared_ptr<string> projectName, shared_ptr<string> name);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> name,
                                                 shared_ptr<DeleteProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> name, shared_ptr<DeleteProjectRequest> request);
  DeployEnvironmentResponse deployEnvironmentWithOptions(shared_ptr<string> projectName,
                                                         shared_ptr<string> name,
                                                         shared_ptr<DeployEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployEnvironmentResponse deployEnvironment(shared_ptr<string> projectName, shared_ptr<string> name, shared_ptr<DeployEnvironmentRequest> request);
  FetchArtifactDownloadUrlResponse fetchArtifactDownloadUrlWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchArtifactDownloadUrlResponse fetchArtifactDownloadUrl(shared_ptr<string> name);
  FetchArtifactTempBucketTokenResponse fetchArtifactTempBucketTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchArtifactTempBucketTokenResponse fetchArtifactTempBucketToken();
  GetArtifactResponse getArtifactWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactResponse getArtifact(shared_ptr<string> name);
  GetEnvironmentResponse getEnvironmentWithOptions(shared_ptr<string> projectName,
                                                   shared_ptr<string> name,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentResponse getEnvironment(shared_ptr<string> projectName, shared_ptr<string> name);
  GetEnvironmentDeploymentResponse getEnvironmentDeploymentWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentDeploymentResponse getEnvironmentDeployment(shared_ptr<string> name);
  GetPipelineResponse getPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineResponse getPipeline(shared_ptr<string> name);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> name);
  GetRepositoryResponse getRepositoryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryResponse getRepository(shared_ptr<string> name);
  GetServiceDeploymentResponse getServiceDeploymentWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceDeploymentResponse getServiceDeployment(shared_ptr<string> name);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> name);
  ListEnvironmentsResponse listEnvironmentsWithOptions(shared_ptr<string> projectName,
                                                       shared_ptr<ListEnvironmentsRequest> tmpReq,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentsResponse listEnvironments(shared_ptr<string> projectName, shared_ptr<ListEnvironmentsRequest> request);
  ListPipelinesResponse listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelinesResponse listPipelines(shared_ptr<ListPipelinesRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListServiceDeploymentsResponse listServiceDeploymentsWithOptions(shared_ptr<ListServiceDeploymentsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceDeploymentsResponse listServiceDeployments(shared_ptr<ListServiceDeploymentsRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  PreviewEnvironmentResponse previewEnvironmentWithOptions(shared_ptr<string> projectName,
                                                           shared_ptr<string> name,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreviewEnvironmentResponse previewEnvironment(shared_ptr<string> projectName, shared_ptr<string> name);
  PutArtifactResponse putArtifactWithOptions(shared_ptr<string> name,
                                             shared_ptr<PutArtifactRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutArtifactResponse putArtifact(shared_ptr<string> name, shared_ptr<PutArtifactRequest> request);
  PutPipelineStatusResponse putPipelineStatusWithOptions(shared_ptr<string> name,
                                                         shared_ptr<PutPipelineStatusRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutPipelineStatusResponse putPipelineStatus(shared_ptr<string> name, shared_ptr<PutPipelineStatusRequest> request);
  PutTaskStatusResponse putTaskStatusWithOptions(shared_ptr<string> name,
                                                 shared_ptr<PutTaskStatusRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutTaskStatusResponse putTaskStatus(shared_ptr<string> name, shared_ptr<PutTaskStatusRequest> request);
  RenderServicesByTemplateResponse renderServicesByTemplateWithOptions(shared_ptr<RenderServicesByTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenderServicesByTemplateResponse renderServicesByTemplate(shared_ptr<RenderServicesByTemplateRequest> request);
  ResumeTaskResponse resumeTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeTaskResponse resumeTask(shared_ptr<string> name);
  RetryTaskResponse retryTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryTaskResponse retryTask(shared_ptr<string> name);
  StartPipelineResponse startPipelineWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartPipelineResponse startPipeline(shared_ptr<string> name);
  StartTaskResponse startTaskWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTaskResponse startTask(shared_ptr<string> name);
  UpdateEnvironmentResponse updateEnvironmentWithOptions(shared_ptr<string> projectName,
                                                         shared_ptr<string> name,
                                                         shared_ptr<UpdateEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnvironmentResponse updateEnvironment(shared_ptr<string> projectName, shared_ptr<string> name, shared_ptr<UpdateEnvironmentRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> name,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> name, shared_ptr<UpdateProjectRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Devs20230714

#endif
